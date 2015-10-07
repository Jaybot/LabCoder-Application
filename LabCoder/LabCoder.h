
// LabCoder.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CLabCoderApp:
// Siehe LabCoder.cpp für die Implementierung dieser Klasse
//

class CLabCoderApp : public CWinApp
{
public:
	CLabCoderApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CLabCoderApp theApp;