#pragma once
#include "serviceclient.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data::SqlClient;

    public ref class supprimerclient : public System::Windows::Forms::Form
    {
    public:
        supprimerclient(void);

    protected:
        ~supprimerclient();

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;

    private: NS_Comp_Svc_client::serviceclient^ oSvcClient;








           System::Windows::Forms::Button^ button1;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void supprimerclient_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcClient = gcnew NS_Comp_Svc_client::serviceclient();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(textBox1->Text)) {
            MessageBox::Show("Veuillez remplir : ID du Client.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox1Value;
        if (!int::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir ID du client en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistencecommande(textBox1->Text)) {
            MessageBox::Show("Impossible de supprimer le client car des commandes sont associées.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        oSvcClient->supprimerclient(textBox1->Text);
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
           bool VerifierExistencecommande(String^ idclient) {
               try {
                   String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True";
                   SqlConnection^ connection = gcnew SqlConnection(connectionString);

                   String^ query = "SELECT TOP 1 1 FROM [dbo].[commande] WHERE id_client = @idclient";
                   SqlCommand^ command = gcnew SqlCommand(query, connection);
                   command->Parameters->Add(gcnew SqlParameter("@idclient", idclient));

                   connection->Open();
                   SqlDataReader^ reader = command->ExecuteReader();
                   bool idClientExists = reader->Read();
                   connection->Close();

                   return !idClientExists;
               }
               catch (Exception^ ex) {

                   return false;
               }
           }
    };
}