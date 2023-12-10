#include "pch.h"
#include "modifiercommande.h"

namespace POO_JAG {

    modifiercommande::modifiercommande(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &modifiercommande::button1_Click);
    }

    modifiercommande::~modifiercommande()
    {
        if (components)
        {
            delete components;
        }
    }

    void modifiercommande::InitializeComponent(void)
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
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->SuspendLayout();
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(24, 281);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(62, 13);
        this->label6->TabIndex = 25;
        this->label6->Text = L"ID du Client";
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(26, 297);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(200, 20);
        this->textBox6->TabIndex = 24;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &modifiercommande::textBox6_TextChanged_1);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(24, 239);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(131, 13);
        this->label5->TabIndex = 23;
        this->label5->Text = L"Date Livraison Commande";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(26, 254);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(200, 20);
        this->textBox5->TabIndex = 22;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(24, 190);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(162, 13);
        this->label4->TabIndex = 21;
        this->label4->Text = L"Date Payement de la Commande";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(26, 206);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 20;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(24, 140);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(155, 13);
        this->label3->TabIndex = 19;
        this->label3->Text = L"Date émission de la Commande";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(26, 155);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 18;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(24, 94);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(185, 13);
        this->label2->TabIndex = 17;
        this->label2->Text = L"Moyen de payement de la Commande";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(26, 110);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 16;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(24, 51);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(170, 13);
        this->label1->TabIndex = 15;
        this->label1->Text = L"Solde Reglement de la Commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(26, 67);
        this->textBox1->Margin = System::Windows::Forms::Padding(2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 14;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &modifiercommande::textBox1_TextChanged);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Gold;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(282, 113);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 13;
        this->button1->Text = L"Modifier la Commande";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &modifiercommande::button1_Click_1);
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(24, 7);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(89, 13);
        this->label7->TabIndex = 27;
        this->label7->Text = L"ID de Commande";
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(26, 23);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(200, 20);
        this->textBox7->TabIndex = 26;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &modifiercommande::textBox7_TextChanged);
        // 
        // modifiercommande
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
        this->Margin = System::Windows::Forms::Padding(2);
        this->MaximumSize = System::Drawing::Size(499, 373);
        this->MinimumSize = System::Drawing::Size(499, 373);
        this->Name = L"modifiercommande";
        this->Text = L"Modifier une Commande";
        this->Load += gcnew System::EventHandler(this, &modifiercommande::modifiercommande_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void modifiercommande::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
