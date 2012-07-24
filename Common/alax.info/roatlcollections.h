////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2006-2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$
//
// A permission to use the source code is granted as long as reference to 
// source website http://alax.info is retained.

#pragma once

#include <atlcoll.h>

////////////////////////////////////////////////////////////
// CRoIterativeArrayTraitsT

template <typename _Array>
class CRoIterativeArrayTraitsT
{
protected:
	typedef SIZE_T KEY;

public:

	////////////////////////////////////////////////////////
	// CIterator

	class CIterator
	{
	public:
		const _Array* m_pArray;
		KEY m_nIndex;

	public:
	// CIterator
		CIterator(const _Array* pArray) throw() :
			m_pArray(pArray),
			m_nIndex(0)
		{
			_A(pArray);
		}
		BOOL IsValid() const throw()
		{
			return m_nIndex < m_pArray->GetCount();
		}
		VOID Next() throw()
		{
			m_nIndex++;
		}
		operator KEY () const throw()
		{
			return m_nIndex;
		}
	};

	////////////////////////////////////////////////////////
	// CReverseIterator

	class CReverseIterator
	{
	public:
		const _Array* m_pArray;
		KEY m_nIndex;

	public:
	// CReverseIterator
		CReverseIterator(const _Array* pArray) throw() :
			m_pArray(pArray),
			m_nIndex(pArray->GetCount() - 1)
		{
			_A(pArray);
		}
		BOOL IsValid() const throw()
		{
			return (SSIZE_T) m_nIndex >= 0;
		}
		VOID Next() throw()
		{
			m_nIndex--;
		}
		operator KEY () const throw()
		{
			return m_nIndex;
		}
	};

public:
// CRoIterativeArrayTraitsT
};

////////////////////////////////////////////////////////////
// CRoIterativeListTraitsT

template <typename _List>
class CRoIterativeListTraitsT
{
protected:
	typedef POSITION KEY;

public:

	////////////////////////////////////////////////////////
	// CIterator

	class CIterator
	{
	public:
		const _List* m_pList;
		KEY m_Position;

	public:
	// CIterator
		CIterator(const _List* pList) throw() :
			m_pList(pList),
			m_Position(pList->GetHeadPosition())
		{
		}
		BOOL IsValid() const throw()
		{
			return m_Position != NULL;
		}
		VOID Next() throw()
		{
			m_pList->GetNext(m_Position);
		}
		operator KEY () const throw()
		{
			return m_Position;
		}
	};

	////////////////////////////////////////////////////////
	// CReverseIterator

	class CReverseIterator
	{
	public:
		const _List* m_pList;
		KEY m_Position;

	public:
	// CReverseIterator
		CReverseIterator(const _List* pList) throw() :
			m_pList(pList),
			m_Position(pList->GetTailPosition())
		{
		}
		BOOL IsValid() const throw()
		{
			return m_Position != NULL;
		}
		VOID Next() throw()
		{
			m_pList->GetPrev(m_Position);
		}
		operator KEY () const throw()
		{
			return m_Position;
		}
	};
};

////////////////////////////////////////////////////////////
// CRoIterativeCollectionT

