#pragma once
#include "servicecommande.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Data::SqlClient;

    public ref class ajoutercommande : public System::Windows::Forms::Form
    {
    public:
        ajoutercommande(void);

    protected:
        ~ajoutercommande();

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
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: bool ajouterCommandeClicked = false;
    private: NS_Comp_Svc_commande::servicecommande^ oSvcCommande;

           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void ajoutercommande_Load(System::Object^ sender, System::EventArgs^ e) {
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
        int textBox6Value;
        if (!int::TryParse(textBox6->Text, textBox6Value)) {
            MessageBox::Show("Veuillez remplir ID du client en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        double textBox1Value;
        if (!double::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir Solde Reglement de la Commande en tant que décimal/entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }


        if (textBox2->Text->Length > 32) {
            MessageBox::Show("Le moyen de payement de la Commande ne peut pas faire plus que 32 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 10) {
            MessageBox::Show("La date émission de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length < 10) {
            MessageBox::Show("La date émission de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length < 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length < 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceidclient(textBox6->Text)) {
            MessageBox::Show("L'id du Client indiquée n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        oSvcCommande->creercommande(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, System::Convert::ToInt32(textBox6->Text));
        ajouterCommandeClicked = true;
    }
    private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!ajouterCommandeClicked) {
            MessageBox::Show("Veuillez d'abord cliquer sur le bouton Ajouter la Commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
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
        int textBox7Value;
        if (!int::TryParse(textBox7->Text, textBox7Value)) {
            MessageBox::Show("Veuillez remplir ID de l'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox8Value;
        if (!int::TryParse(textBox8->Text, textBox8Value)) {
            MessageBox::Show("Veuillez remplir Nombre d'Article en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        double textBox1Value;
        if (!double::TryParse(textBox1->Text, textBox1Value)) {
            MessageBox::Show("Veuillez remplir Solde Reglement de la Commande en tant que décimal/entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        int textBox6Value;
        if (!int::TryParse(textBox6->Text, textBox6Value)) {
            MessageBox::Show("Veuillez remplir ID du Client en tant qu'entier.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        if (textBox2->Text->Length > 32) {
            MessageBox::Show("Le moyen de payement de la Commande ne peut pas faire plus que 32 caractères.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length > 10) {
            MessageBox::Show("La date émission de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length > 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length > 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox3->Text->Length < 10) {
            MessageBox::Show("La date émission de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox4->Text->Length < 10) {
            MessageBox::Show("La date Payement de la Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox5->Text->Length < 10) {
            MessageBox::Show("La date Livraison Commande ne peut pas faire plus que 10 caractères et doit être écrit sur ce format : JJ/MM/AAAA.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (textBox1->Text->Length > 11) {
            MessageBox::Show("Le prix Article Hors Taxe ne peut pas faire plus que 11 caractères ", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceidarticle(textBox7->Text)) {
            MessageBox::Show("L'id article indiquée n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistenceidclient(textBox6->Text)) {
            MessageBox::Show("L'id du Client indiquée n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (!VerifierExistencearticledouble(textBox7->Text)) {
            MessageBox::Show("L'id article indiquée à déjà été ajouté à la commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }
        if (this->oSvcCommande->verifierStock(textBox7->Text, textBox8->Text) == 0) {
            MessageBox::Show("Il n'y a pas assez d'articles en stock pour le nombre d'articles rentré.");
        }
        else {
            if (this->oSvcCommande->verifierIntegrer(textBox7->Text, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text) == 1) {
                oSvcCommande->ajouterArticle(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, System::Convert::ToInt32(textBox6->Text), System::Convert::ToInt32(textBox7->Text), System::Convert::ToInt32(textBox8->Text));
            }
            else {
                MessageBox::Show("Cet article existe déjà dans la commande");
            }
        }
    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
       bool VerifierExistenceidarticle(String^ idarticle) {
           try {
               String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True";
               SqlConnection^ connection = gcnew SqlConnection(connectionString);

               String^ query = "SELECT COUNT(*) FROM [dbo].[article] WHERE id_article = @idarticle";
               SqlCommand^ command = gcnew SqlCommand(query, connection);
               command->Parameters->Add(gcnew SqlParameter("@idarticle", idarticle));

               connection->Open();
               int rowCount = Convert::ToInt32(command->ExecuteScalar());
               connection->Close();

               return rowCount > 0;
           }
           catch (Exception^ ex) {
               return false;
           }
       }
       bool VerifierExistenceidclient(String^ idclient) {
           try {
               String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True";
               SqlConnection^ connection = gcnew SqlConnection(connectionString);

               String^ query = "SELECT COUNT(*) FROM [dbo].[client] WHERE id_client = @idclient";
               SqlCommand^ command = gcnew SqlCommand(query, connection);
               command->Parameters->Add(gcnew SqlParameter("@idclient", idclient));

               connection->Open();
               int rowCount = Convert::ToInt32(command->ExecuteScalar());
               connection->Close();

               return rowCount > 0;
           }
           catch (Exception^ ex) {
               return false;
           }
       }
       bool VerifierExistencearticledouble(String^ integrer) {
               try {
                   String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=BDD-POO-JAG;Integrated Security=True";
                   SqlConnection^ connection = gcnew SqlConnection(connectionString);

                   String^ query = "SELECT TOP 2 2 FROM [dbo].[integrer] WHERE id_article = @integrer";
                   SqlCommand^ command = gcnew SqlCommand(query, connection);
                   command->Parameters->Add(gcnew SqlParameter("@integrer", integrer));

                   connection->Open();
                   SqlDataReader^ reader = command->ExecuteReader();
                   bool integrerExists = reader->Read();
                   connection->Close();

                   return integrerExists;
               }
               catch (Exception^ ex) {

                   return false;
           }
       }
};
}