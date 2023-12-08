#include "pch.h"
#include "afficherarticle.h"

namespace POO_JAG {

    afficherarticle::afficherarticle(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &afficherarticle::button1_Click);
    }

    afficherarticle::~afficherarticle()
    {
        if (components)
        {
            delete components;
        }
    }

    void afficherarticle::InitializeComponent(void)
    {
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(31, 297);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(106, 16);
        this->label6->TabIndex = 25;
        this->label6->Text = L"Stock de l\'Article";
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(34, 316);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(266, 22);
        this->textBox6->TabIndex = 24;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(31, 245);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(250, 16);
        this->label5->TabIndex = 23;
        this->label5->Text = L"Seuil de Réapprovisionement de l\'Article";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(34, 264);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(266, 22);
        this->textBox5->TabIndex = 22;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(31, 185);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(99, 16);
        this->label4->TabIndex = 21;
        this->label4->Text = L"TVA de l\'Article";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(34, 204);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(266, 22);
        this->textBox4->TabIndex = 20;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(31, 123);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(160, 16);
        this->label3->TabIndex = 19;
        this->label3->Text = L"Prix de l\'Article Hors Taxe";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(34, 142);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(266, 22);
        this->textBox3->TabIndex = 18;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(31, 67);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(101, 16);
        this->label2->TabIndex = 17;
        this->label2->Text = L"Nom de l\'Article";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(34, 86);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(266, 22);
        this->textBox2->TabIndex = 16;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(31, 14);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(85, 16);
        this->label1->TabIndex = 15;
        this->label1->Text = L"ID de l\'Article\r\n";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(34, 33);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(266, 22);
        this->textBox1->TabIndex = 14;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SkyBlue;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(378, 123);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 13;
        this->button1->Text = L"Afficher l\'Article";
        this->button1->UseVisualStyleBackColor = false;
        // 
        // afficherarticle
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
        this->Name = L"afficherarticle";
        this->Text = L"Afficher un Article";
        this->Load += gcnew System::EventHandler(this, &afficherarticle::afficherarticle_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void afficherarticle::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}

