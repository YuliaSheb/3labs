//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Book.h"
#include "Biblioteka.h"
#include "BookInfo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Books A;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
  Form2->Hide();
}
//---------------------------------------------------------------------------


