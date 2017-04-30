#pragma once

namespace tubes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		double TOTAL, JML;
	private: System::Windows::Forms::Label^  label23;
	public: 
	private: System::Windows::Forms::TextBox^  NoTelp;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  check;
	public: 

	public: 

			 Form2(System::Windows::Forms::Form ^ f1)
		{
			otherform = f1;
			InitializeComponent();
		}

	protected:
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Form ^ otherform;
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  pesan;















	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  Alamat;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  harga_AB;
	private: System::Windows::Forms::TextBox^  harga_AG;
	private: System::Windows::Forms::TextBox^  harga_LB;
	private: System::Windows::Forms::TextBox^  harga_LG;
	private: System::Windows::Forms::TextBox^  harga_NG;
	private: System::Windows::Forms::TextBox^  harga_NTK;
	private: System::Windows::Forms::TextBox^  harga_NP;

	private: System::Windows::Forms::Label^  label22;

	private: System::Windows::Forms::NumericUpDown^  jum1;
	private: System::Windows::Forms::NumericUpDown^  jum2;
	private: System::Windows::Forms::NumericUpDown^  jum3;
	private: System::Windows::Forms::NumericUpDown^  jum4;
	private: System::Windows::Forms::NumericUpDown^  jum5;
	private: System::Windows::Forms::NumericUpDown^  jum6;
	private: System::Windows::Forms::NumericUpDown^  jum7;
	private: System::Windows::Forms::Label^  total;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pesan = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Alamat = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->harga_AB = (gcnew System::Windows::Forms::TextBox());
			this->harga_AG = (gcnew System::Windows::Forms::TextBox());
			this->harga_LB = (gcnew System::Windows::Forms::TextBox());
			this->harga_LG = (gcnew System::Windows::Forms::TextBox());
			this->harga_NG = (gcnew System::Windows::Forms::TextBox());
			this->harga_NTK = (gcnew System::Windows::Forms::TextBox());
			this->harga_NP = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->jum1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->jum7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->total = (gcnew System::Windows::Forms::Label());
			this->check = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->NoTelp = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum7))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(163, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(473, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selamat Datang di Sempurna Delivery";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(93, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Menu";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(281, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Harga";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(432, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Jumlah Pesanan";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(643, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total Harga";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(93, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ayam Bakar";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(93, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ayam Goreng";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(93, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Lele Bakar";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(93, 226);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Lele Goreng";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(93, 253);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Nasi Goreng";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point(94, 279);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Nasi Telor Kornet";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label12->Location = System::Drawing::Point(93, 305);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 17);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Nasi Putih";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label13->Location = System::Drawing::Point(282, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 17);
			this->label13->TabIndex = 12;
			this->label13->Text = L"15000";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label14->Location = System::Drawing::Point(282, 175);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"14000";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label15->Location = System::Drawing::Point(282, 200);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 17);
			this->label15->TabIndex = 14;
			this->label15->Text = L"12000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label16->Location = System::Drawing::Point(282, 226);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 17);
			this->label16->TabIndex = 15;
			this->label16->Text = L"11000";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label17->Location = System::Drawing::Point(290, 253);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 17);
			this->label17->TabIndex = 16;
			this->label17->Text = L"8000";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label18->Location = System::Drawing::Point(290, 279);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(40, 17);
			this->label18->TabIndex = 17;
			this->label18->Text = L"8500";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label19->Location = System::Drawing::Point(290, 305);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 17);
			this->label19->TabIndex = 18;
			this->label19->Text = L"4000";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(673, 492);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"E&xit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// pesan
			// 
			this->pesan->Location = System::Drawing::Point(97, 492);
			this->pesan->Name = L"pesan";
			this->pesan->Size = System::Drawing::Size(75, 23);
			this->pesan->TabIndex = 20;
			this->pesan->Text = L"&Pesan";
			this->pesan->UseVisualStyleBackColor = true;
			this->pesan->Click += gcnew System::EventHandler(this, &Form2::pesan_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label20->Location = System::Drawing::Point(94, 422);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 17);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Alamat";
			// 
			// Alamat
			// 
			this->Alamat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Alamat->Location = System::Drawing::Point(187, 422);
			this->Alamat->Multiline = true;
			this->Alamat->Name = L"Alamat";
			this->Alamat->Size = System::Drawing::Size(327, 61);
			this->Alamat->TabIndex = 31;
			this->Alamat->TextChanged += gcnew System::EventHandler(this, &Form2::Alamat_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label21->Location = System::Drawing::Point(542, 355);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(81, 17);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Total Bayar";
			this->label21->Click += gcnew System::EventHandler(this, &Form2::label21_Click);
			// 
			// harga_AB
			// 
			this->harga_AB->Location = System::Drawing::Point(629, 141);
			this->harga_AB->Name = L"harga_AB";
			this->harga_AB->Size = System::Drawing::Size(119, 20);
			this->harga_AB->TabIndex = 33;
			this->harga_AB->Text = L"0";
			this->harga_AB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->harga_AB->TextChanged += gcnew System::EventHandler(this, &Form2::harga_AB_TextChanged);
			// 
			// harga_AG
			// 
			this->harga_AG->Location = System::Drawing::Point(629, 171);
			this->harga_AG->Name = L"harga_AG";
			this->harga_AG->Size = System::Drawing::Size(119, 20);
			this->harga_AG->TabIndex = 34;
			this->harga_AG->Text = L"0";
			this->harga_AG->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// harga_LB
			// 
			this->harga_LB->Location = System::Drawing::Point(629, 199);
			this->harga_LB->Name = L"harga_LB";
			this->harga_LB->Size = System::Drawing::Size(119, 20);
			this->harga_LB->TabIndex = 35;
			this->harga_LB->Text = L"0";
			this->harga_LB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->harga_LB->TextChanged += gcnew System::EventHandler(this, &Form2::harga_LB_TextChanged);
			// 
			// harga_LG
			// 
			this->harga_LG->Location = System::Drawing::Point(629, 225);
			this->harga_LG->Name = L"harga_LG";
			this->harga_LG->Size = System::Drawing::Size(119, 20);
			this->harga_LG->TabIndex = 36;
			this->harga_LG->Text = L"0";
			this->harga_LG->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// harga_NG
			// 
			this->harga_NG->Location = System::Drawing::Point(629, 252);
			this->harga_NG->Name = L"harga_NG";
			this->harga_NG->Size = System::Drawing::Size(119, 20);
			this->harga_NG->TabIndex = 37;
			this->harga_NG->Text = L"0";
			this->harga_NG->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->harga_NG->TextChanged += gcnew System::EventHandler(this, &Form2::textBox13_TextChanged);
			// 
			// harga_NTK
			// 
			this->harga_NTK->Location = System::Drawing::Point(629, 278);
			this->harga_NTK->Name = L"harga_NTK";
			this->harga_NTK->Size = System::Drawing::Size(119, 20);
			this->harga_NTK->TabIndex = 38;
			this->harga_NTK->Text = L"0";
			this->harga_NTK->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// harga_NP
			// 
			this->harga_NP->Location = System::Drawing::Point(629, 304);
			this->harga_NP->Name = L"harga_NP";
			this->harga_NP->Size = System::Drawing::Size(119, 20);
			this->harga_NP->TabIndex = 39;
			this->harga_NP->Text = L"0";
			this->harga_NP->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label22->Location = System::Drawing::Point(626, 355);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(30, 17);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Rp.";
			// 
			// jum1
			// 
			this->jum1->Location = System::Drawing::Point(465, 141);
			this->jum1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum1->Name = L"jum1";
			this->jum1->ReadOnly = true;
			this->jum1->Size = System::Drawing::Size(49, 20);
			this->jum1->TabIndex = 42;
			this->jum1->ValueChanged += gcnew System::EventHandler(this, &Form2::jum1_ValueChanged);
			// 
			// jum2
			// 
			this->jum2->Location = System::Drawing::Point(465, 171);
			this->jum2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum2->Name = L"jum2";
			this->jum2->ReadOnly = true;
			this->jum2->Size = System::Drawing::Size(49, 20);
			this->jum2->TabIndex = 43;
			this->jum2->ValueChanged += gcnew System::EventHandler(this, &Form2::jum2_ValueChanged);
			// 
			// jum3
			// 
			this->jum3->Location = System::Drawing::Point(465, 200);
			this->jum3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum3->Name = L"jum3";
			this->jum3->ReadOnly = true;
			this->jum3->Size = System::Drawing::Size(49, 20);
			this->jum3->TabIndex = 44;
			this->jum3->ValueChanged += gcnew System::EventHandler(this, &Form2::jum3_ValueChanged_1);
			// 
			// jum4
			// 
			this->jum4->Location = System::Drawing::Point(465, 226);
			this->jum4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum4->Name = L"jum4";
			this->jum4->ReadOnly = true;
			this->jum4->Size = System::Drawing::Size(49, 20);
			this->jum4->TabIndex = 45;
			this->jum4->ValueChanged += gcnew System::EventHandler(this, &Form2::jum4_ValueChanged);
			// 
			// jum5
			// 
			this->jum5->Location = System::Drawing::Point(465, 253);
			this->jum5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum5->Name = L"jum5";
			this->jum5->ReadOnly = true;
			this->jum5->Size = System::Drawing::Size(49, 20);
			this->jum5->TabIndex = 46;
			this->jum5->ValueChanged += gcnew System::EventHandler(this, &Form2::jum5_ValueChanged);
			// 
			// jum6
			// 
			this->jum6->Location = System::Drawing::Point(465, 279);
			this->jum6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum6->Name = L"jum6";
			this->jum6->ReadOnly = true;
			this->jum6->Size = System::Drawing::Size(49, 20);
			this->jum6->TabIndex = 47;
			this->jum6->ValueChanged += gcnew System::EventHandler(this, &Form2::jum6_ValueChanged);
			// 
			// jum7
			// 
			this->jum7->Location = System::Drawing::Point(465, 305);
			this->jum7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->jum7->Name = L"jum7";
			this->jum7->ReadOnly = true;
			this->jum7->Size = System::Drawing::Size(49, 20);
			this->jum7->TabIndex = 49;
			this->jum7->ValueChanged += gcnew System::EventHandler(this, &Form2::jum7_ValueChanged);
			// 
			// total
			// 
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->total->Location = System::Drawing::Point(663, 355);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(16, 17);
			this->total->TabIndex = 50;
			this->total->Text = L"..";
			this->total->Click += gcnew System::EventHandler(this, &Form2::total_Click);
			// 
			// check
			// 
			this->check->AutoSize = true;
			this->check->Location = System::Drawing::Point(94, 355);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(31, 13);
			this->check->TabIndex = 51;
			this->check->Text = L"........";
			this->check->Click += gcnew System::EventHandler(this, &Form2::check_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label23->Location = System::Drawing::Point(520, 422);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(68, 17);
			this->label23->TabIndex = 52;
			this->label23->Text = L"NO TELP";
			// 
			// NoTelp
			// 
			this->NoTelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->NoTelp->Location = System::Drawing::Point(594, 421);
			this->NoTelp->Name = L"NoTelp";
			this->NoTelp->Size = System::Drawing::Size(141, 23);
			this->NoTelp->TabIndex = 53;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 54;
			this->button2->Text = L"&HOME";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 544);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->NoTelp);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->check);
			this->Controls->Add(this->total);
			this->Controls->Add(this->jum7);
			this->Controls->Add(this->jum6);
			this->Controls->Add(this->jum5);
			this->Controls->Add(this->jum4);
			this->Controls->Add(this->jum3);
			this->Controls->Add(this->jum2);
			this->Controls->Add(this->jum1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->harga_NP);
			this->Controls->Add(this->harga_NTK);
			this->Controls->Add(this->harga_NG);
			this->Controls->Add(this->harga_LG);
			this->Controls->Add(this->harga_LB);
			this->Controls->Add(this->harga_AG);
			this->Controls->Add(this->harga_AB);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->Alamat);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pesan);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form2";
			this->Text = L"Sempurna Delivery";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jum7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Terimakasih telah mengunjungi Cafe Semangat");
				 Application::Exit();
			 }
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pesan_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*String ^ alamat = Alamat->Text;
			 String ^ totaly = total->Text;
			 if (Alamat->Text == ""){
				 MessageBox::Show("Harap memasukkan alamat");
			 }
			 else if (Alamat->Text == alamat){
				 MessageBox::Show("Pesanan diterima akan segera diantarkan ke " + alamat + " dengan total pembayaran Rp. " + totaly + " Terimakasih");
			 }*/
			  String^ constring=L"datasource=localhost;username=root;port=3306";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^cmdDataBase=gcnew MySqlCommand("insert into duta.daftarpesan (nomor,menu,harga,alamat) values('"+this->NoTelp->Text+"','"+this->check->Text+"','"+this->total->Text+"','"+this->Alamat->Text+"') ;",conDataBase);
			 MySqlDataReader^ myreader;
			 try{
				// conDataBase->Open();
				// myreader=cmdDataBase->ExecuteReader();
				String^ alamat=Alamat->Text;
				String^ no_telp=NoTelp->Text;
				if (Alamat->Text == "" && NoTelp->Text == ""){
				 MessageBox::Show("Harap memasukkan alamat dan nomor telepon");
				}
				 else if (Alamat->Text == alamat && NoTelp->Text== ""){	
				MessageBox::Show("Harap memasukan nomor telepon");
				 } else if (Alamat->Text== "" && NoTelp->Text == no_telp){
					 MessageBox::Show("Harap memasukkan alamat anda");
				 } else if (Alamat->Text == alamat && NoTelp->Text == no_telp){
					 MessageBox::Show("Pesanan diterima mohon ditunggu");
					 conDataBase->Open();
				myreader=cmdDataBase->ExecuteReader();
				 }
					
				while(myreader->Read()){
					

				}
			 
			 }catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 
			 }

			 
			 
		 }
