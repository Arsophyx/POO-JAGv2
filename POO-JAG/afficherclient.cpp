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
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SkyBlue;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(279, 118);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 9;
        this->button1->Text = L"Afficher le(s) Client(s)";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &afficherclient::button1_Click_1);
        // 
        // dataGridView1
        // 
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(20, 251);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(552, 598);
        this->dataGridView1->TabIndex = 16;
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Location = System::Drawing::Point(17, 12);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(62, 13);
        this->label7->TabIndex = 30;
        this->label7->Text = L"ID du Client";
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(20, 28);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(200, 20);
        this->textBox7->TabIndex = 29;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &afficherclient::textBox7_TextChanged);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(17, 198);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(196, 13);
        this->label4->TabIndex = 24;
        this->label4->Text = L"Anniversaire du premiere achat du client";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(20, 214);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 23;
        this->textBox4->TextChanged += gcnew System::EventHandler(this, &afficherclient::textBox4_TextChanged);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(17, 148);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(109, 13);
        this->label3->TabIndex = 22;
        this->label3->Text = L"Anniversaire du Client";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(20, 163);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 21;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(17, 103);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(72, 13);
        this->label2->TabIndex = 20;
        this->label2->Text = L"Prenom Client";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(20, 118);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 19;
        this->textBox2->TextChanged += gcnew System::EventHandler(this, &afficherclient::textBox2_TextChanged);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(17, 59);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(58, 13);
        this->label1->TabIndex = 18;
        this->label1->Text = L"Nom Client";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(20, 75);
        this->textBox1->Margin = System::Windows::Forms::Padding(2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 17;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &afficherclient::textBox1_TextChanged);
        // 
        // afficherclient
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(584, 861);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->textBox7);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->textBox4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->dataGridView1);
        this->Controls->Add(this->button1);
        this->Margin = System::Windows::Forms::Padding(2);
        this->MaximumSize = System::Drawing::Size(600, 900);
        this->MinimumSize = System::Drawing::Size(600, 900);
        this->Name = L"afficherclient";
        this->Text = L"Afficher un Client";
        this->Load += gcnew System::EventHandler(this, &afficherclient::afficherclient_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void afficherclient::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}
