#pragma once
#include "servicearticle.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class modifierarticle : public System::Windows::Forms::Form
    {
    public:
        modifierarticle(void);

    protected:
        ~modifierarticle();

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
    private: NS_Comp_Svc_article::servicearticle^ oSvcarticle;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void modifierarticle_Load(System::Object^ sender, System::EventArgs^ e) {
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
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir ID de l'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        double textBox3Value;
        if (!double::TryParse(textBox3->Text, textBox3Value)) {
            MessageBox::Show("Veuillez remplir Prix de l'Article Hors Taxe en tant que decimal.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        double textBox4Value;
        if (!double::TryParse(textBox4->Text, textBox4Value)) {
            MessageBox::Show("Veuillez remplir TVA de l'Article en tant que decimal.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox5Value;
        if (!int::TryParse(textBox5->Text, textBox5Value)) {
            MessageBox::Show("Veuillez remplir Seuil de Reapprovisionement de l'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox6Value;
        if (!int::TryParse(textBox6->Text, textBox6Value)) {
            MessageBox::Show("Veuillez remplir Stock de l'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 11) {
            MessageBox::Show("Le prix Article Hors Taxe ne peut pas faire plus que 11 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 6) {
            MessageBox::Show("La TVA de l'Article ne peut pas faire plus que 4 caracteres et doit etre ecrit sous ce format : CCC,CC", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcarticle->modifierarticle(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text);
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}