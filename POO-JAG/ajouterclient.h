#pragma once
#include "CAD.h"
#include "serviceclient.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Data::SqlClient;
    using namespace System::Windows::Forms;

    public ref class ajouterclient : public System::Windows::Forms::Form
    {
    public:
        ajouterclient(void);

    protected:
        ~ajouterclient();

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label7;

    private: NS_Comp_Svc_client::serviceclient^ oSvcClient;




           System::Windows::Forms::Button^ button1;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void ajouterclient_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcClient = gcnew NS_Comp_Svc_client::serviceclient();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
        if (!VerifierExistenceVille(textBox6->Text)) {
            MessageBox::Show("La ville de livraison indiquée n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceVille(textBox7->Text)) {
            MessageBox::Show("La ville de facturation indiquée n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        if (textBox1->Text->Length > 32) {
            MessageBox::Show("Le nom client de la Commande ne peut pas faire plus que 32 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox2->Text->Length > 32) {
            MessageBox::Show("La prénom client ne peut pas faire plus que 32 caractères ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 10) {
            MessageBox::Show("L'anniversaire du client ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 64) {
            MessageBox::Show("L'adresse de livraison du client ne peut pas faire plus que 64", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 64) {
            MessageBox::Show("L'adresse de facturation du client ne peut pas faire plus que 64 caractères ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        this->oSvcClient->creerclient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text);
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
           bool VerifierExistenceVille(String^ nomVille) {
               try {
                   String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True";
                   SqlConnection^ connection = gcnew SqlConnection(connectionString);

                   String^ query = "SELECT COUNT(*) FROM [dbo].[ville] WHERE nom_ville = @NomVille";
                   SqlCommand^ command = gcnew SqlCommand(query, connection);
                   command->Parameters->Add(gcnew SqlParameter("@NomVille", nomVille));

                   connection->Open();
                   int rowCount = Convert::ToInt32(command->ExecuteScalar());
                   connection->Close();

                   return rowCount > 0;
               }
               catch (Exception^ ex) {
                   return false;
               }
           }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}