//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include <NMMSG.hpp>
#include <Psock.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TStatusBar *StatusBar1;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton6;
        TRadioButton *RadioButton7;
        TGroupBox *GroupBox4;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TStaticText *StaticText1;
        TStaticText *StaticText2;
        TStaticText *StaticText3;
        TStaticText *StaticText4;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TStaticText *StaticText5;
        TStaticText *StaticText6;
        TStaticText *StaticText7;
        TEdit *Edit7;
        TEdit *Edit8;
        TEdit *Edit9;
        TStaticText *StaticText8;
        TStaticText *StaticText9;
        TStaticText *StaticText10;
        TEdit *Edit10;
        TEdit *Edit11;
        TEdit *Edit12;
        TStaticText *StaticText11;
        TStaticText *StaticText12;
        TButton *Button1;
        TGroupBox *GroupBox5;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TGroupBox *GroupBox6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TGroupBox *GroupBox7;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TGroupBox *GroupBox8;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image6;
        TImage *Image1;
        TTimer *Timer1;
        TMainMenu *MainMenu1;
        TMenuItem *Arquivo1;
        TMenuItem *NovaConfigurao1;
        TMenuItem *AbrirConfigurao1;
        TMenuItem *SalvarConfigurao1;
        TMenuItem *Fechar1;
        TCoolBar *CoolBar1;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TImageList *ImageList1;
        TMenuItem *Dispositivo1;
        TMenuItem *Configurar1;
        TMenuItem *Superviso1;
        TMenuItem *Comunicao1;
        TMenuItem *PCControlador1;
        TMenuItem *ControladorPC1;
        TMenuItem *ClienteServidor1;
        TMenuItem *Ajuda1;
        TMenuItem *Ajuda2;
        TMenuItem *Sobre1;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TToolButton *ToolButton10;
        TToolButton *ToolButton11;
        TToolButton *ToolButton12;
        TToolButton *ToolButton13;
        TToolButton *ToolButton14;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TEdit *Edit13;
        TTimer *Timer2;
        TMenuItem *N1;
        TMenuItem *N2;
        TDataSource *DataSource1;
        TTable *Table1;
        TGroupBox *GroupBox9;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TGroupBox *GroupBox10;
        TImage *Image25;
        TRadioButton *RadioButton8;
        TRadioButton *RadioButton9;
        TRadioButton *RadioButton10;
        TRadioButton *RadioButton11;
        TGroupBox *GroupBox11;
        TMemo *Memo1;
        TEdit *Edit14;
        TButton *Button2;
        TEdit *Edit15;
        TEdit *Edit16;
        TStaticText *StaticText13;
        TStaticText *StaticText14;
        TNMMSGServ *NMMSGServ1;
        TNMMsg *NMMsg1;
        TStatusBar *StatusBar2;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TImage *Image29;
        TImage *Image30;
        TImage *Image31;
        TImage *Image32;
        TImage *Image33;
        TImage *Image34;
        TImage *Image35;
        TDatabase *Database1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Fechar1Click(TObject *Sender);
        void __fastcall Superviso1Click(TObject *Sender);
        void __fastcall Configurar1Click(TObject *Sender);
        void __fastcall AbrirConfigurao1Click(TObject *Sender);
        void __fastcall SalvarConfigurao1Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall NovaConfigurao1Click(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Sobre1Click(TObject *Sender);
        void __fastcall ToolButton14Click(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall RadioButton6Click(TObject *Sender);
        void __fastcall RadioButton7Click(TObject *Sender);
        void __fastcall RadioButton8Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall RadioButton9Click(TObject *Sender);
        void __fastcall RadioButton10Click(TObject *Sender);
        void __fastcall RadioButton11Click(TObject *Sender);
        void __fastcall Edit14KeyPress(TObject *Sender, char &Key);
        void __fastcall NMMSGServ1ClientContact(TObject *Sender);
        void __fastcall NMMSGServ1MSG(TComponent *Sender,
          const AnsiString sFrom, const AnsiString sMsg);
        void __fastcall NMMSGServ1Status(TComponent *Sender,
          AnsiString Status);
        void __fastcall NMMsg1Connect(TObject *Sender);
        void __fastcall NMMsg1ConnectionFailed(TObject *Sender);
        void __fastcall NMMsg1Disconnect(TObject *Sender);
        void __fastcall NMMsg1HostResolved(TComponent *Sender);
        void __fastcall NMMsg1InvalidHost(bool &Handled);
        void __fastcall NMMsg1MessageSent(TObject *Sender);
        void __fastcall NMMsg1Status(TComponent *Sender,
          AnsiString Status);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ToolButton11Click(TObject *Sender);
        void __fastcall ClienteServidor1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
