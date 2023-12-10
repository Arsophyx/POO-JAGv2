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
        this->label1->Location = System::Drawing::Point(26, 37);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(89, 13);
        this->label1->TabIndex = 5;
        this->label1->Text = L"ID de Commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(28, 52);
        this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 4;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::IndianRed;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(280, 17);
        this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 3;
        this->button1->Text = L"Supprimer la Commande";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &supprimercommande::button1_Click_1);
        // 
        // supprimercommande
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
        this->Name = L"supprimercommande";
        this->Text = L"Supprimer une Commande";
        this->Load += gcnew System::EventHandler(this, &supprimercommande::supprimercommande_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void supprimercommande::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}


