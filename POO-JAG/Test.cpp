#include "pch.h"
#include "Test.h"


namespace POO_JAG {

    test::test(void)
    {
        InitializeComponent();
        button1->Click += gcnew System::EventHandler(this, &test::button1_Click);
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
        this->SuspendLayout();
        // 
        // test
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(584, 861);
        this->Margin = System::Windows::Forms::Padding(2);
        this->MaximumSize = System::Drawing::Size(600, 900);
        this->MinimumSize = System::Drawing::Size(600, 900);
        this->Name = L"test";
        this->Text = L"Afficher un Article";
        this->Load += gcnew System::EventHandler(this, &test::afficherarticle_Load);
        this->ResumeLayout(false);

    }

    void test::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
}


