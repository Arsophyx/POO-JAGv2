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



    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox2;


    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;

    private: NS_Comp_Svc_client::serviceclient^ oSvcClient;












           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void afficherclient_Load(System::Object^ sender, System::EventArgs^ e) {
        oSvcClient = gcnew NS_Comp_Svc_client::serviceclient();
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        //oSvcClient->afficherclient(textBox2->Text, "Client");
    }
    };
}