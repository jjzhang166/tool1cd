//---------------------------------------------------------------------------

#ifndef CTool_1CD_MainH
#define CTool_1CD_MainH
//---------------------------------------------------------------------------
#include <iostream.h>
//#include <vcl.h>
//#include <windows.h>

#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <windows.h>
#include "Class_1CD.h"
#include "MessageRegistration.h"
#include "Parse_tree.h"

//---------------------------------------------------------------------------
class Messager : public MessageRegistrator
{
private:
	String logfile;
	bool noverbose;
public:
	bool has_error;
	__fastcall Messager();
	virtual void __fastcall AddMessage(const String& message, const MessageState mstate, TStringList* param = NULL);
	virtual void __fastcall Status(const String& message);
	void __fastcall setlogfile(String _logfile);
	void __fastcall setnoverbose(bool nv){noverbose = nv;};
};

#endif

