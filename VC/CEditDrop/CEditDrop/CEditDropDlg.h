
// CEditDropDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "MyEdit.h"

// CCEditDropDlg �Ի���
class CCEditDropDlg : public CDialogEx
{
// ����
public:
	CCEditDropDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CEDITDROP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
	CMyEdit m_Edit;
	 
};