#pragma once
#include "serviceperso.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class supprimerpersonnel : public System::Windows::Forms::Form
    {
    public:
        supprimerpersonnel(void);

    protected:
        ~supprimerpersonnel();

    private:
        System::ComponentModel::Container^ components;




    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: NS_Comp_Svc_Perso::serviceperso^ oSvcperso;





           System::Windows::Forms::Button^ button1;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void supprimerpersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcperso = gcnew NS_Comp_Svc_Perso::serviceperso();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox3->Text)) {
            MessageBox::Show("Veuillez remplir : ID du Personnel.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox3Value;
        if (!int::TryParse(textBox3->Text, textBox3Value)) {
            MessageBox::Show("Veuillez remplir ID du personnel en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        this->oSvcperso->supprimerPersonnel(this->textBox3->Text);
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
