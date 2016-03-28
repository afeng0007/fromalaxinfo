#include "stdafx.h"

#import "libid:D5B49BC2-6062-417E-897E-1018E62BF038" raw_interfaces_only // ComEvents01

class CSink :
	public IDispatch
{
private:
	CComPtr<ITypeLib> m_pTypeLib;
	CComPtr<ITypeInfo> m_pTypeInfo;

public:
// CSink
	CSink()
	{
		ATLENSURE_SUCCEEDED(LoadRegTypeLib(__uuidof(ComEvents01::__ComEvents01), 1, 0, 0, &m_pTypeLib));
		ATLENSURE_SUCCEEDED(m_pTypeLib->GetTypeInfoOfGuid(__uuidof(ComEvents01::IParserStateEvents), &m_pTypeInfo));
	}

// IUnkonwn
    STDMETHOD(QueryInterface)(REFIID InterfaceIdentifier,	VOID** ppvObject) override
	{
		if(!(InterfaceIdentifier == __uuidof(IUnknown) || InterfaceIdentifier == __uuidof(IDispatch) || InterfaceIdentifier == __uuidof(ComEvents01::IParserStateEvents)))
			return E_NOINTERFACE;
		*ppvObject = this;
		return S_OK;
	}
    STDMETHOD_(ULONG, AddRef)() override
	{
		return 2;
	}
    STDMETHOD_(ULONG, Release)() override
	{
		return 1;
	}

// IDispatch
	STDMETHOD(GetTypeInfoCount)(UINT* pnCount) override
	{
		//_Z4(atlTraceCOM, 4, _T("this 0x%p\n"), this);
		*pnCount = 1;
		return S_OK;
	}
	STDMETHOD(GetTypeInfo)(UINT nIndex, LCID nLocaleIdentifier, ITypeInfo** ppTypeInfo) override
	{
		//_Z4(atlTraceCOM, 4, _T("this 0x%p, nIndex %d, nLocaleIdentifier %d\n"), this, nIndex, nLocaleIdentifier);
		if(nIndex != 0)
			return DISP_E_BADINDEX;
		nLocaleIdentifier;
		*ppTypeInfo = CComPtr<ITypeInfo>(m_pTypeInfo).Detach();
		return S_OK;
	}
	STDMETHOD(GetIDsOfNames)(REFIID InterfaceIdentifier, LPOLESTR* ppszNames, UINT nNameCount, LCID nLocaleIdentifier, DISPID* pnDispatchIdentifiers) override
	{
		//_Z4(atlTraceCOM, 4, _T("this 0x%p, nNameCount %d, nLocaleIdentifier %d\n"), this, nNameCount, nLocaleIdentifier);
		nLocaleIdentifier;
		//ATLASSERT(InterfaceIdentifier == __uuidof(ComEvents01::IParserStateEvents));
		return m_pTypeInfo->GetIDsOfNames(ppszNames, nNameCount, pnDispatchIdentifiers);
	}
	STDMETHOD(Invoke)(DISPID nDispatchIdentifier, REFIID InterfaceIdentifier, LCID nLocaleIdentifier, WORD nFlags, DISPPARAMS* pDispParams, VARIANT* pVariantResult, EXCEPINFO* pExcepInfo, UINT* pnErrorArgumentIndex) override
	{
		//_Z4(atlTraceCOM, 4, _T("this 0x%p, nDispatchIdentifier %d, nLocaleIdentifier %d, nFlags 0x%x\n"), this, nDispatchIdentifier, nLocaleIdentifier, nFlags);
		OutputDebugString(_T("IParserStateEvents::Invoke") _T("\r\n"));
		return S_OK;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CTrace::SetLevel(4);
	ATLENSURE_SUCCEEDED(CoInitialize(NULL));
	{
		CComPtr<IDispatch> pParserState;
		ATLENSURE_SUCCEEDED(pParserState.CoCreateInstance(__uuidof(ComEvents01::ParserState)));
		CSink Sink;
		DWORD nCookie;
		ATLENSURE_SUCCEEDED(AtlAdvise(pParserState, &Sink, __uuidof(ComEvents01::IParserStateEvents), &nCookie));
		ATLENSURE_SUCCEEDED(pParserState.Invoke0(L"Initialize"));
		ATLENSURE_SUCCEEDED(AtlUnadvise(pParserState, __uuidof(ComEvents01::IParserStateEvents), nCookie));
	}
	CoUninitialize();
	return 0;
}