template <typename T, template <typename _Collection> class _IterativeTraitsT, typename _Element, typename _ElementTraits = CElementTraits<_Element> >
class CRoIterativeCollectionT :
	protected _IterativeTraitsT<T>
{
protected:
	typedef typename _IterativeTraitsT<T>::KEY KEY;

public:
// CRoIterativeCollectionT
	template <typename _Iterator, typename _Parameter>
	SIZE_T GetCountThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter) const throw()
	{
		_A(pCompareElement);
		const T* pT = static_cast<const T*>(this);
		SIZE_T nCount = 0;
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if((*pCompareElement)(pT->GetAt(Iterator), Parameter))
				nCount++;
		return nCount;
	}
	template <typename _Parameter>
	SIZE_T GetCountThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter) const throw()
	{
		return GetCountThatT<CIterator, _Parameter>(pCompareElement, Parameter);
	}
	template <typename _Iterator>
	SIZE_T GetCountThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element)) const throw()
	{
		_A(pCompareElement);
		const T* pT = static_cast<const T*>(this);
		SIZE_T nCount = 0;
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if((*pCompareElement)(pT->GetAt(Iterator)))
				nCount++;
		return nCount;
	}
	SIZE_T GetCountThat(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element)) const throw()
	{
		return GetCountThatT<CIterator>(pCompareElement);
	}
	//__if_exists(T::Add)
	//{
		template <typename _Iterator, typename _Parameter>
		SIZE_T GetThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter, T& Collection) const throw()
		{
			_A(pCompareElement);
			_A(Collection.IsEmpty());
			const T* pT = static_cast<const T*>(this);
			Collection.SetCount(0, (INT) pT->GetCount());
			SIZE_T nCount = 0;
			for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			{
				const _Element& Element = pT->GetAt(Iterator);
				if((*pCompareElement)(Element, Parameter))
					_W(Collection.Add(Element) >= 0);
			}
			return Collection.GetCount();
		}
		template <typename _Parameter>
		SIZE_T GetThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter, T& Collection) const throw()
		{
			return GetThatT<CIterator, _Parameter>(pCompareElement, Parameter, Collection);
		}
		template <typename _Iterator>
		SIZE_T GetThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element), T& Collection) const
		{
			_A(pCompareElement);
			_A(Collection.IsEmpty());
			const T* pT = static_cast<const T*>(this);
			Collection.SetCount(0, (INT) pT->GetCount());
			for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			{
				const _Element& Element = pT->GetAt(Iterator);
				if((*pCompareElement)(Element))
					_W(Collection.Add(Element) >= 0);
			}
			return Collection.GetCount();
		}
		SIZE_T GetThat(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element), T& Collection) const
		{
			return GetThatT<CIterator>(pCompareElement, Collection);
		}
	//}
	//__if_exists(T::RemoveAt)
	//{
		template <typename _Iterator, typename _Parameter>
		SIZE_T RemoveThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter) throw()
		{
			_A(pCompareElement);
			T* pT = static_cast<T*>(this);
			SIZE_T nCount = 0;
			for(_Iterator Iterator(pT); Iterator.IsValid(); )
			{
				const KEY CurrentKey = Iterator;
				Iterator.Next();
				if(!(*pCompareElement)(pT->GetAt(CurrentKey), Parameter))
					continue;
				// ASSU: Removed item does not invalidate further items on the loop
				pT->RemoveAt(CurrentKey);
				nCount++;
			}
			return nCount;
		}
		template <typename _Parameter>
		SIZE_T RemoveThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, typename CElementTraits<_Parameter>::INARGTYPE Parameter), typename CElementTraits<_Parameter>::INARGTYPE Parameter) throw()
		{
			// ASSU: Elements removed by CReverseIterator leave items to go intact and valid for further iterations
			return RemoveThatT<CReverseIterator, _Parameter>(pCompareElement, Parameter);
		}
		SIZE_T RemoveThat(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element)) throw()
		{
			return RemoveThatT<CReverseIterator>(pCompareElement);
		}
	//}
	template <typename _Iterator>
	BOOL FindT(typename _ElementTraits::INARGTYPE Element, KEY* pKey = NULL) const throw()
	{
		const T* pT = static_cast<const T*>(this);
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if(_ElementTraits::CompareElements(pT->GetAt(Iterator), Element))
			{
				if(pKey)
					*pKey = Iterator;
				return TRUE;
			}
		return FALSE;
	}
	template <typename _Iterator>
	BOOL FindThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element), KEY* pKey = NULL) const throw()
	{
		_A(pCompareElement);
		const T* pT = static_cast<const T*>(this);
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if((*pCompareElement)(pT->GetAt(Iterator)))
			{
				if(pKey)
					*pKey = Iterator;
				return TRUE;
			}
		return FALSE;
	}
	template <typename _Iterator, typename _Parameter>
	BOOL FindThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter), _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		_A(pCompareElement);
		const T* pT = static_cast<const T*>(this);
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if((*pCompareElement)(pT->GetAt(Iterator), Parameter))
			{
				if(pKey)
					*pKey = Iterator;
				return TRUE;
			}
		return FALSE;
	}
	template <typename _Iterator, typename _Parameter>
	BOOL FindThatT(BOOL (T::*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter), _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		_A(pCompareElement);
		const T* pT = static_cast<const T*>(this);
		for(_Iterator Iterator(pT); Iterator.IsValid(); Iterator.Next())
			if((pT->*pCompareElement)(pT->GetAt(Iterator), Parameter))
			{
				if(pKey)
					*pKey = Iterator;
				return TRUE;
			}
		return FALSE;
	}
	BOOL FindFirst(typename _ElementTraits::INARGTYPE Element, KEY* pKey = NULL) const throw()
	{
		return FindT<CIterator>(Element, pKey);
	}
	BOOL FindLast(typename _ElementTraits::INARGTYPE Element, KEY* pKey = NULL) const throw()
	{
		return FindT<CReverseIterator>(Element, pKey);
	}
	BOOL FindFirstThat(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element), KEY* pKey = NULL) const throw()
	{
		return FindThatT<CIterator>(pCompareElement, pKey);
	}
	BOOL FindLastThat(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element), KEY* pKey = NULL) const throw()
	{
		return FindThatT<CReverseIterator>(pCompareElement, pKey);
	}
	template <typename _Parameter>
	BOOL FindFirstThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter), _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		return FindThatT<CIterator, _Parameter>(pCompareElement, Parameter, pKey);
	}
	template <typename _Parameter>
	BOOL FindLastThatT(BOOL (*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter), _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		return FindThatT<CReverseIterator, _Parameter>(pCompareElement, Parameter, pKey);
	}
	template <typename _Parameter>
	BOOL FindFirstThatT(BOOL (T::*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter) const, _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		return FindThatT<CIterator, _Parameter>(pCompareElement, Parameter, pKey);
	}
	template <typename _Parameter>
	BOOL FindLastThatT(BOOL (T::*pCompareElement)(typename _ElementTraits::INARGTYPE Element, _Parameter Parameter) const, _Parameter Parameter, KEY* pKey = NULL) const throw()
	{
		return FindThatT<CReverseIterator, _Parameter>(pCompareElement, Parameter, pKey);
	}
	SIZE_T ForEach(BOOL (*pProcessElement)(typename _ElementTraits::INARGTYPE Element)) const
	{
		_A(pProcessElement);
		T* pT = static_cast<T*>(this);
		SIZE_T nCount = 0;
		for(CIterator Iterator(pT); Iterator.IsValid(); Iterator.Next(), nCount++)
			if(!(*pProcessElement)(pT->GetAt(Iterator)))
				break;
		return nCount;
	}
	SIZE_T ForEach(BOOL (*pProcessElement)(_Element& Element))
	{
		_A(pProcessElement);
		T* pT = static_cast<T*>(this);
		SIZE_T nCount = 0;
		for(CIterator Iterator(pT); Iterator.IsValid(); Iterator.Next(), nCount++)
			if(!(*pProcessElement)(pT->GetAt(Iterator)))
				break;
		return nCount;
	}
	// TODO: ForEachThat
};

