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
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(26, 86);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(73, 13);
        this->label2->TabIndex = 13;
        this->label2->Text = L"Nom du Client";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(29, 101);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 12;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Turquoise;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(280, 67);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 9;
        this->button1->Text = L"Modifier le(s) Client(s)";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &afficherclient::button1_Click_1);
        // 
        // afficherclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(483, 212);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->button1);
        this->Margin = System::Windows::Forms::Padding(2);
        this->MaximumSize = System::Drawing::Size(499, 251);
        this->MinimumSize = System::Drawing::Size(499, 251);
        this->Name = L"afficherclient";
        this->Text = L"Afficher un Client";
        this->Load += gcnew System::EventHandler(this, &afficherclient::afficherclient_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void afficherclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
