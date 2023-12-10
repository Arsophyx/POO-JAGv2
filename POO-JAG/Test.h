#pragma once
#include "servicestats.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class test : public System::Windows::Forms::Form
    {
    public:
        test(void);

    protected:
        ~test();
    private: System::Data::DataSet^ oDs;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;

    private: NS_Comp_Svc_Stats::servicestats^ oSvcStats;

    protected:














    private:
        System::ComponentModel::Container^ components;












           void InitializeComponent(void);
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void test_Load(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcStats = gcnew NS_Comp_Svc_Stats::servicestats();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        label2->Text = "Valeur de la commande : ";
        label2->Text += this->oSvcStats->afficherValeurCommande(textBox1->Text);

    }
    
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox2->Text)) {
            MessageBox::Show("Veuillez remplir Valeur de la réduction.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox2Value;
        if (!int::TryParse(textBox2->Text, textBox2Value)) {
            MessageBox::Show("Veuillez remplir Valeur de la réduction en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        System::String^ val = this->oSvcStats->afficherReduction(label2->Text->Substring(24), textBox2->Text);
        label2->Text = "Valeur de la commande : ";
        label2->Text += val;
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir Identifiant de la Commande en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Veuillez remplir Valeur de l'augmentation.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox3Value;
        if (!int::TryParse(textBox3->Text, textBox3Value)) {
            MessageBox::Show("Veuillez remplir Valeur de l'augmentation en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        System::String^ val = this->oSvcStats->afficherAugmentation(label2->Text->Substring(24), textBox2->Text);
        label2->Text = "Valeur de la commande : ";
        label2->Text += val;
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
       
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        
    }
    };
}