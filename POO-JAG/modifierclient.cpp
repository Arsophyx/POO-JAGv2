#include "pch.h"
#include "modifierclient.h"

namespace POO_JAG {

    modifierclient::modifierclient(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &modifierclient::button1_Click);
    }

    modifierclient::~modifierclient()
    {
        if (components)
        {
            delete components;
        }
    }

    void modifierclient::InitializeComponent(void)
    {
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Gold;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(282, 147);
        this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Modifier le Client";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &modifierclient::button1_Click_1);
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(20, 24);
        this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 1;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(17, 8);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(62, 13);
        this->label1->TabIndex = 2;
        this->label1->Text = L"ID du Client";
        this->label1->Click += gcnew System::EventHandler(this, &modifierclient::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(17, 51);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(73, 13);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Nom du Client";
        this->label2->Click += gcnew System::EventHandler(this, &modifierclient::label2_Click);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(20, 67);
        this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 3;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(17, 97);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(87, 13);
        this->label3->TabIndex = 6;
        this->label3->Text = L"Prenom du Client";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(20, 112);
        this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 5;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(17, 147);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(109, 13);
        this->label4->TabIndex = 8;
        this->label4->Text = L"Anniversaire du Client";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(20, 162);
        this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 7;
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(20, 211);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(200, 20);
        this->textBox5->TabIndex = 9;
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(20, 260);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(200, 20);
        this->textBox6->TabIndex = 10;
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(20, 310);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(200, 20);
        this->textBox7->TabIndex = 11;
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(20, 361);
        this->textBox8->Margin = System::Windows::Forms::Padding(2);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(200, 20);
        this->textBox8->TabIndex = 12;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(17, 196);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(157, 13);
        this->label5->TabIndex = 13;
        this->label5->Text = L"Adresse de facturation du Client";
        this->label5->Click += gcnew System::EventHandler(this, &modifierclient::label5_Click);
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(17, 245);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(145, 13);
        this->label6->TabIndex = 14;
        this->label6->Text = L"Adresse de livraison du Client";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(17, 295);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(126, 13);
        this->label7->TabIndex = 15;
        this->label7->Text = L"Ville de livraison du Client";
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Location = System::Drawing::Point(17, 346);
        this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(138, 13);
        this->label8->TabIndex = 16;
        this->label8->Text = L"Ville de facturation du Client";
        // 
        // modifierclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::White;
        this->ClientSize = System::Drawing::Size(483, 391);
        this->Controls->Add(this->label8);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->label5);
        this->Controls->Add(this->textBox8);
        this->Controls->Add(this->textBox7);
        this->Controls->Add(this->textBox6);
        this->Controls->Add(this->textBox5);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->textBox4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->button1);
        this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->MaximumSize = System::Drawing::Size(499, 430);
        this->MinimumSize = System::Drawing::Size(499, 430);
        this->Name = L"modifierclient";
        this->Text = L"Modifier un Client";
        this->Load += gcnew System::EventHandler(this, &modifierclient::modifierclient_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void modifierclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
