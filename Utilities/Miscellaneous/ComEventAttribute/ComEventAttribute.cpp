#include <SDKDDKVer.h>
#include <stdio.h>
#include <tchar.h>
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
#include <atlstr.h>

[dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IEvents 
{
	[id(1)] HRESULT MyEvent([in] int value);
};

[dual, uuid("00000000-0000-0000-0000-000000000002")]
__interface IEventSource 
{
	[id(1)] HRESULT FireEvent();
};

class DECLSPEC_UUID("530DF3AD-6936-3214-A83B-27B63C7997C4") CSource;

[coclass, event_source(com), uuid("530DF3AD-6936-3214-A83B-27B63C7997C4")]
class CSource : public IEventSource
{
public:
	__event __interface IEvents; 

	HRESULT FireEvent() 
	{
		__raise MyEvent(123);
		return S_OK;
	}
};

[event_receiver(com)]
class CReceiver 
{
public:
	HRESULT MyHandler1(int nValue) 
	{
		printf_s("MyHandler1 was called with value %d.\n", nValue);
		return S_OK;
	}
	HRESULT MyHandler2(int nValue) 
	{
		printf_s("MyHandler2 was called with value %d.\n", nValue);
		return S_OK;
	}
	void HookEvent(IEventSource* pSource) 
	{
		__hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);
		__hook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);
	}
	void UnhookEvent(IEventSource* pSource) 
	{
		__unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler1);
		__unhook(&IEvents::MyEvent, pSource, &CReceiver::MyHandler2);
	}
};

[ module(type=exe, name="Event") ];

int _tmain(int argc, _TCHAR* argv[])
{
	// Create COM object
	CoInitialize(NULL);
	{
		CComObject<CSource>* pSource = NULL;
		ATLVERIFY(SUCCEEDED(CComObject<CSource>::CreateInstance(&pSource)));
		CComPtr<IEventSource> pEventSource = pSource;
		CReceiver Receiver;
		Receiver.HookEvent(pEventSource);
		pSource->FireEvent();
		Receiver.UnhookEvent(pEventSource);
	}
	CoUninitialize();
	return 0;
}

