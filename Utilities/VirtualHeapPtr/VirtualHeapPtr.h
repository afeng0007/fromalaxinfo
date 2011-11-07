////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2011
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#pragma once

////////////////////////////////////////////////////////////
// CGlobalVirtualAllocator

class CGlobalVirtualAllocator
{
private:
	SIZE_T m_nPageSize;

public:
// CGlobalVirtualAllocator
	CGlobalVirtualAllocator() throw() :
		m_nPageSize(4 << 10) // 4L
	{
		SYSTEM_INFO Information;
		GetSystemInfo(&Information);
		m_nPageSize = Information.dwPageSize;
		ATLASSERT(m_nPageSize);
		ATLASSERT(!(m_nPageSize & (m_nPageSize - 1)));
	}
	SIZE_T GetPageSize() const throw()
	{
		return m_nPageSize;
	}
	SIZE_T Align(SIZE_T nDataSize) throw()
	{
		const SIZE_T nPageSize = GetPageSize();
		ATLASSERT(nPageSize);
		ATLASSERT(!(nPageSize & (nPageSize - 1)));
		return (nDataSize + nPageSize - 1) & ~(nPageSize - 1);
	}
	static SIZE_T StaticAlign(SIZE_T nDataSize) throw();
};

__declspec(selectany) CGlobalVirtualAllocator g_GlobalVirtualAllocator;

inline SIZE_T CGlobalVirtualAllocator::StaticAlign(SIZE_T nDataSize) throw()
{
	return g_GlobalVirtualAllocator.Align(nDataSize);
}

////////////////////////////////////////////////////////////
// CVirtualAllocator

