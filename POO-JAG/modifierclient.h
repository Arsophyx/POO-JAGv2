#pragma once
#include "serviceclient.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data::SqlClient;

    public ref class modifierclient : public System::Windows::Forms::Form
    {
    public:
        modifierclient(void);

    protected:
        ~modifierclient();

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

    private: NS_Comp_Svc_client::serviceclient^ oSvcClient;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;


           System::Windows::Forms::Button^ button1;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void modifierclient_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcClient = gcnew NS_Comp_Svc_client::serviceclient();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
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
        if (String::IsNullOrEmpty(textBox8->Text)) {
            MessageBox::Show("Veuillez remplir Toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir ID du Client en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceVille(textBox7->Text)) {
            MessageBox::Show("La ville de livraison indiquee n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceVille(textBox8->Text)) {
            MessageBox::Show("La ville de facturation indiquee n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox2->Text->Length > 32) {
            MessageBox::Show("Le nom client de la Commande ne peut pas faire plus que 32 caracteres.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 32) {
            MessageBox::Show("La prenom client ne peut pas faire plus que 32 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 10) {
            MessageBox::Show("L'anniversaire du client ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length < 10) {
            MessageBox::Show("L'anniversaire du client ne peut pas faire plus que 10 caracteres et doit etre ecrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 64) {
            MessageBox::Show("L'adresse de livraison du client ne peut pas faire plus que 64 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox6->Text->Length > 64) {
            MessageBox::Show("L'adresse de facturation du client ne peut pas faire plus que 64 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox1->Text->Length < 2) {
            MessageBox::Show("Le nom client ne peut pas faire moins que 2 caracteres.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox2->Text->Length < 2) {
            MessageBox::Show("La pr�nom client ne peut pas faire moins que 2 caracteres ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        oSvcClient->modifierclient(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text);
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
    private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
};
}