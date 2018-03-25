#ifndef __CEF_INCLUDE_H__
#define __CEF_INCLUDE_H__

#include "include/cef_app.h"
#include "include/cef_client.h"
#include "include/cef_sandbox_win.h"
#include "include/cef_parser.h"
#include "include/cef_dom.h"
#include "include/cef_file_util.h"
#include "include/cef_path_util.h"
#include "include/cef_process_util.h"
#include "include/cef_thread.h"
#include "include/cef_zip_reader.h"
#include "include/cef_xml_reader.h"
#include "include/cef_web_plugin.h"
#include "include/cef_v8.h"
#include "include/cef_server.h"
#include "include/cef_accessibility_handler.h"
#include "include/cef_context_menu_handler.h"
#include "include/cef_trace.h"
#include "include/cef_crash_util.h""
#include "include/cef_urlrequest.h"
#include <Windows.h>
#include <stdio.h>
#include <string>

#define DEFINE_REF(CLASS) typedef CefRefPtr<CLASS> CLASS##Ptr

DEFINE_REF(CefApp);
DEFINE_REF(CefBrowser);
DEFINE_REF(CefBrowserHost);
DEFINE_REF(CefRequest);
DEFINE_REF(CefRequestCallback);
DEFINE_REF(CefRequestContext);
DEFINE_REF(CefFrame);
DEFINE_REF(CefCommandLine);
DEFINE_REF(CefV8Context);
DEFINE_REF(CefV8Handler);
DEFINE_REF(CefV8Value);
DEFINE_REF(CefURLRequest);
DEFINE_REF(CefURLRequestClient);
DEFINE_REF(CefTask);
DEFINE_REF(CefTaskRunner);

DEFINE_REF(CefCallback);

DEFINE_REF(CefClient);
DEFINE_REF(CefContextMenuHandler);
DEFINE_REF(CefDialogHandler);
DEFINE_REF(CefDisplayHandler);
DEFINE_REF(CefDownloadHandler);
DEFINE_REF(CefDragHandler);
DEFINE_REF(CefFindHandler);
DEFINE_REF(CefFocusHandler);
DEFINE_REF(CefJSDialogHandler);
DEFINE_REF(CefKeyboardHandler);
DEFINE_REF(CefLifeSpanHandler);
DEFINE_REF(CefLoadHandler);
DEFINE_REF(CefRenderHandler);
DEFINE_REF(CefRequestHandler);

typedef const CefString& CefStringRef;
#endif
