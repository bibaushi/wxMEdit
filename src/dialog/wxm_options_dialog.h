///////////////////////////////////////////////////////////////////////////////
// Name:        wxm_options_dialog.h
// Description:
// Author:      madedit@gmail.com  (creator)
//              wxmedit@gmail.com  (current maintainer)
// Licence:     GPL
///////////////////////////////////////////////////////////////////////////////

#ifndef WXM_OPTIONS_DIALOG_H
#define WXM_OPTIONS_DIALOG_H


#include "../xm/wx_avoid_wxmsw_bug4373.h"

//(*Headers(WXMOptionsDialog)
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/radiobox.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/aui/aui.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/combobox.h>
//*)

#include "../wxm_command.h"
#include <list>
#include <map>
using std::list;


class TreeItemData: public wxTreeItemData
{
public:
	CommandData *cmddata;
	wxArrayString keys;
};

class KeyTextCtrl;

class WXMOptionsDialog: public wxDialogWrapper
{
	public:

		WXMOptionsDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~WXMOptionsDialog();

		//(*Declarations(WXMOptionsDialog)
		wxTextCtrl* WxEditFooterRight;
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxCheckBox* WxCheckBoxPrintTabChar;
		wxCheckBox* WxCheckBoxWhenPressCtrlKey;
		wxCheckBox* WxCheckBoxAutoCompletePair;
		wxTextCtrl* WxEditIndentColumns;
		wxTextCtrl* WxEditMaxColumns;
		wxStaticText* WxStaticTextCommandHint;
		wxCheckBox* WxCheckBoxPrintLineNumber;
		wxButton* Button4;
		wxCheckBox* WxCheckBoxDoNotSaveSettings;
		wxTextCtrl* WxEditHeaderLeft;
		wxButton* WxButtonAddKey;
		wxStaticText* StaticText13;
		wxListBox* WxListBoxKeys;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxStaticText* StaticText14;
		KeyTextCtrl* WxEditKey;
		wxButton* Button1;
		wxTextCtrl* WxEditHeaderRight;
		wxStaticText* StaticText6;
		wxTextCtrl* WxEditMaxSizeToLoad;
		wxCheckBox* WxCheckBoxPrintPageHeader;
		wxTextCtrl* WxEditKeyHint;
		wxTextCtrl* WxEditMaxTextFileSize;
		wxCheckBox* WxCheckBoxPrintPageFooter;
		wxCheckBox* WxCheckBoxResetAllKeys;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxButton* WxButtonShowInMenu;
		wxPanel* Panel1;
		wxCheckBox* WxCheckBoxTabOrSpaces;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxTextCtrl* WxEditMaxLineLength;
		wxTextCtrl* WxEditFooterCenter;
		wxButton* WxButtonDeleteKey;
		wxButton* Button2;
		wxPanel* Panel3;
		wxButton* Button6;
		wxCheckBox* WxCheckBoxReloadFiles;
		wxComboBox* WxComboBoxEncoding;
		wxButton* Button5;
		wxButton* WxButtonDateTime;
		wxCheckBox* WxCheckBoxMiddleMouseToPaste;
		wxButton* Button3;
		wxCheckBox* WxCheckBoxRecordCaretMovements;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxButton* WxButtonCancel;
		wxCheckBox* WxCheckBoxRestoreCaretPos;
		wxCheckBox* WxCheckBoxSingleInstance;
		wxTextCtrl* WxEditTabColumns;
		wxTextCtrl* WxEditCommandHint;
		wxTextCtrl* WxEditHeaderCenter;
		wxTreeCtrl* TreeCtrl1;
		wxTextCtrl* WxEditFooterLeft;
		wxAuiNotebook* AuiNotebook1;
		wxMenu WxPopupMenuDateTimeMark;
		wxMenu WxPopupMenuPrintMark;
		wxButton* WxButtonOK;
		wxCheckBox* WxCheckBoxAutoIndent;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxComboBox* WxComboBoxLanguage;
		wxCheckBox* WxCheckBoxPrintEndOfLine;
		wxPanel* Panel2;
		wxCheckBox* WxCheckBoxMouseSelectToCopy;
		wxStaticText* WxStaticTextDateTime;
		wxCheckBox* WxCheckBoxPrintSyntax;
		wxStaticText* StaticText4;
		wxCheckBox* WxCheckBoxPrintSpaceChar;
		wxCheckBox* WxCheckBoxDateTimeInEnglish;
		wxRadioBox* WxRadioBoxPrintOffset;
		wxTextCtrl* WxEditDateTime;
		wxStaticText* StaticText16;
		//*)

