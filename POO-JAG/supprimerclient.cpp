#include "pch.h"
#include "supprimerclient.h"

namespace POO_JAG {

    supprimerclient::supprimerclient(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &supprimerclient::button1_Click);
    }

    supprimerclient::~supprimerclient()
    {
        if (components)
        {
            delete components;
        }
    }

    void supprimerclient::InitializeComponent(void)
    {
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::IndianRed;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(271, 16);
        this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Supprimer le Client";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &supprimerclient::button1_Click_1);
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(19, 51);
        this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 1;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &supprimerclient::textBox1_TextChanged);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(16, 36);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(62, 13);
        this->label1->TabIndex = 2;
        this->label1->Text = L"ID du Client";
        this->label1->Click += gcnew System::EventHandler(this, &supprimerclient::label1_Click);
        // 
        // supprimerclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(483, 125);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->button1);
        this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->MaximumSize = System::Drawing::Size(499, 164);
        this->MinimumSize = System::Drawing::Size(499, 164);
        this->Name = L"supprimerclient";
        this->Text = L"Supprimer un Client";
        this->Load += gcnew System::EventHandler(this, &supprimerclient::supprimerclient_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void supprimerclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
