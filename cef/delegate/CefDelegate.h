#ifndef __CEFDELEGATE_H__
#define __CEFDELEGATE_H__
#include "cef_include.h"

class CefDelegate
{
public:
	CefAppPtr GetCefApplication() const;
private:
	CefAppPtr m_pApp;
};
#endif