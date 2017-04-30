#pragma once
#include "Form2.h" // untuk menghubungkan dengan form 2
#include "Form3.h" // untuk menghubungkan dengan form 3
#include "Form4.h" // untuk menghubungkan dengan form 4
#include "stdafx.h"
namespace tubes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		String ^ Username;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  Admin;
	public: 
		String ^ Password;
		Form1(void)
		{
			InitializeComponent();
			textBox2->PasswordChar='*'; // untuk membuat tampilan password menjadi "*"
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Admin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(369, 341);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"E&XIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(78, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"CAFE SEMPURNA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 186);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(60, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"&LOGIN";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(154, 227);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"&DAFTAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Admin
			// 
			this->Admin->Location = System::Drawing::Point(60, 341);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(75, 23);
			this->Admin->TabIndex = 9;
			this->Admin->Text = L"&ADMIN";
			this->Admin->UseVisualStyleBackColor = true;
			this->Admin->Click += gcnew System::EventHandler(this, &Form1::Admin_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 418);
			this->Controls->Add(this->Admin);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Sempurna Delivery";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit(); // untuk menutup program
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 // untuk menghubungkan dengan mysql;
			 String^ constring=L"datasource=localhost;username=root;port=3306";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from duta.userlist where Username='"+this->textBox1->Text+"' and password='"+this->textBox2->Text+"';",conDataBase);
			 MySqlDataReader^ myreader;
			 try{
				conDataBase->Open();
				myreader=cmdDataBase->ExecuteReader();
				int count=0;
				while(myreader->Read()){
					count=count+1;

				}
				if(count==1){
					MessageBox::Show("Username and Password benar");
					 this->Hide();
					 Form2 ^ F2 = gcnew Form2(this);
					 F2->ShowDialog();
				}
				else if(count>1){
					MessageBox::Show("Username and Password sudah digunakan");
				} else
					MessageBox::Show("Username dan password salah");
			 
			 
			 }catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 
			 }



		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form3 ^ F3 = gcnew Form3();
					 F3->ShowDialog(); // membuka form 3
		 }
private: System::Void Admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "Admin" && textBox2->Text == "Admin") {

				 this->Hide();
				 Form4 ^ F4 = gcnew Form4(this);
				 F4->ShowDialog(); // membuka form 4

			 } else 
				 MessageBox::Show("Username dan Password salah"); // message bos show
		 }
};
}

