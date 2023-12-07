#pragma once
#include "Ajouterpersonnel.h"
#include "supprimerpersonnel.h"
#include "modifierpersonnel.h"
#include "afficherpersonnel.h"
#include "ajouterclient.h"
#include "supprimerclient.h"
#include "modifierclient.h"
#include "afficherclient.h"
#include "modifiercommande.h"
#include "ajoutercommande.h"
#include "supprimercommande.h"
#include "affichercommande.h"
#include "supprimerarticle.h"
#include "modifierarticle.h"
#include "ajouterarticle.h"
#include "afficherarticle.h"
namespace POO {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
            ajouterPersonnelFormIsOpen = false;
            supprimerPersonnelFormIsOpen = false;
            modifierPersonnelFormIsOpen = false;
            afficherPersonnelFormIsOpen = false;

            ajouterClientFormIsOpen = false;
            supprimerClientFormIsOpen = false;
            modifierClientFormIsOpen = false;
            afficherClientFormIsOpen = false;

            ajouterCommandeFormIsOpen = false;
            supprimerCommandeFormIsOpen = false;
            modifierCommandeFormIsOpen = false;
            afficherCommandeFormIsOpen = false;

            ajouterArticleFormIsOpen = false;
            supprimerArticleFormIsOpen = false;
            modifierArticleFormIsOpen = false;
            afficherArticleFormIsOpen = false;
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        POO_JAG::modifierpersonnel^ modifierPersonnelForm;
        POO_JAG::supprimerpersonnel^ supprimerPersonnelForm;
        POO_JAG::Ajouterpersonnel^ ajouterPersonnelForm;
        POO_JAG::afficherpersonnel^ afficherPersonnelForm;

        POO_JAG::modifierclient^ modifierClientForm;
        POO_JAG::supprimerclient^ supprimerClientForm;
        POO_JAG::ajouterclient^ ajouterClientForm;
        POO_JAG::afficherclient^ afficherClientForm;

        POO_JAG::modifiercommande^ modifierCommandeForm;
        POO_JAG::supprimercommande^ supprimerCommandeForm;
        POO_JAG::ajoutercommande^ ajouterCommandeForm;
        POO_JAG::affichercommande^ afficherCommandeForm;

        POO_JAG::modifierarticle^ modifierArticleForm;
        POO_JAG::supprimerarticle^ supprimerArticleForm;
        POO_JAG::ajouterarticle^ ajouterArticleForm;
        POO_JAG::afficherarticle^ afficherArticleForm;

        System::Windows::Forms::TabControl^ tabControl1;
        System::Windows::Forms::DataGridView^ dataGridView1;
        System::Windows::Forms::TabPage^ tabPage1;
        System::Windows::Forms::TabPage^ tabPage2;
        System::Windows::Forms::TabPage^ tabPage3;
        System::Windows::Forms::TabPage^ tabPage4;
        System::Windows::Forms::TabPage^ tabPage5;
        System::Windows::Forms::TabPage^ tabPage6;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::DataGridView^ dataGridView3;
    private: System::Windows::Forms::DataGridView^ dataGridView4;
    private: System::Windows::Forms::DataGridView^ dataGridView5;
    private: System::Windows::Forms::DataGridView^ dataGridView6;
    private: System::Windows::Forms::DataGridView^ dataGridView7;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;

           bool ajouterPersonnelFormIsOpen;
           bool supprimerPersonnelFormIsOpen;
           bool modifierPersonnelFormIsOpen;
           bool afficherPersonnelFormIsOpen;

           bool ajouterClientFormIsOpen;
           bool supprimerClientFormIsOpen;
           bool modifierClientFormIsOpen;
           bool afficherClientFormIsOpen;

           bool ajouterCommandeFormIsOpen;
           bool supprimerCommandeFormIsOpen;
           bool modifierCommandeFormIsOpen;
           bool afficherCommandeFormIsOpen;

           bool ajouterArticleFormIsOpen;
           bool supprimerArticleFormIsOpen;
           bool modifierArticleFormIsOpen;
           bool afficherArticleFormIsOpen;

    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox2;