////////////////////////////////////////////////////////////
// CRoArrayT

template <typename _Element, typename _ElementTraits = CElementTraits<_Element> >
class CRoArrayT :
	public CAtlArray<_Element, _ElementTraits>,
	public CRoIterativeCollectionT<CRoArrayT<_Element, _ElementTraits>, CRoIterativeArrayTraitsT, _Element, _ElementTraits>
{
	typedef CAtlArray<_Element, _ElementTraits> CBaseArray;

private:

	class CBasePrivateMembers
	{
	public:
		_Element* m_pData;
		SIZE_T m_nSize;
		SIZE_T m_nMaxSize;
		INT m_nGrowBy;

	public:
	// CBasePrivateMembers
	};

public:
// CRoArrayT
	#pragma region Hacks
	SIZE_T GetCapacity() const throw()
	{
		_A(sizeof (CBaseArray) == sizeof (CBasePrivateMembers));
		const CBasePrivateMembers* pMembers = reinterpret_cast<const CBasePrivateMembers*>(static_cast<const CBaseArray*>(this));
		_A(pMembers->m_nSize == GetCount());
		return pMembers->m_nMaxSize; 
	}
	BOOL SetCapacity(SIZE_T nCapacity)
	{
		__D(nCapacity >= GetCount(), E_UNNAMED);
		_A(sizeof (CBaseArray) == sizeof (CBasePrivateMembers));
		CBasePrivateMembers* pMembers = reinterpret_cast<CBasePrivateMembers*>(static_cast<CBaseArray*>(this));
		_Element* pElements;
		if(nCapacity)
		{
			pElements = static_cast<_Element*>(calloc(nCapacity, sizeof (_Element)));
			if(!pElements)
				return FALSE;
		} else
			pElements = NULL;
		_ElementTraits::RelocateElements(pElements, pMembers->m_pData, pMembers->m_nSize);
		free(pMembers->m_pData);
		pMembers->m_pData = pElements;
		pMembers->m_nMaxSize = nCapacity;
		return TRUE;
	}
	VOID ImmediateSetCount(SIZE_T nCount)
	{
		_A(sizeof (CBaseArray) == sizeof (CBasePrivateMembers));
		CBasePrivateMembers* pMembers = reinterpret_cast<CBasePrivateMembers*>(static_cast<CBaseArray*>(this));
		_A(pMembers->m_nSize == GetCount());
		__D(nCount <= pMembers->m_nMaxSize, HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER));
		pMembers->m_nSize = nCount;
	}
	#pragma endregion
	SIZE_T AddNotFound(INARGTYPE Element)
	{
		SIZE_T nIndex;
		if(!FindFirst(Element, &nIndex))
			nIndex = Add(Element);
		_A(nIndex >= 0);
		return nIndex;
	}
};

