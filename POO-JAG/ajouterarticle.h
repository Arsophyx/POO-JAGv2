#pragma once


#include "servicearticle.h"
namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class ajouterarticle : public System::Windows::Forms::Form
    {
    public:
        ajouterarticle(void);

    protected:
        ~ajouterarticle();

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
    private: NS_Comp_Svc_article::servicearticle^ oSvcarticle;

           System::Windows::Forms::Button^ button1;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void ajouterarticle_Load(System::Object^ sender, System::EventArgs^ e) {
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
    private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
        double textBox2Value;

        if (!double::TryParse(textBox2->Text, textBox2Value)) {
            MessageBox::Show("Veuillez remplir le Prix de l'article en tant que décimal.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        double textBox3Value;

        if (!double::TryParse(textBox3->Text, textBox3Value)) {
            MessageBox::Show("Veuillez remplir la TVA en tant que décimal.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox4Value;
        if (!int::TryParse(textBox4->Text, textBox4Value)) {
            MessageBox::Show("Veuillez remplir le Seuil de Réapprovisionement de l'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox5Value;
        if (!int::TryParse(textBox5->Text, textBox5Value)) {
            MessageBox::Show("Veuillez remplir Stock en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox1->Text->Length > 128) {
            MessageBox::Show("Le nom de l'article ne peut pas faire plus que 128 caractères", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox2->Text->Length > 11) {
            MessageBox::Show("Le prix Article Hors Taxe ne peut pas faire plus que 11 caractères ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 6) {
            MessageBox::Show("La TVA de l'Article ne peut pas faire plus que  caractères et doit être écrit sous ce format : CCC,CC", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcarticle->creerarticle(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text);
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}