//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TForm2 *Form2;

int Cell[3][3];
int Cell4[4][4];


int Player=1;
int win=0;
int Turns=0;

void WinCheck();
void FailCheck(int Dif);
void PlayerNumber();

void WinCheck4();

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Form1->Difficulty=3;
PlayerNumber();
Form1->Color=TColor(0xe4dde4);
Form1->Label1->Font->Color=TColor(0x5938a8);
Form1->C11->Font->Color=TColor(0x390d24);
Form1->C12->Font->Color=TColor(0x390d24);
Form1->C13->Font->Color=TColor(0x390d24);
Form1->C21->Font->Color=TColor(0x390d24);
Form1->C22->Font->Color=TColor(0x390d24);
Form1->C23->Font->Color=TColor(0x390d24);
Form1->C31->Font->Color=TColor(0x390d24);
Form1->C32->Font->Color=TColor(0x390d24);
Form1->C33->Font->Color=TColor(0x390d24);
Form1->Panel1->Color=TColor(0xb5a6c8);
Form1->Cell11->Font->Color=TColor(0x390d24);
Form1->Cell12->Font->Color=TColor(0x390d24);
Form1->Cell13->Font->Color=TColor(0x390d24);
Form1->Cell14->Font->Color=TColor(0x390d24);
Form1->Cell21->Font->Color=TColor(0x390d24);
Form1->Cell22->Font->Color=TColor(0x390d24);
Form1->Cell23->Font->Color=TColor(0x390d24);
Form1->Cell24->Font->Color=TColor(0x390d24);
Form1->Cell31->Font->Color=TColor(0x390d24);
Form1->Cell32->Font->Color=TColor(0x390d24);
Form1->Cell33->Font->Color=TColor(0x390d24);
Form1->Cell34->Font->Color=TColor(0x390d24);
Form1->Cell41->Font->Color=TColor(0x390d24);
Form1->Cell42->Font->Color=TColor(0x390d24);
Form1->Cell43->Font->Color=TColor(0x390d24);
Form1->Cell44->Font->Color=TColor(0x390d24);
Form1->Panel2->Color=TColor(0xb5a6c8);
Form1->Panel2->Visible=false;

for (int i=0; i<3; i++)
	{
	for (int j=0; j < 3; j++)
		{
		Cell[i][j]=0;
		}
	}
