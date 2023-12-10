#pragma once
#include "servicecommande.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class supprimercommande : public System::Windows::Forms::Form
    {
    public:
        supprimercommande(void);

    protected:
        ~supprimercommande();
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;

    private: NS_Comp_Svc_commande::servicecommande^ oSvcCommande;












           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void supprimercommande_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcCommande = gcnew NS_Comp_Svc_commande::servicecommande();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->oSvcCommande->supprimercommande(textBox1->Text);
    }
    };
}