#include "pch.h"
#include "supprimerarticle.h"

namespace POO_JAG {

    supprimerarticle::supprimerarticle(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &supprimerarticle::button1_Click);
    }

    supprimerarticle::~supprimerarticle()
    {
        if (components)
        {
            delete components;
        }
    }

    void supprimerarticle::InitializeComponent(void)
    {
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(35, 45);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(85, 16);
        this->label1->TabIndex = 5;
        this->label1->Text = L"ID de l\'Article";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(38, 64);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(266, 22);
        this->textBox1->TabIndex = 4;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &supprimerarticle::textBox1_TextChanged);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::IndianRed;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(374, 21);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 3;
        this->button1->Text = L"Supprimer l\'Article";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &supprimerarticle::button1_Click_1);
        // 
        // supprimerarticle
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 146);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->button1);
        this->MaximumSize = System::Drawing::Size(660, 193);
        this->MinimumSize = System::Drawing::Size(660, 193);
        this->Name = L"supprimerarticle";
        this->Text = L"Supprimer un Article";
        this->Load += gcnew System::EventHandler(this, &supprimerarticle::supprimerarticle_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void supprimerarticle::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
