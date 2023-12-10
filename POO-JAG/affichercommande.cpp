#include "pch.h"
#include "affichercommande.h"

namespace POO_JAG {

    affichercommande::affichercommande(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &affichercommande::button1_Click);
    }

    affichercommande::~affichercommande()
    {
        if (components)
        {
            delete components;
        }
    }

    void affichercommande::InitializeComponent(void)
    {
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
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
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(18, 10);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(89, 13);
        this->label7->TabIndex = 42;
        this->label7->Text = L"ID de Commande";
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(20, 25);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(200, 20);
        this->textBox7->TabIndex = 41;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &affichercommande::textBox7_TextChanged);
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(18, 284);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(131, 13);
        this->label6->TabIndex = 40;
        this->label6->Text = L"Date Livraison Commande";
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(20, 299);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(200, 20);
        this->textBox6->TabIndex = 39;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &affichercommande::textBox6_TextChanged_1);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(18, 241);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(162, 13);
        this->label5->TabIndex = 38;
        this->label5->Text = L"Date Payement de la Commande";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(20, 257);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(200, 20);
        this->textBox5->TabIndex = 37;
        this->textBox5->TextChanged += gcnew System::EventHandler(this, &affichercommande::textBox5_TextChanged);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(18, 193);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(155, 13);
        this->label4->TabIndex = 36;
        this->label4->Text = L"Date émission de la Commande";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(20, 208);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 35;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(18, 142);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(171, 13);
        this->label3->TabIndex = 34;
        this->label3->Text = L"Payement Moyen de la Commande";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(20, 158);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 33;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(18, 97);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(176, 13);
        this->label2->TabIndex = 32;
        this->label2->Text = L"Solde Regelement de la Commande";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(20, 112);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 31;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(18, 54);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(138, 13);
        this->label1->TabIndex = 30;
        this->label1->Text = L"Reference de la commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(20, 69);
        this->textBox1->Margin = System::Windows::Forms::Padding(2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 29;
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SkyBlue;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(276, 115);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 28;
        this->button1->Text = L"Afficher la/les Commande(s)";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &affichercommande::button1_Click_1);
        // 
        // dataGridView1
        // 
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(20, 386);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(552, 463);
        this->dataGridView1->TabIndex = 43;
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Location = System::Drawing::Point(19, 330);
        this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(62, 13);
        this->label8->TabIndex = 45;
        this->label8->Text = L"ID du Client";
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(21, 345);
        this->textBox8->Margin = System::Windows::Forms::Padding(2);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(200, 20);
        this->textBox8->TabIndex = 44;
        // 
        // affichercommande
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(584, 861);
        this->Controls->Add(this->label8);
        this->Controls->Add(this->textBox8);
        this->Controls->Add(this->dataGridView1);
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
        this->MaximumSize = System::Drawing::Size(600, 900);
        this->MinimumSize = System::Drawing::Size(600, 900);
        this->Name = L"affichercommande";
        this->Text = L"Afficher une Commande";
        this->Load += gcnew System::EventHandler(this, &affichercommande::affichercommande_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void affichercommande::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
