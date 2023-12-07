#include "pch.h"
#include "supprimercommande.h"

namespace POO_JAG {

    supprimercommande::supprimercommande(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &supprimercommande::button1_Click);
    }

    supprimercommande::~supprimercommande()
    {
        if (components)
        {
            delete components;
        }
    }

    void supprimercommande::InitializeComponent(void)
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
        this->label1->Size = System::Drawing::Size(112, 16);
        this->label1->TabIndex = 5;
        this->label1->Text = L"ID de Commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(38, 64);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(266, 22);
        this->textBox1->TabIndex = 4;
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
        this->button1->Text = L"Supprimer la Commande";
        this->button1->UseVisualStyleBackColor = false;
        // 
        // supprimercommande
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 146);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->button1);
        this->MaximumSize = System::Drawing::Size(660, 193);
        this->MinimumSize = System::Drawing::Size(660, 193);
        this->Name = L"supprimercommande";
        this->Text = L"Supprimer une Commande";
        this->Load += gcnew System::EventHandler(this, &supprimercommande::supprimercommande_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void supprimercommande::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}