class CVirtualAllocator
{
public:
// CVirtualAllocator
	static VOID* Allocate(_In_ SIZE_T nDataSize)
	{
		if(!nDataSize)
			return NULL;
		VOID* pvData = VirtualAlloc(NULL, CGlobalVirtualAllocator::StaticAlign(nDataSize), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		ATLENSURE_THROW(pvData, AtlHresultFromLastError());
		return pvData;
	}
	static VOID* Reallocate(_In_opt_ VOID* pvData, _In_ SIZE_T nDataSize)
	{
		MEMORY_BASIC_INFORMATION DataInformation;
		if(pvData)
		{
			ATLVERIFY(VirtualQuery(pvData, &DataInformation, sizeof DataInformation));
			if(nDataSize <= DataInformation.RegionSize)
				return pvData;
		}
		VOID* pvNewData = NULL;
		if(nDataSize)
		{
			pvNewData = VirtualAlloc(NULL, CGlobalVirtualAllocator::StaticAlign(nDataSize), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
			ATLENSURE_THROW(pvNewData, AtlHresultFromLastError());
			_ATLTRY
			{
				if(pvNewData && pvData)
				{
					ATLASSERT(DataInformation.AllocationProtect == PAGE_READWRITE);
					SIZE_T nCopyDataSize = nDataSize;
					if(nCopyDataSize > DataInformation.RegionSize)
						nCopyDataSize = DataInformation.RegionSize;
					Checked::memcpy_s(pvNewData, nDataSize, pvData, nCopyDataSize);
				}
			}
			_ATLCATCHALL()
			{
				Free(pvData);
				_ATLRETHROW;
			}
		}
		if(pvData)
			Free(pvData);
		return pvNewData;
	}
	static VOID Free(_In_opt_ VOID* pvData) throw()
	{
		if(!pvData)
			return;
		ATLVERIFY(VirtualFree(pvData, 0, MEM_RELEASE));
	}
};

////////////////////////////////////////////////////////////
// CVirtualHeapPtr

template <typename T>
class CVirtualHeapPtr :
	public CHeapPtr<T, CVirtualAllocator>
{
public:
// CVirtualHeapPtr
	CVirtualHeapPtr() throw()
	{
	}
	explicit CVirtualHeapPtr(_In_ T* pData) throw() :
		CHeapPtr<T, CVirtualAllocator>(pData)
	{
	}
	VOID SetProtection(DWORD nProtection)
	{
		if(!m_pData)
			return;
		MEMORY_BASIC_INFORMATION DataInformation;
		ATLENSURE_THROW(VirtualQuery(m_pData, &DataInformation, sizeof DataInformation), AtlHresultFromLastError());
		DWORD nCurrentProtection;
		ATLENSURE_THROW(VirtualProtect(m_pData, DataInformation.RegionSize, nProtection, &nCurrentProtection), AtlHresultFromLastError());
	}
};

////////////////////////////////////////////////////////////
// CDebugAllocatorTraits

class CDebugAllocatorTraits
{
public:
// CDebugAllocatorTraits
	static SIZE_T GetHeadSanityPageCount() throw()
	{
		return 1;
	}
	static SIZE_T GetTailSanityPageCount() throw()
	{
		return 1;
	}
	static BOOL IsHeadPadding() throw()
	{
		return TRUE;
	}
};

////////////////////////////////////////////////////////////
// CDebugAllocatorT, CDebugAllocator

template <typename _Traits = CDebugAllocatorTraits>
class CDebugAllocatorT
{
public:
	typedef _Traits CTraits;

	////////////////////////////////////////////////////////
	// CDescriptor

	class CDescriptor
	{
	public:
		SIZE_T m_nAllocationSize;
		VOID* m_pvData;
		SIZE_T m_nDataSize;
		VOID* m_pvPaddingData;
		SIZE_T m_nPaddingDataSize;

	public:
	// CDescriptor
		static CDescriptor* Allocate(SIZE_T nDataSize)
		{
			ATLASSERT(nDataSize > 0);
			const SIZE_T nPageSize = g_GlobalVirtualAllocator.GetPageSize();
			const SIZE_T nAlignedDataSize = g_GlobalVirtualAllocator.Align(nDataSize);
			const SIZE_T nAllocationSize = 
				g_GlobalVirtualAllocator.Align(sizeof (CDescriptor)) +
				CTraits::GetHeadSanityPageCount() * nPageSize +
				nAlignedDataSize +
				CTraits::GetTailSanityPageCount() * nPageSize +
				0;
			VOID* pvData = VirtualAlloc(NULL, nAllocationSize, MEM_COMMIT | MEM_RESERVE, PAGE_NOACCESS);
			ATLENSURE_THROW(pvData, AtlHresultFromLastError());
			CDescriptor* pDescriptor = (CDescriptor*) pvData;
			DWORD nCurrentProtection;
			ATLVERIFY(VirtualProtect(pDescriptor, sizeof *pDescriptor, PAGE_READWRITE, &nCurrentProtection));
			pDescriptor->m_nAllocationSize = nAllocationSize;
			pDescriptor->m_pvData = (BYTE*) pDescriptor + g_GlobalVirtualAllocator.Align(sizeof *pDescriptor) + CTraits::GetHeadSanityPageCount() * nPageSize;
			pDescriptor->m_nDataSize = nDataSize;
			const SIZE_T nPaddingDataSize = nAlignedDataSize - nDataSize;
			if(CTraits::IsHeadPadding() && nPaddingDataSize)
			{
				pDescriptor->m_pvPaddingData = pDescriptor->m_pvData;
				reinterpret_cast<BYTE*&>(pDescriptor->m_pvData) += nPaddingDataSize;
			} else
				pDescriptor->m_pvPaddingData = (BYTE*) pDescriptor->m_pvData + nAlignedDataSize - nPaddingDataSize;
			pDescriptor->m_nPaddingDataSize = nPaddingDataSize;
			ATLVERIFY(VirtualProtect(pDescriptor->m_pvData, pDescriptor->m_nDataSize, PAGE_READWRITE, &nCurrentProtection));
			memset(pDescriptor->m_pvPaddingData, 0x77, pDescriptor->m_nPaddingDataSize);
			ATLVERIFY(VirtualProtect(pDescriptor, sizeof *pDescriptor, PAGE_READONLY, &nCurrentProtection));
			return pDescriptor;
		}
		static CDescriptor* FromData(VOID* pvData)
		{
			ATLASSERT(pvData);
			ATLASSERT(!(g_GlobalVirtualAllocator.GetPageSize() & (g_GlobalVirtualAllocator.GetPageSize() - 1)));
			BYTE* pnData = (BYTE*) ((UINT_PTR) pvData & ~(g_GlobalVirtualAllocator.GetPageSize() - 1));
			CDescriptor* pDescriptor = (CDescriptor*) (pnData - CTraits::GetHeadSanityPageCount() * g_GlobalVirtualAllocator.GetPageSize() - g_GlobalVirtualAllocator.Align(sizeof (CDescriptor)));
			return pDescriptor;
		}
		//VOID Initialize()
		VOID Terminate()
		{
			_ATLTRY
			{
				ATLENSURE_THROW(IsPaddingValid(), HRESULT_FROM_WIN32(ERROR_INVALID_DATA));
			}
			_ATLCATCHALL()
			{
			}
			ATLVERIFY(VirtualFree(this, 0, MEM_RELEASE));
		}
		VOID* GetData() const throw()
		{
			return m_pvData;
		}
		SIZE_T GetDataSize() const throw()
		{
			return m_nDataSize;
		}
		BOOL IsPaddingValid() const throw()
		{
			BYTE* pnPaddingData = (BYTE*) m_pvPaddingData;
			for(SIZE_T nIndex = m_nPaddingDataSize; nIndex > 0; nIndex--, pnPaddingData++)
				if(*pnPaddingData != 0x77)
					return FALSE;
			return TRUE;
		}
	};

public:
// CDebugAllocator
	static VOID* Allocate(_In_ SIZE_T nDataSize)
	{
		if(!nDataSize)
			return NULL;
		CDescriptor* pDescriptor = CDescriptor::Allocate(nDataSize);
		ATLASSERT(pDescriptor);
		return pDescriptor->GetData();
	}
	static VOID* Reallocate(_In_opt_ VOID* pvData, _In_ SIZE_T nDataSize)
	{
		CDescriptor* pDescriptor;
		if(pvData)
		{
			pDescriptor = CDescriptor::FromData(pvData);
			if(nDataSize == pDescriptor->GetDataSize())
				return pvData;
		} else
			pDescriptor = NULL;
		VOID* pvNewData = NULL;
		if(nDataSize)
		{
			CDescriptor* pNewDescriptor = CDescriptor::Allocate(nDataSize);
			ATLASSERT(pNewDescriptor);
			_ATLTRY
			{
				if(pNewDescriptor && pDescriptor)
				{
					SIZE_T nCopyDataSize = nDataSize;
					if(nCopyDataSize > pDescriptor->GetDataSize())
						nCopyDataSize = pDescriptor->GetDataSize();
					Checked::memcpy_s(pNewDescriptor->GetData(), pNewDescriptor->GetDataSize(), pDescriptor->GetData(), nCopyDataSize);
				}
			}
			_ATLCATCHALL()
			{
				pNewDescriptor->Terminate();
				_ATLRETHROW;
			}
			pvNewData = pNewDescriptor->GetData();
		}
		if(pvData)
			Free(pvData);
		return pvNewData;
	}
	static VOID Free(_In_opt_ VOID* pvData) throw()
	{
		if(!pvData)
			return;
		CDescriptor* pDescriptor = CDescriptor::FromData(pvData);
		ATLASSERT(pDescriptor);
		pDescriptor->Terminate();
	}
};

typedef CDebugAllocatorT<> CDebugAllocator;

////////////////////////////////////////////////////////////
// CVirtualHeapPtr

template <typename T>
class CDebugHeapPtr :
	public CHeapPtr<T, CDebugAllocator>
{
public:
// CDebugHeapPtr
	CDebugHeapPtr() throw()
	{
	}
	explicit CDebugHeapPtr(_In_ T* pData) throw() :
		CHeapPtr<T, CDebugAllocator>(pData)
	{
	}
	VOID SetProtection(DWORD nProtection)
	{
		if(!m_pData)
			return;
		CDebugAllocator::CDescriptor* pDescriptor = CDebugAllocator::CDescriptor::FromData(m_pData);
		ATLASSERT(pDescriptor);
		DWORD nCurrentProtection;
		ATLENSURE_THROW(VirtualProtect(pDescriptor->GetData(), pDescriptor->GetDataSize(), nProtection, &nCurrentProtection), AtlHresultFromLastError());
	}
};

