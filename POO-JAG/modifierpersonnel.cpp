#include "pch.h"
#include "modifierpersonnel.h"

namespace POO_JAG {

    modifierpersonnel::modifierpersonnel(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &modifierpersonnel::button1_Click);
    }

    modifierpersonnel::~modifierpersonnel()
    {
        if (components)
        {
            delete components;
        }
    }

    void modifierpersonnel::InitializeComponent(void)
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
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Gold;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(278, 97);
        this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Modifer le Personnel";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &modifierpersonnel::button1_Click_1);
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(20, 63);
        this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 1;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox1_TextChanged);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(18, 48);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(79, 13);
        this->label1->TabIndex = 2;
        this->label1->Text = L"Nom Personnel";
        this->label1->Click += gcnew System::EventHandler(this, &modifierpersonnel::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(18, 91);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(93, 13);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Prenom Personnel";
        this->label2->Click += gcnew System::EventHandler(this, &modifierpersonnel::label2_Click);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(20, 106);
        this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 3;
        this->textBox2->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox2_TextChanged);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(18, 136);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(139, 13);
        this->label3->TabIndex = 6;
        this->label3->Text = L"Prise de poste du Personnel";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(20, 152);
        this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 5;
        this->textBox3->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox3_TextChanged);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(18, 187);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(110, 13);
        this->label4->TabIndex = 8;
        this->label4->Text = L"Adresse du Personnel";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(20, 202);
        this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 7;
        this->textBox4->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox4_TextChanged);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(18, 236);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(129, 13);
        this->label5->TabIndex = 10;
        this->label5->Text = L"Code Postal du Personnel";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(20, 251);
        this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(200, 20);
        this->textBox5->TabIndex = 9;
        this->textBox5->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox5_TextChanged);
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(18, 278);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(81, 13);
        this->label6->TabIndex = 12;
        this->label6->Text = L"ID du Sup�rieur";
        this->label6->Click += gcnew System::EventHandler(this, &modifierpersonnel::label6_Click);
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(20, 293);
        this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(200, 20);
        this->textBox6->TabIndex = 11;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox6_TextChanged);
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(18, 7);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(83, 13);
        this->label7->TabIndex = 14;
        this->label7->Text = L"ID du Personnel";
        this->label7->Click += gcnew System::EventHandler(this, &modifierpersonnel::label7_Click);
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(20, 23);
        this->textBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(200, 20);
        this->textBox7->TabIndex = 13;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &modifierpersonnel::textBox7_TextChanged);
        // 
        // modifierpersonnel
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(483, 334);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->textBox7);
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
        this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->MaximumSize = System::Drawing::Size(499, 373);
        this->MinimumSize = System::Drawing::Size(499, 373);
        this->Name = L"modifierpersonnel";
        this->Text = L"Modifier un Personnel";
        this->Load += gcnew System::EventHandler(this, &modifierpersonnel::modifierpersonnel_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void modifierpersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
