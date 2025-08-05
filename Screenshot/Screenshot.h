// Screenshot.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号

// CScreenshotApp:
// 有关此类的实现，请参阅 Screenshot.cpp
//CWinApp封装了windows应用程序的初始化，运行，和终止
class CScreenshotApp : public CWinApp
{
public:
	CScreenshotApp();

// 重写
	public:
	virtual BOOL InitInstance();//必须重写的初始化函数
	HWND m_hwndDlg;//窗口句柄
	virtual BOOL ProcessMessageFilter(int code, LPMSG lpMsg);

// 实现

	DECLARE_MESSAGE_MAP()  // 声明消息映射表，使该类支持 Windows 消息处理
private:
	ULONG_PTR m_gdiplusToken;//无符号长整型指针宽度变量
public:
	virtual int ExitInstance();
};

extern CScreenshotApp theApp;
