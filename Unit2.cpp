//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
Form2->Color=TColor(0xe4dde4);
Form2->RadioButton1->Color=TColor(0xe4dde4);
Form2->RadioButton2->Color=TColor(0xe4dde4);
Form2->RadioButton1->Font->Color=TColor(0x5938a8);
Form2->RadioButton2->Font->Color=TColor(0x5938a8);
Form2->Label1->Font->Color=TColor(0x5938a8);
if (Form1->Difficulty==3)
	{
	Form2->RadioButton1->Checked=true;
	Form2->RadioButton2->Checked=false;
	}
else
if (Form1->Difficulty==3)
	{
	Form2->RadioButton2->Checked=true;
	Form2->RadioButton1->Checked=false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form1->Visible=true;
Form2->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
if (Form2->RadioButton1->Checked == true)
	{
	Form1->Difficulty=3;
	}
else
if (Form2->RadioButton2->Checked == true)
	{
	Form1->Difficulty=4;
	}
Form2->Visible=false;
Form1->SetDifficulty(Form1->Difficulty);
}
//---------------------------------------------------------------------------
