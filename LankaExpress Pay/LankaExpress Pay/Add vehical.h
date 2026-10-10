#pragma once

namespace LankaExpressPay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Addvehical
	/// </summary>
	public ref class Addvehical : public System::Windows::Forms::Form
	{
	public:
		Addvehical(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Addvehical()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(12, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Process Vehicle Toll";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Process Vehicle & Toll Collection";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Vehicle Route Number ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"License Plate Number:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 134);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 25);
			this->textBox1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 19);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Vehicle Clasification:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 241);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 23);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Car";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(111, 241);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(55, 23);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Van";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(214, 241);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(53, 23);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Bus";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(306, 241);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(67, 23);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Truck";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 19);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Entry Gate :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 397);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 19);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Exit Gate :";
			this->label7->Click += gcnew System::EventHandler(this, &Addvehical::label7_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Kahathuduwa", L"Kadawatha", L"Kottawa", L"Beliatta",
					L"Gampaha", L"Mirigama", L"Dambulla", L"Kurunagala"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 342);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(253, 27);
			this->comboBox1->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Kahathuduwa", L"Kadawatha", L"Kottawa", L"Beliatta",
					L"Gampaha", L"Mirigama", L"Dambulla", L"Kurunagala"
			});
			this->comboBox2->Location = System::Drawing::Point(12, 419);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(253, 27);
			this->comboBox2->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(533, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Toll Free summary";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(546, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 19);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Distance :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(546, 154);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 19);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Base / Free :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(546, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 19);
			this->label12->TabIndex = 20;
			this->label12->Text = L"TOTAL FEE:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(648, 113);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 19);
			this->label13->TabIndex = 21;
			this->label13->Text = L"__km";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(638, 154);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 19);
			this->label14->TabIndex = 22;
			this->label14->Text = L"__";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(648, 198);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(66, 19);
			this->label15->TabIndex = 23;
			this->label15->Text = L"LKR 0.00";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(546, 245);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(165, 24);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Payment Methord";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(550, 281);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(123, 23);
			this->radioButton5->TabIndex = 25;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Cash Payment";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(726, 281);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(157, 23);
			this->radioButton6->TabIndex = 26;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Credit / Debit Card";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(550, 342);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(170, 19);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Amount Received (LKR):";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(735, 336);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 25);
			this->textBox2->TabIndex = 28;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(554, 397);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(93, 19);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Change Due:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(731, 397);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(66, 19);
			this->label19->TabIndex = 30;
			this->label19->Text = L"LKR 0.00";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(558, 505);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 19);
			this->label20->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 35);
			this->button1->TabIndex = 32;
			this->button1->Text = L"calculate Free";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->Location = System::Drawing::Point(558, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 36);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Confirm Open Barrier";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(791, 488);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 36);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Cancel/ Reset";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Addvehical
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 549);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Addvehical";
			this->Text = L"Addvehical";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
