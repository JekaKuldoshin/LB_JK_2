#pragma once

#include "Form2.h"
#include "TScreen.h"
#include "Start.h"
#include "Search.h"

namespace Myproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	public:
		TStudent^ Student;
		TScreen Screen;
		System::Int16 CountDataGrid;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	public:
		Form1(void)
		{
			InitializeComponent();
			Student = gcnew TStudent;
			CountDataGrid = 0;
		}
	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleRole = System::Windows::Forms::AccessibleRole::Graphic;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightGoldenrodYellow;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->Location = System::Drawing::Point(0, 78);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(977, 338);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Номер работника";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column1->Width = 141;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"ФИО";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column2->Width = 71;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"Адрес проживания";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column3->Width = 147;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"Номер телефона";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column4->Width = 137;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Должность";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column5->Width = 110;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Оклад сотрудника";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column6->Width = 145;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"Сроки работы данного сотрудника по данному договору";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column7->Width = 180;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(982, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->aboutToolStripMenuItem1
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->aboutToolStripMenuItem->Text = L"Help file";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->aboutToolStripMenuItem1->Text = L"About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem1_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->BackColor = System::Drawing::Color::Honeydew;
			this->button4->Location = System::Drawing::Point(16, 572);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 28);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Добавить запись";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::Honeydew;
			this->button5->Location = System::Drawing::Point(870, 546);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 54);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::Honeydew;
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(798, 494);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 28);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Удалить запись";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::Honeydew;
			this->button7->Location = System::Drawing::Point(798, 423);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 28);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Изменить назавние";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(183, 572);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Honeydew;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(798, 459);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 28);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Редактировать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 27;
			this->listBox1->Location = System::Drawing::Point(16, 33);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(948, 31);
			this->listBox1->TabIndex = 21;
			this->listBox1->Tag = L"";
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 27;
			this->listBox2->Location = System::Drawing::Point(16, 423);
			this->listBox2->Margin = System::Windows::Forms::Padding(4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(772, 112);
			this->listBox2->TabIndex = 22;
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(341, 572);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(277, 21);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"Разрешить редактирование таблицы";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(982, 634);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Location = System::Drawing::Point(388, 613);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1000, 681);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Shown += gcnew System::EventHandler(this, &Form1::button7_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {        //Добавить запись
		System::Windows::Forms::DialogResult dialres;
		Form2^ newdlg = gcnew Form2(); // виклик форми додавання запису
		dialres = newdlg->ShowDialog();
		if (dialres == System::Windows::Forms::DialogResult::OK) { //Перевірка на правильність уведення даних при натисканні кнопки «Проверка»
			Student->SetNumber(Convert::ToInt16(newdlg->textBox1->Text));  //присвоєння значень полей класу значень з форми додавання
			Student->SetName(newdlg->textBox2->Text);
			Student->SetAddress(newdlg->textBox3->Text);
			Student->SetPhone(Convert::ToInt64(newdlg->textBox4->Text));
			Student->SetPost(newdlg->textBox5->Text);
			Student->SetWages(Convert::ToInt32(newdlg->textBox6->Text));
			Student->SetDeadline(newdlg->textBox7->Text);

			dataGridView1->Rows->Add(Student->Number, Student->TName, Student->Address, Student->Phone_number,
				Student->Post, Student->Wages, Student->Deadline); //Додавання даних до dataGridView1
			CountDataGrid++;
			button1->Enabled = true;
			checkBox1->Enabled = true;
			MessageBox::Show("Запись добавлена!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;  //повернення в головну програму
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {       //Кнопка выхода
		this->Close();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {     //Кнопка удаления 
		System::Windows::Forms::DialogResult dialres;
		dialres = MessageBox::Show("Вы точно хотите удалить запись?", "Удалить?", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning); //Выводим предупреждение
		if (dialres == System::Windows::Forms::DialogResult::OK) {   //Если отвечаем ОК
			if (this->dataGridView1->SelectedRows->Count > 0 &&
				this->dataGridView1->SelectedRows[0]->Index !=
				this->dataGridView1->Rows->Count) {
				this->dataGridView1->Rows->RemoveAt(this->dataGridView1->SelectedRows[0]->Index);
				CountDataGrid--;              //Уменьшаем подсчет данных в ячейках
				if (CountDataGrid == 0) {       //А если данных нет, то кнопки выкл.
					button1->Enabled = false;           //Поиск
					button2->Enabled = false;          //Редактировать
					button6->Enabled = false;         //Удалить
					checkBox1->Enabled = false;
				}
				MessageBox::Show("Запись удалена!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Не выделена удаляемая строка!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {      //Изменить название
		System::Windows::Forms::DialogResult dialres;
		Start^ newdlg = gcnew Start();                                  //Запускается начальное окно 
		dialres = newdlg->ShowDialog();
		if (dialres == System::Windows::Forms::DialogResult::OK) {
			listBox1->Items->Clear();
			listBox2->Items->Clear();

			this->Text = newdlg->textBox1->Text;
			Screen.SetContract(newdlg->textBox1->Text);
			Screen.SetName_ORG(newdlg->textBox2->Text);
			Screen.SetPayment_term(newdlg->textBox3->Text);
			Screen.SetContract_amount(newdlg->textBox4->Text);
			Screen.SetNotes(newdlg->textBox5->Text);
			Screen.SetType_of_contract(newdlg->textBox6->Text);

			listBox1->Items->Add(Screen.TContract_cipher);                       //Обращаюсь к классу Screen для вывода переменных и использую иерархию для вывода TName из класса TObject
			listBox2->Items->Add("Наименование организации: ");     //Записываю в листбокс
			listBox2->Items->Add(Screen.TName_ORG);
			listBox2->Items->Add("Сроки выполнения: ");
			listBox2->Items->Add(Screen.TPayment_term);
			listBox2->Items->Add("Сумма договора: ");
			listBox2->Items->Add(Screen.Contract_amount);
			listBox2->Items->Add("Примечания: ");
			listBox2->Items->Add(Screen.Notes);
			listBox2->Items->Add("Вид договора: ");
			listBox2->Items->Add(Screen.Type_of_contract);
		}

	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {    //Запуск файла Help
		System::Diagnostics::Process::Start("Help.htm");
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {     //Поиск
		System::Windows::Forms::DialogResult dialres;                          //Поиск проходит все ячейки и проверяет на схожость данных, есть возможность продолжить поиск
		Search^ newdlg = gcnew Search();
		dialres = newdlg->ShowDialog();
		if (dialres == System::Windows::Forms::DialogResult::OK) {
			System::String^ srh;
			srh = newdlg->textBox1->Text;
			if (CountDataGrid != 0) {
				for (int i = 0; i < CountDataGrid; i++) {
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						if (System::Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == srh) {
							dataGridView1->CurrentCell = dataGridView1->Rows[i]->Cells[j];
							System::Windows::Forms::DialogResult dl;
							dl = MessageBox::Show("Искать далее?", "Continue?", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
							if (dl == System::Windows::Forms::DialogResult::Cancel) {
								break;
							}
						}

					}
				}
				MessageBox::Show("Поиск завершен!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {          //Редактирование данных в ячейках
		System::Windows::Forms::DialogResult dl;
		dl = MessageBox::Show("Редактировать запись?", "Изменить?", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
		if (dl == System::Windows::Forms::DialogResult::OK) {
			if (this->dataGridView1->SelectedRows->Count > 0 &&
				this->dataGridView1->SelectedRows[0]->Index !=
				this->dataGridView1->Rows->Count) {
				System::Windows::Forms::DialogResult dialres;
				Form2^ newdlg = gcnew Form2();
				newdlg->textBox1->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[0]->Value);
				newdlg->textBox2->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[1]->Value);
				newdlg->textBox3->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[2]->Value);
				newdlg->textBox4->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[3]->Value);
				newdlg->textBox5->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[4]->Value);
				newdlg->textBox6->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[5]->Value);
				newdlg->textBox7->Text = System::Convert::ToString(this->dataGridView1->SelectedRows[0]->Cells[6]->Value);
				dialres = newdlg->ShowDialog();
				if (dialres == System::Windows::Forms::DialogResult::OK) {
					this->dataGridView1->SelectedRows[0]->Cells[0]->Value = newdlg->textBox1->Text;
					this->dataGridView1->SelectedRows[0]->Cells[1]->Value = newdlg->textBox2->Text;
					this->dataGridView1->SelectedRows[0]->Cells[2]->Value = newdlg->textBox3->Text;
					this->dataGridView1->SelectedRows[0]->Cells[3]->Value = newdlg->textBox4->Text;
					this->dataGridView1->SelectedRows[0]->Cells[4]->Value = newdlg->textBox5->Text;
					this->dataGridView1->SelectedRows[0]->Cells[5]->Value = newdlg->textBox6->Text;
					this->dataGridView1->SelectedRows[0]->Cells[6]->Value = newdlg->textBox7->Text;
				}
				MessageBox::Show("Запись отредактирована!", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Невыделена редактируемая строка!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {             //Кнопка об программе
		MessageBox::Show("\nПрограмма для работы с договорами организации\n Версия 1.0\n\nПрограмма разработана студентом 'ХПИ' - Харьковский Политехнический Институт\nКулдошин Е.И.\nГруппа: КН-320Д  ", "Опрограмме", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {    //Конпка для разрешения редактирования таблицы
		if (checkBox1->Checked == true && CountDataGrid != 0) {       //checkBox1 активен и подсчет данных не = 0
			button2->Enabled = true;                            //Тогда вкл button2 -> редактировать запись
			button6->Enabled = true;                           //Тогда вкл button6 -> удалить запись
			dataGridView1->RowHeadersVisible = true;     //Тогда в таблице вкл доп.столбец для выделения
		}
		if (checkBox1->Checked == false && CountDataGrid != 0) {
			dataGridView1->RowHeadersVisible = false;
			button2->Enabled = false;
			button6->Enabled = false;
		}
	}

	};
}




