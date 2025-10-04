#pragma once

namespace SkyVoyagers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			termpnl->Hide();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ usr;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ pass;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ph;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ conPass;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ termpnl;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->usr = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ph = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->conPass = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->termpnl = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->termpnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(385, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(558, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Registration::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(313, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Registration";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Verdana", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(73, 519);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(71, 26);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Login";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Registration::linkLabel1_LinkClicked);
			// 
			// usr
			// 
			this->usr->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usr->Location = System::Drawing::Point(469, 133);
			this->usr->Multiline = true;
			this->usr->Name = L"usr";
			this->usr->Size = System::Drawing::Size(304, 48);
			this->usr->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(31, 481);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Already a User";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(293, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Username";
			// 
			// pass
			// 
			this->pass->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(469, 196);
			this->pass->Multiline = true;
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(304, 48);
			this->pass->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(293, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password";
			this->label4->Click += gcnew System::EventHandler(this, &Registration::label4_Click);
			// 
			// ph
			// 
			this->ph->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ph->Location = System::Drawing::Point(469, 320);
			this->ph->Multiline = true;
			this->ph->Name = L"ph";
			this->ph->Size = System::Drawing::Size(304, 48);
			this->ph->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(293, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 29);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ph no#";
			// 
			// conPass
			// 
			this->conPass->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->conPass->Location = System::Drawing::Point(469, 259);
			this->conPass->Multiline = true;
			this->conPass->Name = L"conPass";
			this->conPass->Size = System::Drawing::Size(304, 48);
			this->conPass->TabIndex = 4;
			this->conPass->TextChanged += gcnew System::EventHandler(this, &Registration::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(224, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Confirm-Password";
			this->label6->Click += gcnew System::EventHandler(this, &Registration::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(49, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 63);
			this->label7->TabIndex = 9;
			this->label7->Text = L"YourJourney, Our Wings";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(279, 258);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 10));
			this->label8->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label8->Location = System::Drawing::Point(622, 387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(229, 25);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Terms and Conditions";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Click += gcnew System::EventHandler(this, &Registration::label8_Click);
			// 
			// termpnl
			// 
			this->termpnl->AutoScroll = true;
			this->termpnl->BackColor = System::Drawing::Color::Black;
			this->termpnl->Controls->Add(this->button3);
			this->termpnl->Controls->Add(this->textBox5);
			this->termpnl->Controls->Add(this->label9);
			this->termpnl->ForeColor = System::Drawing::Color::White;
			this->termpnl->Location = System::Drawing::Point(816, 63);
			this->termpnl->Name = L"termpnl";
			this->termpnl->Size = System::Drawing::Size(978, 592);
			this->termpnl->TabIndex = 12;
			this->termpnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Registration::panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(736, 519);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ok";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Registration::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(145, 122);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(676, 384);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = resources->GetString(L"textBox5.Text");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(30, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(323, 34);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Terms and Conditions";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(469, 385);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(151, 29);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"I Agreed to";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Registration::checkBox1_CheckedChanged_1);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(978, 592);
			this->Controls->Add(this->termpnl);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ph);
			this->Controls->Add(this->conPass);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->usr);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->termpnl->ResumeLayout(false);
			this->termpnl->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		button1->Enabled = true;
	}
	else {
		button1->Enabled = false;
	}
}
	   public:
		   String^ username;
		   String^ password;
		   Double PH;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (usr->TextLength == 0 || pass->TextLength == 0 || conPass->TextLength == 0 || ph->TextLength == 0)
	{
		MessageBox::Show("Please fill the all entries" ,"Warning", MessageBoxButtons::OK);
	}
	if (pass->Text != conPass->Text)
	{
		MessageBox::Show("Passwords did not matched", "Warning", MessageBoxButtons::OK);
	}
	else {
		username = usr->Text;
		password = pass->Text;
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("registration.txt", true);
		sw->WriteLine(username + "," + password);
		sw->Close();

		PH = System::Convert::ToDouble(ph->Text);
		MessageBox::Show("User Register Successfully", "Success", MessageBoxButtons::OK);
		this->Close();
	}
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	termpnl->Hide();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	termpnl->Show();
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
	this->Close();
	
}
private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		button1->Enabled = true;
	}
	else {
		button1->Enabled = false;
	}
}
};
}
