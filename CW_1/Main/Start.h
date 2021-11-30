#pragma once



namespace Myproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
		{
			InitializeComponent();

		}

	protected:
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	public: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	public:

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(16, 90);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 22);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			this->button1->Location = System::Drawing::Point(480, 416);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Start::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(16, 149);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(512, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(16, 208);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(352, 22);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 176);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 27);
			this->label1->TabIndex = 4;
			this->label1->Text = L"—ÓÍË ‚˚ÔÓÎÌÂÌËˇ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 120);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(299, 27);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Õ‡ËÏÂÌÓ‚‡ÌËÂ Ó„‡ÌËÁ‡ˆËË";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 56);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 27);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ÿËÙ ‰Ó„Ó‚Ó‡";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label4->Location = System::Drawing::Point(16, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 27);
			this->label4->TabIndex = 7;
			this->label4->Text = L"—ÛÏÏ‡ ‰Ó„Ó‚Ó‡";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(16, 272);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(232, 22);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label5->Location = System::Drawing::Point(16, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 27);
			this->label5->TabIndex = 9;
			this->label5->Text = L"œËÏÂ˜‡ÌËˇ";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(16, 336);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(512, 22);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F));
			this->label6->Location = System::Drawing::Point(16, 368);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 27);
			this->label6->TabIndex = 11;
			this->label6->Text = L"¬Ë‰ ‰Ó„Ó‚Ó‡";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(16, 400);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(232, 22);
			this->textBox6->TabIndex = 12;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(582, 30);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem,
					this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem
			// 
			this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem";
			this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸ ‚ Ù‡ÈÎ";
			this->ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem->Click += gcnew System::EventHandler(this, &Start::ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem_Click);
			// 
			// Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem
			// 
			this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem->Name = L"Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem";
			this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem->Text = L"«‡ÔÓÎÌËÚ¸ Ò Ù‡ÈÎ‡";
			this->Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Start::Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Start::helpToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Start::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Start::saveFileDialog1_FileOk);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(582, 451);
			this->ControlBox = false;
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(600, 498);
			this->Name = L"Start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"¬‚Â‰ËÚÂ ‰‡ÌÌ˚Â Ó· Ó„‡ÌËÁ‡ˆËË";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Int64 flag = 0;
		if (textBox1->Text != "") {
			flag++;
		}
		else {
			MessageBox::Show("¬‚Â‰ËÚÂ ¯ËÙ ‰Ó„Ó‚Ó‡!", "Œ¯Ë·Í‡!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (textBox2->Text != "") {
			flag++;
		}
		else {
			MessageBox::Show("¬‚Â‰ËÚÂ Ì‡ËÏÂÌÓ‚‡ÌËÂ Ó„‡ÌËÁ‡ˆËË!", "Œ¯Ë·Í‡!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (textBox3->Text != "") {
			flag++;
		}
		else {
			MessageBox::Show("¬‚Â‰ËÚÂ ÒÓÍË ‚˚ÔÓÎÌÂÌËˇ ‰Ó„Ó‚Ó‡!", "Œ¯Ë·Í‡!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (textBox4->Text != "") {
			flag++;
		}
		else {
			MessageBox::Show("¬‚Â‰ËÚÂ ÒÛÏÏÛ ‰Ó„Ó‚Ó‡!", "Œ¯Ë·Í‡!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (textBox5->Text != "") {
			flag++;
		}
		if (textBox6->Text != "") {
			flag++;
		}
		else {
			MessageBox::Show("¬‚Â‰ËÚÂ ‚Ë‰ ‰Ó„Ó‚Ó‡!", "Œ¯Ë·Í‡!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		if (flag == 5 || flag == 6) {
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}
	}
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ÒÓı‡ÌËÚ¸¬‘‡ÈÎToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->InitialDirectory = "D:\\LB_JK_2\\LB_JK_2\\CW_1\\Main\\TEST\\Start";
		saveFileDialog1->Filter = "";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				StreamWriter^ sw = gcnew StreamWriter(myStream);
				sw->WriteLine(textBox1->Text);
				sw->WriteLine(textBox2->Text);
				sw->WriteLine(textBox3->Text);
				sw->WriteLine(textBox4->Text);
				sw->WriteLine(textBox5->Text);
				sw->WriteLine(textBox6->Text);
				sw->Close();
			}
		}

		/*String^ FileName = "";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			FileName = openFileDialog1->FileName;


		}

		try {
			StreamReader^ file = File::OpenText(FileName);
			textBox1->Text = file->ReadToEnd();

		}

		catch (Exception^ e) {
			MessageBox::Show(this, "‘‡ÈÎ ÌÂ ·˚Î ÓÚÍ˚Ú!", "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}*/



	}
	private: System::Void Á‡ÔÓÎÌËÚ¸—‘‡ÈÎ‡ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "D:\\LB_JK_2\\LB_JK_2\\CW_1\\Main\\TEST\\Start";
		openFileDialog1->Filter = "";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				StreamReader^ sw = gcnew StreamReader(myStream);
				String^ str1 = "";
				String^ str2 = "";
				String^ str3 = "";
				String^ str4 = "";
				String^ str5 = "";
				String^ str6 = "";

				str1 = sw->ReadLine();
				str2 = sw->ReadLine();
				str3 = sw->ReadLine();
				str4 = sw->ReadLine();
				str5 = sw->ReadLine();
				str6 = sw->ReadLine();

				textBox1->Text = (str1);
				textBox2->Text = (str2);
				textBox3->Text = (str3);
				textBox4->Text = (str4);
				textBox5->Text = (str5);
				textBox6->Text = (str6);
				sw->Close();

			}
		}
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("\nƒÎˇ ÚÓ„Ó, ˜ÚÓ·˚ Á‡ÔÓÎÌËÚ¸ ‰‡ÌÌÛ˛ ÙÓÏÛ ¬‡Ï ÌÂÓ·ıÓ‰ËÏÓ ·Û‰ÂÚ ‚‚ÂÒÚË ‰‡ÌÌ˚Â ÔÓ ‚‡¯ÂÈ Ó„‡ÌËÁ‡ˆËË.\n œÓ‚ÂˇÈÚÂ Ô‡‚ËÎ¸ÌÓÒÚ¸ ‚‚Ó‰‡!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
