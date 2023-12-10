#include "pch.h"
#include "Test.h"


namespace POO_JAG {

    test::test(void)
    {
        InitializeComponent();
    }

    test::~test()
    {
        if (components)
        {
            delete components;
        }
    }

    void test::InitializeComponent(void)
    {
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::PaleGreen;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
        this->button1->Location = System::Drawing::Point(56, 112);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(132, 66);
        this->button1->TabIndex = 0;
        this->button1->Text = L"Charger la valeur de la commande";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &test::button1_Click);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Location = System::Drawing::Point(53, 47);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(135, 13);
        this->label1->TabIndex = 1;
        this->label1->Text = L"Identifiant de la Commande";
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(56, 63);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(132, 20);
        this->textBox1->TabIndex = 2;
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
        this->label2->Location = System::Drawing::Point(67, 242);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(328, 32);
        this->label2->TabIndex = 3;
        this->label2->Text = L"Valeur de la commande :";
        this->label2->Click += gcnew System::EventHandler(this, &test::label2_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::PaleGreen;
        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
        this->button2->Location = System::Drawing::Point(232, 112);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(132, 66);
        this->button2->TabIndex = 4;
        this->button2->Text = L"Ajouter la réduction à la commande";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &test::button2_Click);
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::PaleGreen;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
        this->button3->Location = System::Drawing::Point(411, 112);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(132, 66);
        this->button3->TabIndex = 5;
        this->button3->Text = L"Ajouter l\'augmentation à la commande";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &test::button3_Click);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(232, 63);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(132, 20);
        this->textBox2->TabIndex = 6;
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(411, 63);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(132, 20);
        this->textBox3->TabIndex = 7;
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Location = System::Drawing::Point(229, 47);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(110, 13);
        this->label3->TabIndex = 8;
        this->label3->Text = L"Valeur de la réduction";
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Location = System::Drawing::Point(408, 47);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(123, 13);
        this->label4->TabIndex = 9;
        this->label4->Text = L"Valeur de l\'augmentation";
        // 
        // test
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(584, 361);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->textBox3);
        this->Controls->Add(this->textBox2);
        this->Controls->Add(this->button3);
        this->Controls->Add(this->button2);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->button1);
        this->Margin = System::Windows::Forms::Padding(2);
        this->MaximumSize = System::Drawing::Size(600, 400);
        this->MinimumSize = System::Drawing::Size(600, 400);
        this->Name = L"test";
        this->Text = L"Test";
        this->Load += gcnew System::EventHandler(this, &test::test_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
}