for (int i=0; i<4; i++)
	{
	for (int j=0; j < 4; j++)
		{
		Cell4[i][j]=0;
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::QuitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C11Click(TObject *Sender)
{
if (C11->Caption=="x" || C11->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C11->Caption="x";
		Cell[0][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C11->Caption="o";
		Cell[0][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C12Click(TObject *Sender)
{
if (C12->Caption=="x" || C12->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C12->Caption="x";
		Cell[0][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C12->Caption="o";
		Cell[0][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C13Click(TObject *Sender)
{
if (C13->Caption=="x" || C13->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C13->Caption="x";
		Cell[0][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C13->Caption="o";
		Cell[0][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C21Click(TObject *Sender)
{
if (C21->Caption=="x" || C21->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C21->Caption="x";
		Cell[1][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C21->Caption="o";
		Cell[1][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C22Click(TObject *Sender)
{
if (C22->Caption=="x" || C22->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C22->Caption="x";
		Cell[1][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C22->Caption="o";
		Cell[1][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C23Click(TObject *Sender)
{
if (C23->Caption=="x" || C23->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C23->Caption="x";
		Cell[1][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C23->Caption="o";
		Cell[1][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C31Click(TObject *Sender)
{
if (C31->Caption=="x" || C31->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C31->Caption="x";
		Cell[2][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C31->Caption="o";
		Cell[2][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C32Click(TObject *Sender)
{
if (C32->Caption=="x" || C32->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C32->Caption="x";
		Cell[2][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C32->Caption="o";
		Cell[2][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::C33Click(TObject *Sender)
{
if (C33->Caption=="x" || C33->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		C33->Caption="x";
		Cell[2][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		C33->Caption="o";
		Cell[2][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void WinCheck()
{
if (Cell[0][0]!=0)
	{
		if (Cell[0][0]==Cell[0][1] && Cell[0][1]==Cell[0][2])
			{
				if (Cell[0][0]==1)
					{
					win=1;
					}
				else
				if (Cell[0][0]==2)
					{
					win=2;
					}

			}
		else
		if (Cell[0][0]==Cell[1][0] && Cell[1][0]==Cell[2][0])
			{
				if (Cell[0][0]==1)
					{
					win=1;
					}
				else
				if (Cell[0][0]==2)
					{
					win=2;
					}

			}
		else
		if (Cell[0][0]==Cell[1][1] && Cell[1][1]==Cell[2][2])
			{
				if (Cell[0][0]==1)
					{
					win=1;
					}
				else
				if (Cell[0][0]==2)
					{
					win=2;
					}

			}
	}
if (Cell[0][1]!=0)
	{
		if (Cell[0][1]==Cell[1][1] && Cell[1][1]==Cell[2][1])
			{
				if (Cell[0][1]==1)
					{
					win=1;
					}
				else
				if (Cell[0][1]==2)
					{
					win=2;
					}

			}

	}
if (Cell[0][2]!=0)
	{
		if (Cell[0][2]==Cell[1][2] && Cell[1][2]==Cell[2][2])
			{
				if (Cell[0][2]==1)
					{
					win=1;
					}
				else
				if (Cell[0][2]==2)
					{
					win=2;
					}

			}
		else
		if (Cell[0][2]==Cell[1][1] && Cell[1][1]==Cell[2][0])
			{
				if (Cell[0][2]==1)
					{
					win=1;
					}
				else
				if (Cell[0][2]==2)
					{
					win=2;
					}

			}
	}
if (Cell[1][0]!=0)
	{
		if (Cell[1][0]==Cell[1][1] && Cell[1][1]==Cell[1][2])
			{
				if (Cell[1][0]==1)
					{
					win=1;
					}
				else
				if (Cell[1][0]==2)
					{
					win=2;
					}

			}

	}
if (Cell[2][0]!=0)
	{
		if (Cell[2][0]==Cell[2][1] && Cell[2][1]==Cell[2][2])
			{
				if (Cell[2][0]==1)
					{
					win=1;
					}
				else
				if (Cell[2][0]==2)
					{
					win=2;
					}

			}

	}

if (win!=0)
	{
	ShowMessage("Игрок №"+IntToStr(win)+" победил!");
	Form1->ClearCells();
	}
}

void FailCheck(int Dif)
{
if (Dif==3)
	{
	if (Turns==9 && win==0)
		{
		ShowMessage("Игра окончена, победила дружба!");
		Form1->ClearCells();
		}
	}
else
if (Dif==4)
	{
	if (Turns==16 && win==0)
		{
		ShowMessage("Игра окончена, победила дружба!");
		Form1->ClearCells();
		}
	}

}

void PlayerNumber()
{
	if (Player==1)
	{
		Form1->Label3->Caption="1";
	}
	else
	if (Player==2)
	{
		Form1->Label3->Caption="2";
	}
}
void __fastcall TForm1::NewGameClick(TObject *Sender)
{
ClearCells();
}
//---------------------------------------------------------------------------

void TForm1::ClearCells()
{
for (int i=0; i<3; i++)
	{
	for (int j=0; j < 3; j++)
		{
		Cell[i][j]=0;
		}
	}
Form1->C11->Caption=" ";
Form1->C12->Caption=" ";
Form1->C13->Caption=" ";
Form1->C21->Caption=" ";
Form1->C22->Caption=" ";
Form1->C23->Caption=" ";
Form1->C31->Caption=" ";
Form1->C32->Caption=" ";
Form1->C33->Caption=" ";
for (int i=0; i<4; i++)
	{
	for (int j=0; j < 4; j++)
		{
		Cell4[i][j]=0;
		}
	}
Form1->Cell11->Caption=" ";
Form1->Cell12->Caption=" ";
Form1->Cell13->Caption=" ";
Form1->Cell14->Caption=" ";
Form1->Cell21->Caption=" ";
Form1->Cell22->Caption=" ";
Form1->Cell23->Caption=" ";
Form1->Cell24->Caption=" ";
Form1->Cell31->Caption=" ";
Form1->Cell32->Caption=" ";
Form1->Cell33->Caption=" ";
Form1->Cell34->Caption=" ";
Form1->Cell41->Caption=" ";
Form1->Cell42->Caption=" ";
Form1->Cell43->Caption=" ";
Form1->Cell44->Caption=" ";
win=0;
Player=1;
Turns=0;
PlayerNumber();
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Form2->Visible=true;
}
//---------------------------------------------------------------------------
void TForm1::SetDifficulty(int Dif)
{
	if (Dif==3)
	{
	Form1->Cell11->Visible=false;
	Form1->Cell12->Visible=false;
	Form1->Cell13->Visible=false;
	Form1->Cell14->Visible=false;
	Form1->Cell21->Visible=false;
	Form1->Cell22->Visible=false;
	Form1->Cell23->Visible=false;
	Form1->Cell24->Visible=false;
	Form1->Cell31->Visible=false;
	Form1->Cell32->Visible=false;
	Form1->Cell33->Visible=false;
	Form1->Cell34->Visible=false;
	Form1->Cell41->Visible=false;
	Form1->Cell42->Visible=false;
	Form1->Cell43->Visible=false;
	Form1->Cell44->Visible=false;
	Form1->Panel2->Visible=false;
	Form1->C11->Visible=true;
	Form1->C12->Visible=true;
	Form1->C13->Visible=true;
	Form1->C21->Visible=true;
	Form1->C22->Visible=true;
	Form1->C23->Visible=true;
	Form1->C31->Visible=true;
	Form1->C32->Visible=true;
	Form1->C33->Visible=true;
	Form1->Panel1->Visible=true;
	}
else
	if (Dif==4)
	{
	Form1->Cell11->Visible=true;
	Form1->Cell12->Visible=true;
	Form1->Cell13->Visible=true;
	Form1->Cell14->Visible=true;
	Form1->Cell21->Visible=true;
	Form1->Cell22->Visible=true;
	Form1->Cell23->Visible=true;
	Form1->Cell24->Visible=true;
	Form1->Cell31->Visible=true;
	Form1->Cell32->Visible=true;
	Form1->Cell33->Visible=true;
	Form1->Cell34->Visible=true;
	Form1->Cell41->Visible=true;
	Form1->Cell42->Visible=true;
	Form1->Cell43->Visible=true;
	Form1->Cell44->Visible=true;
	Form1->Panel2->Visible=true;
	Form1->C11->Visible=false;
	Form1->C12->Visible=false;
	Form1->C13->Visible=false;
	Form1->C21->Visible=false;
	Form1->C22->Visible=false;
	Form1->C23->Visible=false;
	Form1->C31->Visible=false;
	Form1->C32->Visible=false;
	Form1->C33->Visible=false;
	Form1->Panel1->Visible=false;

	}
Form1->ClearCells();
}

void WinCheck4()
{
if (Cell4[0][0]!=0)
	{
	if (Cell4[0][0]==Cell4[0][1] && Cell4[0][1]==Cell4[0][2])
		{
		if (Cell4[0][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][0]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][0]==Cell4[1][1] && Cell4[1][1]==Cell4[2][2])
		{
		if (Cell4[0][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][0]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][0]==Cell4[1][0] && Cell4[1][0]==Cell4[2][0])
		{
		if (Cell4[0][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][0]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[0][1]!=0)
	{
	if (Cell4[0][1]==Cell4[0][2] && Cell4[0][2]==Cell4[0][3])
		{
		if (Cell4[0][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][1]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][1]==Cell4[1][2] && Cell4[1][2]==Cell4[2][3])
		{
		if (Cell4[0][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][1]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][1]==Cell4[1][1] && Cell4[1][1]==Cell4[2][1])
		{
		if (Cell4[0][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][1]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[0][2]!=0)
	{
	if (Cell4[0][2]==Cell4[1][2] && Cell4[1][2]==Cell4[2][2])
		{
		if (Cell4[0][2]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][2]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][2]==Cell4[1][1] && Cell4[1][1]==Cell4[2][0])
		{
		if (Cell4[0][2]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][2]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[0][3]!=0)
	{
	if (Cell4[0][3]==Cell4[1][3] && Cell4[1][3]==Cell4[2][3])
		{
		if (Cell4[0][3]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][3]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[0][3]==Cell4[1][2] && Cell4[1][2]==Cell4[2][1])
		{
		if (Cell4[0][3]==1)
			{
			win=1;
			}
		else
		if (Cell4[0][3]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[1][0]!=0)
	{
	if (Cell4[1][0]==Cell4[1][1] && Cell4[1][1]==Cell4[1][2])
		{
		if (Cell4[1][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][0]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][0]==Cell4[2][1] && Cell4[2][1]==Cell4[3][2])
		{
		if (Cell4[1][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][0]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][0]==Cell4[2][0] && Cell4[2][0]==Cell4[3][0])
		{
		if (Cell4[1][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][0]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[1][1]!=0)
	{
	if (Cell4[1][1]==Cell4[1][2] && Cell4[1][2]==Cell4[1][3])
		{
		if (Cell4[1][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][1]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][1]==Cell4[2][2] && Cell4[2][2]==Cell4[3][3])
		{
		if (Cell4[1][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][1]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][1]==Cell4[2][1] && Cell4[2][1]==Cell4[3][1])
		{
		if (Cell4[1][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][1]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[1][2]!=0)
	{
	if (Cell4[1][2]==Cell4[2][2] && Cell4[2][2]==Cell4[3][2])
		{
		if (Cell4[1][2]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][2]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][2]==Cell4[2][1] && Cell4[2][1]==Cell4[3][0])
		{
		if (Cell4[1][2]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][2]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[1][3]!=0)
	{
	if (Cell4[1][3]==Cell4[2][3] && Cell4[2][3]==Cell4[3][3])
		{
		if (Cell4[1][3]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][3]==2)
			{
			win=2;
			}
		}
	else
	if (Cell4[1][3]==Cell4[2][2] && Cell4[2][2]==Cell4[3][1])
		{
		if (Cell4[1][3]==1)
			{
			win=1;
			}
		else
		if (Cell4[1][3]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[2][0]!=0)
	{
	if (Cell4[2][0]==Cell4[2][1] && Cell4[2][1]==Cell4[2][2])
		{
		if (Cell4[2][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[2][0]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[2][1]!=0)
	{
	if (Cell4[2][1]==Cell4[2][2] && Cell4[2][2]==Cell4[2][3])
		{
		if (Cell4[2][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[2][1]==2)
			{
			win=2;
			}
		}
	 }

if (Cell4[3][0]!=0)
	{
	if (Cell4[3][0]==Cell4[3][1] && Cell4[3][1]==Cell4[3][2])
		{
		if (Cell4[3][0]==1)
			{
			win=1;
			}
		else
		if (Cell4[3][0]==2)
			{
			win=2;
			}
		}
	}

if (Cell4[3][1]!=0)
	{
	if (Cell4[3][1]==Cell4[3][2] && Cell4[3][2]==Cell4[3][3])
		{
		if (Cell4[3][1]==1)
			{
			win=1;
			}
		else
		if (Cell4[3][1]==2)
			{
			win=2;
			}
		}
	 }

if (win!=0)
	{
	ShowMessage("Игрок №"+IntToStr(win)+" победил!");
	Form1->ClearCells();
	}
}
void __fastcall TForm1::Cell11Click(TObject *Sender)
{
if (Cell11->Caption=="x" || Cell11->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell11->Caption="x";
		Cell4[0][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell11->Caption="o";
		Cell4[0][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Cell12Click(TObject *Sender)
{
if (Cell12->Caption=="x" || Cell12->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell12->Caption="x";
		Cell4[0][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell12->Caption="o";
		Cell4[0][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Cell13Click(TObject *Sender)
{
if (Cell13->Caption=="x" || Cell13->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell13->Caption="x";
		Cell4[0][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell13->Caption="o";
		Cell4[0][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell14Click(TObject *Sender)
{
if (Cell14->Caption=="x" || Cell14->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell14->Caption="x";
		Cell4[0][3]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell14->Caption="o";
		Cell4[0][3]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell21Click(TObject *Sender)
{
if (Cell21->Caption=="x" || Cell21->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell21->Caption="x";
		Cell4[1][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell21->Caption="o";
		Cell4[1][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell22Click(TObject *Sender)
{
if (Cell22->Caption=="x" || Cell22->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell22->Caption="x";
		Cell4[1][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell22->Caption="o";
		Cell4[1][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell23Click(TObject *Sender)
{
if (Cell23->Caption=="x" || Cell23->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell23->Caption="x";
		Cell4[1][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell23->Caption="o";
		Cell4[1][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell24Click(TObject *Sender)
{
if (Cell24->Caption=="x" || Cell24->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell24->Caption="x";
		Cell4[1][3]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell24->Caption="o";
		Cell4[1][3]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell31Click(TObject *Sender)
{
if (Cell31->Caption=="x" || Cell31->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell31->Caption="x";
		Cell4[2][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell31->Caption="o";
		Cell4[2][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell32Click(TObject *Sender)
{
if (Cell32->Caption=="x" || Cell32->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell32->Caption="x";
		Cell4[2][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell32->Caption="o";
		Cell4[2][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell33Click(TObject *Sender)
{
if (Cell33->Caption=="x" || Cell33->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell33->Caption="x";
		Cell4[2][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell33->Caption="o";
		Cell4[2][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell34Click(TObject *Sender)
{
if (Cell34->Caption=="x" || Cell34->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell34->Caption="x";
		Cell4[2][3]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell34->Caption="o";
		Cell4[2][3]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell41Click(TObject *Sender)
{
if (Cell41->Caption=="x" || Cell41->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell41->Caption="x";
		Cell4[3][0]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell41->Caption="o";
		Cell4[3][0]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell42Click(TObject *Sender)
{
if (Cell42->Caption=="x" || Cell42->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell42->Caption="x";
		Cell4[3][1]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell42->Caption="o";
		Cell4[3][1]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell43Click(TObject *Sender)
{
if (Cell43->Caption=="x" || Cell43->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell43->Caption="x";
		Cell4[3][2]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell43->Caption="o";
		Cell4[3][2]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cell44Click(TObject *Sender)
{
if (Cell44->Caption=="x" || Cell44->Caption=="o")
	{
	ShowMessage("Ячейка занята!");
	}
else
	{
	if (Player==1)
		{
		Cell44->Caption="x";
		Cell4[3][3]=1;
		Player=2;
		Turns++;
		}
	else
	if (Player==2)
		{
		Cell44->Caption="o";
		Cell4[3][3]=2;
		Player=1;
		Turns++;
		}
	}
WinCheck4();
FailCheck(Form1->Difficulty);
PlayerNumber();
}
//---------------------------------------------------------------------------

