#pragma once
#include "serviceclient.h"

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class afficherclient : public System::Windows::Forms::Form
    {
    public:
        afficherclient(void);

    protected:
        ~afficherclient();

    protected:







    private: System::Windows::Forms::Button^ button1;
    private: System::Data::DataSet^ oDs;
    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox7;




    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;

    private: NS_Comp_Svc_client::serviceclient^ oSvcClient;












           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);


    private: System::Void afficherclient_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcClient = gcnew NS_Comp_Svc_client::serviceclient();
    }



    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->dataGridView1->Refresh();
        this->oDs = this->oSvcClient->afficherclient(this->textBox7->Text, this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, "Client");
        this->dataGridView1->DataSource = this->oDs;
        this->dataGridView1->DataMember = "Client";
    }
    private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}