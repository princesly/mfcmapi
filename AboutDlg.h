#pragma once
// AboutDlg.h : Displays an about dialog
#include "Dialog.h"

void DisplayAboutDlg(_In_ CWnd* lpParentWnd);

class CAboutDlg : public CMyDialog
{
public:
	CAboutDlg(
		_In_ CWnd* pParentWnd
		);
	virtual ~CAboutDlg();

private:
	void    OnOK();
	_Check_return_ LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	_Check_return_ BOOL    OnInitDialog();

	CRichEditCtrl	m_HelpText;
	CButton			m_DisplayAboutCheck;
};
