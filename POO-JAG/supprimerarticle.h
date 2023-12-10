#pragma once
#include "servicearticle.h"
namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class supprimerarticle : public System::Windows::Forms::Form
    {
    public:
        supprimerarticle(void);

    protected:
        ~supprimerarticle();
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;
    private: NS_Comp_Svc_article::servicearticle^ oSvcarticle;
















           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void supprimerarticle_Load(System::Object^ sender, System::EventArgs^ e) {

        this->oSvcarticle = gcnew NS_Comp_Svc_article::servicearticle();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir : ID de l'Article.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcarticle->supprimerarticle(this->textBox1->Text);
    }
    };
}