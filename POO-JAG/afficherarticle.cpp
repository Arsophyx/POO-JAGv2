#include "pch.h"
#include "afficherarticle.h"

namespace POO_JAG {

    afficherarticle::afficherarticle(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &afficherarticle::button1_Click);
    }

    afficherarticle::~afficherarticle()
    {
        if (components)
        {
            delete components;
        }
    }

    void afficherarticle::InitializeComponent(void)
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
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Location = System::Drawing::Point(23, 241);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(86, 13);
        this->label6->TabIndex = 25;
        this->label6->Text = L"Stock de l\'Article";
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(26, 257);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(200, 20);
        this->textBox6->TabIndex = 24;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &afficherarticle::textBox6_TextChanged_1);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(23, 199);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(196, 13);
        this->label5->TabIndex = 23;
        this->label5->Text = L"Seuil de Réapprovisionement de l\'Article";
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(26, 214);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(200, 20);
        this->textBox5->TabIndex = 22;
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(23, 150);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(79, 13);
        this->label4->TabIndex = 21;
        this->label4->Text = L"TVA de l\'Article";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(26, 166);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(200, 20);
        this->textBox4->TabIndex = 20;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(23, 100);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(127, 13);
        this->label3->TabIndex = 19;
        this->label3->Text = L"Prix de l\'Article Hors Taxe";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(26, 115);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(200, 20);
        this->textBox3->TabIndex = 18;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Location = System::Drawing::Point(23, 54);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(80, 13);
        this->label2->TabIndex = 17;
        this->label2->Text = L"Nom de l\'Article";
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(26, 70);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(200, 20);
        this->textBox2->TabIndex = 16;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(23, 11);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(69, 13);
        this->label1->TabIndex = 15;
        this->label1->Text = L"ID de l\'Article\r\n";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(26, 27);
        this->textBox1->Margin = System::Windows::Forms::Padding(2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(200, 20);
        this->textBox1->TabIndex = 14;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &afficherarticle::textBox1_TextChanged);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::SkyBlue;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->Location = System::Drawing::Point(284, 100);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(176, 85);
        this->button1->TabIndex = 13;
        this->button1->Text = L"Afficher l\'Article";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &afficherarticle::button1_Click_1);
        // 
        // dataGridView1
        // 
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(12, 296);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(552, 553);
        this->dataGridView1->TabIndex = 26;
        this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &afficherarticle::dataGridView1_CellContentClick);
        // 
        // afficherarticle
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(584, 861);
        this->Controls->Add(this->dataGridView1);
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
        this->Name = L"afficherarticle";
        this->Text = L"Afficher un Article";
        this->Load += gcnew System::EventHandler(this, &afficherarticle::afficherarticle_Load);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    void afficherarticle::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}