	protected:
		friend class KeyTextCtrl;
		//(*Identifiers(WXMOptionsDialog)
		static const long ID_WXCOMBOBOXLANGUAGE;
		static const long ID_STATICTEXT16;
		static const long ID_WXCHECKBOXSINGLEINSTANCE;
		static const long ID_WXCHECKBOXRECORDCARETMOVEMENTS;
		static const long ID_WXEDITMAXSIZETOLOAD;
		static const long ID_STATICTEXT1;
		static const long ID_WXEDITMAXTEXTFILESIZE;
		static const long ID_STATICTEXT2;
		static const long ID_WXCOMBOBOXENCODING;
		static const long ID_STATICTEXT13;
		static const long ID_WXCHECKBOXRELOADFILES;
		static const long ID_WXCHECKBOXRESTORECARETPOS;
		static const long ID_WXCHECKBOXDONOTSAVESETTINGS;
		static const long ID_PANEL1;
		static const long ID_WXEDITMAXLINELENGTH;
		static const long ID_STATICTEXT3;
		static const long ID_WXEDITMAXCOLUMNS;
		static const long ID_STATICTEXT4;
		static const long ID_WXEDITTABCOLUMNS;
		static const long ID_STATICTEXT5;
		static const long IID_WXEDITINDENTCOLUMNS;
		static const long ID_STATICTEXT6;
		static const long ID_WXEDITDATETIME;
		static const long ID_WXSTATICTEXTDATETIME;
		static const long ID_WXBUTTONDATETIME;
		static const long ID_WXCHECKBOXDATETIMEINENGLISH;
		static const long ID_WXCHECKBOXTABORSPACES;
		static const long ID_WXCHECKBOXAUTOINDENT;
		static const long ID_WXCHECKBOXAUTOCOMPLETEPAIR;
		static const long ID_WXCHECKBOXMOUSESELECTTOCOPY;
		static const long ID_WXCHECKBOXWHENPRESSCTRLKEY;
		static const long ID_WXCHECKBOXMIDDLEMOUSETOPASTE;
		static const long ID_PANEL2;
		static const long ID_WXCHECKBOXPRINTSYNTAX;
		static const long ID_WXCHECKBOXPRINTLINENUMBER;
		static const long ID_WXCHECKBOXPRINTENDOFLINE;
		static const long ID_WXCHECKBOXPRINTTABCHAR;
		static const long ID_WXCHECKBOXPRINTSPACECHAR;
		static const long ID_WXRADIOBOXPRINTOFFSET;
		static const long ID_WXCHECKBOXPRINTPAGEHEADER;
		static const long ID_STATICTEXT7;
		static const long ID_WXEDITHEADERLEFT;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT8;
		static const long ID_WXEDITHEADERCENTER;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT9;
		static const long ID_WXEDITHEADERRIGHT;
		static const long ID_BUTTON3;
		static const long ID_WXCHECKBOXPRINTPAGEFOOTER;
		static const long ID_STATICTEXT10;
		static const long ID_WXEDITFOOTERLEFT;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT11;
		static const long ID_WXEDITFOOTERLEFTCENTER;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT12;
		static const long ID_WXEDITFOOTERRIGHT;
		static const long ID_BUTTON6;
		static const long ID_PANEL3;
		static const long ID_TREECTRL1;
		static const long ID_WXSTATICTEXTCOMMANDHINT;
		static const long ID_WXEDITHINT;
		static const long ID_STATICTEXT14;
		static const long ID_WXLISTBOXKEYS;
		static const long ID_STATICTEXT15;
		static const long ID_WXEDITKEY;
		static const long ID_WXEDITKEYHINT;
		static const long ID_WXBUTTONADDKEY;
		static const long ID_WXBUTTONDELETEKEY;
		static const long ID_WXBUTTONSHOWINMENU;
		static const long ID_WXCHECKBOXRESETALLKEYS;
		static const long ID_PANEL4;
		static const long ID_AUINOTEBOOK1;
		static const long ID_WXBUTTONOK;
		static const long ID_WXBUTTONCANCEL;
		//*)

