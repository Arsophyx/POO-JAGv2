#pragma once
#include "serviceperso.h"


namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class afficherpersonnel : public System::Windows::Forms::Form
    {
    public:
        afficherpersonnel(void);

    protected:
        ~afficherpersonnel();

    private:
    private: System::Data::DataSet^ oDs;
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
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
           System::Windows::Forms::Button^ button1;
    private: NS_Comp_Svc_Perso::serviceperso^ oSvcperso;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void afficherpersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcperso = gcnew NS_Comp_Svc_Perso::serviceperso();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->dataGridView1->Refresh();
        this->oDs = this->oSvcperso->afficherpersonnel(this->textBox7->Text,this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, "Personnel");
        this->dataGridView1->DataSource = this->oDs;
        this->dataGridView1->DataMember = "Personnel";
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}