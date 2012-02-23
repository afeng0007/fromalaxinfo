////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2012
// Created by Roman Ryltsov roman@alax.info
// 
// $Id$

#include "stdafx.h"

class Item
{
public:
// Item
	virtual INT GetPriority()
	{
		return 0;
	}
	virtual BOOL IsCommutative()
	{
		return TRUE;
	}
	virtual CString AsString() = 0;
	virtual BOOL IsOperation()
	{
		return FALSE;
	}
};

class ValueItem :
	public Item
{
private:
	INT m_nValue;

public:
// ValueItem
	ValueItem(INT nValue = 0) :
		m_nValue(nValue)
	{
	}
	INT GetValue() const
	{
		return m_nValue;
	}
	CString AsString()
	{
		CString sString;
		sString.Format(_T("%d"), m_nValue);
		return sString;
	}
};

class OperationItem :
	public Item
{
public:
	Item* m_pItem1;
	CHAR m_nSymbol;
	Item* m_pItem2;

public:
// OperationItem
	OperationItem() :
		m_pItem1(NULL),
		m_pItem2(NULL)
	{
	}
	INT GetPriority()
	{
		switch(m_nSymbol)
		{
		case '+':
		case '-':
			return 2;
		case '*':
		case '/':
			return 1;
		}
		return 0;
	}
	BOOL IsCommutative()
	{
		switch(m_nSymbol)
		{
		case '-':
		case '/':
			return FALSE;
		}
		return __super::IsCommutative();
	}
	CString AsString()
	{
		CString sString;
		if(m_pItem1->GetPriority() > GetPriority())
			sString.AppendFormat(_T("(%s)"), m_pItem1->AsString());
		else
			sString.Append(m_pItem1->AsString());
		sString.AppendFormat(_T(" %c "), m_nSymbol);
		if(m_pItem2->GetPriority() > GetPriority() || m_pItem2->IsOperation() && m_pItem2->GetPriority() == GetPriority() && !IsCommutative())
			sString.AppendFormat(_T("(%s)"), m_pItem2->AsString());
		else
			sString.Append(m_pItem2->AsString());
		return sString;
	}
	BOOL IsOperation()
	{
		return TRUE;
	}
};

VOID Generate()
{
	const INT nResult = 5 + rand() % 95; // Result would be 5..99
	Item* pItem = new ValueItem(nResult);
	#if defined(_DEBUG)
	for(INT nCount = 3; nCount > 0; )
	#else
	for(INT nCount = 7 + rand() % 7; nCount > 0; )
	#endif // defined(_DEBUG)
	{
		Item** ppBrokenItem = &pItem;
		while((*ppBrokenItem)->IsOperation())
		{
			OperationItem* pBrokenOperationItem = static_cast<OperationItem*>(*ppBrokenItem);
			ppBrokenItem = &((rand() % 2) ? pBrokenOperationItem->m_pItem1 : pBrokenOperationItem->m_pItem2);
		}
		ValueItem* pBrokenValueItem = static_cast<ValueItem*>(*ppBrokenItem);
		OperationItem* pNewOperationItem = new OperationItem;
		static const INT g_nAddWeight = 15;
		static const INT g_nSubtractWeight = 10;
		static const INT g_nMultiplyWeight = 70;
		static const INT g_nDivideWeight = 5;
		INT nOperation = rand() % (g_nAddWeight + g_nSubtractWeight + g_nMultiplyWeight + g_nDivideWeight);
		for(; ; )
		{
			#pragma region Add
			nOperation -= g_nAddWeight;
			if(nOperation < 0)
			{
				const INT nAddend = 5 + rand() % 95; // Result would be 5..99
				if(pBrokenValueItem->GetValue() - nAddend < 0)
				{
					pNewOperationItem = NULL;
					break; // New Value Item is Negative
				}
				if(rand() % 2)
				{
					pNewOperationItem->m_pItem1 = new ValueItem(pBrokenValueItem->GetValue() - nAddend);
					pNewOperationItem->m_pItem2 = new ValueItem(nAddend);
				} else
				{
					pNewOperationItem->m_pItem1 = new ValueItem(nAddend);
					pNewOperationItem->m_pItem2 = new ValueItem(pBrokenValueItem->GetValue() - nAddend);
				}
				pNewOperationItem->m_nSymbol = '+';
				break;
			}
			#pragma endregion
			#pragma region Subtract
			nOperation -= g_nSubtractWeight;
			if(nOperation < 0)
			{
				const INT nSubtrahend = 5 + rand() % 95; // Result would be 5..99
				pNewOperationItem->m_pItem1 = new ValueItem(pBrokenValueItem->GetValue() + nSubtrahend);
				pNewOperationItem->m_nSymbol = '-';
				pNewOperationItem->m_pItem2 = new ValueItem(nSubtrahend);
				break;
			}
			#pragma endregion
			#pragma region Multiply
			nOperation -= g_nMultiplyWeight;
			if(nOperation < 0)
			{
				const INT nFactor = 5 + rand() % 95; // Result would be 5..99
				if(pBrokenValueItem->GetValue() % nFactor)
				{
					pNewOperationItem = NULL;
					break; // There is a Remainder
				}
				if(rand() % 2)
				{
					pNewOperationItem->m_pItem1 = new ValueItem(pBrokenValueItem->GetValue() / nFactor);
					pNewOperationItem->m_pItem2 = new ValueItem(nFactor);
				} else
				{
					pNewOperationItem->m_pItem1 = new ValueItem(nFactor);
					pNewOperationItem->m_pItem2 = new ValueItem(pBrokenValueItem->GetValue() / nFactor);
				}
				pNewOperationItem->m_nSymbol = '*';
				break;
			}
			#pragma endregion
			#pragma region Divide
			//nOperation -= g_nDivideWeight;
			//if(nOperation < 0)
			{
				const INT nDivisor = 5 + rand() % 95; // Result would be 5..99
				pNewOperationItem->m_pItem1 = new ValueItem(pBrokenValueItem->GetValue() * nDivisor);
				pNewOperationItem->m_nSymbol = ':';
				pNewOperationItem->m_pItem2 = new ValueItem(nDivisor);
				break;
			}
			#pragma endregion
		}
		if(!pNewOperationItem)
			continue;
		*ppBrokenItem = pNewOperationItem;
		nCount--;
	}
	_tprintf(_T("%s = %d\n"), pItem->AsString(), nResult);
}

int _tmain(int argc, _TCHAR* argv[])
{
	srand(1);
	for(INT nCount = 0; nCount < 1000; nCount++)
	{
		#if defined(_DEBUG)
		_tprintf(_T("%d: "), nCount);
		#endif // defined(_DEBUG)
		Generate();
		if(nCount % 10 == 9)
			_tprintf(_T("\n"));
	}
	// NOTE: Who cares about memory leaks, right?
	return 0;
}