		static const long ID_MNU___Y__M__D_I__M__S_P_2007_02_2408_30_55AM_1191;
		static const long ID_MNU___D__M__Y_24_02_2007_1192;
		static const long ID_MNU___A__D_B_Y_H__M__S_Z_RFC822TIMESTAMP_1195;
		static const long ID_MNU_MENUITEM1_1170;
		static const long ID_MNU___A_FULLWEEKDAYNAME_1171;
		static const long ID_MNU___B_ABBREVIATEDMONTHNAME_1172;
		static const long ID_MNU___B_FULLMONTHNAME_1173;
		static const long ID_MNU___C_DATEANDTIMEREPRESENTATIONAPPROPRIATEFORLOCALE_1174;
		static const long ID_MNU___D_DAYOFMONTHASDECIMALNUMBER_01_31__1175;
		static const long ID_MNU___H_HOURIN24_HOURFORMAT_00_23__1176;
		static const long ID_MNU___I_HOURIN12_HOURFORMAT_01_12__1177;
		static const long ID_MNU___J_DAYOFYEARASDECIMALNUMBER_001_366__1178;
		static const long ID_MNU___M_MONTHASDECIMALNUMBER_01_12__1179;
		static const long ID_MNU___M_MINUTEASDECIMALNUMBER_00_59__1180;
		static const long ID_MNU___P_CURRENTLOCALESA_M__P_M_INDICATORFOR12_HOURCLOCK_1181;
		static const long ID_MNU___S_SECONDASDECIMALNUMBER_00_59__1182;
		static const long ID_MNU___U_WEEKOFYEARASDECIMALNUMBER_WITHSUNDAYASFIRSTDAYOFWEEK_00_53__1183;
		static const long ID_MNU___W_WEEKDAYASDECIMALNUMBER_0_6_SUNDAYIS0__1184;
		static const long ID_MNU___W_WEEKOFYEARASDECIMALNUMBER_WITHMONDAYASFIRSTDAYOFWEEK_00_53__1185;
		static const long ID_MNU___X_DATEREPRESENTATIONFORCURRENTLOCALE_1186;
		static const long ID_MNU___X_TIMEREPRESENTATIONFORCURRENTLOCALE_1187;
		static const long ID_MNU___Y_YEARWITHOUTCENTURY_ASDECIMALNUMBER_00_99__1188;
		static const long ID_MNU___Y_YEARWITHCENTURY_ASDECIMALNUMBER_1189;
		static const long ID_MNU___Z_TIME_ZONENAME_1193;
		static const long ID_MNU___Z_TIME_ZONEABBREVIATION_1194;

		static const long ID_MNU_MENUITEM1_1110;
		static const long ID_MNU___P__PATHNAME_1111;
		static const long ID_MNU_MENUITEM3_1112;
		static const long ID_MNU___N_PAGE_NUMBER_1113;
		static const long ID_MNU___S__TOTALPAGES_1114;
		static const long ID_MNU_MENUITEM6_1115;
		static const long ID_MNU___D__DATE_1116;
		static const long ID_MNU___T__TIME_1117;

	private:

		//(*Handlers(WXMOptionsDialog)
		void WXMOptionsDialogClose(wxCloseEvent& event);
		void WxButtonAddKeyClick(wxCommandEvent& event);
		void WxButtonCancelClick(wxCommandEvent& event);
		void WxButtonDateTimeClick(wxCommandEvent& event);
		void WxButtonDeleteKeyClick(wxCommandEvent& event);
		void WxButtonOKClick(wxCommandEvent& event);
		void WxButtonShowInMenuClick(wxCommandEvent& event);
		void WxListBoxKeysSelected(wxCommandEvent& event);
		void WxTreeCtrl1SelChanged(wxTreeEvent& event);
		//*)
		
		void WXMOptionsDialogActivate(wxActivateEvent& event);

		void PrintMarkClick(wxCommandEvent& event);
		void PrintMarkButtonClick(wxCommandEvent& event);
		void DateTimeMarkClick(wxCommandEvent& event);

		DECLARE_EVENT_TABLE()

public:
	wxString GetSelectedLanguage();
	wxString GetSelectedEncoding();

	void LoadOptions(void);

	TreeItemData* FindKeyInList(const wxString &key); // find key in TreeItemDataList
	bool FindItemInList(TreeItemData* tid, const list<TreeItemData*> &tlist);
	void UpdateKeyHint();

	int ButtonID;
	list<TreeItemData*> TreeItemDataList; // list of all TreeItemData
	list<TreeItemData*> ChangedTreeItemDataList;

#ifdef __WXMSW__
	wxCheckBox *WxCheckBoxRightClickMenu;
#endif

private:
	void InitButtonRelativeEdit();
	wxTextCtrl* GetButtonRelativeEdit(long btnid);

	typedef std::map<long, wxTextCtrl*> BtnIDEditMap;
	BtnIDEditMap m_btnid_edit_map;
};


extern WXMOptionsDialog *g_OptionsDialog;

#endif
