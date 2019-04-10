//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Quit;
	TLabel *Label1;
	TButton *C11;
	TButton *C12;
	TButton *C13;
	TButton *C21;
	TButton *C22;
	TButton *C23;
	TButton *C31;
	TButton *C32;
	TButton *C33;
	TLabel *Label2;
	TLabel *Label3;
	TButton *NewGame;
	TPanel *Panel1;
	TButton *Button1;
	TPanel *Panel2;
	TButton *Cell32;
	TButton *Cell42;
	TButton *Cell41;
	TButton *Cell11;
	TButton *Cell23;
	TButton *Cell21;
	TButton *Cell31;
	TButton *Cell13;
	TButton *Cell12;
	TButton *Cell14;
	TButton *Cell22;
	TButton *Cell24;
	TButton *Cell34;
	TButton *Cell33;
	TButton *Cell43;
	TButton *Cell44;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall QuitClick(TObject *Sender);
	void __fastcall C11Click(TObject *Sender);
	void __fastcall C12Click(TObject *Sender);
	void __fastcall C13Click(TObject *Sender);
	void __fastcall C21Click(TObject *Sender);
	void __fastcall C22Click(TObject *Sender);
	void __fastcall C23Click(TObject *Sender);
	void __fastcall C31Click(TObject *Sender);
	void __fastcall C32Click(TObject *Sender);
	void __fastcall C33Click(TObject *Sender);
	void __fastcall NewGameClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Cell11Click(TObject *Sender);
	void __fastcall Cell12Click(TObject *Sender);
	void __fastcall Cell13Click(TObject *Sender);
	void __fastcall Cell14Click(TObject *Sender);
	void __fastcall Cell21Click(TObject *Sender);
	void __fastcall Cell22Click(TObject *Sender);
	void __fastcall Cell23Click(TObject *Sender);
	void __fastcall Cell24Click(TObject *Sender);
	void __fastcall Cell31Click(TObject *Sender);
	void __fastcall Cell32Click(TObject *Sender);
	void __fastcall Cell33Click(TObject *Sender);
	void __fastcall Cell34Click(TObject *Sender);
	void __fastcall Cell41Click(TObject *Sender);
	void __fastcall Cell42Click(TObject *Sender);
	void __fastcall Cell43Click(TObject *Sender);
	void __fastcall Cell44Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	int Difficulty;
	void ClearCells();
    void SetDifficulty(int Dif);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

