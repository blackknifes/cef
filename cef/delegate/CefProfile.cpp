#include "CefProfile.h"

#define CefStringCopy(src, output) cef_string_utf16_copy(src, wcslen(src), output)
static cef_string_t GetCefString(const CefString& font)
{
	cef_string_t str;
	CefStringCopy(font.c_str(), &str);
	return str;
}

CefProfile* CefProfile::m_defaultProfile = NULL;

void CefBrowserProfile::setWindowlessFrameRate(int frameRate)
{
	m_browserSettings.windowless_frame_rate = frameRate;
}

int CefBrowserProfile::getWindowlessFrameRate()
{
	return m_browserSettings.windowless_frame_rate;
}

void CefBrowserProfile::setStandardFontFamilt(const CefString& font)
{
	m_browserSettings.standard_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getStandardFontFamilt() const
{
	return m_browserSettings.standard_font_family.str;
}

void CefBrowserProfile::setFixedFontFamilt(const CefString& font)
{
	m_browserSettings.fixed_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getFixedFontFamilt() const
{
	return m_browserSettings.fixed_font_family.str;
}

void CefBrowserProfile::setSerifFontFamilt(const CefString& font)
{
	m_browserSettings.serif_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getSerifFontFamilt() const
{
	return m_browserSettings.serif_font_family.str;
}

void CefBrowserProfile::setSansSerifFontFamilt(const CefString& font)
{
	m_browserSettings.sans_serif_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getSansSerifFontFamilt() const
{
	return m_browserSettings.sans_serif_font_family.str;
}

void CefBrowserProfile::setCursiveFontFamilt(const CefString& font)
{
	m_browserSettings.cursive_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getCursiveFontFamilt() const
{
	return m_browserSettings.cursive_font_family.str;
}

void CefBrowserProfile::setFantasyFontFamilt(const CefString& font)
{
	m_browserSettings.fantasy_font_family = GetCefString(font);
}

CefString CefBrowserProfile::getFantasyFontFamilt() const
{
	return m_browserSettings.fantasy_font_family.str;
}

void CefBrowserProfile::setDefaultFontSize(int size)
{

}

int CefBrowserProfile::getDefaultFontSize() const
{

}

void CefBrowserProfile::setDefaultFixedFontSize(int size)
{

}

int CefBrowserProfile::getDefaultFixedFontSize() const
{

}

void CefBrowserProfile::setMinimumFontSize(int size)
{

}

int CefBrowserProfile::getMinimumFontSize() const
{

}

void CefBrowserProfile::setMinimumLogicalFontSize(int size)
{

}

int CefBrowserProfile::getMinimumLogicalFontSize() const
{

}

void CefBrowserProfile::setDefaultEncoding(const CefString& encoding)
{

}

CefString CefBrowserProfile::getDefaultEncoding() const
{

}

void CefBrowserProfile::setRemoteFontsState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getRemoteFontsState() const
{

}

void CefBrowserProfile::setJavascriptState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getJavascriptState() const
{

}

void CefBrowserProfile::setJavascriptCloseWindowsState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getJavascriptCloseWindowsState() const
{

}

void CefBrowserProfile::setJavascriptAccessClipboardState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getJavascriptAccessClipboardState() const
{

}

void CefBrowserProfile::setJavascriptDomPasteState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getJavascriptDomPasteState() const
{

}

void CefBrowserProfile::setPluginsState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getPluginsState() const
{

}

void CefBrowserProfile::setUniversalAccessFromFileUrlsState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getUniversalAccessFromFileUrlsState() const
{

}

void CefBrowserProfile::setAccessFromFileUrlsState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getAccessFromFileUrlsState() const
{

}

void CefBrowserProfile::setWebSecurityState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getWebSecurityState() const
{

}

void CefBrowserProfile::setImageLoadingState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getImageLoadingState() const
{

}

void CefBrowserProfile::setImageShrinkStandaloneToFitState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getImageShrinkStandaloneToFitState() const
{

}

void CefBrowserProfile::setTextAreaResizeState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getTextAreaResizeState() const
{

}

void CefBrowserProfile::setTabToLinkState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getTabToLinkState() const
{

}

void CefBrowserProfile::setLocalStorageState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getLocalStorageState() const
{

}

void CefBrowserProfile::setDatabasesState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getDatabasesState() const
{

}

void CefBrowserProfile::setApplicationCacheState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getApplicationCacheState() const
{

}

void CefBrowserProfile::setWebglState(State state)
{

}

CefBrowserProfile::State CefBrowserProfile::getWebglState() const
{

}

void CefBrowserProfile::setBackgroundColor(Color color)
{

}

CefBrowserProfile::Color CefBrowserProfile::getBackgroundColor() const
{

}

void CefBrowserProfile::setAcceptLanguageList(const CefString& str)
{

}

CefString CefBrowserProfile::getAcceptLanguageList() const
{

}

const CefBrowserSettings& CefBrowserProfile::getSettings() const
{
	return m_browserSettings;
}

CefProfile* CefProfile::defaultProfile()
{
	if (m_defaultProfile)
		return m_defaultProfile;
	m_defaultProfile = new CefProfile();
	return m_defaultProfile;
}

void CefProfile::setSingleProcess(bool flag)
{

}

bool CefProfile::isSingleProcess() const
{

}

void CefProfile::setNoSandbox(bool flag)
{

}

bool CefProfile::isNoSandbox() const
{

}

void CefProfile::setSubProcessPath(bool flag)
{

}

CefString CefProfile::getSubProcessPath() const
{

}

void CefProfile::setMultiThreadMessageLoop(bool flag)
{

}

bool CefProfile::isMultiThreadMessageLoop() const
{

}

void CefProfile::setExternalMessagePump(bool flag)
{

}

bool CefProfile::isExternalMessagePump() const
{

}

void CefProfile::setWindowlessRenderingEnabeld(bool flag)
{

}

bool CefProfile::isWindowlessRenderingEnabeld() const
{

}

void CefProfile::setCommandLineDisabled(bool flag)
{

}

bool CefProfile::isCommandLineDisabled() const
{

}

void CefProfile::setCachePath(const CefString& str)
{

}

CefString CefProfile::getCachePath() const
{

}

void CefProfile::setUserDataPath(const CefString& str)
{

}

CefString CefProfile::getUserDataPath() const
{

}

void CefProfile::setPersistSessionCookies(bool flag)
{

}

bool CefProfile::isPersistSessionCookies() const
{

}

void CefProfile::setPersistUserPreferences(bool flag)
{

}

bool CefProfile::isPersistUserPreferences() const
{

}

void CefProfile::setUserAgent(const CefString& str)
{

}

CefString CefProfile::getUserAgent() const
{

}

void CefProfile::setProductVersion(const CefString& str)
{

}

CefString CefProfile::getProductVersion() const
{

}

void CefProfile::setLocale(const CefString& str)
{

}

CefString CefProfile::getLocale() const
{

}

void CefProfile::setLogFile(const CefString& str)
{

}

CefString CefProfile::getLogFile() const
{

}

void CefProfile::setLogLevel(LogLevel level)
{

}

CefProfile::LogLevel CefProfile::getLogLevel() const
{

}

void CefProfile::setJavascriptFlags(const CefString& str)
{

}

CefString CefProfile::getJavascriptFlags() const
{

}

void CefProfile::setResourcesPath(const CefString& str)
{

}

CefString CefProfile::getResourcesPath() const
{

}

void CefProfile::setLocalesDirPath(const CefString& str)
{

}

CefString CefProfile::getLocalesDirPath() const
{

}

void CefProfile::setPackLoadingDisabled(bool flag)
{

}

bool CefProfile::isPackLoadingDisabled() const
{

}

void CefProfile::setRemoteDebuggingPort(int port)
{

}

int CefProfile::getRemoteDebuggingPort() const
{

}

void CefProfile::setUncaughtExceptionStackSize(int flag)
{

}

int CefProfile::getUncaughtExceptionStackSize() const
{

}

void CefProfile::setIgnoreCertificateErrors(bool flag)
{

}

bool CefProfile::isIgnoreCertificateErrors() const
{

}

void CefProfile::setEnableNetSecurityExpiration(bool flag)
{

}

bool CefProfile::isEnableNetSecurityExpiration() const
{

}

void CefProfile::setBackgroundColor(Color color)
{

}

CefProfile::Color CefProfile::getBackgroundColor() const
{

}

void CefProfile::setAcceptLanguageList(const CefString& str)
{

}

CefString CefProfile::getAcceptLanguageList() const
{

}

const CefSettings& CefProfile::getSettings() const
{
	return m_settings;
}

const CefBrowserSettings& CefProfile::getBrowserSettings() const
{
	return m_browserSettings.getSettings();
}
