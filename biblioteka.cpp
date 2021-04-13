// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "biblioteka.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

// ---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner) : TForm(Owner) {
	ComboBox1->Items->Add("Фэнтези");
	ComboBox1->Items->Add("Детективы");
	ComboBox1->Items->Add("Ужасы");
	ComboBox1->Items->Add("Приключения");
	ComboBox1->Items->Add("Поэзия");
	ComboBox1->Items->Add("Проза");
	ComboBox1->Items->Add("Психология");
	ComboBox1->Items->Add("Искусство и культура");
	ComboBox1->Items->Add("Компьютерная литература");
	ComboBox1->Items->Add("История");
	ComboBox1->Items->Add("Мемуары");
}
// ---------------------------------------------------------------------------

void __fastcall TForm5::ComboBox1Select(TObject *Sender) {
	if (ComboBox1->ItemIndex == 0) {
        Memo1->Lines->LoadFromFile("fantasy.txt");
		if (ComboBox1->ItemIndex == 1) {
			ShowMessage("Test2");
			if (ComboBox1->ItemIndex == 2) {
				ShowMessage("Test3");
			}
		}
	}
}
// ---------------------------------------------------------------------------
