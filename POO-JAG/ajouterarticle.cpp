#include "pch.h"
#include "ajouterarticle.h"

namespace POO_JAG {

    ajouterarticle::ajouterarticle(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &ajouterarticle::button1_Click);
    }

    ajouterarticle::~ajouterarticle()
    {
        if (components)
        {
            delete components;
        }
    }

    void ajouterarticle::InitializeComponent(void)
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
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SeaGreen;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(370, 95);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Ajouter l\'Article";
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
        this->label1->Size = System::Drawing::Size(76, 16);
        this->label1->TabIndex = 2;
        this->label1->Text = L"Nom Article";
        this->label1->Click += gcnew System::EventHandler(this, &ajouterarticle::label1_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(23, 63);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(135, 16);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Prix Article Hors Taxe";
        this->label2->Click += gcnew System::EventHandler(this, &ajouterarticle::label2_Click);
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
        this->label3->Size = System::Drawing::Size(99, 16);
        this->label3->TabIndex = 6;
        this->label3->Text = L"TVA de l\'Article";
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
        this->label4->Size = System::Drawing::Size(250, 16);
        this->label4->TabIndex = 8;
        this->label4->Text = L"Seuil de Réapprovisionement de l\'Article";
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
        this->label5->Size = System::Drawing::Size(41, 16);
        this->label5->TabIndex = 10;
        this->label5->Text = L"Stock";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(26, 260);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(266, 22);
        this->textBox5->TabIndex = 9;
        // 
        // ajouterarticle
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 303);
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
        this->MaximumSize = System::Drawing::Size(660, 350);
        this->MinimumSize = System::Drawing::Size(660, 350);
        this->Name = L"ajouterarticle";
        this->Text = L"Ajouter un Article";
        this->Load += gcnew System::EventHandler(this, &ajouterarticle::ajouterarticle_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void ajouterarticle::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
