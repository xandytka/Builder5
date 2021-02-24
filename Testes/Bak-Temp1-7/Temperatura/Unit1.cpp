#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Funcao.h"
#include "Sobre.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//------------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---Inicia com Opções Ocultas--------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{Inicia();}
//---Faz o Movimento dos Ventiladores-------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{MovVent();}
//---Botao de teste-------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{Timer1->Enabled=true;}
//---Nova Configuração no Menu--------------------------------------------------
void __fastcall TForm1::NovaConfigurao1Click(TObject *Sender)
{NovaConfig();}
//---Abre Arquivo no Menu-------------------------------------------------------
void __fastcall TForm1::AbrirConfigurao1Click(TObject *Sender)
{AbreArq();}
//---Salvar Arquivo no Menu-----------------------------------------------------
void __fastcall TForm1::SalvarConfigurao1Click(TObject *Sender)
{SalvaArq();}
//---Fecha Programa no Menu-----------------------------------------------------
void __fastcall TForm1::Fechar1Click(TObject *Sender)
{Close();}
//---Mostra Configuração no Menu------------------------------------------------
void __fastcall TForm1::Configurar1Click(TObject *Sender)
{MostraConfig();}
//---Mostra Supervisão no Menu--------------------------------------------------
void __fastcall TForm1::Superviso1Click(TObject *Sender)
{MostraSuper();}
//---Mostra Cliente/Servidor no Menu--------------------------------------------
void __fastcall TForm1::ClienteServidor1Click(TObject *Sender)
{MostraMsg();}
//----Mostra SOBRE no Menu------------------------------------------------------
void __fastcall TForm1::Sobre1Click(TObject *Sender)
{AboutBox->ShowModal();}
//---Nova Configuração no ToolBar-----------------------------------------------
void __fastcall TForm1::ToolButton1Click(TObject *Sender)
{NovaConfig();}
//---Abre Arquivo no ToolBar----------------------------------------------------
void __fastcall TForm1::ToolButton2Click(TObject *Sender)
{AbreArq();}
//---Salva Arquivo no ToolBar---------------------------------------------------
void __fastcall TForm1::ToolButton3Click(TObject *Sender)
{SalvaArq();}
//---Fecha o Programa no ToolBar------------------------------------------------
void __fastcall TForm1::ToolButton4Click(TObject *Sender)
{Close();}
//---Mostra Configuração no ToolBar---------------------------------------------
void __fastcall TForm1::ToolButton6Click(TObject *Sender)
{MostraConfig();}
//---Mostra Supervisão no ToolBar-----------------------------------------------
void __fastcall TForm1::ToolButton7Click(TObject *Sender)
{MostraSuper();}
//---Mostra Cliente/Servidor no ToolBar-----------------------------------------
void __fastcall TForm1::ToolButton11Click(TObject *Sender)
{MostraMsg();}
//---Mostra SOBRE no ToolBar----------------------------------------------------
void __fastcall TForm1::ToolButton14Click(TObject *Sender)
{AboutBox->ShowModal();}
//---Gabinete com 1 Sensor------------------------------------------------------
void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{NumSensor(1);}
//---Gabinete com 2 Sensores----------------------------------------------------
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{NumSensor(2);}
//---Gabinete com 3 Sensores----------------------------------------------------
void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{NumSensor(3);}
//---Gabinete com 4 Sensores----------------------------------------------------
void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{NumSensor(4);}
//---Gabinete com 1 Ventilador--------------------------------------------------
void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{NumVent(1);}
//---Gabinete com 2 Ventiladores------------------------------------------------
void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{NumVent(2);}
//---Gabinete com 3 Ventiladores------------------------------------------------
void __fastcall TForm1::RadioButton7Click(TObject *Sender)
{NumVent(3);}
//---Gabinete com 4 Ventiladores------------------------------------------------
void __fastcall TForm1::RadioButton8Click(TObject *Sender)
{NumVent(4);}
//---Gabinete com Alarme Visual-------------------------------------------------
void __fastcall TForm1::RadioButton9Click(TObject *Sender)
{Alarme(1);}
//---Gabinete com Alarme Sonoro-------------------------------------------------
void __fastcall TForm1::RadioButton10Click(TObject *Sender)
{Alarme(2);}
//---Gabinete com Alarme Visual e Sonoro----------------------------------------
void __fastcall TForm1::RadioButton11Click(TObject *Sender)
{Alarme(3);}
//------------------------------------------------------------------------------
void __fastcall TForm1::Edit14KeyPress(TObject *Sender, char &Key)
{
  if (Key == 13)
  {
    Form1->NMMsg1->Host =Form1->Edit16->Text;
    Form1->NMMsg1->FromName =Form1->Edit15->Text;
    Form1->NMMsg1->PostIt(Form1->Edit14->Text);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMSGServ1ClientContact(TObject *Sender)
{
  Form1->NMMSGServ1->ReportLevel = Status_Basic;
  Form1->NMMSGServ1->TimeOut = 90000;
  Form1->StatusBar2->SimpleText = "Client connected";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMSGServ1MSG(TComponent *Sender,
      const AnsiString sFrom, const AnsiString sMsg)
{
Form1->Memo1->Lines->Add(sFrom+"::"+sMsg);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMSGServ1Status(TComponent *Sender,
      AnsiString Status)
{
if (Form1->StatusBar2 != 0)
    Form1->StatusBar2->SimpleText = Status;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1Connect(TObject *Sender)
{
Form1->StatusBar2->SimpleText = "Connected";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1ConnectionFailed(TObject *Sender)
{
  ShowMessage("Connection Failed");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1Disconnect(TObject *Sender)
{
if (Form1->StatusBar2 != 0)
    Form1->StatusBar2->SimpleText = "Disconnected";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1HostResolved(TComponent *Sender)
{
Form1->StatusBar2->SimpleText = "Host Resolved";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1InvalidHost(bool &Handled)
{
AnsiString NewHost;
  if (InputQuery("Invalid Host", "Please Choose another host", NewHost))
  {
    //ShowMessage(NewHost);
    Form1->NMMsg1->Host = NewHost;
    Handled = true;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NMMsg1MessageSent(TObject *Sender)
{
  ShowMessage("Message Sent");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NMMsg1Status(TComponent *Sender, AnsiString Status)
{
  if (Form1->StatusBar2 != 0)
      Form1->StatusBar2->SimpleText = Status;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Form1->NMMsg1->Host =Form1->Edit16->Text;
Form1->NMMsg1->FromName =Form1->Edit15->Text;
Form1->NMMsg1->PostIt(Form1->Edit14->Text);
}
//---------------------------------------------------------------------------
//-----Mostra a Data e a Hora no StatusBar--------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
StatusBar1->Panels->Items[0]->Text = DateToStr(Date());
StatusBar1->Panels->Items[1]->Text = TimeToStr(Time());
StatusBar1->Panels->Items[2]->Text = Form1->Edit13->Text;
}
//-----Fecha Banco de Dados ao Sair do Aplicativo--------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Table1->Active=false;
}

