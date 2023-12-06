#include "pch.h"
#include "afficherclient.h"

namespace POO_JAG {

    afficherclient::afficherclient(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &afficherclient::button1_Click);
    }

    afficherclient::~afficherclient()
    {
        if (components)
        {
            delete components;
        }
    }

    void afficherclient::InitializeComponent(void)
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
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SeaGreen;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(370, 119);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Ajouter un personnel";
        this->button1->UseVisualStyleBackColor = false;
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(26, 29);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(266, 22);
        this->textBox1->TabIndex = 1;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(23, 10);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(100, 16);
        this->label1->TabIndex = 2;
        this->label1->Text = L"Nom Personnel";
        this->label1->Click += gcnew System::EventHandler(this, &afficherclient::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(23, 63);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(118, 16);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Prenom Personnel";
        this->label2->Click += gcnew System::EventHandler(this, &afficherclient::label2_Click);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(26, 82);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(266, 22);
        this->textBox2->TabIndex = 3;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(23, 119);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(176, 16);
        this->label3->TabIndex = 6;
        this->label3->Text = L"Prise de poste du Personnel";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(26, 138);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(266, 22);
        this->textBox3->TabIndex = 5;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(23, 181);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(140, 16);
        this->label4->TabIndex = 8;
        this->label4->Text = L"Adresse du Personnel";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(26, 200);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(266, 22);
        this->textBox4->TabIndex = 7;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(23, 241);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(163, 16);
        this->label5->TabIndex = 10;
        this->label5->Text = L"Code Postal du Personnel";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(26, 260);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(266, 22);
        this->textBox5->TabIndex = 9;
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(23, 293);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(99, 16);
        this->label6->TabIndex = 12;
        this->label6->Text = L"ID du Sup�rieur";
        this->label6->Click += gcnew System::EventHandler(this, &afficherclient::label6_Click);
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(26, 312);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(266, 22);
        this->textBox6->TabIndex = 11;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &afficherclient::textBox6_TextChanged);
        // 
        // afficherclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 353);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->textBox6);
        this->Controls->Add(this->label5);
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
        this->MaximumSize = System::Drawing::Size(660, 400);
        this->MinimumSize = System::Drawing::Size(660, 400);
        this->Name = L"afficherclient";
        this->Text = L"afficherclient";
        this->Load += gcnew System::EventHandler(this, &afficherclient::afficherclient_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void afficherclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}