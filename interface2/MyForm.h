#pragma once
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include"Header.h"


namespace interface2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ dataGridViewComboBoxColumn1;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ dataGridViewComboBoxColumn2;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ dataGridViewComboBoxColumn3;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonSort;
	private: System::Windows::Forms::Button^ buttonAver;
	private: System::Windows::Forms::Button^ buttonRemove;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ buttonRemoveall;



	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ buttonNew;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewComboBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridViewComboBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->dataGridViewComboBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSort = (gcnew System::Windows::Forms::Button());
			this->buttonAver = (gcnew System::Windows::Forms::Button());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonRemoveall = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->buttonNew = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1177, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem
			});
			this->fileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileToolStripMenuItem.Image")));
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Lavender;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 45;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->NullValue = nullptr;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::SlateGray;
			this->dataGridView1->Location = System::Drawing::Point(99, 123);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Thistle;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(869, 426);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick_1);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column1->FillWeight = 25;
			this->Column1->HeaderText = L"Surname";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->FillWeight = 25;
			this->Column2->HeaderText = L"Name";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle4->Format = L"d";
			dataGridViewCellStyle4->NullValue = nullptr;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column3->FillWeight = 20;
			this->Column3->HeaderText = L"Date of birth";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Crimson;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column4->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->Column4->FillWeight = 10;
			this->Column4->HeaderText = L"Math score";
			this->Column4->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->Column5->FillWeight = 10;
			this->Column5->HeaderText = L"Biology score";
			this->Column5->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column6->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->Column6->FillWeight = 10;
			this->Column6->HeaderText = L"Physics score";
			this->Column6->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::Lavender;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::GreenYellow;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::GreenYellow;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->ColumnHeadersHeight = 45;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewComboBoxColumn1, this->dataGridViewComboBoxColumn2,
					this->dataGridViewComboBoxColumn3
			});
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle13->NullValue = nullptr;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->GridColor = System::Drawing::Color::SlateGray;
			this->dataGridView2->Location = System::Drawing::Point(100, 570);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView2->Size = System::Drawing::Size(869, 33);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			this->dataGridView2->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellValueChanged);
			this->dataGridView2->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView2_SelectionChanged);
			this->dataGridView2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::dataGridView2_KeyDown);
			this->dataGridView2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::dataGridView2_KeyPress);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::White;
			this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridViewTextBoxColumn1->FillWeight = 25;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Surname";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->FillWeight = 25;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Name";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle11->Format = L"d";
			dataGridViewCellStyle11->NullValue = nullptr;
			this->dataGridViewTextBoxColumn3->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridViewTextBoxColumn3->FillWeight = 20;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Date of birth";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewComboBoxColumn1
			// 
			this->dataGridViewComboBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::Lavender;
			this->dataGridViewComboBoxColumn1->DefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridViewComboBoxColumn1->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->dataGridViewComboBoxColumn1->FillWeight = 10;
			this->dataGridViewComboBoxColumn1->HeaderText = L"Math score";
			this->dataGridViewComboBoxColumn1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->dataGridViewComboBoxColumn1->MinimumWidth = 6;
			this->dataGridViewComboBoxColumn1->Name = L"dataGridViewComboBoxColumn1";
			this->dataGridViewComboBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewComboBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// dataGridViewComboBoxColumn2
			// 
			this->dataGridViewComboBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewComboBoxColumn2->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->dataGridViewComboBoxColumn2->FillWeight = 10;
			this->dataGridViewComboBoxColumn2->HeaderText = L"Biology score";
			this->dataGridViewComboBoxColumn2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->dataGridViewComboBoxColumn2->MinimumWidth = 6;
			this->dataGridViewComboBoxColumn2->Name = L"dataGridViewComboBoxColumn2";
			this->dataGridViewComboBoxColumn2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewComboBoxColumn2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// dataGridViewComboBoxColumn3
			// 
			this->dataGridViewComboBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewComboBoxColumn3->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->dataGridViewComboBoxColumn3->FillWeight = 10;
			this->dataGridViewComboBoxColumn3->HeaderText = L"Physics score";
			this->dataGridViewComboBoxColumn3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->dataGridViewComboBoxColumn3->MinimumWidth = 6;
			this->dataGridViewComboBoxColumn3->Name = L"dataGridViewComboBoxColumn3";
			this->dataGridViewComboBoxColumn3->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewComboBoxColumn3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::White;
			this->buttonAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAdd.BackgroundImage")));
			this->buttonAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonAdd->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonAdd->FlatAppearance->BorderSize = 3;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Location = System::Drawing::Point(975, 555);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(81, 53);
			this->buttonAdd->TabIndex = 5;
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonSort
			// 
			this->buttonSort->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSort->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSort.BackgroundImage")));
			this->buttonSort->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonSort->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonSort->FlatAppearance->BorderSize = 3;
			this->buttonSort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSort->Location = System::Drawing::Point(685, 46);
			this->buttonSort->Name = L"buttonSort";
			this->buttonSort->Size = System::Drawing::Size(88, 53);
			this->buttonSort->TabIndex = 6;
			this->buttonSort->UseVisualStyleBackColor = false;
			this->buttonSort->Click += gcnew System::EventHandler(this, &MyForm::buttonSort_Click);
			// 
			// buttonAver
			// 
			this->buttonAver->BackColor = System::Drawing::Color::White;
			this->buttonAver->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAver.BackgroundImage")));
			this->buttonAver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonAver->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonAver->FlatAppearance->BorderSize = 3;
			this->buttonAver->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAver->Location = System::Drawing::Point(779, 46);
			this->buttonAver->Name = L"buttonAver";
			this->buttonAver->Size = System::Drawing::Size(88, 53);
			this->buttonAver->TabIndex = 7;
			this->buttonAver->UseVisualStyleBackColor = false;
			this->buttonAver->Click += gcnew System::EventHandler(this, &MyForm::buttonAver_Click);
			// 
			// buttonRemove
			// 
			this->buttonRemove->BackColor = System::Drawing::Color::White;
			this->buttonRemove->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRemove.BackgroundImage")));
			this->buttonRemove->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonRemove->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonRemove->FlatAppearance->BorderSize = 3;
			this->buttonRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemove->Location = System::Drawing::Point(873, 46);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(88, 53);
			this->buttonRemove->TabIndex = 8;
			this->buttonRemove->UseVisualStyleBackColor = false;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::Lavender;
			this->dataGridView3->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LavenderBlush;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridView3->ColumnHeadersHeight = 45;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column7 });
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle16->NullValue = nullptr;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView3->EnableHeadersVisualStyles = false;
			this->dataGridView3->GridColor = System::Drawing::Color::SlateGray;
			this->dataGridView3->Location = System::Drawing::Point(968, 123);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView3->Size = System::Drawing::Size(92, 426);
			this->dataGridView3->TabIndex = 9;
			this->dataGridView3->Visible = false;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Average mark";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// buttonRemoveall
			// 
			this->buttonRemoveall->BackColor = System::Drawing::Color::White;
			this->buttonRemoveall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRemoveall.BackgroundImage")));
			this->buttonRemoveall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonRemoveall->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonRemoveall->FlatAppearance->BorderSize = 3;
			this->buttonRemoveall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRemoveall->Location = System::Drawing::Point(967, 46);
			this->buttonRemoveall->Name = L"buttonRemoveall";
			this->buttonRemoveall->Size = System::Drawing::Size(88, 53);
			this->buttonRemoveall->TabIndex = 11;
			this->buttonRemoveall->UseVisualStyleBackColor = false;
			this->buttonRemoveall->Click += gcnew System::EventHandler(this, &MyForm::buttonRemoveall_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"çàâàíòàæåííÿ.png");
			// 
			// buttonNew
			// 
			this->buttonNew->BackColor = System::Drawing::Color::White;
			this->buttonNew->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonNew.BackgroundImage")));
			this->buttonNew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonNew->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonNew->FlatAppearance->BorderSize = 3;
			this->buttonNew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNew->Location = System::Drawing::Point(591, 46);
			this->buttonNew->Name = L"buttonNew";
			this->buttonNew->Size = System::Drawing::Size(88, 53);
			this->buttonNew->TabIndex = 12;
			this->buttonNew->UseVisualStyleBackColor = false;
			this->buttonNew->Click += gcnew System::EventHandler(this, &MyForm::buttonNew_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1177, 652);
			this->Controls->Add(this->buttonNew);
			this->Controls->Add(this->buttonRemoveall);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->buttonAver);
			this->Controls->Add(this->buttonSort);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L" Students\' results";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		struct students* pFirst = nullptr;
		struct students* p;
		int countClick = 0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ToolTip* toolTip1 = gcnew ToolTip();
		//t.SetToolTip(this->buttonAdd, "Âûõîä");
		dataGridView1->Columns[2]->DefaultCellStyle->Format = "dd/MM/yyyy";
		dataGridView1->Columns->Add("1", "Win");
		dataGridView1->Columns->Remove("1");
		dataGridView1->Update();
		dataGridView1->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[2]->Value="17.11.2002";//ïîäñêàçêà
		dataGridView2->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Gray;
		dataGridView2->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
		dataGridView1->Rows[0]->Cells[2]->Value = "17.11.2002";//ïîäñêàçêà
		dataGridView1->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Gray;
		dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
		// = System::Drawing::Color::Red;
	
		
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = openFileDialog1->FileName;
			std::ifstream outf1((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename)).ToPointer());
			if (!outf1) {
				auto result = MessageBox::Show("Can't open this file. Try to choose another file", "File isn't opened",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
			else {
				std::string text;
				int i = 0, j = 0, n = 0;
				outf1 >> n;
				dataGridView1->RowCount = n;
				dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
				dataGridView1->Rows[0]->Cells[2]->Value = nullptr;
				dataGridView1->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Black;
				dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Black;
				while (outf1 >> text)
				{

					String^ str2 = gcnew String(text.c_str());
					dataGridView1->Rows[i]->Cells[j]->Value = str2;
					j++;
					if (j == 6) { j = 0; i++; }
				}
				//dataGridView1->Rows[0]->Cells[0]->Value = k;
			}
		}
		else {
			auto result = MessageBox::Show("Can't open this file. Try to choose another file", "File isn't opened",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	
		//string filename = openFileDialog1->FileName;
		// ÷èòàåì ôàéë â ñòðîêó
		//String^ fileText = System::IO::File::ReadAllText(filename);

		

	}
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView3->Visible = false;
		int n = dataGridView1->RowCount, k = 0, fg = 0;
		for (int i = 0; i < 6; i++)
		{
			if (dataGridView2->Rows[0]->Cells[i]->Value == nullptr) k = 1;
		}
		if (k == 1) {auto result = MessageBox::Show("The field is empty. You can't add this student", "Fill all fields",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
	else 
	{
		for (int i = 0; i < n; i++)
	{
		k = 0;
		for (int j = 0; j < 6; j++)
		{
			if (Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value) == Convert::ToString(dataGridView2->Rows[0]->Cells[j]->Value)) { k++;}
		}
		if (k == 6) {fg = 1; break;}
	}
	if (fg==1) MessageBox::Show("This student is already in list");
	else
	{
		if (dataGridView1->RowCount == 1 && dataGridView1->Rows[0]->Cells[5]->Value==nullptr) 
		{ 
			dataGridView1->RowCount = 0; 
		}
		n = dataGridView1->RowCount;
		dataGridView1->RowCount++;
		for (int i = 0; i < 6; i++)
		{
			dataGridView1->Rows[n]->Cells[i]->Value = dataGridView2->Rows[0]->Cells[i]->Value;
			dataGridView2->Rows[0]->Cells[i]->Value = nullptr;
		}
		dataGridView2->Rows[0]->Cells[2]->Value = "17.11.2002";//ïîäñêàçêà
		dataGridView2->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Gray;
		dataGridView2->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
	}
	}
	
	}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ filename = saveFileDialog1->FileName;
		std::ofstream outf2((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename)).ToPointer());
		std::string text;
		int i = 0, j = 0, n = 0;
		n=dataGridView1->RowCount;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				outf2 << (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value))).ToPointer();
				outf2 << " ";
			}
			outf2 << std::endl;
		}				
	}
}
	   


