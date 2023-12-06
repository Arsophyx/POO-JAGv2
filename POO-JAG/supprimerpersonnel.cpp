#include "pch.h"
#include "supprimerpersonnel.h"
namespace POO_JAG {

    supprimerpersonnel::supprimerpersonnel(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &supprimerpersonnel::button1_Click);
    }

    supprimerpersonnel::~supprimerpersonnel()
    {
        if (components)
        {
            delete components;
        }
    }

    void supprimerpersonnel::InitializeComponent(void)
    {
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::IndianRed;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(361, 20);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Supprimer le Personnel";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &supprimerpersonnel::button1_Click_1);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(22, 44);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(102, 16);
        this->label3->TabIndex = 6;
        this->label3->Text = L"ID du Personnel";
        this->label3->Click += gcnew System::EventHandler(this, &supprimerpersonnel::label3_Click);
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(25, 63);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(266, 22);
        this->textBox3->TabIndex = 5;
        // 
        // supprimerpersonnel
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 146);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->button1);
        this->MaximumSize = System::Drawing::Size(660, 193);
        this->MinimumSize = System::Drawing::Size(660, 193);
        this->Name = L"supprimerpersonnel";
        this->Text = L"supprimerpersonnel";
        this->Load += gcnew System::EventHandler(this, &supprimerpersonnel::supprimerpersonnel_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void supprimerpersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
