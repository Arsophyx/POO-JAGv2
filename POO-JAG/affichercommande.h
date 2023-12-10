#pragma once
#include"servicecommande.h"
namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class affichercommande : public System::Windows::Forms::Form
    {
    public:
        affichercommande(void);

    protected:
        ~affichercommande();
    private: System::Data::DataSet^ oDs;
    private: System::Windows::Forms::Label^ label7;
    protected:
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: NS_Comp_Svc_commande::servicecommande^ oSvccommande;













           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void affichercommande_Load(System::Object^ sender, System::EventArgs^ e) {
        this->oSvccommande = gcnew NS_Comp_Svc_commande::servicecommande();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->dataGridView1->Refresh();
        this->oDs = this->oSvccommande->affichercommande(this->textBox7->Text, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, this->textBox8->Text, "Commande");
        this->dataGridView1->DataSource = this->oDs;
        this->dataGridView1->DataMember = "Commande";
    }
    };
}