// dllmain.h : Declaration of module class.

class CTestFormRegionModule : public ATL::CAtlDllModuleT< CTestFormRegionModule >
{
public :
	DECLARE_LIBID(LIBID_TestFormRegionLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TESTFORMREGION, "{E5578D1F-01C5-4221-8F1B-739CEF90C3F6}")
};

extern class CTestFormRegionModule _AtlModule;
