#pragma once
#include <cmath>
#include <string>
#include <algorithm>
#include "MicroCommand.h"
#include "MicroOperation.h"
#include "MicroProgramm.h"

namespace MPLC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for mplc
	/// </summary>
	public ref class mplc : public System::Windows::Forms::Form
	{
	public:
		mplc(void)
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
		~mplc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ A;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Код;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::RichTextBox^ richTextBox8;
	private: System::Windows::Forms::RichTextBox^ richTextBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::RichTextBox^ richTextBox10;
	private: System::Windows::Forms::RichTextBox^ richTextBox11;
	private: System::Windows::Forms::RichTextBox^ TextResult;
	private: System::Windows::Forms::RichTextBox^ richTextBox12;
	private: System::Windows::Forms::RichTextBox^ TextCurrentRes;
		   int currentStep = 0;
		   int currentTact = 0;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox13;
	private: System::Windows::Forms::RichTextBox^ richTextBox14;
	private: System::Windows::Forms::RichTextBox^ richTextBox15;
	private: System::Windows::Forms::RichTextBox^ richTextBox16;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Button^ button5;



	private:
	private: System::ComponentModel::IContainer^ components;
	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mplc::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->A = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Код = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->TextResult = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox12 = (gcnew System::Windows::Forms::RichTextBox());
			this->TextCurrentRes = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox13 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox14 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox15 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox16 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->A, this->Код });
			this->dataGridView1->Location = System::Drawing::Point(1, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 20;
			this->dataGridView1->Size = System::Drawing::Size(220, 304);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mplc::dataGridView1_CellContentClick);
			// 
			// A
			// 
			this->A->HeaderText = L"A";
			this->A->Name = L"A";
			this->A->ReadOnly = true;
			// 
			// Код
			// 
			this->Код->HeaderText = L"Код";
			this->Код->Name = L"Код";
			this->Код->ReadOnly = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(12, 24);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(109, 38);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Разрядность микрокоманд";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(123, 27);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(98, 35);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox2_TextChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(453, 27);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(128, 36);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"Число полей МО";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(586, 27);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(87, 37);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"";
			this->richTextBox4->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox4_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView2->Location = System::Drawing::Point(453, 69);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 20;
			this->dataGridView2->Size = System::Drawing::Size(220, 304);
			this->dataGridView2->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Код";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y1";
			this->Column2->Name = L"Column2";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column3,
					this->Column4
			});
			this->dataGridView3->Location = System::Drawing::Point(227, 69);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 20;
			this->dataGridView3->Size = System::Drawing::Size(220, 304);
			this->dataGridView3->TabIndex = 6;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mplc::dataGridView3_CellContentClick);
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Код";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"x";
			this->Column4->Name = L"Column4";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(384, 27);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(63, 35);
			this->richTextBox5->TabIndex = 7;
			this->richTextBox5->Text = L"";
			this->richTextBox5->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox5_TextChanged);
			// 
			// richTextBox6
			// 
			this->richTextBox6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(227, 25);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->Size = System::Drawing::Size(152, 37);
			this->richTextBox6->TabIndex = 8;
			this->richTextBox6->Text = L"Разрядность логических условий";
			this->richTextBox6->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox6_TextChanged);
			// 
			// richTextBox7
			// 
			this->richTextBox7->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox7->Location = System::Drawing::Point(453, 392);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ReadOnly = true;
			this->richTextBox7->Size = System::Drawing::Size(398, 25);
			this->richTextBox7->TabIndex = 9;
			this->richTextBox7->Text = L"Таблица микропрограммы в двоичных кодах";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->AllowUserToResizeColumns = false;
			this->dataGridView4->AllowUserToResizeRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView4->Location = System::Drawing::Point(453, 483);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 20;
			this->dataGridView4->Size = System::Drawing::Size(520, 540);
			this->dataGridView4->TabIndex = 10;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Адрес";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Y1";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"x";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"i";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"A1";
			this->Column9->Name = L"Column9";
			// 
			// richTextBox8
			// 
			this->richTextBox8->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox8->Location = System::Drawing::Point(3, 395);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->ReadOnly = true;
			this->richTextBox8->Size = System::Drawing::Size(150, 25);
			this->richTextBox8->TabIndex = 11;
			this->richTextBox8->Text = L"Количество тактов";
			// 
			// richTextBox9
			// 
			this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox9->Location = System::Drawing::Point(159, 395);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(84, 25);
			this->richTextBox9->TabIndex = 12;
			this->richTextBox9->Text = L"";
			this->richTextBox9->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox9_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(584, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 51);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mplc::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(715, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 51);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Начать моделирование по шагам";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mplc::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(846, 426);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 51);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Step";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &mplc::button3_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AllowUserToResizeColumns = false;
			this->dataGridView5->AllowUserToResizeRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column12 });
			this->dataGridView5->Location = System::Drawing::Point(1, 483);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 20;
			this->dataGridView5->Size = System::Drawing::Size(120, 540);
			this->dataGridView5->TabIndex = 16;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mplc::dataGridView5_CellContentClick);
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Такт";
			this->Column12->Name = L"Column12";
			// 
			// richTextBox10
			// 
			this->richTextBox10->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox10->Location = System::Drawing::Point(1, 426);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->ReadOnly = true;
			this->richTextBox10->Size = System::Drawing::Size(200, 42);
			this->richTextBox10->TabIndex = 17;
			this->richTextBox10->Text = L"Значения логических условий на каждом такте";
			// 
			// richTextBox11
			// 
			this->richTextBox11->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox11->Location = System::Drawing::Point(1040, 426);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->ReadOnly = true;
			this->richTextBox11->Size = System::Drawing::Size(102, 25);
			this->richTextBox11->TabIndex = 18;
			this->richTextBox11->Text = L"Результат";
			// 
			// TextResult
			// 
			this->TextResult->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TextResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextResult->Location = System::Drawing::Point(1148, 426);
			this->TextResult->Name = L"TextResult";
			this->TextResult->ReadOnly = true;
			this->TextResult->Size = System::Drawing::Size(744, 25);
			this->TextResult->TabIndex = 19;
			this->TextResult->Text = L"";
			// 
			// richTextBox12
			// 
			this->richTextBox12->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox12->Location = System::Drawing::Point(979, 457);
			this->richTextBox12->Name = L"richTextBox12";
			this->richTextBox12->ReadOnly = true;
			this->richTextBox12->Size = System::Drawing::Size(165, 25);
			this->richTextBox12->TabIndex = 20;
			this->richTextBox12->Text = L"Текущее значение";
			this->richTextBox12->Visible = false;
			this->richTextBox12->TextChanged += gcnew System::EventHandler(this, &mplc::richTextBox12_TextChanged);
			// 
			// TextCurrentRes
			// 
			this->TextCurrentRes->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TextCurrentRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextCurrentRes->Location = System::Drawing::Point(1150, 457);
			this->TextCurrentRes->Name = L"TextCurrentRes";
			this->TextCurrentRes->ReadOnly = true;
			this->TextCurrentRes->Size = System::Drawing::Size(744, 25);
			this->TextCurrentRes->TabIndex = 21;
			this->TextCurrentRes->Text = L"";
			this->TextCurrentRes->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(453, 426);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 51);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Очистить все";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mplc::button4_Click);
			// 
			// richTextBox13
			// 
			this->richTextBox13->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox13->ForeColor = System::Drawing::Color::Red;
			this->richTextBox13->Location = System::Drawing::Point(979, 488);
			this->richTextBox13->Name = L"richTextBox13";
			this->richTextBox13->ReadOnly = true;
			this->richTextBox13->Size = System::Drawing::Size(366, 30);
			this->richTextBox13->TabIndex = 23;
			this->richTextBox13->Text = L"Некорректно введенные данные";
			this->richTextBox13->Visible = false;
			// 
			// richTextBox14
			// 
			this->richTextBox14->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox14->Location = System::Drawing::Point(875, 392);
			this->richTextBox14->Name = L"richTextBox14";
			this->richTextBox14->ReadOnly = true;
			this->richTextBox14->Size = System::Drawing::Size(267, 25);
			this->richTextBox14->TabIndex = 24;
			this->richTextBox14->Text = L"Последовательность адресов";
			// 
			// richTextBox15
			// 
			this->richTextBox15->BackColor = System::Drawing::SystemColors::HighlightText;
			this->richTextBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox15->Location = System::Drawing::Point(1150, 392);
			this->richTextBox15->Name = L"richTextBox15";
			this->richTextBox15->ReadOnly = true;
			this->richTextBox15->Size = System::Drawing::Size(742, 25);
			this->richTextBox15->TabIndex = 25;
			this->richTextBox15->Text = L"";
			// 
			// richTextBox16
			// 
			this->richTextBox16->BackColor = System::Drawing::SystemColors::Menu;
			this->richTextBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox16->Location = System::Drawing::Point(809, 27);
			this->richTextBox16->Name = L"richTextBox16";
			this->richTextBox16->ReadOnly = true;
			this->richTextBox16->Size = System::Drawing::Size(104, 36);
			this->richTextBox16->TabIndex = 26;
			this->richTextBox16->Text = L"Разрядности полей МО";
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToDeleteRows = false;
			this->dataGridView6->AllowUserToResizeColumns = false;
			this->dataGridView6->AllowUserToResizeRows = false;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(919, 8);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 20;
			this->dataGridView6->Size = System::Drawing::Size(0, 62);
			this->dataGridView6->TabIndex = 27;
			this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mplc::dataGridView6_CellContentClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(679, 27);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 36);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Установить разрядности полей МО";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mplc::button5_Click);
			// 
			// mplc
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->richTextBox16);
			this->Controls->Add(this->richTextBox15);
			this->Controls->Add(this->richTextBox14);
			this->Controls->Add(this->richTextBox13);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->TextCurrentRes);
			this->Controls->Add(this->richTextBox12);
			this->Controls->Add(this->TextResult);
			this->Controls->Add(this->richTextBox11);
			this->Controls->Add(this->richTextBox10);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox9);
			this->Controls->Add(this->richTextBox8);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->richTextBox7);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mplc";
			this->Text = L"mplc";
			this->Load += gcnew System::EventHandler(this, &mplc::mplc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mplc_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //обработка разрядности МК
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox13->Visible = false;
		this->button3->Visible = false;
		this->richTextBox15->Clear();
		this->TextResult->Clear();
		this->TextCurrentRes->Clear();
		try {
			this->dataGridView1->Rows->Clear();
			if (this->richTextBox2->Text != L"")
			{
				int step = Int32::Parse(this->richTextBox2->Text);
				int number = 1;
				for (int i = 0; i < step; i++)
					number *= 2;
				this->dataGridView4->Rows->Clear();
				this->dataGridView4->Rows->Add(number);
				for (int i = 0; i < number; i++)
				{
					this->dataGridView4[0, i]->Value = i;
				}

				int pow2 = 1;
				int p = 2;
				while (p < number)
				{
					pow2++;
					p *= 2;
				}
				for (int i = 0; i < number; i++)
				{
					this->dataGridView1->Rows->Add(1);
					int cur = i;
					System::String^ s = L"";
					while (cur > 0)
					{
						s = (cur % 2) + s;
						cur /= 2;
					}
					while (s->Length < pow2)
						s = 0 + s;
					this->dataGridView1[1, i]->Value = s;
					this->dataGridView1[0, i]->Value = i;
				}
			}
		}
		catch (...)
		{
			this->richTextBox13->Visible = true;
		}

	}
		   //обработка количства полей МО
	private: System::Void richTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox13->Visible = false;
		this->button3->Visible = false;
		this->richTextBox15->Clear();
		this->TextResult->Clear();
		this->TextCurrentRes->Clear();
		try {
			if (richTextBox4->Text != L"")
			{
				this->dataGridView2->Columns->Clear();
				int numberOfMO = Convert::ToInt32(richTextBox4->Text);

				this->dataGridView6->Columns->Clear();
				this->dataGridView6->Rows->Clear();
				for (int i = 0; i < numberOfMO; i++)
				{
					this->dataGridView6->Columns->Add(L"Column" + (i + 1), L"Y" + (i + 1));
				}
				this->dataGridView6->Rows->Add(1);
				this->dataGridView6->Size = System::Drawing::Size(20 + std::min(8, this->dataGridView6->Columns->Count) * 100, 62);

				this->dataGridView4->Columns->Clear();
				int cntOfColumns = 0;
				cntOfColumns++;
				this->dataGridView4->Columns->Add(L"Column" + cntOfColumns, L"Адрес");
				for (int i = 0; i < numberOfMO; i++)
				{
					cntOfColumns++;
					this->dataGridView4->Columns->Add(L"Column" + cntOfColumns, L"Y" + (i + 1));
				}
				cntOfColumns++;
				this->dataGridView4->Columns->Add(L"Column" + cntOfColumns, L"x");
				cntOfColumns++;
				this->dataGridView4->Columns->Add(L"Column" + cntOfColumns, L"i");
				cntOfColumns++;
				this->dataGridView4->Columns->Add(L"Column" + cntOfColumns, L"A1");
				if (10 < numberOfMO)
					this->dataGridView4->Size = System::Drawing::Size(20 + 10 * 100, 540);
				else
					this->dataGridView4->Size = System::Drawing::Size(20 + (numberOfMO + 4) * 100, 540);

				if (this->richTextBox2->Text != L"")
				{
					int step = Int32::Parse(this->richTextBox2->Text);
					int number = 1;
					for (int i = 0; i < step; i++)
						number *= 2;
					this->dataGridView4->Rows->Clear();
					this->dataGridView4->Rows->Add(number);
					for (int i = 0; i < number; i++)
					{
						this->dataGridView4[0, i]->Value = i;
					}
				}

				cntOfColumns = 0;
				for (int i = 0; i < numberOfMO; i++)
				{
					cntOfColumns++;
					this->dataGridView2->Columns->Add(L"Column" + cntOfColumns, L"Код");
					cntOfColumns++;
					this->dataGridView2->Columns->Add(L"Column" + cntOfColumns, L"Y" + (i + 1));
				}
				if (5 < numberOfMO)
					this->dataGridView2->Size = System::Drawing::Size(20 + 5 * 2 * 100, 305);
				else
					this->dataGridView2->Size = System::Drawing::Size(20 + numberOfMO * 2 * 100, 305);
			}
			else
			{
				this->dataGridView2->Columns->Clear();
				this->dataGridView2->Columns->Add(L"Column" + 1, L"Код");
				this->dataGridView2->Columns->Add(L"Column" + 2, L"Y1");
				this->dataGridView2->Size = System::Drawing::Size(220, 305);
			}
		}
		catch (...)
		{
			this->richTextBox13->Visible = true;
		}
	}
		   //обработка разрядности логических условий
	private: System::Void richTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox13->Visible = false;
		this->button3->Visible = false;
		this->richTextBox15->Clear();
		this->TextResult->Clear();
		this->TextCurrentRes->Clear();
		try {
			this->dataGridView3->Rows->Clear();
			this->dataGridView5->Columns->Clear();
			this->dataGridView5->Columns->Add(L"Column1", L"Такт");
			if (this->richTextBox9->Text != L"")
			{
				int number = Convert::ToInt32(this->richTextBox9->Text);
				this->dataGridView5->Rows->Add(number);
				for (int i = 0; i < number; i++)
				{
					dataGridView5[0, i]->Value = i + 1;
				}
			}


			if (this->richTextBox5->Text != L"")
			{
				int step = Int32::Parse(this->richTextBox5->Text);
				int number = 1;
				for (int i = 0; i < step; i++)
					number *= 2;
				number -= 2;

				int pow2 = step;
				for (int i = 0; i < number + 2; i++)
				{
					this->dataGridView3->Rows->Add(1);
					int cur = i;
					System::String^ s = L"";
					while (cur > 0)
					{
						s = (cur % 2) + s;
						cur /= 2;
					}
					while (s->Length < pow2)
						s = 0 + s;
					this->dataGridView3[0, i]->Value = s;
				}
				this->dataGridView3[1, 0]->Value = L"Const 0";
				this->dataGridView3[1, number + 1]->Value = L"Const 1";
			}
		}
		catch (...)
		{
			this->richTextBox13->Visible = true;
		}
	}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
	   std::string ConvertToASCII(System::String^ _str)
	   {
		   if (_str == nullptr)
			   return std::string();

		   // Creating ASCII encoding (or smth. else)
		   System::Text::ASCIIEncoding^ enc = gcnew System::Text::ASCIIEncoding;

		   // Encoding source string
		   array<unsigned char>^ encodedBytes = enc->GetBytes(_str);
		   if (encodedBytes->Length == 0)
			   return std::string();

		   // Creating std::string
		   pin_ptr<unsigned char> pin(&encodedBytes[0]);
		   char* cstr(reinterpret_cast<char*>(static_cast<unsigned char*>(pin)));
		   return std::string(cstr, encodedBytes->Length);
	   }

	   //RUN
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox13->Visible = false;
	try {
		int x1 = Convert::ToInt32(richTextBox2->Text);
		int numberrOfMC = pow(2, x1);
		for (int i = 0; i < numberrOfMC; i++)
		{
			this->dataGridView4[0, i]->Style->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
		}
		this->richTextBox12->Visible = false;
		this->TextCurrentRes->Visible = false;
		this->button3->Visible = false;
		this->currentStep = 0;
		this->currentTact = 0;
		this->TextResult->Text = L"";
		this->TextCurrentRes->Text = L"";
		this->richTextBox15->Text = L"";
		int x2 = Convert::ToInt32(richTextBox5->Text);
		int numberOfLC = pow(2, x2);
		int numberOfSetsYi = Convert::ToInt32(richTextBox4->Text);
		int numberOfTacts = Convert::ToInt32(richTextBox9->Text);

		//считываем таблицу микрокоманд
		std::map<std::string, int> mcMap;
		for (int i = 0; i < numberrOfMC; i++)
		{
			System::String^ s1 = Convert::ToString(this->dataGridView1[1, i]->Value);
			std::string s = ConvertToASCII(s1);
			mcMap[s] = i;
		}

		//считываем таблицу логических условий
		std::map<std::string, int> LogicalConditions;
		int cnt = 0;
		for (int i = 0; i < numberOfLC; i++)
		{
			System::String^ s1 = Convert::ToString(dataGridView3[0, i]->Value);
			System::String^ s2 = Convert::ToString(dataGridView3[1, i]->Value);
			if (s2 != L"")
			{
				std::string s = ConvertToASCII(s1);
				LogicalConditions[s] = cnt;
				cnt++;
			}
		}

		//считываем таблицу микроопераций
		std::vector<MicroOperation> microOperation;
		int numberOfRows = this->dataGridView2->Rows->Count;
		for (int i = 0; i < numberOfSetsYi; i++)
		{
			for (int j = 0; j < numberOfRows; j++)
			{
				if (Convert::ToString(dataGridView2[i * 2, j]->Value) != L"")
				{
					std::string s1 = ConvertToASCII(Convert::ToString(dataGridView2[i * 2, j]->Value));
					std::string s2 = ConvertToASCII(Convert::ToString(dataGridView2[i * 2 + 1, j]->Value));
					if (s1 != "")
					{
						MicroOperation cur(s1, s2, i + 1);
						microOperation.push_back(cur);
					}
				}
			}
		}

		//считываем таблицу значений лог. условий на каждом такте
		std::vector<std::vector<std::pair<int, bool>>> logicalValues(numberOfTacts);
		for (int i = 0; i < numberOfTacts; i++)
		{
			std::pair<int, bool> cur;
			cur.first = 0;
			cur.second = 0;
			logicalValues[i].push_back(cur);


			for (int j = 0; j < cnt - 2; j++)
			{
				cur.first = j + 1;
				if (Convert::ToString(dataGridView5[j + 1, i]->Value) == L"1")
					cur.second = 1;
				else
					cur.second = 0;
				logicalValues[i].push_back(cur);
			}

			cur.first = cnt - 1;
			cur.second = 1;
			logicalValues[i].push_back(cur);
		}

		MicroProgramm programm;
		programm.valuesOfXi = logicalValues;
		programm.numberOfSetsYi = numberOfSetsYi;
		programm.numberOfCommands = numberrOfMC;
		programm.microOperations = microOperation;
		programm.logicalConditions = LogicalConditions;

		//считываем таблицу микропрограммы
		std::vector<MicroCommand> prog(numberrOfMC);
		int ind = numberOfSetsYi + 1;
		for (int i = 0; i < numberrOfMC; i++)
		{
			System::String^ s = Convert::ToString(dataGridView4[ind, i]->Value);
			prog[i].x = LogicalConditions[ConvertToASCII(s)];

			if (Convert::ToString(dataGridView4[ind + 1, i]->Value) == L"1")
				prog[i].i = 1;
			else
				prog[i].i = 0;

			s = Convert::ToString(dataGridView4[ind + 2, i]->Value);
			prog[i].A1 = mcMap[ConvertToASCII(s)];

			for (int j = 1; j <= numberOfSetsYi; j++)
			{
				s = Convert::ToString(dataGridView4[j, i]->Value);
				for (int k = 0; k < microOperation.size(); k++)
				{
					if (microOperation[k].setYi == j && microOperation[k].code == ConvertToASCII(s))
					{
						prog[i].microOperations.push_back(microOperation[k]);
						break;
					}
				}
			}
		}
		programm.microCommands = prog;

		std::vector<int> res = programm.Modeling(numberOfTacts);
		System::String^ result = L"";
		System::String^ ai = L"";
		for (int i = 0; i < res.size(); i++)
		{
			if (result != L"")
				result += L"; ";
			if (ai != L"")
				ai += L"; ";
			result += gcnew String(prog.at(res.at(i)).microOperations.at(0).yi.c_str());
			for (int j = 1; j < numberOfSetsYi; j++)
			{
				result += L", " + gcnew String(prog.at(res.at(i)).microOperations.at(j).yi.c_str());
			}
			ai += res[i];
		}

		this->TextResult->Text = result;
		this->richTextBox15->Text = ai;
	}
	catch (...)
	{
		this->richTextBox13->Visible = true;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox13->Visible = false;
	try {
		int numberrOfMC = Convert::ToInt32(richTextBox2->Text);
		for (int i = 0; i < numberrOfMC; i++)
		{
			this->dataGridView4[0, i]->Style->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
		}
		this->richTextBox12->Visible = true;
		this->TextCurrentRes->Visible = true;
		this->currentStep = 0;
		this->currentTact = 0;
		this->dataGridView4[0, currentStep]->Style->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);
		this->button3->Visible = true;
		this->richTextBox15->Clear();
		this->TextResult->Clear();
		this->TextCurrentRes->Clear();
	}
	catch (...)
	{
		this->richTextBox13->Visible = true;
	}
}
private: System::Void richTextBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox15->Clear();
	this->TextResult->Clear();
	this->button3->Visible = false;
	this->TextCurrentRes->Clear();
	this->richTextBox13->Visible = false;
	try {
		this->dataGridView5->Rows->Clear();
		this->dataGridView5->Columns->Clear();
		this->dataGridView5->Columns->Add(L"0", L"Такт");
		if (this->richTextBox9->Text != L"")
		{
			int step = Int32::Parse(this->richTextBox5->Text);
			int number = 1;
			for (int i = 0; i < step; i++)
				number *= 2;
			number -= 2;
			for (int i = 0; i < number; i++)
			{
				if(Convert::ToString(dataGridView3[1, i + 1]->Value) != L"")
					this->dataGridView5->Columns->Add(L"Column" + (i + 1), Convert::ToString(dataGridView3[1, i + 1]->Value));
			}
			number = Convert::ToInt32(this->richTextBox9->Text);
			this->dataGridView5->Rows->Add(number);
			for (int i = 0; i < number; i++)
			{
				dataGridView5[0, i]->Value = i + 1;
			}

			if (4 < dataGridView5->Columns->Count)
				this->dataGridView5->Size = System::Drawing::Size(20 + 4 * 100, 540);
			else
				this->dataGridView5->Size = System::Drawing::Size(20 + (dataGridView5->Columns->Count) * 100, 540);
		}
	}
	catch (...)
	{
		this->richTextBox13->Visible = true;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox13->Visible = false;
	try {
		this->TextCurrentRes->Text = L"";
		int x1 = Convert::ToInt32(richTextBox2->Text);
		int numberrOfMC = pow(2, x1);
		int x2 = Convert::ToInt32(richTextBox5->Text);
		int numberOfLC = pow(2, x2);
		int numberOfSetsYi = Convert::ToInt32(richTextBox4->Text);
		int numberOfTacts = Convert::ToInt32(richTextBox9->Text);
		if (currentStep < 0 || currentStep >= numberrOfMC || currentTact == numberOfTacts)
		{
			this->button3->Visible = false;
			this->TextCurrentRes->Text = L"";
			this->button1->Visible = true;
			this->richTextBox12->Visible = false;
			this->TextCurrentRes->Visible = false;
			this->currentStep = 0;
			this->currentTact = 0;

			for (int i = 0; i < numberrOfMC; i++)
			{
				this->dataGridView4[0, i]->Style->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
			}
		}
		else
		{
			
			for (int i = 0; i < numberrOfMC; i++)
			{
				this->dataGridView4[0, i]->Style->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
			}
			this->richTextBox12->Visible = true;
			this->TextCurrentRes->Visible = true;
			this->button3->Visible = true;
			this->TextCurrentRes->Text = L"";
			

			//считываем таблицу микрокоманд
			std::map<std::string, int> mcMap;
			for (int i = 0; i < numberrOfMC; i++)
			{
				System::String^ s1 = Convert::ToString(this->dataGridView1[1, i]->Value);
				std::string s = ConvertToASCII(s1);
				mcMap[s] = i;
			}

			//считываем таблицу логических условий
			std::map<std::string, int> LogicalConditions;
			int cnt = 0;
			for (int i = 0; i < numberOfLC; i++)
			{
				System::String^ s1 = Convert::ToString(dataGridView3[0, i]->Value);
				System::String^ s2 = Convert::ToString(dataGridView3[1, i]->Value);
				if (s2 != L"")
				{
					std::string s = ConvertToASCII(s1);
					LogicalConditions[s] = cnt;
					cnt++;
				}
			}

			//считываем таблицу микроопераций
			std::vector<MicroOperation> microOperation;
			int numberOfRows = this->dataGridView2->Rows->Count;
			for (int i = 0; i < numberOfSetsYi; i++)
			{
				for (int j = 0; j < numberOfRows; j++)
				{
					if (Convert::ToString(dataGridView2[i * 2, j]->Value) != L"")
					{
						std::string s1 = ConvertToASCII(Convert::ToString(dataGridView2[i * 2, j]->Value));
						std::string s2 = ConvertToASCII(Convert::ToString(dataGridView2[i * 2 + 1, j]->Value));
						if (s1 != "")
						{
							MicroOperation cur(s1, s2, i + 1);
							microOperation.push_back(cur);
						}
					}
				}
			}

			//считываем таблицу значений лог. условий на каждом такте
			std::vector<std::vector<std::pair<int, bool>>> logicalValues(numberOfTacts);
			for (int i = 0; i < numberOfTacts; i++)
			{
				std::pair<int, bool> cur;
				cur.first = 0;
				cur.second = 0;
				logicalValues[i].push_back(cur);


				for (int j = 0; j < cnt - 2; j++)
				{
					cur.first = j + 1;
					if (Convert::ToString(dataGridView5[j + 1, i]->Value) == L"1")
						cur.second = 1;
					else
						cur.second = 0;
					logicalValues[i].push_back(cur);
				}

				cur.first = cnt - 1;
				cur.second = 1;
				logicalValues[i].push_back(cur);
			}

			MicroProgramm programm;
			programm.valuesOfXi = logicalValues;
			programm.numberOfSetsYi = numberOfSetsYi;
			programm.numberOfCommands = numberrOfMC;
			programm.microOperations = microOperation;
			programm.logicalConditions = LogicalConditions;

			//считываем таблицу микропрограммы
			std::vector<MicroCommand> prog(numberrOfMC);
			int ind = numberOfSetsYi + 1;
			for (int i = 0; i < numberrOfMC; i++)
			{
				System::String^ s = Convert::ToString(dataGridView4[ind, i]->Value);
				prog[i].x = LogicalConditions[ConvertToASCII(s)];

				if (Convert::ToString(dataGridView4[ind + 1, i]->Value) == L"1")
					prog[i].i = 1;
				else
					prog[i].i = 0;

				s = Convert::ToString(dataGridView4[ind + 2, i]->Value);
				prog[i].A1 = mcMap[ConvertToASCII(s)];

				for (int j = 1; j <= numberOfSetsYi; j++)
				{
					s = Convert::ToString(dataGridView4[j, i]->Value);
					for (int k = 0; k < microOperation.size(); k++)
					{
						if (microOperation[k].setYi == j && microOperation[k].code == ConvertToASCII(s))
						{
							prog[i].microOperations.push_back(microOperation[k]);
							break;
						}
					}
				}
			}
			programm.microCommands = prog;
			

			for (int i = 0; i < numberrOfMC; i++)
			{
				this->dataGridView4[0, i]->Style->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
			}


			//для 0
			if (this->richTextBox15->Text == L"")
			{
				richTextBox15->Text += 0;

				System::String^ result = L"";
				System::String^ curRes = L"";
				result += gcnew String(prog[currentStep].microOperations[0].yi.c_str());
				curRes += gcnew String(prog[currentStep].microOperations[0].yi.c_str());
				for (int j = 1; j < numberOfSetsYi; j++)
				{
					result += L", " + gcnew String(prog[currentStep].microOperations[j].yi.c_str());
					curRes += L", " + gcnew String(prog[currentStep].microOperations[j].yi.c_str());
				}
				this->TextCurrentRes->Text = curRes;
				this->TextResult->Text += result;
			}


			if (prog.at(currentStep).i == 0 && programm.microCommands.at(currentStep).x == 0)
				currentStep = -2;
			else if (prog.at(currentStep).i != programm.valuesOfXi.at(currentTact).at(programm.microCommands.at(currentStep).x).second)
				currentStep = programm.microCommands.at(currentStep).A1;
			else
				currentStep++;
			currentTact++;

			if (currentStep >= 0)
			{
				this->dataGridView4[0, currentStep]->Style->BackColor = System::Drawing::Color::FromArgb(255, 0, 0);
				if (this->TextResult->Text != L"")
					this->TextResult->Text += L"; ";
				if (this->richTextBox15->Text != L"")
					this->richTextBox15->Text += L"; ";
				this->richTextBox15->Text += currentStep;

				System::String^ result = L"";
				System::String^ curRes = L"";
				result += gcnew String(prog[currentStep].microOperations[0].yi.c_str());
				curRes += gcnew String(prog[currentStep].microOperations[0].yi.c_str());
				for (int j = 1; j < numberOfSetsYi; j++)
				{
					result += L", " + gcnew String(prog[currentStep].microOperations[j].yi.c_str());
					curRes += L", " + gcnew String(prog[currentStep].microOperations[j].yi.c_str());
				}
				this->TextCurrentRes->Text = curRes;
				this->TextResult->Text += result;
			}
		}
	}
	catch (...)
	{
		this->richTextBox13->Visible = true;
	}
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox13->Visible = false;
	this->richTextBox2->Clear();
	this->richTextBox5->Clear();
	this->richTextBox4->Clear();
	this->richTextBox9->Clear();
	this->richTextBox15->Clear();
	this->TextResult->Clear();
	this->TextCurrentRes->Clear();
	this->dataGridView1->Rows->Clear();
	this->dataGridView2->Rows->Clear();
	this->dataGridView3->Rows->Clear();
	this->dataGridView5->Rows->Clear();
	this->dataGridView4->Rows->Clear();
	this->button3->Visible=false;
}
private: System::Void richTextBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->dataGridView2->Rows->Clear();
		int numberOfColumns = this->dataGridView6->Columns->Count;
		int mx = 0;
		for (int i = 0; i < numberOfColumns; i++)
			mx = std::max(mx, Convert::ToInt32(this->dataGridView6[i, 0]->Value));

		dataGridView2->Rows->Add(pow(2, mx));
		for (int i = 0; i < numberOfColumns; i++)
		{
			if (Convert::ToString(this->dataGridView6[i, 0]->Value) != L"")
			{
				int curPow = Convert::ToInt32(this->dataGridView6[i, 0]->Value);
				int number = 1;
				for (int j = 0; j < curPow; j++)
					number *= 2;

				for (int j = 0; j < number; j++)
				{
					System::String^ curCell = L"";
					int cur = j;
					while (cur > 0)
					{
						curCell = cur % 2 + curCell;
						cur /= 2;
					}
					while (curCell->Length < curPow)
						curCell = 0 + curCell;
					dataGridView2[i * 2, j]->Value = curCell;
				}
			}
		}
	}
	catch (...)
	{
		this->richTextBox13->Visible = true;
	}
}
};
}