////////////////////////////////////////////////////////////
// CRoListT

template <typename _Element, typename _ElementTraits = CElementTraits<_Element> >
class CRoListT :
	public CAtlList<_Element, _ElementTraits>,
	public CRoIterativeCollectionT<CRoListT<_Element, _ElementTraits>, CRoIterativeListTraitsT, _Element, _ElementTraits>
{
public:
// CRoListT
	BOOL FindPositionIndex(POSITION Position, SIZE_T* pnIndex = NULL) const throw()
	{
		SIZE_T nIndex = 0;
		for(CIterator Iterator(this); Iterator.IsValid(); Iterator.Next(), nIndex++)
			if(Iterator == Position)
			{
				if(pnIndex)
					*pnIndex = nIndex;
				return TRUE;
			}
		return FALSE;
	}
};

////////////////////////////////////////////////////////////
// CRoAssignableListT

template <typename _Base>
class CRoAssignableListT :
	public _Base
{
public:
// CRoAssignableListT
	CRoAssignableListT() throw()
	{
	}
	CRoAssignableListT(const CRoAssignableListT& Value)
	{
		*this = Value;
	}
	CRoAssignableListT& operator = (const CRoAssignableListT& Value)
	{
		RemoveAll();
		AddTailList(&Value);
		return *this;
	}
};

////////////////////////////////////////////////////////////
// CRoAssignableArrayT

template <typename _Base>
class CRoAssignableArrayT :
	public _Base
{
public:
// CRoAssignableArrayT
	CRoAssignableArrayT() throw()
	{
	}
	CRoAssignableArrayT(const CRoAssignableArrayT& Value)
	{
		*this = Value;
	}
	CRoAssignableArrayT& operator = (const CRoAssignableArrayT& Value)
	{
		RemoveAll();
		Append(Value);
		return *this;
	}
};

////////////////////////////////////////////////////////////
// CRoFixedArrayT