    private: System::ComponentModel::IContainer^ components;











#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
               this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
               this->button20 = (gcnew System::Windows::Forms::Button());
               this->button19 = (gcnew System::Windows::Forms::Button());
               this->button18 = (gcnew System::Windows::Forms::Button());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
               this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
               this->button5 = (gcnew System::Windows::Forms::Button());
               this->button4 = (gcnew System::Windows::Forms::Button());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
               this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
               this->button6 = (gcnew System::Windows::Forms::Button());
               this->button7 = (gcnew System::Windows::Forms::Button());
               this->button8 = (gcnew System::Windows::Forms::Button());
               this->button9 = (gcnew System::Windows::Forms::Button());
               this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
               this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
               this->button10 = (gcnew System::Windows::Forms::Button());
               this->button12 = (gcnew System::Windows::Forms::Button());
               this->button13 = (gcnew System::Windows::Forms::Button());
               this->button14 = (gcnew System::Windows::Forms::Button());
               this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
               this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
               this->button11 = (gcnew System::Windows::Forms::Button());
               this->button15 = (gcnew System::Windows::Forms::Button());
               this->button16 = (gcnew System::Windows::Forms::Button());
               this->button17 = (gcnew System::Windows::Forms::Button());
               this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
               this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
               this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
               this->button21 = (gcnew System::Windows::Forms::Button());
               this->button22 = (gcnew System::Windows::Forms::Button());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->button23 = (gcnew System::Windows::Forms::Button());
               this->button24 = (gcnew System::Windows::Forms::Button());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->button25 = (gcnew System::Windows::Forms::Button());
               this->button26 = (gcnew System::Windows::Forms::Button());
               this->button27 = (gcnew System::Windows::Forms::Button());
               this->button28 = (gcnew System::Windows::Forms::Button());
               this->button29 = (gcnew System::Windows::Forms::Button());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->tabControl1->SuspendLayout();
               this->tabPage1->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
               this->tabPage2->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
               this->tabPage3->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
               this->tabPage4->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
               this->tabPage5->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
               this->tabPage6->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
               this->SuspendLayout();
               // 
               // dataGridView1
               // 
               this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(16, 54);
               this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
               this->dataGridView1->MaximumSize = System::Drawing::Size(899, 1329);
               this->dataGridView1->MinimumSize = System::Drawing::Size(899, 0);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->RowHeadersWidth = 51;
               this->dataGridView1->Size = System::Drawing::Size(899, 513);
               this->dataGridView1->TabIndex = 0;
               // 
               // tabControl1
               // 
               this->tabControl1->AccessibleRole = System::Windows::Forms::AccessibleRole::SplitButton;
               this->tabControl1->Controls->Add(this->tabPage1);
               this->tabControl1->Controls->Add(this->tabPage2);
               this->tabControl1->Controls->Add(this->tabPage3);
               this->tabControl1->Controls->Add(this->tabPage4);
               this->tabControl1->Controls->Add(this->tabPage5);
               this->tabControl1->Controls->Add(this->tabPage6);
               this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
               this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
               this->tabControl1->Location = System::Drawing::Point(0, 0);
               this->tabControl1->Margin = System::Windows::Forms::Padding(4);
               this->tabControl1->Multiline = true;
               this->tabControl1->Name = L"tabControl1";
               this->tabControl1->SelectedIndex = 0;
               this->tabControl1->Size = System::Drawing::Size(1332, 598);
               this->tabControl1->TabIndex = 0;
               // 
               // tabPage1
               // 
               this->tabPage1->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
               this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
               this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
               this->tabPage1->Controls->Add(this->button20);
               this->tabPage1->Controls->Add(this->button19);
               this->tabPage1->Controls->Add(this->button18);
               this->tabPage1->Controls->Add(this->button1);
               this->tabPage1->Controls->Add(this->dataGridView2);
               this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
               this->tabPage1->Location = System::Drawing::Point(4, 34);
               this->tabPage1->Margin = System::Windows::Forms::Padding(4);
               this->tabPage1->Name = L"tabPage1";
               this->tabPage1->RightToLeft = System::Windows::Forms::RightToLeft::No;
               this->tabPage1->Size = System::Drawing::Size(1324, 560);
               this->tabPage1->TabIndex = 0;
               this->tabPage1->Text = L"Base de Données";
               this->tabPage1->Visible = false;
               this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click_1);
               // 
               // button20
               // 
               this->button20->BackColor = System::Drawing::Color::SkyBlue;
               this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button20->Location = System::Drawing::Point(732, 388);
               this->button20->Name = L"button20";
               this->button20->Size = System::Drawing::Size(274, 81);
               this->button20->TabIndex = 4;
               this->button20->Text = L"Afficher les articles";
               this->button20->UseVisualStyleBackColor = false;
               // 
               // button19
               // 
               this->button19->BackColor = System::Drawing::Color::SkyBlue;
               this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button19->Location = System::Drawing::Point(732, 265);
               this->button19->Name = L"button19";
               this->button19->Size = System::Drawing::Size(274, 81);
               this->button19->TabIndex = 3;
               this->button19->Text = L"Afficher les commandes";
               this->button19->UseVisualStyleBackColor = false;
               // 
               // button18
               // 
               this->button18->BackColor = System::Drawing::Color::SkyBlue;
               this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button18->Location = System::Drawing::Point(732, 139);
               this->button18->Name = L"button18";
               this->button18->Size = System::Drawing::Size(274, 81);
               this->button18->TabIndex = 2;
               this->button18->Text = L"Afficher les clients";
               this->button18->UseVisualStyleBackColor = false;
               // 
               // button1
               // 
               this->button1->BackColor = System::Drawing::Color::SkyBlue;
               this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button1->Location = System::Drawing::Point(732, 20);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(274, 81);
               this->button1->TabIndex = 1;
               this->button1->Text = L"Afficher le personnel";
               this->button1->UseVisualStyleBackColor = false;
               this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
               // 
               // dataGridView2
               // 
               this->dataGridView2->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView2->GridColor = System::Drawing::SystemColors::ControlLightLight;
               this->dataGridView2->Location = System::Drawing::Point(12, 20);
               this->dataGridView2->Name = L"dataGridView2";
               this->dataGridView2->RowHeadersWidth = 51;
               this->dataGridView2->RowTemplate->Height = 24;
               this->dataGridView2->Size = System::Drawing::Size(635, 513);
               this->dataGridView2->TabIndex = 0;
               this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
               // 
               // tabPage2
               // 
               this->tabPage2->BackColor = System::Drawing::Color::White;
               this->tabPage2->Controls->Add(this->button5);
               this->tabPage2->Controls->Add(this->button4);
               this->tabPage2->Controls->Add(this->button3);
               this->tabPage2->Controls->Add(this->button2);
               this->tabPage2->Controls->Add(this->dataGridView3);
               this->tabPage2->Location = System::Drawing::Point(4, 34);
               this->tabPage2->Margin = System::Windows::Forms::Padding(4);
               this->tabPage2->Name = L"tabPage2";
               this->tabPage2->Size = System::Drawing::Size(1324, 560);
               this->tabPage2->TabIndex = 1;
               this->tabPage2->Text = L"Personnel";
               this->tabPage2->Visible = false;
               // 
               // button5
               // 
               this->button5->BackColor = System::Drawing::Color::SkyBlue;
               this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button5->Location = System::Drawing::Point(732, 392);
               this->button5->Name = L"button5";
               this->button5->Size = System::Drawing::Size(274, 81);
               this->button5->TabIndex = 5;
               this->button5->Text = L"Afficher un/des personnel(s)";
               this->button5->UseVisualStyleBackColor = false;
               this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
               // 
               // button4
               // 
               this->button4->AutoSize = true;
               this->button4->BackColor = System::Drawing::Color::SkyBlue;
               this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button4->Location = System::Drawing::Point(732, 266);
               this->button4->Name = L"button4";
               this->button4->Size = System::Drawing::Size(274, 81);
               this->button4->TabIndex = 4;
               this->button4->Text = L"Modifier un personnel";
               this->button4->UseVisualStyleBackColor = false;
               this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
               // 
               // button3
               // 
               this->button3->AutoSize = true;
               this->button3->BackColor = System::Drawing::Color::SkyBlue;
               this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button3->Location = System::Drawing::Point(732, 140);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(274, 81);
               this->button3->TabIndex = 3;
               this->button3->Text = L"Supprimer un personnel";
               this->button3->UseVisualStyleBackColor = false;
               this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
               // 
               // button2
               // 
               this->button2->AutoSize = true;
               this->button2->BackColor = System::Drawing::Color::SkyBlue;
               this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button2->Location = System::Drawing::Point(732, 20);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(274, 81);
               this->button2->TabIndex = 2;
               this->button2->Text = L"Ajouter un personnel";
               this->button2->UseVisualStyleBackColor = false;
               this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
               // 
               // dataGridView3
               // 
               this->dataGridView3->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView3->GridColor = System::Drawing::SystemColors::ButtonFace;
               this->dataGridView3->Location = System::Drawing::Point(12, 20);
               this->dataGridView3->Name = L"dataGridView3";
               this->dataGridView3->RowHeadersWidth = 51;
               this->dataGridView3->RowTemplate->Height = 24;
               this->dataGridView3->Size = System::Drawing::Size(635, 513);
               this->dataGridView3->TabIndex = 1;
               // 
               // tabPage3
               // 
               this->tabPage3->BackColor = System::Drawing::Color::White;
               this->tabPage3->Controls->Add(this->button6);
               this->tabPage3->Controls->Add(this->button7);
               this->tabPage3->Controls->Add(this->button8);
               this->tabPage3->Controls->Add(this->button9);
               this->tabPage3->Controls->Add(this->dataGridView4);
               this->tabPage3->Location = System::Drawing::Point(4, 34);
               this->tabPage3->Margin = System::Windows::Forms::Padding(4);
               this->tabPage3->Name = L"tabPage3";
               this->tabPage3->Size = System::Drawing::Size(1324, 560);
               this->tabPage3->TabIndex = 2;
               this->tabPage3->Text = L"Clients";
               this->tabPage3->Visible = false;
               this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
               // 
               // button6
               // 
               this->button6->BackColor = System::Drawing::Color::LightSkyBlue;
               this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button6->Location = System::Drawing::Point(732, 392);
               this->button6->Name = L"button6";
               this->button6->Size = System::Drawing::Size(274, 81);
               this->button6->TabIndex = 9;
               this->button6->Text = L"Afficher un/des client(s)";
               this->button6->UseVisualStyleBackColor = false;
               this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
               // 
               // button7
               // 
               this->button7->BackColor = System::Drawing::Color::SkyBlue;
               this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button7->Location = System::Drawing::Point(732, 270);
               this->button7->Name = L"button7";
               this->button7->Size = System::Drawing::Size(274, 81);
               this->button7->TabIndex = 8;
               this->button7->Text = L"Modifier un client";
               this->button7->UseVisualStyleBackColor = false;
               this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
               // 
               // button8
               // 
               this->button8->BackColor = System::Drawing::Color::SkyBlue;
               this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button8->Location = System::Drawing::Point(732, 149);
               this->button8->Name = L"button8";
               this->button8->Size = System::Drawing::Size(274, 81);
               this->button8->TabIndex = 7;
               this->button8->Text = L"Supprimer un client";
               this->button8->UseVisualStyleBackColor = false;
               this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
               // 
               // button9
               // 
               this->button9->BackColor = System::Drawing::Color::SkyBlue;
               this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button9->Location = System::Drawing::Point(732, 20);
               this->button9->Name = L"button9";
               this->button9->Size = System::Drawing::Size(274, 81);
               this->button9->TabIndex = 6;
               this->button9->Text = L"Ajouter un client";
               this->button9->UseVisualStyleBackColor = false;
               this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
               // 
               // dataGridView4
               // 
               this->dataGridView4->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView4->GridColor = System::Drawing::SystemColors::ControlLightLight;
               this->dataGridView4->Location = System::Drawing::Point(12, 20);
               this->dataGridView4->Name = L"dataGridView4";
               this->dataGridView4->RowHeadersWidth = 51;
               this->dataGridView4->RowTemplate->Height = 24;
               this->dataGridView4->Size = System::Drawing::Size(635, 513);
               this->dataGridView4->TabIndex = 1;
               this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
               // 
               // tabPage4
               // 
               this->tabPage4->BackColor = System::Drawing::Color::White;
               this->tabPage4->Controls->Add(this->button10);
               this->tabPage4->Controls->Add(this->button12);
               this->tabPage4->Controls->Add(this->button13);
               this->tabPage4->Controls->Add(this->button14);
               this->tabPage4->Controls->Add(this->dataGridView5);
               this->tabPage4->Location = System::Drawing::Point(4, 34);
               this->tabPage4->Margin = System::Windows::Forms::Padding(4);
               this->tabPage4->Name = L"tabPage4";
               this->tabPage4->Size = System::Drawing::Size(1324, 560);
               this->tabPage4->TabIndex = 3;
               this->tabPage4->Text = L"Commandes";
               this->tabPage4->Visible = false;
               this->tabPage4->Click += gcnew System::EventHandler(this, &Form1::tabPage4_Click);
               // 
               // button10
               // 
               this->button10->BackColor = System::Drawing::Color::LightSkyBlue;
               this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button10->Location = System::Drawing::Point(732, 392);
               this->button10->Name = L"button10";
               this->button10->Size = System::Drawing::Size(274, 81);
               this->button10->TabIndex = 9;
               this->button10->Text = L"Afficher une/des commande(s)";
               this->button10->UseVisualStyleBackColor = false;
               this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click_2);
               // 
               // button12
               // 
               this->button12->AutoSize = true;
               this->button12->BackColor = System::Drawing::Color::SkyBlue;
               this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button12->Location = System::Drawing::Point(732, 270);
               this->button12->Name = L"button12";
               this->button12->Size = System::Drawing::Size(274, 81);
               this->button12->TabIndex = 8;
               this->button12->Text = L"Modifier une commande";
               this->button12->UseVisualStyleBackColor = false;
               this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
               // 
               // button13
               // 
               this->button13->AutoSize = true;
               this->button13->BackColor = System::Drawing::Color::SkyBlue;
               this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button13->Location = System::Drawing::Point(732, 148);
               this->button13->Name = L"button13";
               this->button13->Size = System::Drawing::Size(274, 81);
               this->button13->TabIndex = 7;
               this->button13->Text = L"Supprimer une commande";
               this->button13->UseVisualStyleBackColor = false;
               this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
               // 
               // button14
               // 
               this->button14->AutoSize = true;
               this->button14->BackColor = System::Drawing::Color::SkyBlue;
               this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button14->Location = System::Drawing::Point(732, 20);
               this->button14->Name = L"button14";
               this->button14->Size = System::Drawing::Size(274, 81);
               this->button14->TabIndex = 6;
               this->button14->Text = L"Ajouter une commande";
               this->button14->UseVisualStyleBackColor = false;
               this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
               // 
               // dataGridView5
               // 
               this->dataGridView5->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView5->GridColor = System::Drawing::SystemColors::ControlLightLight;
               this->dataGridView5->Location = System::Drawing::Point(12, 20);
               this->dataGridView5->Name = L"dataGridView5";
               this->dataGridView5->RowHeadersWidth = 51;
               this->dataGridView5->RowTemplate->Height = 24;
               this->dataGridView5->Size = System::Drawing::Size(635, 513);
               this->dataGridView5->TabIndex = 1;
               // 
               // tabPage5
               // 
               this->tabPage5->BackColor = System::Drawing::Color::White;
               this->tabPage5->Controls->Add(this->button11);
               this->tabPage5->Controls->Add(this->button15);
               this->tabPage5->Controls->Add(this->button16);
               this->tabPage5->Controls->Add(this->button17);
               this->tabPage5->Controls->Add(this->dataGridView6);
               this->tabPage5->Location = System::Drawing::Point(4, 34);
               this->tabPage5->Margin = System::Windows::Forms::Padding(4);
               this->tabPage5->Name = L"tabPage5";
               this->tabPage5->Size = System::Drawing::Size(1324, 560);
               this->tabPage5->TabIndex = 4;
               this->tabPage5->Text = L"Stock";
               this->tabPage5->Visible = false;
               // 
               // button11
               // 
               this->button11->BackColor = System::Drawing::Color::LightSkyBlue;
               this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button11->Location = System::Drawing::Point(732, 393);
               this->button11->Name = L"button11";
               this->button11->Size = System::Drawing::Size(274, 81);
               this->button11->TabIndex = 9;
               this->button11->Text = L"Afficher un/des article(s)";
               this->button11->UseVisualStyleBackColor = false;
               this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
               // 
               // button15
               // 
               this->button15->AutoSize = true;
               this->button15->BackColor = System::Drawing::Color::SkyBlue;
               this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button15->Location = System::Drawing::Point(732, 270);
               this->button15->Name = L"button15";
               this->button15->Size = System::Drawing::Size(274, 81);
               this->button15->TabIndex = 8;
               this->button15->Text = L"Modifier un article";
               this->button15->UseVisualStyleBackColor = false;
               this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
               // 
               // button16
               // 
               this->button16->AutoSize = true;
               this->button16->BackColor = System::Drawing::Color::SkyBlue;
               this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button16->Location = System::Drawing::Point(732, 149);
               this->button16->Name = L"button16";
               this->button16->Size = System::Drawing::Size(274, 81);
               this->button16->TabIndex = 7;
               this->button16->Text = L"Supprimer un article";
               this->button16->UseVisualStyleBackColor = false;
               this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
               // 
               // button17
               // 
               this->button17->AutoSize = true;
               this->button17->BackColor = System::Drawing::Color::SkyBlue;
               this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button17->Location = System::Drawing::Point(732, 20);
               this->button17->Name = L"button17";
               this->button17->Size = System::Drawing::Size(274, 81);
               this->button17->TabIndex = 6;
               this->button17->Text = L"Ajouter un article";
               this->button17->UseVisualStyleBackColor = false;
               this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
               // 
               // dataGridView6
               // 
               this->dataGridView6->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView6->GridColor = System::Drawing::SystemColors::ControlLightLight;
               this->dataGridView6->Location = System::Drawing::Point(12, 20);
               this->dataGridView6->Name = L"dataGridView6";
               this->dataGridView6->RowHeadersWidth = 51;
               this->dataGridView6->RowTemplate->Height = 24;
               this->dataGridView6->Size = System::Drawing::Size(635, 513);
               this->dataGridView6->TabIndex = 1;
               // 
               // tabPage6
               // 
               this->tabPage6->BackColor = System::Drawing::Color::White;
               this->tabPage6->Controls->Add(this->button29);
               this->tabPage6->Controls->Add(this->button28);
               this->tabPage6->Controls->Add(this->button27);
               this->tabPage6->Controls->Add(this->button26);
               this->tabPage6->Controls->Add(this->button25);
               this->tabPage6->Controls->Add(this->label2);
               this->tabPage6->Controls->Add(this->textBox2);
               this->tabPage6->Controls->Add(this->button24);
               this->tabPage6->Controls->Add(this->button23);
               this->tabPage6->Controls->Add(this->label1);
               this->tabPage6->Controls->Add(this->textBox1);
               this->tabPage6->Controls->Add(this->button22);
               this->tabPage6->Controls->Add(this->button21);
               this->tabPage6->Controls->Add(this->dataGridView7);
               this->tabPage6->Location = System::Drawing::Point(4, 34);
               this->tabPage6->Margin = System::Windows::Forms::Padding(4);
               this->tabPage6->Name = L"tabPage6";
               this->tabPage6->Size = System::Drawing::Size(1324, 560);
               this->tabPage6->TabIndex = 5;
               this->tabPage6->Text = L"Statistiques";
               this->tabPage6->Visible = false;
               // 
               // dataGridView7
               // 
               this->dataGridView7->BackgroundColor = System::Drawing::Color::SkyBlue;
               this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView7->GridColor = System::Drawing::SystemColors::ControlLightLight;
               this->dataGridView7->Location = System::Drawing::Point(12, 20);
               this->dataGridView7->Name = L"dataGridView7";
               this->dataGridView7->RowHeadersWidth = 51;
               this->dataGridView7->RowTemplate->Height = 24;
               this->dataGridView7->Size = System::Drawing::Size(635, 513);
               this->dataGridView7->TabIndex = 1;
               // 
               // button21
               // 
               this->button21->AutoSize = true;
               this->button21->BackColor = System::Drawing::Color::SkyBlue;
               this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button21->Location = System::Drawing::Point(742, 20);
               this->button21->Name = L"button21";
               this->button21->Size = System::Drawing::Size(288, 40);
               this->button21->TabIndex = 7;
               this->button21->Text = L"Panier Moyen";
               this->button21->UseVisualStyleBackColor = false;
               // 
               // button22
               // 
               this->button22->AutoSize = true;
               this->button22->BackColor = System::Drawing::Color::SkyBlue;
               this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button22->Location = System::Drawing::Point(742, 78);
               this->button22->Name = L"button22";
               this->button22->Size = System::Drawing::Size(288, 40);
               this->button22->TabIndex = 8;
               this->button22->Text = L"Chiffre d\'Affaire du mois";
               this->button22->UseVisualStyleBackColor = false;
               this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(1039, 63);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(89, 20);
               this->label1->TabIndex = 17;
               this->label1->Text = L"Mois/Année";
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(1043, 86);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(192, 32);
               this->textBox1->TabIndex = 16;
               // 
               // button23
               // 
               this->button23->AutoSize = true;
               this->button23->BackColor = System::Drawing::Color::SkyBlue;
               this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button23->Location = System::Drawing::Point(742, 132);
               this->button23->Name = L"button23";
               this->button23->Size = System::Drawing::Size(288, 40);
               this->button23->TabIndex = 18;
               this->button23->Text = L"Article reapprovisionnement";
               this->button23->UseVisualStyleBackColor = false;
               // 
               // button24
               // 
               this->button24->AutoSize = true;
               this->button24->BackColor = System::Drawing::Color::SkyBlue;
               this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button24->Location = System::Drawing::Point(742, 190);
               this->button24->Name = L"button24";
               this->button24->Size = System::Drawing::Size(288, 40);
               this->button24->TabIndex = 19;
               this->button24->Text = L"Montant Total Achat";
               this->button24->UseVisualStyleBackColor = false;
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(1039, 202);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(87, 20);
               this->label2->TabIndex = 21;
               this->label2->Text = L"ID du Client";
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(1043, 225);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(192, 32);
               this->textBox2->TabIndex = 20;
               // 
               // button25
               // 
               this->button25->AutoSize = true;
               this->button25->BackColor = System::Drawing::Color::SkyBlue;
               this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button25->Location = System::Drawing::Point(742, 251);
               this->button25->Name = L"button25";
               this->button25->Size = System::Drawing::Size(288, 40);
               this->button25->TabIndex = 22;
               this->button25->Text = L"Top Articles des Plus Vendus";
               this->button25->UseVisualStyleBackColor = false;
               // 
               // button26
               // 
               this->button26->AutoSize = true;
               this->button26->BackColor = System::Drawing::Color::SkyBlue;
               this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button26->Location = System::Drawing::Point(738, 308);
               this->button26->Name = L"button26";
               this->button26->Size = System::Drawing::Size(292, 40);
               this->button26->TabIndex = 23;
               this->button26->Text = L"Top Articles des Moins Vendus";
               this->button26->UseVisualStyleBackColor = false;
               // 
               // button27
               // 
               this->button27->AutoSize = true;
               this->button27->BackColor = System::Drawing::Color::SkyBlue;
               this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button27->Location = System::Drawing::Point(738, 371);
               this->button27->Name = L"button27";
               this->button27->Size = System::Drawing::Size(292, 40);
               this->button27->TabIndex = 24;
               this->button27->Text = L"Valeur Commerciale du Stock";
               this->button27->UseVisualStyleBackColor = false;
               // 
               // button28
               // 
               this->button28->AutoSize = true;
               this->button28->BackColor = System::Drawing::Color::SkyBlue;
               this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button28->Location = System::Drawing::Point(738, 431);
               this->button28->Name = L"button28";
               this->button28->Size = System::Drawing::Size(292, 40);
               this->button28->TabIndex = 25;
               this->button28->Text = L"Valeur Achat du Stock";
               this->button28->UseVisualStyleBackColor = false;
               // 
               // button29
               // 
               this->button29->AutoSize = true;
               this->button29->BackColor = System::Drawing::Color::SkyBlue;
               this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
               this->button29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->button29->Location = System::Drawing::Point(738, 493);
               this->button29->Name = L"button29";
               this->button29->Size = System::Drawing::Size(292, 40);
               this->button29->TabIndex = 26;
               this->button29->Text = L"Test de Remise";
               this->button29->UseVisualStyleBackColor = false;
               // 
               // Form1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(1332, 598);
               this->Controls->Add(this->tabControl1);
               this->Controls->Add(this->dataGridView1);
               this->Margin = System::Windows::Forms::Padding(4);
               this->MaximumSize = System::Drawing::Size(1350, 645);
               this->MinimumSize = System::Drawing::Size(1350, 645);
               this->Name = L"Form1";
               this->Text = L"CESI Scount";
               this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->tabControl1->ResumeLayout(false);
               this->tabPage1->ResumeLayout(false);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
               this->tabPage2->ResumeLayout(false);
               this->tabPage2->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
               this->tabPage3->ResumeLayout(false);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
               this->tabPage4->ResumeLayout(false);
               this->tabPage4->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
               this->tabPage5->ResumeLayout(false);
               this->tabPage5->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
               this->tabPage6->ResumeLayout(false);
               this->tabPage6->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
               this->ResumeLayout(false);

           }
