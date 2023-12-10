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
        int textBox6Value;
        if (!int::TryParse(textBox6->Text, textBox6Value)) {
            MessageBox::Show("Veuillez remplir ID du supérieur en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox5Value;
        if (!int::TryParse(textBox5->Text, textBox5Value)) {
            MessageBox::Show("Veuillez remplir le code Postal du personnel en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox1->Text->Length > 32) {
            MessageBox::Show("Le nom du personnel ne peut pas faire plus que 32 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox2->Text->Length > 32) {
            MessageBox::Show("Le prénom du personnel ne peut pas faire plus que 32 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 10) {
            MessageBox::Show("Le date de la prise de poste du personnel doit être écrit sur 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length < 10) {
            MessageBox::Show("Le date de la prise de poste du personnel doit être écrit sur 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 64) {
            MessageBox::Show("L'adresse du personnel ne peut pas faire plus que 64 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 5) {
            MessageBox::Show("Le code postal du personnel ne peut pas faire plus que 5 entiers", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcperso->creerPersonnel(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text);

    }
    private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