template <typename _Element, SIZE_T t_nFixedCapacity, typename _ElementTraits = CElementTraits<_Element> >
class CRoFixedArrayT :
	public CRoIterativeCollectionT<CRoFixedArrayT<_Element, t_nFixedCapacity, _ElementTraits>, CRoIterativeArrayTraitsT, _Element, _ElementTraits>
{
public:
	typedef typename _ElementTraits::INARGTYPE INARGTYPE;
	typedef typename _ElementTraits::OUTARGTYPE OUTARGTYPE;

protected:
	typedef CRoFixedArrayT<_Element, t_nFixedCapacity, _ElementTraits> CRoFixedArray;

private:
	CTempBuffer<_Element, sizeof (_Element) * t_nFixedCapacity> m_pElements;
	SIZE_T m_nCapacity;
	SIZE_T m_nCount;

#pragma push_macro("new")
#undef new
	static void CallConstructors(_Element* pElements, SIZE_T nCount)
	{
		SIZE_T nIndex = 0;
		_ATLTRY
		{
			for(; nIndex < nCount; nIndex++)
				::new (pElements + nIndex) _Element;
		}
		_ATLCATCHALL()
		{
			for(; nIndex > 0; nIndex--)
				pElements[nIndex - 1].~_Element();
			_ATLRETHROW;
		}
	}
#pragma pop_macro("new")
	static void CallDestructors(_Element* pElements, SIZE_T nCount) throw()
	{
		for(SIZE_T nIndex = 0; nIndex < nCount; nIndex++)
			pElements[nIndex].~_Element();
	}

public:
// CRoFixedArrayT
	static SIZE_T GetFixedCapacity() throw()
	{
		return t_nFixedCapacity;
	}
	CRoFixedArrayT() throw() :
		m_pElements(GetFixedCapacity()),
		m_nCapacity(GetFixedCapacity()),
		m_nCount(0)
	{
	}
	CRoFixedArrayT(SIZE_T nCapacity) :
		m_pElements(nCapacity),
		m_nCapacity(nCapacity),
		m_nCount(0)
	{
	}
	~CRoFixedArrayT() throw()
	{
		if(m_nCount)
			CallDestructors(m_pElements, m_nCount);
	}
	SIZE_T GetCount() const throw()
	{
		return m_nCount;
	}
	BOOL IsEmpty() const throw()
	{
		return !m_nCount;
	}
	BOOL SetCount(SIZE_T nCount, INT nGrowBy = 0)
	{
		nGrowBy;
		if(nCount == 0)
		{
			// shrink to nothing
			if(m_nCount)
				CallDestructors(m_pElements, m_nCount);
			m_nCount = 0;
			return TRUE;
		}
		__D(nCount <= m_nCapacity, E_OUTOFMEMORY);
		if(nCount > m_nCount)
			CallConstructors(m_pElements + m_nCount, nCount - m_nCount);
		else if(m_nCount > nCount)
			CallDestructors(m_pElements + nCount, m_nCount - nCount);
		m_nCount = nCount;
		return TRUE;
	}
	const _Element* GetData() const throw()
	{
		return m_pElements;
	}
	_Element* GetData() throw()
	{
		return m_pElements;
	}
	const _Element& GetAt(SIZE_T nIndex) const throw()
	{
		_A(nIndex < m_nCount);
		return m_pElements[nIndex];
	}
	_Element& GetAt(SIZE_T nIndex) throw()
	{
		_A(nIndex < m_nCount);
		return m_pElements[nIndex];
	}
	//VOID SetAt(SIZE_T nIndex, INARGTYPE Element)
#pragma push_macro("new")
#undef new
	SIZE_T Add()
	{
		__D(m_nCount < m_nCapacity, HRESULT_FROM_WIN32(ERROR_BUFFER_OVERFLOW));
		const SIZE_T nIndex = m_nCount;
		::new (m_pElements + nIndex) _Element;
		m_nCount++;
		return nIndex;
	}
	SIZE_T Add(INARGTYPE Element)
	{
		__D(m_nCount < m_nCapacity, HRESULT_FROM_WIN32(ERROR_BUFFER_OVERFLOW));
		const SIZE_T nIndex = m_nCount;
		::new (m_pElements + nIndex) _Element(Element);
		m_nCount++;
		return nIndex;
	}
#pragma pop_macro("new")
	SIZE_T AddNotFound(INARGTYPE Element)
	{
		SIZE_T nIndex;
		if(!FindFirst(Element, &nIndex))
			nIndex = Add(Element);
		_A(nIndex >= 0);
		return nIndex;
	}
	//VOID InsertAt(SIZE_T nIndex, INARGTYPE Element, SIZE_T nCount = 1)
	template <typename _Array>
	VOID Append(const _Array& Array)
	{
		// SUGG: Process at once without iterations
		for(SIZE_T nIndex = 0; nIndex < Array.GetCount(); nIndex++)
			_W(Add(Array[nIndex]) >= 0);
	}
	VOID RemoveAt(SIZE_T nIndex, SIZE_T nCount = 1)
	{
		_A((nIndex + nCount) <= m_nCount);
		const SIZE_T nMoveCount = m_nCount - (nIndex + nCount);
		CallDestructors(m_pElements + nIndex, nCount);
		if(nMoveCount > 0)
			_ElementTraits::RelocateElements(m_pElements + nIndex, m_pElements + nIndex + nCount, nMoveCount);
		m_nCount -= nCount;
	}
	VOID RemoveAll() throw()
	{
		SetCount(0);
	}
	const _Element& operator [] (SIZE_T nIndex) const throw()
	{
		return GetAt(nIndex);
	}
	_Element& operator [] (SIZE_T nIndex) throw()
	{
		return GetAt(nIndex);
	}
};

