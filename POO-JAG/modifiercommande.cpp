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
        this->label6->Location = System::Drawing::Point(32, 346);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(74, 16);
        this->label6->TabIndex = 25;
        this->label6->Text = L"ID du Client";
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(35, 365);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(266, 22);
        this->textBox6->TabIndex = 24;
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(32, 294);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(166, 16);
        this->label5->TabIndex = 23;
        this->label5->Text = L"Date Livraison Commande";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(35, 313);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(266, 22);
        this->textBox5->TabIndex = 22;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(32, 234);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(206, 16);
        this->label4->TabIndex = 21;
        this->label4->Text = L"Date Payement de la Commande";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(35, 253);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(266, 22);
        this->textBox4->TabIndex = 20;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(32, 172);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(199, 16);
        this->label3->TabIndex = 19;
        this->label3->Text = L"Date émission de la Commande";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(35, 191);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(266, 22);
        this->textBox3->TabIndex = 18;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(32, 116);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(218, 16);
        this->label2->TabIndex = 17;
        this->label2->Text = L"Payement Moyen de la Commande";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(35, 135);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(266, 22);
        this->textBox2->TabIndex = 16;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(32, 63);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(226, 16);
        this->label1->TabIndex = 15;
        this->label1->Text = L"Solde Regelement de la Commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(35, 82);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(266, 22);
        this->textBox1->TabIndex = 14;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Gold;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(376, 139);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(234, 105);
        this->button1->TabIndex = 13;
        this->button1->Text = L"Modifier la Commande";
        this->button1->UseVisualStyleBackColor = false;
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(32, 9);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(112, 16);
        this->label7->TabIndex = 27;
        this->label7->Text = L"ID de Commande";
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(35, 28);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(266, 22);
        this->textBox7->TabIndex = 26;
        // 
        // modifiercommande
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(642, 403);
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
        this->MaximumSize = System::Drawing::Size(660, 450);
        this->MinimumSize = System::Drawing::Size(660, 450);
        this->Name = L"modifiercommande";
        this->Text = L"Modifier une Commande";
        this->Load += gcnew System::EventHandler(this, &modifiercommande::modifiercommande_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void modifiercommande::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