private: System::Void harga_AB_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void jum1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			double hrg, harga;
			hrg=double::Parse(jum1->Text);
			harga = (hrg+1)*15000;
			harga_AB->Text = harga.ToString();
			 
		 }
private: System::Void jum2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			double hrg, harga;
			hrg=double::Parse(jum2->Text);
			harga = (hrg+1)*14000;
			harga_AG->Text = harga.ToString();

		 }
private: System::Void jum4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 double hrg, harga;
			hrg=double::Parse(jum4->Text);
			harga = (hrg+1)*11000;
			harga_LG->Text = harga.ToString();
		 }
private: System::Void jum5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 double hrg, harga;
			hrg=double::Parse(jum5->Text);
			harga = (hrg+1)*8000;
			harga_NG->Text = harga.ToString();
		 }
private: System::Void jum6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 double hrg, harga;
			hrg=double::Parse(jum6->Text);
			harga = (hrg+1)*8500;
			harga_NTK->Text = harga.ToString();
		 }
private: System::Void jum7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 double hrg, harga;
			hrg=double::Parse(jum7->Text);
			harga = (hrg+1)*4000;
			harga_NP->Text = harga.ToString();
		 }
private: System::Void harga_LB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void jum3_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			  double hrg, harga;
			hrg=double::Parse(jum3->Text);
			harga = (hrg+1)*12000;
			harga_LB->Text = harga.ToString();
		 }