////////////////////////////////////////////////////////////
// CRoMapT

template<typename _KeyElement, typename _Element, class _KeyElementTraits = CElementTraits<_KeyElement>, class _ElementTraits = CElementTraits<_Element> >
class CRoMapT :
	public CAtlMap<_KeyElement, _Element, _KeyElementTraits, _ElementTraits>
{
public:
// CRoMapT
};

////////////////////////////////////////////////////////////
// CRoMapT

template<typename _KeyElement, typename _Element, SIZE_T t_nFixedCapacity, class _KeyElementTraits = CElementTraits<_KeyElement>, class _ElementTraits = CElementTraits<_Element> >
class CRoFixedMapT
{
	typedef CRoFixedArrayT<_KeyElement, t_nFixedCapacity, _KeyElementTraits> CKeyElementArray;
	typedef CRoFixedArrayT<_Element, t_nFixedCapacity, _ElementTraits> CElementArray;

public:
	typedef typename _KeyElementTraits::INARGTYPE KINARGTYPE;
	typedef typename _KeyElementTraits::OUTARGTYPE KOUTARGTYPE;
	typedef typename _ElementTraits::INARGTYPE VINARGTYPE;
	typedef typename _ElementTraits::OUTARGTYPE VOUTARGTYPE;

private:
	CKeyElementArray m_KeyElementArray;
	CElementArray m_ElementArray;

