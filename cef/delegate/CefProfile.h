#ifndef __CEFPROFILE_H__
#define __CEFPROFILE_H__
#include "cef_include.h"

class CefBrowserProfile
{
public:
	typedef cef_state_t State;
	typedef cef_color_t Color;
	typedef cef_string_t String;
	typedef cef_log_severity_t LogLevel;

	void setWindowlessFrameRate(int frameRate);
	int getWindowlessFrameRate();
	void setStandardFontFamilt(const CefString& font);
	CefString getStandardFontFamilt() const;
	void setFixedFontFamilt(const CefString& font);
	CefString getFixedFontFamilt() const;
	void setSerifFontFamilt(const CefString& font);
	CefString getSerifFontFamilt() const;
	void setSansSerifFontFamilt(const CefString& font);
	CefString getSansSerifFontFamilt() const;
	void setCursiveFontFamilt(const CefString& font);
	CefString getCursiveFontFamilt() const;
	void setFantasyFontFamilt(const CefString& font);
	CefString getFantasyFontFamilt() const;

	void setDefaultFontSize(int size);
	int getDefaultFontSize() const;
	void setDefaultFixedFontSize(int size);
	int getDefaultFixedFontSize() const;
	void setMinimumFontSize(int size);
	int getMinimumFontSize() const;
	void setMinimumLogicalFontSize(int size);
	int getMinimumLogicalFontSize() const;

	void setDefaultEncoding(const CefString& encoding);
	CefString getDefaultEncoding() const;

	void setRemoteFontsState(State state);
	State getRemoteFontsState() const;
	void setJavascriptState(State state);
	State getJavascriptState() const;
	void setJavascriptCloseWindowsState(State state);
	State getJavascriptCloseWindowsState() const;
	void setJavascriptAccessClipboardState(State state);
	State getJavascriptAccessClipboardState() const;
	void setJavascriptDomPasteState(State state);
	State getJavascriptDomPasteState() const;
	void setPluginsState(State state);
	State getPluginsState() const;
	void setUniversalAccessFromFileUrlsState(State state);
	State getUniversalAccessFromFileUrlsState() const;
	void setAccessFromFileUrlsState(State state);
	State getAccessFromFileUrlsState() const;
	void setWebSecurityState(State state);
	State getWebSecurityState() const;
	void setImageLoadingState(State state);
	State getImageLoadingState() const;
	void setImageShrinkStandaloneToFitState(State state);
	State getImageShrinkStandaloneToFitState() const;
	void setTextAreaResizeState(State state);
	State getTextAreaResizeState() const;
	void setTabToLinkState(State state);
	State getTabToLinkState() const;
	void setLocalStorageState(State state);
	State getLocalStorageState() const;
	void setDatabasesState(State state);
	State getDatabasesState() const;
	void setApplicationCacheState(State state);
	State getApplicationCacheState() const;
	void setWebglState(State state);
	State getWebglState() const;

	void setBackgroundColor(Color color);
	Color getBackgroundColor() const;
	void setAcceptLanguageList(const CefString& str);
	CefString getAcceptLanguageList() const;

	const CefBrowserSettings& getSettings() const;
private:
	CefBrowserSettings m_browserSettings;
};

class CefProfile
{
public:
	typedef cef_state_t State;
	typedef cef_color_t Color;
	typedef cef_string_t String;
	typedef cef_log_severity_t LogLevel;

	static CefProfile* defaultProfile();

	void setSingleProcess(bool flag);
	bool isSingleProcess() const;
	void setNoSandbox(bool flag);
	bool isNoSandbox() const;
	void setSubProcessPath(bool flag);
	CefString getSubProcessPath() const;
	void setSubProcessPath(bool flag);
	CefString getSubProcessPath() const;

	void setMultiThreadMessageLoop(bool flag);
	bool isMultiThreadMessageLoop() const;
	void setExternalMessagePump(bool flag);
	bool isExternalMessagePump() const;
	void setWindowlessRenderingEnabeld(bool flag);
	bool isWindowlessRenderingEnabeld() const;
	void setCommandLineDisabled(bool flag);
	bool isCommandLineDisabled() const;

	void setCachePath(const CefString& str);
	CefString getCachePath() const;
	void setUserDataPath(const CefString& str);
	CefString getUserDataPath() const;

	void setPersistSessionCookies(bool flag);
	bool isPersistSessionCookies() const;
	void setPersistUserPreferences(bool flag);
	bool isPersistUserPreferences() const;

	void setUserAgent(const CefString& str);
	CefString getUserAgent() const;
	void setProductVersion(const CefString& str);
	CefString getProductVersion() const;
	void setLocale(const CefString& str);
	CefString getLocale() const;
	void setLogFile(const CefString& str);
	CefString getLogFile() const;

	void setLogLevel(LogLevel level);
	LogLevel getLogLevel() const;


	void setJavascriptFlags(const CefString& str);
	CefString getJavascriptFlags() const;
	void setResourcesPath(const CefString& str);
	CefString getResourcesPath() const;
	void setLocalesDirPath(const CefString& str);
	CefString getLocalesDirPath() const;

	void setPackLoadingDisabled(bool flag);
	bool isPackLoadingDisabled() const;
	void setRemoteDebuggingPort(int port);
	int getRemoteDebuggingPort() const;
	void setUncaughtExceptionStackSize(int flag);
	int getUncaughtExceptionStackSize() const;
	void setIgnoreCertificateErrors(bool flag);
	bool isIgnoreCertificateErrors() const;
	void setEnableNetSecurityExpiration(bool flag);
	bool isEnableNetSecurityExpiration() const;

	void setBackgroundColor(Color color);
	Color getBackgroundColor() const;
	void setAcceptLanguageList(const CefString& str);
	CefString getAcceptLanguageList() const;

	const CefSettings& getSettings() const;
	const CefBrowserSettings& getBrowserSettings() const;
private:
	CefSettings m_settings;
	CefBrowserProfile m_browserSettings;

	static CefProfile* m_defaultProfile;
};
#endif