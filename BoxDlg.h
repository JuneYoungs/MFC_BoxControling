#pragma once


// CBoxDlg 대화 상자입니다.

class CBoxDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBoxDlg)

public:
	CBoxDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CBoxDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_OPTION_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBlockSize();
	int m_Low;
	int m_Col;
};
