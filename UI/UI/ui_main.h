// generated by Fast Light User Interface Designer (fluid) version 1.0302

#ifndef ui_main_h
#define ui_main_h
#include <FL/Fl.H>
#include <FL/Fl_Native_File_Chooser.H>
#include <FL/Fl_Menu_Button.H>
#include <FL/fl_ask.H>
#include <fstream>
#include "InterfaceCCAPI.h"
#include "rkWindow.h"
#include "RangeTable.h"
#include "ResultTable.h"
#include "CodeTable.h"
#include "ValueInput.h"
#include "IPInput.h"
#include "SearchOperationChoice.h"
#include "Common.h"
#include "ValueViewerWindow.h"
#include "ValueViewerTable.h"
#define RANGE_SAVE 0
#define RANGE_LOAD 1
#define RANGE_CLEAR 2
#define RANGE_FIND 3
#define RANGE_CANCEL 4
#define RANGE_DELETE 5
class InterfaceCCAPI;
#include <FL/Fl_Group.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Light_Button.H>

class rkCheatUI {
public:
  static void RangeButtonCB(Fl_Widget *w, void *data);
  static void SearchTypeChangeCB(Fl_Widget *w, void *data);
  static void SearchValueChangeCB(Fl_Widget *w, void *data);
  static void SetHexCB(Fl_Widget *w, void *data);
  static void SetValueTypeCB(Fl_Widget *w, void *data);
  static void StartSearchButtonCB(Fl_Widget *w, void *data);
  static void ContinueSearchCB(Fl_Widget *w, void *data);
  static void RangeInputCB(Fl_Widget *w, void *data);
  static void RangeTableCB(Fl_Widget *w, void *data);
  static void ResultTableButtonCB(Fl_Widget *w, void *data);
  static void CodeTableButtonCB(Fl_Widget *w, void *data);
  static void ConnectButtonCB(Fl_Widget *w, void *data);
  static void CanConnectCB(Fl_Widget *w, void *data);
  static void ViewerCB(Fl_Widget *w, void *data);
  rkCheatUI();
  rkWindow *mainWindow;
  Fl_Group *searchGroup;
  SearchOperationChoice *ui_searchType;
  Fl_Choice *ui_valueType;
  static Fl_Menu_Item menu_ui_valueType[];
  Fl_Button *ui_buttonNewScan;
  Fl_Button *ui_buttonNextScan;
  Fl_Group *ui_valueInputGroup;
  ValueInput *ui_valueInput;
  Fl_Check_Button *ui_isHex;
  Fl_Group *ui_resultGroup;
  ResultTable *ui_resultTable;
  Fl_Box *ui_numOfResults;
  Fl_Group *ui_resultBtnGroup;
  Fl_Button *ui_ButtonAddResult;
  Fl_Button *ui_ButtonDeleteResult;
  Fl_Button *ui_ButtonRefreshResult;
  Fl_Group *ui_rangeGroup;
  RangeTable *ui_rangeTable;
  Fl_Button *ui_buttonFindRanges;
  Fl_Button *ui_buttonSaveRanges;
  Fl_Button *ui_buttonLoadRanges;
  Fl_Button *ui_buttonClearRanges;
  Fl_Group *ui_addRangeGrp;
  ValueInput *ui_addRangeInput_Start;
  ValueInput *ui_addRangeInput_End;
  Fl_Button *ui_addRangeButton;
  Fl_Button *ui_buttonDeleteRange;
  Fl_Group *ui_statusbar;
  Fl_Progress *ui_opProgress;
  Fl_Box *ui_opStatus;
  Fl_Group *ui_codeGroup;
  CodeTable *ui_codeTable;
  Fl_Button *ui_ButtonNewCode;
  Fl_Button *ui_ButtonDeleteCode;
  Fl_Button *ui_ButtonSaveCodes;
  Fl_Button *ui_ButtonLoadCodes;
  Fl_Light_Button *ui_connectButton;
  IPInput *ui_ipInput;
  ValueViewerWindow *m_valueviewer;
  ValueViewerTable *m_valueTable;
  Fl_Choice *m_viewerTypeChoice;
private:
  inline void cb_m_viewerTypeChoice_i(Fl_Choice*, void*);
  static void cb_m_viewerTypeChoice(Fl_Choice*, void*);
public:
  Fl_Check_Button *m_viewerSignedButton;
private:
  inline void cb_m_viewerSignedButton_i(Fl_Check_Button*, void*);
  static void cb_m_viewerSignedButton(Fl_Check_Button*, void*);
public:
  Fl_Button *m_valueAddCodeButton;
private:
  inline void cb_m_valueAddCodeButton_i(Fl_Button*, void*);
  static void cb_m_valueAddCodeButton(Fl_Button*, void*);
public:
  void setInterface(InterfaceCCAPI *iface);
private:
  InterfaceCCAPI *m_interface; 
public:
  void clearRanges(bool reInit=false);
  void deleteRange();
  void addRange(unsigned long begin, unsigned long end);
  void setRangeProgress(float percent, string status, bool done);
  void findRangeStarted();
  void findRangeStopped();
  bool canStartScan();
  void searchStarted();
  void searchStopped(char how);
  void setSearchProgress(float percent, string status, bool done);
  void setNumberOfResultsString(string res);
  bool m_inProgress; 
  void setConnectStatus(char status);
  void storeIP();
  void readIP();
};
#endif
