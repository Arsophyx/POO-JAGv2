#pragma once
#include "servicecommande.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class modifiercommande : public System::Windows::Forms::Form
    {
    public:
        modifiercommande(void);

    protected:
        ~modifiercommande();
    private: System::Windows::Forms::Label^ label6;
    protected:
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
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox7;

    private:
        System::ComponentModel::Container^ components;

    private: NS_Comp_Svc_commande::servicecommande^ oSvcCommande;












           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void modifiercommande_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcCommande = gcnew NS_Comp_Svc_commande::servicecommande();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox2->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox4->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox5->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox6->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (String::IsNullOrEmpty(textBox7->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox7Value;
        if (!int::TryParse(textBox7->Text, textBox7Value)) {
            MessageBox::Show("Veuillez remplir ID du commande en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox6Value;
        if (!int::TryParse(textBox6->Text, textBox6Value)) {
            MessageBox::Show("Veuillez remplir ID du client en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        double textBox1Value;
        if (!double::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir ID de Commande en tant que entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        if (textBox2->Text->Length > 32) {
            MessageBox::Show("Le moyen de payement de la Commande ne peut pas faire plus que 32 caracteres.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 10) {
            MessageBox::Show("La date emission de la Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length < 10) {
            MessageBox::Show("La date émission de la Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length < 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length < 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox1->Text->Length > 11) {
            MessageBox::Show("Le prix Article Hors Taxe ne peut pas faire plus que 11 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcCommande->modifiercommande(textBox7->Text, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, System::Convert::ToInt32(textBox6->Text));
    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}