	static POSITION PositionFromIndex(SIZE_T nIndex) throw()
	{
		return (POSITION) (nIndex + 1);
	}
	static SIZE_T IndexFromPosition(POSITION Position) throw()
	{
		_A(Position);
		return (SIZE_T) Position - 1;
	}

public:
// CRoFixedMapT
	static SIZE_T GetFixedCapacity() throw()
	{
		return t_nFixedCapacity;
	}
	CRoFixedMapT() throw()
	{
	}
	SIZE_T GetCount() const throw()
	{
		_A(m_KeyElementArray.GetCount() == m_ElementArray.GetCount());
		return m_KeyElementArray.GetCount();
	}
	BOOL IsEmpty() const throw()
	{
		_A(m_KeyElementArray.GetCount() == m_ElementArray.GetCount());
		return m_KeyElementArray.IsEmpty();
	}
	BOOL Lookup(KINARGTYPE Key, VOUTARGTYPE Value) const
	{
		for(SIZE_T nIndex = 0; nIndex < m_KeyElementArray.GetCount(); nIndex++)
			if(_KeyElementTraits::CompareElements(m_KeyElementArray[nIndex], Key))
			{
				Value = m_ElementArray[nIndex];
				return TRUE;
			}
		return FALSE;
	}
	POSITION Lookup(KINARGTYPE Key) const throw()
	{
		for(SIZE_T nIndex = 0; nIndex < m_KeyElementArray.GetCount(); nIndex++)
			if(_KeyElementTraits::CompareElements(m_KeyElementArray[nIndex], Key))
				return PositionFromIndex(nIndex);
		return NULL;
	}
	//const CPair* Lookup(KINARGTYPE key) const throw()
	//CPair* Lookup(KINARGTYPE key) throw()
	_Element& operator[] (KINARGTYPE Key)
	{
		const POSITION Position = Lookup(Key);
		if(Position)
			return GetValueAt(Position);
		const SIZE_T nIndex = m_KeyElementArray.Add(Key);
		_A((SSIZE_T) nIndex >= 0);
		_W(m_ElementArray.Add() == nIndex);
		_A(m_KeyElementArray.GetCount() == m_ElementArray.GetCount());
		return m_ElementArray[nIndex];
	}
	POSITION SetAt(KINARGTYPE Key, VINARGTYPE Value)
	{
		POSITION Position = Lookup(Key);
		if(!Position)
		{
			const SIZE_T nIndex = m_KeyElementArray.Add(Key);
			_A((SSIZE_T) nIndex >= 0);
			_W(m_ElementArray.Add(Value) == nIndex);
			_A(m_KeyElementArray.GetCount() == m_ElementArray.GetCount());
			Position = PositionFromIndex(nIndex);
		} else
			GetValueAt(Position) = Value;
		return Position;
	}
	//VOID SetValueAt(POSITION Position, VINARGTYPE Value)
	BOOL RemoveKey(KINARGTYPE Key) throw()
	{
		const POSITION Position = Lookup(Key);
		if(!Position)
			return FALSE;
		RemoveAtPos(Position);
		return TRUE;
	}
	VOID RemoveAll() throw()
	{
		m_KeyElementArray.RemoveAll();
		m_ElementArray.RemoveAll();
	}
	VOID RemoveAtPos(POSITION Position) throw()
	{
		const SIZE_T nIndex = IndexFromPosition(Position);
		m_KeyElementArray.RemoveAt(nIndex);
		m_ElementArray.RemoveAt(nIndex);
	}
	POSITION GetStartPosition() const throw()
	{
		if(!IsEmpty())
			return PositionFromIndex(0);
		return NULL;
	}
	//VOID GetNextAssoc(POSITION& Position, KOUTARGTYPE Key, VOUTARGTYPE Value) const
	POSITION GetNext(POSITION& Position) const throw()
	{
		_A(Position);
		reinterpret_cast<BYTE*&>(Position)++;
		if(IndexFromPosition(Position) >= m_KeyElementArray.GetCount())
			Position = NULL;
		return Position;
	}
	//CPair* GetNext(POSITION& Position) throw()
	//const _KeyElement& GetNextKey(POSITION& Position) const
	//const _Element& GetNextValue(POSITION& Position) const
	//_Element& GetNextValue(POSITION& Position)
	//VOID GetAt(POSITION Position, KOUTARGTYPE Key, VOUTARGTYPE Value) const
	//CPair* GetAt(POSITION Position) throw()
	//const CPair* GetAt(POSITION Position) const throw()
	const _KeyElement& GetKeyAt(POSITION Position) const
	{
		_A(Position);
		const SIZE_T nIndex = IndexFromPosition(Position);
		return m_KeyElementArray[nIndex];
	}
	const _Element& GetValueAt(POSITION Position) const
	{
		_A(Position);
		const SIZE_T nIndex = IndexFromPosition(Position);
		return m_ElementArray[nIndex];
	}
	_Element& GetValueAt(POSITION Position)
	{
		_A(Position);
		const SIZE_T nIndex = IndexFromPosition(Position);
		return m_ElementArray[nIndex];
	}
};

////////////////////////////////////////////////////////////
// CRoAssignableMapT

template <typename _Base>
class CRoAssignableMapT :
	public _Base
{
public:
// CRoAssignableMapT
	CRoAssignableMapT() throw()
	{
	}
	CRoAssignableMapT(const CRoAssignableMapT& Value)
	{
		*this = Value;
	}
	CRoAssignableMapT& operator = (const CRoAssignableMapT& Value)
	{
		RemoveAll();
		for(POSITION Position = Value.GetStartPosition(); Position; Value.GetNext(Position))
			_W(SetAt(Value.GetKeyAt(Position), Value.GetValueAt(Position)));
		return *this;
	}
};