#pragma endregion

    private:
        System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e) {
            int newHeight = ClientSize.Height - 76;

            dataGridView1->Size = System::Drawing::Size(dataGridView1->Width, newHeight);

            int columnCount1 = dataGridView1->Columns->Count;
            if (columnCount1 > 0) {
                int columnWidth1 = dataGridView1->Width / columnCount1;

                for each (DataGridViewColumn ^ column in dataGridView1->Columns) {
                    column->Width = columnWidth1;
                }
            }

            dataGridView2->Size = System::Drawing::Size(dataGridView2->Width, newHeight);

            int columnCount2 = dataGridView2->Columns->Count;
            if (columnCount2 > 0) {
                int columnWidth2 = dataGridView2->Width / columnCount2;

                for each (DataGridViewColumn ^ column in dataGridView2->Columns) {
                    column->Width = columnWidth2;
                }
            }

            dataGridView3->Size = System::Drawing::Size(dataGridView3->Width, newHeight);

            int columnCount3 = dataGridView3->Columns->Count;
            if (columnCount3 > 0) {
                int columnWidth3 = dataGridView3->Width / columnCount3;

                for each (DataGridViewColumn ^ column in dataGridView3->Columns) {
                    column->Width = columnWidth3;
                }
            }

            dataGridView4->Size = System::Drawing::Size(dataGridView4->Width, newHeight);

            int columnCount4 = dataGridView4->Columns->Count;
            if (columnCount4 > 0) {
                int columnWidth4 = dataGridView4->Width / columnCount4;

                for each (DataGridViewColumn ^ column in dataGridView4->Columns) {
                    column->Width = columnWidth4;
                }
            }

            dataGridView5->Size = System::Drawing::Size(dataGridView5->Width, newHeight);

            int columnCount5 = dataGridView5->Columns->Count;
            if (columnCount5 > 0) {
                int columnWidth5 = dataGridView5->Width / columnCount5;

                for each (DataGridViewColumn ^ column in dataGridView5->Columns) {
                    column->Width = columnWidth5;
                }
            }

            dataGridView6->Size = System::Drawing::Size(dataGridView6->Width, newHeight);

            int columnCount6 = dataGridView6->Columns->Count;
            if (columnCount6 > 0) {
                int columnWidth6 = dataGridView6->Width / columnCount6;

                for each (DataGridViewColumn ^ column in dataGridView6->Columns) {
                    column->Width = columnWidth6;
                }
            }
            dataGridView7->Size = System::Drawing::Size(dataGridView7->Width, newHeight);

            int columnCount7 = dataGridView7->Columns->Count;
            if (columnCount7 > 0) {
                int columnWidth7 = dataGridView7->Width / columnCount7;

                for each (DataGridViewColumn ^ column in dataGridView7->Columns) {
                    column->Width = columnWidth7;
                }
            }
        }

        System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

        }
    private: System::Void tabPage1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!ajouterPersonnelFormIsOpen) {
            ajouterPersonnelForm = gcnew POO_JAG::Ajouterpersonnel();
            ajouterPersonnelFormIsOpen = true;
            ajouterPersonnelForm->Show();
            ajouterPersonnelForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::AjouterpersonnelFormClosed);
        }
    }
           System::Void AjouterpersonnelFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
               ajouterPersonnelFormIsOpen = false;
           };

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!supprimerPersonnelFormIsOpen) {
            supprimerPersonnelForm = gcnew POO_JAG::supprimerpersonnel();
            supprimerPersonnelFormIsOpen = true;
            supprimerPersonnelForm->Show();
            supprimerPersonnelForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::supprimerpersonnelFormClosed);
        }
    }
           System::Void supprimerpersonnelFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
               supprimerPersonnelFormIsOpen = false;
           }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!modifierPersonnelFormIsOpen) {
            modifierPersonnelForm = gcnew POO_JAG::modifierpersonnel();
            modifierPersonnelFormIsOpen = true;
            modifierPersonnelForm->Show();
            modifierPersonnelForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::modifierpersonnelFormClosed);
        }
    }
           System::Void modifierpersonnelFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
               modifierPersonnelFormIsOpen = false;
           }

    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!afficherPersonnelFormIsOpen) {
            afficherPersonnelForm = gcnew POO_JAG::afficherpersonnel();
            afficherPersonnelFormIsOpen = true;
            afficherPersonnelForm->Show();
            afficherPersonnelForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::afficherpersonnelFormClosed);
        }
    }
           System::Void afficherpersonnelFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
               afficherPersonnelFormIsOpen = false;
           }
    

       private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
           if (!ajouterClientFormIsOpen) {
               ajouterClientForm = gcnew POO_JAG::ajouterclient();
               ajouterClientFormIsOpen = true;
               ajouterClientForm->Show();
               ajouterClientForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::ajouterclientFormClosed);
           }
       }
              System::Void ajouterclientFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                  ajouterClientFormIsOpen = false;
              }
        private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
            if (!supprimerClientFormIsOpen) {
                supprimerClientForm = gcnew POO_JAG::supprimerclient();
                supprimerClientFormIsOpen = true;
                supprimerClientForm->Show();
                supprimerClientForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::supprimerclientFormClosed);
            }
        }
               System::Void supprimerclientFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                   modifierClientFormIsOpen = false;
               }
              private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
                  if (!modifierClientFormIsOpen) {
                      modifierClientForm = gcnew POO_JAG::modifierclient();
                      modifierClientFormIsOpen = true;
                      modifierClientForm->Show();
                      modifierClientForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::modifierclientFormClosed);
                  }
              }
                     System::Void modifierclientFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                         modifierClientFormIsOpen = false;
                     }
              private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
                  if (!afficherClientFormIsOpen) {
                      afficherClientForm = gcnew POO_JAG::afficherclient();
                      afficherClientFormIsOpen = true;
                      afficherClientForm->Show();
                      afficherClientForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::afficherclientFormClosed);
                  }
              }
                     System::Void afficherclientFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                         afficherClientFormIsOpen = false;
              }
                     private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
                     
                            if (!ajouterCommandeFormIsOpen) {
                                ajouterCommandeForm = gcnew POO_JAG::ajoutercommande();
                                ajouterCommandeFormIsOpen = true;
                                ajouterCommandeForm->Show();
                                ajouterCommandeForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::ajoutercommandeFormClosed);
                            }
              }
              System::Void ajoutercommandeFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                  ajouterCommandeFormIsOpen = false;
              }
                            private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
                            
                                   if (!supprimerCommandeFormIsOpen) {
                                       supprimerCommandeForm = gcnew POO_JAG::supprimercommande();
                                       supprimerCommandeFormIsOpen = true;
                                       supprimerCommandeForm->Show();
                                       supprimerCommandeForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::supprimercommandeFormClosed);
                                   }
              }
              System::Void supprimercommandeFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                  supprimerCommandeFormIsOpen = false;
              }
                                   private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
                                   
                                          if (!modifierCommandeFormIsOpen) {
                                              modifierCommandeForm = gcnew POO_JAG::modifiercommande();
                                              modifierCommandeFormIsOpen = true;
                                              modifierCommandeForm->Show();
                                              modifierCommandeForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::modifiercommandeFormClosed);
                                          }
              }
              System::Void modifiercommandeFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                  modifierCommandeFormIsOpen = false;
              }
                                          private: System::Void button10_Click_2(System::Object^ sender, System::EventArgs^ e) {
                                          
                                                 if (!afficherCommandeFormIsOpen) {
                                                     afficherCommandeForm = gcnew POO_JAG::affichercommande();
                                                     afficherCommandeFormIsOpen = true;
                                                     afficherCommandeForm->Show();
                                                     afficherCommandeForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::affichercommandeFormClosed);
                                                 }
              }
              System::Void affichercommandeFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                  afficherCommandeFormIsOpen = false;
              }
              private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
                  if (!ajouterArticleFormIsOpen) {
                      ajouterArticleForm = gcnew POO_JAG::ajouterarticle();
                      ajouterArticleFormIsOpen = true;
                      ajouterArticleForm->Show();
                      ajouterArticleForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::ajouterarticleFormClosed);
                  }
              }
                     System::Void ajouterarticleFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                         ajouterArticleFormIsOpen = false;
                     }

                     private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
                         if (!supprimerArticleFormIsOpen) {
                             supprimerArticleForm = gcnew POO_JAG::supprimerarticle();
                             supprimerArticleFormIsOpen = true;
                             supprimerArticleForm->Show();
                             supprimerArticleForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::supprimerarticleFormClosed);
                         }
                     }
                            System::Void supprimerarticleFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                                supprimerArticleFormIsOpen = false;
                            }

                    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
                        if (!modifierArticleFormIsOpen) {
                            modifierArticleForm = gcnew POO_JAG::modifierarticle();
                            modifierArticleFormIsOpen = true;
                            modifierArticleForm->Show();
                            modifierArticleForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::modifierarticleFormClosed);
                        }
                    }
                           System::Void modifierarticleFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                               modifierArticleFormIsOpen = false;
                           }

                           private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
                               if (!afficherArticleFormIsOpen) {
                                   afficherArticleForm = gcnew POO_JAG::afficherarticle();
                                   afficherArticleFormIsOpen = true;
                                   afficherArticleForm->Show();
                                   afficherArticleForm->FormClosed += gcnew FormClosedEventHandler(this, &Form1::afficherarticleFormClosed);
                               }
                           }
                                  System::Void afficherarticleFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
                                      afficherArticleFormIsOpen = false;
                                  }

private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}