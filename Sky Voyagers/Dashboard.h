#pragma once

namespace SkyVoyagers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ticketPanel->Hide();
			pricepnl->Hide();
			textBox5->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox5_TextChanged);
			PopulateListBox();
			spanel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ tpbox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ rtcombo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBoxMeat;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ tmbox;

	private: System::Windows::Forms::Panel^ ticketPanel;
	private: System::Windows::Forms::TextBox^ name;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ cnic;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ ph;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ pricepnl;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ labelPrice;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ Seats;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ spanel;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ txtSeat;
	private: System::Windows::Forms::Label^ label18;






	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tpbox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rtcombo = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBoxMeat = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tmbox = (gcnew System::Windows::Forms::ComboBox());
			this->ticketPanel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Seats = (gcnew System::Windows::Forms::ListBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cnic = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ph = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pricepnl = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->spanel = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtSeat = (gcnew System::Windows::Forms::TextBox());
			this->ticketPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pricepnl->SuspendLayout();
			this->spanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(856, 543);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(172, 43);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Dashboard::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(337, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome on board";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(667, 543);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Print Ticket";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(164, 432);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(392, 32);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Dashboard::dateTimePicker1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(159, 392);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select Date";
			// 
			// tpbox
			// 
			this->tpbox->FormattingEnabled = true;
			this->tpbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"First Class", L"Business Class", L"Economy Class" });
			this->tpbox->Location = System::Drawing::Point(164, 345);
			this->tpbox->Name = L"tpbox";
			this->tpbox->Size = System::Drawing::Size(328, 33);
			this->tpbox->TabIndex = 5;
			this->tpbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::tpbox_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(159, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Select Type";
			// 
			// rtcombo
			// 
			this->rtcombo->FormattingEnabled = true;
			this->rtcombo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Aus-Pak", L"Pak-Aus", L"CN-Pak", L"Pak-CN" });
			this->rtcombo->Location = System::Drawing::Point(164, 179);
			this->rtcombo->Name = L"rtcombo";
			this->rtcombo->Size = System::Drawing::Size(328, 33);
			this->rtcombo->TabIndex = 7;
			this->rtcombo->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::comboBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(159, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Select Route";
			this->label4->Click += gcnew System::EventHandler(this, &Dashboard::label4_Click);
			// 
			// checkBoxMeat
			// 
			this->checkBoxMeat->AutoSize = true;
			this->checkBoxMeat->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxMeat->ForeColor = System::Drawing::Color::White;
			this->checkBoxMeat->Location = System::Drawing::Point(164, 501);
			this->checkBoxMeat->Name = L"checkBoxMeat";
			this->checkBoxMeat->Size = System::Drawing::Size(197, 29);
			this->checkBoxMeat->TabIndex = 9;
			this->checkBoxMeat->Text = L"Want the meal\?";
			this->checkBoxMeat->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(478, 543);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 43);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Logout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(159, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Select Timing";
			// 
			// tmbox
			// 
			this->tmbox->FormattingEnabled = true;
			this->tmbox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10AM - 6PM", L"2PM - 8PM", L"11AM - 4PM", L"1PM - 6PM" });
			this->tmbox->Location = System::Drawing::Point(164, 264);
			this->tmbox->Name = L"tmbox";
			this->tmbox->Size = System::Drawing::Size(328, 33);
			this->tmbox->TabIndex = 11;
			this->tmbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::tmbox_SelectedIndexChanged);
			// 
			// ticketPanel
			// 
			this->ticketPanel->Controls->Add(this->button5);
			this->ticketPanel->Controls->Add(this->labelPrice);
			this->ticketPanel->Controls->Add(this->txtSeat);
			this->ticketPanel->Controls->Add(this->textBox10);
			this->ticketPanel->Controls->Add(this->textBox9);
			this->ticketPanel->Controls->Add(this->textBox8);
			this->ticketPanel->Controls->Add(this->textBox7);
			this->ticketPanel->Controls->Add(this->textBox6);
			this->ticketPanel->Controls->Add(this->textBox5);
			this->ticketPanel->Controls->Add(this->label18);
			this->ticketPanel->Controls->Add(this->textBox4);
			this->ticketPanel->Controls->Add(this->label16);
			this->ticketPanel->Controls->Add(this->label15);
			this->ticketPanel->Controls->Add(this->label14);
			this->ticketPanel->Controls->Add(this->label13);
			this->ticketPanel->Controls->Add(this->label12);
			this->ticketPanel->Controls->Add(this->label11);
			this->ticketPanel->Controls->Add(this->label10);
			this->ticketPanel->Controls->Add(this->pictureBox1);
			this->ticketPanel->Controls->Add(this->label9);
			this->ticketPanel->Location = System::Drawing::Point(578, 82);
			this->ticketPanel->Name = L"ticketPanel";
			this->ticketPanel->Size = System::Drawing::Size(487, 444);
			this->ticketPanel->TabIndex = 13;
			this->ticketPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel1_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(431, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 36);
			this->button5->TabIndex = 31;
			this->button5->Text = L"x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Dashboard::button5_Click);
			// 
			// labelPrice
			// 
			this->labelPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->labelPrice->Location = System::Drawing::Point(133, 389);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->ReadOnly = true;
			this->labelPrice->Size = System::Drawing::Size(230, 25);
			this->labelPrice->TabIndex = 30;
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(133, 315);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(230, 25);
			this->textBox10->TabIndex = 29;
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(133, 365);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(230, 25);
			this->textBox9->TabIndex = 28;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(133, 282);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(230, 25);
			this->textBox8->TabIndex = 27;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(203, 243);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(233, 25);
			this->textBox7->TabIndex = 26;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(133, 200);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(230, 25);
			this->textBox6->TabIndex = 25;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(133, 161);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(230, 25);
			this->textBox5->TabIndex = 24;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(133, 113);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(230, 25);
			this->textBox4->TabIndex = 23;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(36, 315);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(86, 25);
			this->label16->TabIndex = 8;
			this->label16->Text = L"Gender";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(38, 389);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 25);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Total";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(38, 281);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 25);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Type";
			this->label14->Click += gcnew System::EventHandler(this, &Dashboard::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(35, 242);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(159, 25);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Time and Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 25);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Route";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 158);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 25);
			this->label11->TabIndex = 3;
			this->label11->Text = L"CNIC";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(33, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 25);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(115, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(161, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 38);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Ticket";
			// 
			// Seats
			// 
			this->Seats->FormattingEnabled = true;
			this->Seats->ItemHeight = 25;
			this->Seats->Location = System::Drawing::Point(0, 3);
			this->Seats->MultiColumn = true;
			this->Seats->Name = L"Seats";
			this->Seats->Size = System::Drawing::Size(372, 429);
			this->Seats->TabIndex = 25;
			this->Seats->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::Seats_SelectedIndexChanged);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(750, 173);
			this->name->Multiline = true;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(278, 41);
			this->name->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(656, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(656, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"CNIC";
			this->label7->Click += gcnew System::EventHandler(this, &Dashboard::label7_Click);
			// 
			// cnic
			// 
			this->cnic->Location = System::Drawing::Point(750, 259);
			this->cnic->Multiline = true;
			this->cnic->Name = L"cnic";
			this->cnic->Size = System::Drawing::Size(278, 41);
			this->cnic->TabIndex = 16;
			this->cnic->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox2_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(656, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Ph#";
			this->label8->Click += gcnew System::EventHandler(this, &Dashboard::label8_Click);
			// 
			// ph
			// 
			this->ph->Location = System::Drawing::Point(750, 340);
			this->ph->Multiline = true;
			this->ph->Name = L"ph";
			this->ph->Size = System::Drawing::Size(278, 41);
			this->ph->TabIndex = 18;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(151, 138);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(764, 432);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(86, 29);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"male";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->Click += gcnew System::EventHandler(this, &Dashboard::gender);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(875, 432);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(105, 29);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"female";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Dashboard::radioButton2_CheckedChanged);
			this->radioButton2->Click += gcnew System::EventHandler(this, &Dashboard::gender);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(656, 434);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 25);
			this->label17->TabIndex = 22;
			this->label17->Text = L"Gender";
			// 
			// pricepnl
			// 
			this->pricepnl->Controls->Add(this->button3);
			this->pricepnl->Controls->Add(this->textBox1);
			this->pricepnl->Location = System::Drawing::Point(2, 2);
			this->pricepnl->Name = L"pricepnl";
			this->pricepnl->Size = System::Drawing::Size(593, 484);
			this->pricepnl->TabIndex = 23;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(194, 384);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 42);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Ok";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(572, 484);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(289, 543);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 43);
			this->button4->TabIndex = 24;
			this->button4->Text = L"View Prices";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(100, 543);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(183, 43);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Select Seat";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			// 
			// spanel
			// 
			this->spanel->Controls->Add(this->button7);
			this->spanel->Controls->Add(this->Seats);
			this->spanel->Location = System::Drawing::Point(0, 0);
			this->spanel->Name = L"spanel";
			this->spanel->Size = System::Drawing::Size(375, 486);
			this->spanel->TabIndex = 26;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(100, 437);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(145, 42);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Ok";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Dashboard::button7_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(36, 351);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(99, 25);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Seat No.";
			// 
			// txtSeat
			// 
			this->txtSeat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSeat->Location = System::Drawing::Point(133, 350);
			this->txtSeat->Name = L"txtSeat";
			this->txtSeat->ReadOnly = true;
			this->txtSeat->Size = System::Drawing::Size(230, 25);
			this->txtSeat->TabIndex = 29;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1077, 628);
			this->Controls->Add(this->spanel);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pricepnl);
			this->Controls->Add(this->ticketPanel);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->ph);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cnic);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tmbox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBoxMeat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->rtcombo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tpbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->ticketPanel->ResumeLayout(false);
			this->ticketPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pricepnl->ResumeLayout(false);
			this->pricepnl->PerformLayout();
			this->spanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   private:

		   Double CalculateTicketPrice(String^ route, String^ ticketClass, bool wantsMeat) {
			   double basePrice = 0.0;

			   // Use a switch statement or if-else statements to determine the base ticket price
			   if (route == "Aus-Pak") {
				   if (ticketClass == "First Class")
					   basePrice = 400.0;
				   else if (ticketClass == "Business Class")
					   basePrice = 300.0;
				   else if (ticketClass == "Economy Class")
					   basePrice = 150.0;
			   }
			   else if (route == "Pak-Aus") {
				   if (ticketClass == "First Class")
					   basePrice = 400.0;
				   else if (ticketClass == "Business Class")
					   basePrice = 300.0;
				   else if (ticketClass == "Economy Class")
					   basePrice = 150.0;
			   }
			   else if (route == "CN-Pak") {
				   if (ticketClass == "First Class")
					   basePrice = 300.0;
				   else if (ticketClass == "Business Class")
					   basePrice = 220.0;
				   else if (ticketClass == "Economy Class")
					   basePrice = 120.0;
			   }
			   else if (route == "Pak-CN") {
				   if (ticketClass == "First Class")
					   basePrice = 300.0;
				   else if (ticketClass == "Business Class")
					   basePrice = 220.0;
				   else if (ticketClass == "Economy Class")
					   basePrice = 120.0;
			   }

			   // Add extra charge if the "Meat" condition is true
			   if (wantsMeat) {
				   basePrice += 50.0;
			   }

			   return basePrice;
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	bool wantsMeat = checkBoxMeat->Checked;

	Double ticketPrice = CalculateTicketPrice(route, ticketClass, wantsMeat);

	labelPrice->Text = "Ticket Price: $" + ticketPrice.ToString();



	//Double ticketPrice = CalculateTicketPrice(route, type, wantsMeat);

	//labelPrice->Text = "Ticket Price: $" + ticketPrice.ToString();

	textBox6->Text = route;
	textBox7->Text = time + " " + selectedDate;
	textBox8->Text = ticketClass;
	textBox4->Text = name->Text;
	textBox5->Text = cnic->Text;
	textBox10->Text = Gender;
	ticketPanel->Show();
	txtSeat->Text = selectedSeat;
}

	   public:
		   String^ route;
		   String^ time;
		   String^ ticketClass;
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rtcombo->SelectedIndex != -1) {
		route = rtcombo->SelectedItem->ToString();
	}
}
private: System::Void tmbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tmbox->SelectedIndex != -1) {
		time = tmbox->SelectedItem->ToString();
	}
}
private: System::Void tpbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tpbox->SelectedIndex != -1) {
		ticketClass = tpbox->SelectedItem->ToString();
	}
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public:
		   DateTime selectedDate;
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	 selectedDate = dateTimePicker1->Value;
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ text = textBox5->Text->Replace("-", "");

	// Add dashes every 4 characters
	int dashPosition = 5;
	while (text->Length > dashPosition) {
		text = text->Insert(dashPosition, "-");
		dashPosition += 8; 
	}

	// Update the text box
	textBox5->TextChanged -= gcnew System::EventHandler(this, &Dashboard::textBox5_TextChanged); // Remove event handler temporarily
	textBox5->Text = text;
	textBox5->SelectionStart = text->Length; 
	textBox5->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox5_TextChanged);
}
	   public:
		   String^ Gender;