private: System::Void total_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void Alamat_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
			 double totalx, harga1, harga2, harga3, harga4, harga5, harga6, harga7;
			 harga1=double::Parse(harga_AB->Text);
			 harga2=double::Parse(harga_AG->Text);
			 harga3=double::Parse(harga_LB->Text);
			 harga4=double::Parse(harga_LG->Text);
			 harga5=double::Parse(harga_NG->Text);
			 harga6=double::Parse(harga_NTK->Text);
			 harga7=double::Parse(harga_NP->Text);
			 totalx = harga1 + harga2 + harga3 + harga4+ harga5 + harga6 + harga7;
			 total->Text = totalx.ToString();
		 }
private: System::Void pesanan_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lab_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void check_Click(System::Object^  sender, System::EventArgs^  e) {
			 double harga1, harga2, harga3, harga4, harga5, harga6, harga7;
			 harga1=double::Parse(jum1->Text);
			 harga2=double::Parse(jum2->Text);
			 harga3=double::Parse(jum3->Text);
			 harga4=double::Parse(jum4->Text);
			 harga5=double::Parse(jum5->Text);
			 harga6=double::Parse(jum6->Text);
			 harga7=double::Parse(jum7->Text);
			 
			 check->Text =  "Ayam Bakar = " + harga1 +
							" \tAyam Goreng = " + harga2 +
							"\nLele Bakar = " + harga3 +
							" \tLele Goreng = " + harga4 +
							"\nNasi Goreng = " + harga5 +
							" \tNasi Telur Kornet = " + harga6 +
							" \tNasi Putih = " + harga7;
			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
			otherform->Show(); 
		 }
};
}