private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 2) {
		dataGridView2->Rows[0]->Cells[2]->Style->SelectionForeColor= System::Drawing::Color::Lavender;
		dataGridView2->Rows[e->RowIndex]->Cells[2]->Value = nullptr;
		dataGridView2->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Black;
		dataGridView2->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Black;

	}
}

private: System::Void dataGridView1_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 2 && e->RowIndex == 0 && countClick == 0) {
		countClick++;
		dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
		dataGridView1->Rows[e->RowIndex]->Cells[2]->Value = nullptr;
		dataGridView1->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Black;
		dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Black;

	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == 2 && e->RowIndex == 0 && countClick == 0) {
		countClick++;
		dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Lavender;
		dataGridView1->Rows[e->RowIndex]->Cells[2]->Value = nullptr;
		dataGridView1->Rows[0]->Cells[2]->Style->ForeColor = System::Drawing::Color::Black;
		dataGridView1->Rows[0]->Cells[2]->Style->SelectionForeColor = System::Drawing::Color::Black;

	}
}
private: System::Void dataGridView2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


}
private: System::Void dataGridView2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
}
private: System::Void dataGridView2_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dataGridView2_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void buttonSort_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Visible = false;
	while (pFirst)
	{
		struct students* p = pFirst;
		pFirst=pFirst->next;
		free(p);
	}
		struct students example;
		struct students* temp = (struct students*)malloc(sizeof(struct students));
		struct students* last_p = (struct students*)malloc(sizeof(struct students));
		for (int i = 0; i <dataGridView1->RowCount; i++) {
			strcpy(temp->ñSurname,(char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value))).ToPointer());
			strcpy(temp->cName, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value))).ToPointer());
			strcpy(temp->cDate, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value))).ToPointer());
			temp->nMarks[0] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
			temp->nMarks[1] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value);
			temp->nMarks[2] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value);
		    if (i == 0)pFirst = temp;
			struct students* next_p = (struct students*)malloc(sizeof(struct students));
			temp->next = next_p;
			last_p = temp;
			temp = next_p;
		}
		last_p->next = NULL;
		pFirst=SortStudents(pFirst);
		temp = pFirst;
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			std::string s(temp->ñSurname);
			String^ str1 = gcnew String(s.c_str());
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(str1);
			std::string s1(temp->cName);
			String^ str2 = gcnew String(s1.c_str());
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(str2);
			std::string s2(temp->cDate);
			String^ str3 = gcnew String(s2.c_str());
			dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(str3);
			dataGridView1->Rows[i]->Cells[3]->Value = Convert::ToString(temp->nMarks[0]);
			dataGridView1->Rows[i]->Cells[4]->Value = Convert::ToString(temp->nMarks[1]);
			dataGridView1->Rows[i]->Cells[5]->Value = Convert::ToString(temp->nMarks[2]);
			temp = temp->next;
		}

}