private: System::Void gender(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		
		Gender = radioButton1->Text;
	}
	else if (radioButton2->Checked) {
		Gender = radioButton2->Text;
	}
	else {
		MessageBox::Show("Please select a radio button.", "Information");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pricepnl->Hide();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pricepnl->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ticketPanel->Hide();
}
		private:
			// Function to populate ListBox with available seat numbers
			void PopulateListBox() {
				// Replace totalRows and seatsPerRow with your actual values
				int totalRows = 8;
				int seatsPerRow = 2;

				for (int i = 1; i <= totalRows; ++i) {
					for (int j = 1; j <= seatsPerRow; ++j) {
						int seatNumber = (i - 1) * seatsPerRow + j;
				         if (IsSeatAvailable(seatNumber)) {
							Seats->Items->Add(seatNumber.ToString());
				         }
					}
				}
			}
			bool IsSeatAvailable(int seatNumber) {
				// Change the file path to your desired location
				String^ filePath = "SelectedSeats.txt";

				try {
					StreamReader^ sr = gcnew StreamReader(filePath);

					while (!sr->EndOfStream) {
						String^ bookedSeat = sr->ReadLine();
						int bookedSeatNumber = System::Convert::ToInt32(bookedSeat);

						if (bookedSeatNumber == seatNumber) {
							sr->Close();
							return false; // Seat is already booked
						}
					}

					sr->Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error checking seat availability: " + ex->Message, "Error");
				}

				return true; // Seat is available
			}
	public:
		String^ selectedSeat;
private: System::Void Seats_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedSeat = Seats->SelectedItem->ToString();
	MessageBox::Show("Selected Seat: " + selectedSeat, "Seat Selection");

	StoreSelectedSeat(selectedSeat);
}
	   void StoreSelectedSeat(String^ seat) {
		   String^ filePath = "SelectedSeats.txt";

		   try {
			   StreamWriter^ sw = gcnew StreamWriter(filePath, true);
			   sw->WriteLine(seat);
			   sw->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Error storing selected seat: " + ex->Message, "Error");
		   }
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
     spanel->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	spanel->Hide();
}
};
}
