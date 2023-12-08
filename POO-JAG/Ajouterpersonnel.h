#pragma once
#include "serviceperso.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class Ajouterpersonnel : public System::Windows::Forms::Form
    {
    public:
        Ajouterpersonnel(void);

    protected:
        ~Ajouterpersonnel();

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox6;
           System::Windows::Forms::Button^ button1;
    private: NS_Comp_Svc_Perso::serviceperso^ oSvcperso;

        void InitializeComponent(void);
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Ajouterpersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcperso = gcnew NS_Comp_Svc_Perso::serviceperso();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcperso->creerPersonnel(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text);
    }
    };
}
