// TextAddin.h : Declaration of the CTextAddin

#pragma once
#include "resource.h"       // main symbols



#include "TestFormRegion_i.h"
#include "resource.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;



typedef IDispatchImpl<_IDTExtensibility2, &__uuidof(_IDTExtensibility2), &__uuidof(__AddInDesignerObjects), 1, 0>
IDTImpl;

typedef IDispatchImpl<IRibbonExtensibility, &__uuidof(IRibbonExtensibility), &__uuidof(__Office), /* wMajor = */ 2, /* wMinor = */ 5>
RibbonImpl;

typedef IDispatchImpl<_FormRegionStartup, &__uuidof(_FormRegionStartup), &__uuidof(__Outlook), /* wMajor = */ 9, /* wMinor = */ 4>
FormImpl;

typedef IDispatchImpl<IRibbonCallback, &__uuidof(IRibbonCallback)>
CallbackImpl;
	
// CTextAddin

class ATL_NO_VTABLE CTextAddin :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTextAddin, &CLSID_TextAddin>,
	public IDispatchImpl<ITextAddin, &IID_ITextAddin, &LIBID_TestFormRegionLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDTImpl,
	public RibbonImpl,
	public FormImpl,
	public CallbackImpl
{
public:
	CTextAddin()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TEXTADDIN)


BEGIN_COM_MAP(CTextAddin)
	COM_INTERFACE_ENTRY2(IDispatch, IRibbonCallback)
	COM_INTERFACE_ENTRY(ITextAddin)
	COM_INTERFACE_ENTRY(_IDTExtensibility2)
	COM_INTERFACE_ENTRY(_FormRegionStartup)
	COM_INTERFACE_ENTRY(IRibbonExtensibility)
	COM_INTERFACE_ENTRY(IRibbonCallback)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(OnConnection)(LPDISPATCH Application, ext_ConnectMode ConnectMode, LPDISPATCH AddInInst, SAFEARRAY * * custom)
	{
		return S_OK;
	}
	STDMETHOD(OnDisconnection)(ext_DisconnectMode RemoveMode, SAFEARRAY * * custom)
	{
		return S_OK;
	}
	STDMETHOD(OnAddInsUpdate)(SAFEARRAY * * custom)
	{
		return S_OK;
	}
	STDMETHOD(OnStartupComplete)(SAFEARRAY * * custom)
	{
		return S_OK;
	}
	STDMETHOD(OnBeginShutdown)(SAFEARRAY * * custom)
	{
		return S_OK;
	}

	STDMETHOD(GetFormRegionStorage)(BSTR FormRegionName, LPDISPATCH Item, long LCID, OlFormRegionMode FormRegionMode, OlFormRegionSize FormRegionSize, VARIANT * Storage)
	{
		V_VT(Storage) = VT_ARRAY | VT_UI1;
		V_ARRAY(Storage) = GetOFSResource(IDR_OFS1);
		return S_OK;
	}
	STDMETHOD(BeforeFormRegionShow)(_FormRegion * FormRegion)
	{
		return S_OK;

	}
	STDMETHOD(GetFormRegionManifest)(BSTR FormRegionName, long LCID, VARIANT * Manifest)
	{
		V_VT(Manifest) = VT_BSTR;
		BSTR bstrManifest = GetXMLResource(IDR_XML1);
		V_BSTR(Manifest) = bstrManifest;
		return S_OK;
	}
	STDMETHOD(GetFormRegionIcon)(BSTR FormRegionName, long LCID, OlFormRegionIcon Icon, VARIANT * Result)
	{
		return S_OK;
	}

	// IRibbonExtensibility Methods
public:

	STDMETHOD(GetCustomUI)(BSTR RibbonID, BSTR * RibbonXml)
	{
		if (!RibbonXml)
			return E_POINTER;
		*RibbonXml = GetXMLResource(IDR_XML2);
		return S_OK;
	}

	// IRibbonCallback Methods
public:
	// IRibbonCallback
	STDMETHOD(ButtonClicked)(IDispatch * RibbonControl) { return S_OK; }
	STDMETHOD(GetImage)(IDispatch * RibbonControl, IDispatch ** ppdispImage) { return E_NOTIMPL; }
	STDMETHOD(OnLoad)(IDispatch* RibbonIDl) { return E_NOTIMPL; }
	STDMETHOD(GetEnabled)(IDispatch * RibbonControl, VARIANT_BOOL *pvarfEnabled) { return E_NOTIMPL; }
	STDMETHOD(GetText)(IDispatch * RibbonControl, BSTR *pVal) { return E_NOTIMPL; }
	STDMETHOD(GetCheckboxState)(IDispatch * RibbonControl, VARIANT_BOOL * state) { return E_NOTIMPL; }
	STDMETHOD(CheckboxClicked)(IDispatch * RibbonControl, VARIANT_BOOL state) { return E_NOTIMPL; }

	HRESULT HrGetResource(int nId, LPCTSTR lpType, LPVOID* ppvResourceData, DWORD* pdwSizeInBytes)
	{
		HMODULE hModule = _AtlBaseModule.GetModuleInstance();

		if (!hModule)
			return E_UNEXPECTED;

		HRSRC hRsrc = FindResource(hModule, MAKEINTRESOURCE(nId), lpType);

		if (!hRsrc)
			return HRESULT_FROM_WIN32(GetLastError());

		HGLOBAL hGlobal = LoadResource(hModule, hRsrc);

		if (!hGlobal)
			return HRESULT_FROM_WIN32(GetLastError());

		*pdwSizeInBytes = SizeofResource(hModule, hRsrc);
		*ppvResourceData = LockResource(hGlobal);

		return S_OK;
	}

	BSTR GetXMLResource(int nId)
	{
		LPVOID pResourceData = NULL;
		DWORD dwSizeInBytes = 0;

		HRESULT hr = HrGetResource(nId, TEXT("XML"), &pResourceData, &dwSizeInBytes);
		if (FAILED(hr))
			return NULL;

		// Assumes that the data is not store in Unicode.
		CComBSTR cbstr(dwSizeInBytes, reinterpret_cast<LPCSTR>(pResourceData));

		return cbstr.Detach();
	}

	SAFEARRAY* GetOFSResource(int nId)
	{
		LPVOID pResourceData = NULL;
		DWORD dwSizeInBytes = 0;

		if (FAILED(HrGetResource(nId, TEXT("OFS"), &pResourceData, &dwSizeInBytes)))
			return NULL;

		SAFEARRAY* psa;
		SAFEARRAYBOUND dim = { dwSizeInBytes, 0 };

		psa = SafeArrayCreate(VT_UI1, 1, &dim);

		if (psa == NULL)
			return NULL;

		BYTE* pSafeArrayData;

		SafeArrayAccessData(psa, (void**)&pSafeArrayData);

		memcpy((void*)pSafeArrayData, pResourceData, dwSizeInBytes);

		SafeArrayUnaccessData(psa);

		return psa;
	}
private:

};

OBJECT_ENTRY_AUTO(__uuidof(TextAddin), CTextAddin)
