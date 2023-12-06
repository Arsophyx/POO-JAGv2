#pragma once
namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 54);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->MaximumSize = System::Drawing::Size(899, 1329);
			this->dataGridView1->MinimumSize = System::Drawing::Size(899, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(899, 513);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleRole = System::Windows::Forms::AccessibleRole::SplitButton;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1667, 598);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1659, 560);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Base de Données";
			this->tabPage1->Visible = false;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1659, 560);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->Visible = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1659, 560);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Clients";
			this->tabPage3->Visible = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage4->Location = System::Drawing::Point(4, 34);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1659, 560);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Commandes";
			this->tabPage4->Visible = false;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage5->Location = System::Drawing::Point(4, 34);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1659, 560);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Stock";
			this->tabPage5->Visible = false;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage6->Location = System::Drawing::Point(4, 34);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1659, 560);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Statistiques";
			this->tabPage6->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(211, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 32);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(239, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ajout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1667, 598);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Size = System::Drawing::Size(ClientSize.Width - 20, ClientSize.Height - 76);
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
};
