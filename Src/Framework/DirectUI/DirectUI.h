#ifndef DirectUI_h__
#define DirectUI_h__
#pragma once

#ifndef DIRECTUI_STATIC

#ifdef DIRECTUI_EXPORTS
#define DIRECTUI_API __declspec(dllexport)
#else
#define DIRECTUI_API __declspec(dllimport)
#pragma comment(lib,"DirectUI.lib")
#endif

#else
#define DIRECTUI_API

#endif // !DIRECTUI_STATIC

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#define WIN32_LEAN_AND_MEAN

#pragma   warning (disable : 4251)

// std
#include <string>
#include <map>
#include <vector>

// ��ֹȫ�������ռ���Ⱦ
//using namespace std;

#include <windows.h>
#include <WTypes.h>
#include <ObjBase.h>
#include <tchar.h>
#include <atlstr.h>
#include <assert.h>

#include <WinBase.h>
#include <CommCtrl.h>

// DirectUI

#include "Define/UIDefine.h"
#include "Define/IUIRender.h"
#include "Utils/UIUtils.h"
#include "Utils/UIDelegate.h"

#include "Base/ImageObject.h"
#include "Base/FontObject.h"
#include "Render/UIPaint.h"
#include "Render/GDIRender.h"

#include "Base/ResourceManager.h"
#include "Base/UIEngine.h"
#include "Base/ObjectUI.h"

#include "Window/WindowUI.h"

#include "Control/ControlUI.h"
#include "Layout/ContainerUI.h"

#include "Control/ScrollBarUI.h"

#include "Control/ButtonUI.h"

#endif // DirectUI_h__
