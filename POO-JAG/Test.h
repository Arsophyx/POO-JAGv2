#pragma once

namespace POO_JAG {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class test : public System::Windows::Forms::Form
    {
    public:
        test(void);

    protected:
        ~test();
    private: System::Data::DataSet^ oDs;

    protected:














    private:
        System::ComponentModel::Container^ components;
    private: NS_Comp_Svc_test::test^ oSvctest;













           void InitializeComponent(void);
           System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void afficherarticle_Load(System::Object^ sender, System::EventArgs^ e) {
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
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        this->dataGridView1->Refresh();
        this->oDs = this->oSvcarticle->afficherarticle(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, this->textBox4->Text, this->textBox5->Text, this->textBox6->Text, "Article");
        this->dataGridView1->DataSource = this->oDs;
        this->dataGridView1->DataMember = "article";
    }
    };
}