private: System::Void buttonAver_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Visible = true;
	while (pFirst)
	{
		struct students* p = pFirst;
		pFirst = pFirst->next;
		free(p);
	}
	struct students example;
	struct students* temp = (struct students*)malloc(sizeof(struct students));
	struct students* last_p = (struct students*)malloc(sizeof(struct students));
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		strcpy(temp->ñSurname, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value))).ToPointer());
		strcpy(temp->cName, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value))).ToPointer());
		strcpy(temp->cDate, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value))).ToPointer());
		temp->nMarks[0] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
		temp->nMarks[1] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value);
		temp->nMarks[2] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value);
		if (i == 0)pFirst = temp;
		struct students* next_p = (struct students*)malloc(sizeof(struct students));
		temp->next = next_p;
		last_p = temp;
		temp = next_p;
	}
	last_p->next = NULL;
	double aver = 0;
	temp = pFirst;
	dataGridView3->RowCount = dataGridView1->RowCount;
	for (int i = 0; i < dataGridView1->RowCount; i++) {
		aver = (temp->nMarks[0] + temp->nMarks[1] + temp->nMarks[2]) / 3.0;
		dataGridView3->Rows[i]->Cells[0]->Value = Convert::ToString(round(aver*10)/10);
		temp = temp->next;
	}

}
private: System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Visible = false;
	auto result = MessageBox::Show("Do you want to delete the worst student?", "Delete",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		while (pFirst)
		{
			struct students* p = pFirst;
			pFirst = pFirst->next;
			free(p);
		}
		struct students example;
		struct students* temp = (struct students*)malloc(sizeof(struct students));
		struct students* last_p = (struct students*)malloc(sizeof(struct students));
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			strcpy(temp->ñSurname, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value))).ToPointer());
			strcpy(temp->cName, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value))).ToPointer());
			strcpy(temp->cDate, (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value))).ToPointer());
			temp->nMarks[0] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
			temp->nMarks[1] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value);
			temp->nMarks[2] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value);
			if (i == 0)pFirst = temp;
			struct students* next_p = (struct students*)malloc(sizeof(struct students));
			temp->next = next_p;
			last_p = temp;
			temp = next_p;
		}
		last_p->next = NULL;
		pFirst = RemoveTheWorst(pFirst);
		dataGridView1->RowCount--;
		temp = pFirst;
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			std::string s(temp->ñSurname);
			String^ str1 = gcnew String(s.c_str());
			dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(str1);
			std::string s1(temp->cName);
			String^ str2 = gcnew String(s1.c_str());
			dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(str2);
			std::string s2(temp->cDate);
			String^ str3 = gcnew String(s2.c_str());
			dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(str3);
			dataGridView1->Rows[i]->Cells[3]->Value = Convert::ToString(temp->nMarks[0]);
			dataGridView1->Rows[i]->Cells[4]->Value = Convert::ToString(temp->nMarks[1]);
			dataGridView1->Rows[i]->Cells[5]->Value = Convert::ToString(temp->nMarks[2]);
			temp = temp->next;
		}

	}
	

}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonNew_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Visible = false;
	auto result = MessageBox::Show("Do you want to save changes?", "Save",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = saveFileDialog1->FileName;
			std::ofstream outf2((const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename)).ToPointer());
			std::string text;
			int i = 0, j = 0, n = 0;
			n = dataGridView1->RowCount;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					outf2 << (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value))).ToPointer();
					outf2 << " ";
				}
				outf2 << std::endl;
			}
		}
	}
	dataGridView1->RowCount = 1;
	dataGridView1->Rows[0]->Cells[0]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[1]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[2]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[3]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[4]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[5]->Value = nullptr;

}
private: System::Void buttonRemoveall_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Visible = false;
	auto result = MessageBox::Show("Do you want to delete all?", "Delete",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		dataGridView1->RowCount = 1;
	dataGridView1->Rows[0]->Cells[0]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[1]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[2]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[3]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[4]->Value = nullptr;
	dataGridView1->Rows[0]->Cells[5]->Value = nullptr;
	}
	
	


}
};
}
