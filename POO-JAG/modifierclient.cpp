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
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Gold;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(363, 73);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Modifier le Client";
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
        this->label1->Size = System::Drawing::Size(74, 16);
        this->label1->TabIndex = 2;
        this->label1->Text = L"ID du Client";
        this->label1->Click += gcnew System::EventHandler(this, &modifierclient::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(23, 63);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(90, 16);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Nom du Client";
        this->label2->Click += gcnew System::EventHandler(this, &modifierclient::label2_Click);
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
        this->label3->Size = System::Drawing::Size(108, 16);
        this->label3->TabIndex = 6;
        this->label3->Text = L"Prenom du Client";
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
        this->label4->Size = System::Drawing::Size(136, 16);
        this->label4->TabIndex = 8;
        this->label4->Text = L"Anniversaire du Client";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(26, 200);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(266, 22);
        this->textBox4->TabIndex = 7;
        // 
        // modifierclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::White;
        this->ClientSize = System::Drawing::Size(642, 253);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->textBox4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->button1);
        this->MaximumSize = System::Drawing::Size(660, 300);
        this->MinimumSize = System::Drawing::Size(660, 300);
        this->Name = L"modifierclient";
        this->Text = L"Modifier un Client";
        this->Load += gcnew System::EventHandler(this, &modifierclient::modifierclient_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void modifierclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
