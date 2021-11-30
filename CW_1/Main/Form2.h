#pragma once
#include "TStudent.h"

namespace Myproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
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
	public: System::Windows::Forms::TextBox^ textBox1;
	protected:















	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;













	private: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::TextBox^ textBox4;
	public: System::Windows::Forms::TextBox^ textBox5;
	public: System::Windows::Forms::TextBox^ textBox6;
	public: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàïîëíèòüÑÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



	public:


	public:




	private: System::ComponentModel::IContainer^ components;
	private:

	private:



#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïîëíèòüÑÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AccessibleDescription = L"";
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(15, 72);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 22);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			this->button1->Location = System::Drawing::Point(351, 404);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 74);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Äîáàâèòü";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::Honeydew;
			this->button2->Location = System::Drawing::Point(419, 197);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Îòìåíà";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackColor = System::Drawing::Color::Honeydew;
			this->button3->Location = System::Drawing::Point(419, 133);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Î÷èñòèòü";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 40);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Èíäèâèäóàëüíûé íîìåð ñîòðóäíèêà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 112);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 17);
			this->label2->TabIndex = 21;
			this->label2->Text = L"ÔÈÎ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 176);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Àäðåñ ïðîæèâàíèÿ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 240);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Íîìåð òåëåôîíà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 305);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 17);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Äîëæíîñòü ñîòðóäíèêà";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 369);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 17);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Îêëàä ñîòðóäíèêà";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 425);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Ñðîêè ðàáîòû ïî äàííîìó äîãîâîðó";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button4->BackColor = System::Drawing::Color::Honeydew;
			this->button4->Location = System::Drawing::Point(351, 297);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 74);
			this->button4->TabIndex = 40;
			this->button4->Text = L"Ïðîâåðêà";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->AccessibleDescription = L"";
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(15, 137);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(272, 22);
			this->textBox2->TabIndex = 41;
			// 
			// textBox3
			// 
			this->textBox3->AccessibleDescription = L"";
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(15, 201);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(272, 22);
			this->textBox3->TabIndex = 42;
			// 
			// textBox4
			// 
			this->textBox4->AccessibleDescription = L"";
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(15, 265);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 22);
			this->textBox4->TabIndex = 43;
			// 
			// textBox5
			// 
			this->textBox5->AccessibleDescription = L"";
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(15, 329);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(176, 22);
			this->textBox5->TabIndex = 44;
			// 
			// textBox6
			// 
			this->textBox6->AccessibleDescription = L"";
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(15, 393);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 22);
			this->textBox6->TabIndex = 45;
			// 
			// textBox7
			// 
			this->textBox7->AccessibleDescription = L"";
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(15, 449);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(104, 22);
			this->textBox7->TabIndex = 46;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(541, 30);
			this->menuStrip1->TabIndex = 48;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõðàíèòüÂÔàéëToolStripMenuItem,
					this->çàïîëíèòüÑÔàéëàToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// ñîõðàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõðàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõðàíèòü â ôàéë";
			this->ñîõðàíèòüÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::ñîõðàíèòüÂÔàéëToolStripMenuItem_Click);
			// 
			// çàïîëíèòüÑÔàéëàToolStripMenuItem
			// 
			this->çàïîëíèòüÑÔàéëàToolStripMenuItem->Name = L"çàïîëíèòüÑÔàéëàToolStripMenuItem";
			this->çàïîëíèòüÑÔàéëàToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çàïîëíèòüÑÔàéëàToolStripMenuItem->Text = L"Çàïîëíèòü ñ ôàéëà";
			this->çàïîëíèòüÑÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::çàïîëíèòüÑÔàéëàToolStripMenuItem_Click);
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
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(541, 492);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(559, 539);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Äîáàâëåíèå ñòóäåíòà";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  //Êíîïêà äîáàâèòü
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {    //Î÷èñòêà ïîëåé ââîäà
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {    //Çàêðûòü îêíî è íå ìåíÿòü äàííûå  Îòìåíà
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {         //Ïðîâåðèòü ïîëÿ ââîäà

		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != ""
			&& textBox6->Text != "" && textBox7->Text != "") {
			if (System::Char::IsDigit(textBox1->Text, 0) && !System::Char::IsDigit(textBox2->Text, 0) &&
				!System::Char::IsDigit(textBox3->Text, 0) && System::Char::IsDigit(textBox4->Text, 0) &&
				!System::Char::IsDigit(textBox5->Text, 0) && System::Char::IsDigit(textBox6->Text, 0) &&
				System::Char::IsDigit(textBox7->Text, 0)) {
				button1->Visible = true;
			}
			else {
				MessageBox::Show("Íåêîòîðûå ïîëÿ èìåþò íåâåðíûé ôîðìàò!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else {
			MessageBox::Show("Íå çàïîëíåíû íåêîòîðûå ïîëÿ!", "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ñîõðàíèòüÂÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {     //Ñîõðàíåíèå â ôàéë
		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->InitialDirectory = "D:\\LB_JK_2\\LB_JK_2\\CW_1\\Main\\TEST\\Data";
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
				sw->WriteLine(textBox7->Text);
				sw->Close();
			}
		}

	}
	private: System::Void çàïîëíèòüÑÔàéëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {      //Çàïîëíåíèå ñ ôàéëà
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "D:\\LB_JK_2\\LB_JK_2\\CW_1\\Main\\TEST\\Data";
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
				String^ str7 = "";

				str1 = sw->ReadLine();
				str2 = sw->ReadLine();
				str3 = sw->ReadLine();
				str4 = sw->ReadLine();
				str5 = sw->ReadLine();
				str6 = sw->ReadLine();
				str7 = sw->ReadLine();

				textBox1->Text = (str1);
				textBox2->Text = (str2);
				textBox3->Text = (str3);
				textBox4->Text = (str4);
				textBox5->Text = (str5);
				textBox6->Text = (str6);
				textBox7->Text = (str7);
				sw->Close();

			}
		}
	}
	};
}
