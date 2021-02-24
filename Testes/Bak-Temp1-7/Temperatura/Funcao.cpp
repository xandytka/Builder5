//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Stdio.h"
#include "Funcao.h"
#include "Unit1.h"
#pragma package(smart_init)
//---Minhas funçoes-------------------------------------------------------------
//---Mostra Tela de Supervisão--------------------------------------------------
void MostraSuper()
{
Form1->GroupBox4->Caption="Supervisão e Controle";
Form1->GroupBox9->Caption="Registros de Eventos";
Form1->GroupBox1->Visible=false;
Form1->GroupBox2->Visible=false;
Form1->GroupBox3->Visible=false;
Form1->GroupBox4->Visible=true;
Form1->GroupBox5->Visible=true;
Form1->GroupBox6->Visible=true;
Form1->GroupBox7->Visible=true;
Form1->GroupBox8->Visible=true;
Form1->GroupBox9->Visible=true;
Form1->GroupBox10->Visible=false;
Form1->GroupBox11->Visible=false;
Form1->Update();
}
//---Mostra Tela de Configuração------------------------------------------------
void MostraConfig()
{
Form1->GroupBox4->Caption="Configuração dos Sensores";
Form1->GroupBox10->Caption="Configuração do Gabinete";
Form1->GroupBox1->Visible=true;
Form1->GroupBox2->Visible=true;
Form1->GroupBox3->Visible=true;
Form1->GroupBox4->Visible=true;
Form1->GroupBox5->Visible=false;
Form1->GroupBox6->Visible=false;
Form1->GroupBox7->Visible=false;
Form1->GroupBox8->Visible=false;
Form1->GroupBox9->Visible=false;
Form1->GroupBox10->Visible=true;
Form1->GroupBox11->Visible=false;
Form1->Update();
}
//---Mostra Cliente/Servidor----------------------------------------------------
void MostraMsg()
{
Form1->GroupBox1->Visible=false;
Form1->GroupBox2->Visible=false;
Form1->GroupBox3->Visible=false;
Form1->GroupBox4->Visible=false;
Form1->GroupBox5->Visible=false;
Form1->GroupBox6->Visible=false;
Form1->GroupBox7->Visible=false;
Form1->GroupBox8->Visible=false;
Form1->GroupBox9->Visible=false;
Form1->GroupBox10->Visible=false;
Form1->GroupBox11->Visible=true;
Form1->Update();
}
//---Inicia com opções ocultas e Desmarcadas e Carrega Figuras------------------
void Inicia()
{
Form1->Table1->Active=true;
Form1->GroupBox1->Visible=false;
Form1->GroupBox2->Visible=false;
Form1->GroupBox3->Visible=false;
Form1->GroupBox4->Visible=false;
Form1->GroupBox5->Visible=false;
Form1->GroupBox6->Visible=false;
Form1->GroupBox7->Visible=false;
Form1->GroupBox8->Visible=false;
Form1->GroupBox9->Visible=false;
Form1->GroupBox10->Visible=false;
Form1->GroupBox11->Visible=false;
Form1->Image25->Visible=true;
Form1->Image26->Visible=false;
Form1->Image27->Visible=false;
Form1->Image28->Visible=false;
Form1->Image29->Visible=false;
Form1->Image30->Visible=false;
Form1->Image31->Visible=false;
Form1->Image32->Visible=false;
Form1->Image33->Visible=false;
Form1->Image34->Visible=false;
Form1->Image35->Visible=false;
//---Ventilador1 Supervisão-----------------------------------------------------
Form1->Image1->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image2->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image3->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent2.ico");
Form1->Image4->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent3.ico");
Form1->Image5->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent4.ico");
Form1->Image6->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent5.ico");
//---Ventilador2 Supervisão-----------------------------------------------------
Form1->Image7->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image8->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image9->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent2.ico");
Form1->Image10->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent3.ico");
Form1->Image11->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent4.ico");
Form1->Image12->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent5.ico");
//---Ventilador3 Supervisão-----------------------------------------------------
Form1->Image13->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image14->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image15->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent2.ico");
Form1->Image16->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent3.ico");
Form1->Image17->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent4.ico");
Form1->Image18->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent5.ico");
//---Ventilador4 Supervisão-----------------------------------------------------
Form1->Image19->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image20->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image21->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent2.ico");
Form1->Image22->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent3.ico");
Form1->Image23->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent4.ico");
Form1->Image24->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent5.ico");
//---Habilita o Timer1 para efeito do ventilador--------------------------------
Form1->Timer1->Enabled=false;
//---Gabinete Configuração------------------------------------------------------
Form1->Image25->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\Gabinete.bmp");
//---Ventiladores do Gabinete-------------------------------------------------------
Form1->Image26->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image27->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image28->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
Form1->Image29->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\vent1.ico");
//---Sensores do Gabinete-------------------------------------------------------
Form1->Image30->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image31->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image32->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
Form1->Image33->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\tempok.ico");
//---Alarmes do Gabinete-------------------------------------------------------
Form1->Image34->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\Lampada1.ico");
Form1->Image35->Picture->LoadFromFile("C:\\PROGRAMAS\\Temperatura\\icones\\Sonoro1.ico");
}
//---Abre Arquivo de Configuração Modo Binario----------------------------------
void AbreArq()
{
        Form1->Edit13->Text="";
        AnsiString texto;
        char caracter;
        FILE *arquivo;
        if (Form1->OpenDialog1->Execute())
        {
         try
            {
                Form1->Caption="Zero Grau "+Form1->OpenDialog1->FileName;
                if ((arquivo=fopen(Form1->OpenDialog1->FileName.c_str(),"a+")) == NULL)
                {
                Application->MessageBox("Ocorreu uma falha ao gravar o arquivo !",
                        "Problema de Gravação",MB_OK);
                }
                else
                {
                        while ((caracter = getc(arquivo))!= EOF)
                        {
                        Form1->Edit13->Text=Form1->Edit13->Text+caracter;
                        }
                        fclose(arquivo);
                        texto=Form1->Edit13->Text;
                        Form1->RadioButton1->Checked=(bool)(StrToInt(texto[1]));
                        Form1->RadioButton2->Checked=(bool)(StrToInt(texto[2]));
                        Form1->RadioButton3->Checked=(bool)(StrToInt(texto[3]));
                        Form1->RadioButton4->Checked=(bool)(StrToInt(texto[4]));
                        Form1->RadioButton5->Checked=(bool)(StrToInt(texto[5]));
                        Form1->RadioButton6->Checked=(bool)(StrToInt(texto[6]));
                        Form1->RadioButton7->Checked=(bool)(StrToInt(texto[7]));
                        Form1->RadioButton8->Checked=(bool)(StrToInt(texto[8]));
                        Form1->RadioButton9->Checked=(bool)(StrToInt(texto[9]));
                        Form1->RadioButton10->Checked=(bool)(StrToInt(texto[10]));
                        Form1->RadioButton11->Checked=(bool)(StrToInt(texto[11]));
                }
            }
            catch(...)
            {
            Application->MessageBox("Erro na Abertura do Arquivo.", "File Error", IDOK);
            }
        }
}
//---Salvar Arquivo de Configuração Modo Binario--------------------------------
void SalvaArq()
{
        Form1->Edit13->Text=(int)Form1->RadioButton1->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton2->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton3->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton4->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton5->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton6->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton7->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton8->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton9->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton10->Checked;
        Form1->Edit13->Text=Form1->Edit13->Text+(int)Form1->RadioButton11->Checked;
        AnsiString texto;
        FILE *arquivo;
        int i;
        if (Form1->SaveDialog1->Execute())
        {
          try
            {
                Form1->Caption="Zero Grau "+Form1->SaveDialog1->FileName;
                if ((arquivo=fopen(Form1->SaveDialog1->FileName.c_str(),"w+")) == NULL)
                {
                Application->MessageBox("Ocorreu uma falha ao gravar o arquivo !",
                        "Problema de Gravação",MB_OK);
                }
                else
                {
                        texto= Form1->Edit13->Text;
                        for(i=1;i<=(int)(strlen(Form1->Edit13->Text.c_str()));i++)
                        {
                        putc(texto[i],arquivo);
                        }
                        fclose(arquivo);
                }
            }
            catch(...)
            {
            Application->MessageBox("Erro na Gravação do Arquivo.", "File Error", IDOK);
            }
        }
}
//---Animação dos Ventiladores--------------------------------------------------
void MovVent()
{
mostra++;
if(mostra==5)
        {
        mostra=0;
        }
if(mostra==0)
        {
        Form1->Image2->Visible=true;
        Form1->Image3->Visible=false;
        Form1->Image4->Visible=false;
        Form1->Image5->Visible=false;
        Form1->Image6->Visible=false;

        Form1->Image8->Visible=true;
        Form1->Image9->Visible=false;
        Form1->Image10->Visible=false;
        Form1->Image11->Visible=false;
        Form1->Image12->Visible=false;

        Form1->Image14->Visible=true;
        Form1->Image15->Visible=false;
        Form1->Image16->Visible=false;
        Form1->Image17->Visible=false;
        Form1->Image18->Visible=false;

        Form1->Image20->Visible=true;
        Form1->Image21->Visible=false;
        Form1->Image22->Visible=false;
        Form1->Image23->Visible=false;
        Form1->Image24->Visible=false;

        Form1->Update();
        }
if(mostra==1)
        {
        Form1->Image2->Visible=false;
        Form1->Image3->Visible=true;
        Form1->Image4->Visible=false;
        Form1->Image5->Visible=false;
        Form1->Image6->Visible=false;

        Form1->Image8->Visible=false;
        Form1->Image9->Visible=true;
        Form1->Image10->Visible=false;
        Form1->Image11->Visible=false;
        Form1->Image12->Visible=false;

        Form1->Image14->Visible=false;
        Form1->Image15->Visible=true;
        Form1->Image16->Visible=false;
        Form1->Image17->Visible=false;
        Form1->Image18->Visible=false;

        Form1->Image20->Visible=false;
        Form1->Image21->Visible=true;
        Form1->Image22->Visible=false;
        Form1->Image23->Visible=false;
        Form1->Image24->Visible=false;

        Form1->Update();
        }
if(mostra==2)
        {
        Form1->Image2->Visible=false;
        Form1->Image3->Visible=false;
        Form1->Image4->Visible=true;
        Form1->Image5->Visible=false;
        Form1->Image6->Visible=false;

        Form1->Image8->Visible=false;
        Form1->Image9->Visible=false;
        Form1->Image10->Visible=true;
        Form1->Image11->Visible=false;
        Form1->Image12->Visible=false;

        Form1->Image14->Visible=false;
        Form1->Image15->Visible=false;
        Form1->Image16->Visible=true;
        Form1->Image17->Visible=false;
        Form1->Image18->Visible=false;

        Form1->Image20->Visible=false;
        Form1->Image21->Visible=false;
        Form1->Image22->Visible=true;
        Form1->Image23->Visible=false;
        Form1->Image24->Visible=false;

        Form1->Update();
        }
if(mostra==3)
        {
        Form1->Image2->Visible=false;
        Form1->Image3->Visible=false;
        Form1->Image4->Visible=false;
        Form1->Image5->Visible=true;
        Form1->Image6->Visible=false;

        Form1->Image8->Visible=false;
        Form1->Image9->Visible=false;
        Form1->Image10->Visible=false;
        Form1->Image11->Visible=true;
        Form1->Image12->Visible=false;

        Form1->Image14->Visible=false;
        Form1->Image15->Visible=false;
        Form1->Image16->Visible=false;
        Form1->Image17->Visible=true;
        Form1->Image18->Visible=false;

        Form1->Image20->Visible=false;
        Form1->Image21->Visible=false;
        Form1->Image22->Visible=false;
        Form1->Image23->Visible=true;
        Form1->Image24->Visible=false;

        Form1->Update();
        }
if(mostra==4)
        {
        Form1->Image2->Visible=false;
        Form1->Image3->Visible=false;
        Form1->Image4->Visible=false;
        Form1->Image5->Visible=false;
        Form1->Image6->Visible=true;

        Form1->Image8->Visible=false;
        Form1->Image9->Visible=false;
        Form1->Image10->Visible=false;
        Form1->Image11->Visible=false;
        Form1->Image12->Visible=true;

        Form1->Image14->Visible=false;
        Form1->Image15->Visible=false;
        Form1->Image16->Visible=false;
        Form1->Image17->Visible=false;
        Form1->Image18->Visible=true;

        Form1->Image20->Visible=false;
        Form1->Image21->Visible=false;
        Form1->Image22->Visible=false;
        Form1->Image23->Visible=false;
        Form1->Image24->Visible=true;

        Form1->Update();
        }
}
//---Nova Configuração----------------------------------------------------------
void NovaConfig()
{
Form1->Caption="Zero Grau  (Nenhum)";
Form1->RadioButton1->Checked=false;
Form1->RadioButton2->Checked=false;
Form1->RadioButton3->Checked=false;
Form1->RadioButton4->Checked=false;
Form1->RadioButton5->Checked=false;
Form1->RadioButton6->Checked=false;
Form1->RadioButton7->Checked=false;
Form1->RadioButton8->Checked=false;
Form1->RadioButton9->Checked=false;
Form1->RadioButton10->Checked=false;
Form1->RadioButton11->Checked=false;
Inicia();
MostraConfig();
}
//---Mostra Sensores do Gabinete------------------------------------------------
void NumSensor(int Sensor)
{
if(Sensor==1)
        {
        Form1->Image30->Visible=true;
        Form1->Image31->Visible=false;
        Form1->Image32->Visible=false;
        Form1->Image33->Visible=false;
        Form1->Image30->Top=184;Form1->Image30->Left=352;
        Form1->Update();
        }
if(Sensor==2)
        {
        Form1->Image30->Visible=true;
        Form1->Image31->Visible=true;
        Form1->Image32->Visible=false;
        Form1->Image33->Visible=false;
        Form1->Image30->Top=200;Form1->Image30->Left=272;
        Form1->Image31->Top=160;Form1->Image31->Left=416;
        Form1->Update();
        }
if(Sensor==3)
        {
        Form1->Image30->Visible=true;
        Form1->Image31->Visible=true;
        Form1->Image32->Visible=true;
        Form1->Image33->Visible=false;
        Form1->Image30->Top=208;Form1->Image30->Left=256;
        Form1->Image31->Top=184;Form1->Image31->Left=352;
        Form1->Image32->Top=160;Form1->Image32->Left=416;
        Form1->Update();
        }
if(Sensor==4)
        {
        Form1->Image30->Visible=true;
        Form1->Image31->Visible=true;
        Form1->Image32->Visible=true;
        Form1->Image33->Visible=true;
        Form1->Image30->Top=208;Form1->Image30->Left=184;
        Form1->Image32->Top=200;Form1->Image32->Left=272;
        Form1->Image31->Top=176;Form1->Image31->Left=360;
        Form1->Image33->Top=136;Form1->Image33->Left=424;
        Form1->Update();
        }
}
//---Mostra Ventiladores do Gabinete--------------------------------------------
void NumVent(int Vent)
{
if(Vent==1)
        {
        Form1->Image26->Visible=true;
        Form1->Image27->Visible=false;
        Form1->Image28->Visible=false;
        Form1->Image29->Visible=false;
        Form1->Image26->Top=136;Form1->Image26->Left=248;
        Form1->Update();
        }
if(Vent==2)
        {
        Form1->Image26->Visible=true;
        Form1->Image27->Visible=true;
        Form1->Image28->Visible=false;
        Form1->Image29->Visible=false;
        Form1->Image26->Top=168;Form1->Image26->Left=160;
        Form1->Image27->Top=120;Form1->Image27->Left=304;
        Form1->Update();
        }
if(Vent==3)
        {
        Form1->Image26->Visible=true;
        Form1->Image27->Visible=true;
        Form1->Image28->Visible=true;
        Form1->Image29->Visible=false;
        Form1->Image26->Top=168;Form1->Image26->Left=160;
        Form1->Image27->Top=144;Form1->Image27->Left=232;
        Form1->Image28->Top=120;Form1->Image28->Left=296;
        Form1->Update();
        }
if(Vent==4)
        {
        Form1->Image26->Visible=true;
        Form1->Image27->Visible=true;
        Form1->Image28->Visible=true;
        Form1->Image29->Visible=true;
        Form1->Image26->Top=176;Form1->Image26->Left=128;
        Form1->Image27->Top=152;Form1->Image27->Left=200;
        Form1->Image28->Top=128;Form1->Image28->Left=264;
        Form1->Image29->Top=112;Form1->Image29->Left=336;
        Form1->Update();
        }
}
//------------------------------------------------------------------------------
void Alarme(int Tipo)
{
if(Tipo==1)
        {
        Form1->Image34->Visible=true;
        Form1->Image35->Visible=false;
        }
if(Tipo==2)
        {
        Form1->Image34->Visible=false;
        Form1->Image35->Visible=true;
        }
if(Tipo==3)
        {
        Form1->Image34->Visible=true;
        Form1->Image35->Visible=true;
        }
}
//------------------------------------------------------------------------------

