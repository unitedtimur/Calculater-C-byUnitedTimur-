#pragma once

#include <cmath>
#include <cstdio>
#include <cstdlib>


using namespace std;

/*----------------------------------------*/
bool Plus = false;
bool Minus = false;
bool Sqrt = false;
bool Myltiply = false;
bool Divide = false;
bool Power = false;
bool Comma = false;
/*----------------------------------------*/
bool signsin = false;
bool signcos = false;
bool signtan = false;
bool signctan = false;
bool Plussss = false;
bool PowerY = false;
bool xPOWy = false;
bool Percent = false;
/*----------------------------------------*/
double firstnumer;
double second;
int flag;

namespace HomeTaskCalculater {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^  SignPlus;
	private: System::Windows::Forms::Button^  SignDivide;
	private: System::Windows::Forms::Button^  SignMinus;
	private: System::Windows::Forms::Button^  SignSqrt;
	private: System::Windows::Forms::Button^  SignMultiply;
	private: System::Windows::Forms::Button^  SignEqually;
	private: System::Windows::Forms::Button^  SignComma;
	private: System::Windows::Forms::Button^  SignClear1Symbol;
	private: System::Windows::Forms::Button^  SignDeleteAll;
	private: System::Windows::Forms::Button^  SignSin;
	private: System::Windows::Forms::Button^  SIN;
	private: System::Windows::Forms::Button^  COS;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  TAN;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  создательToolStripMenuItem;

	private: System::Windows::Forms::Button^  xPOWy;
	private: System::Windows::Forms::Button^  Percent;
	private: System::Windows::Forms::Button^  DEFECTED;
	private: System::Windows::Forms::Button^  SignPower;

	public:

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  Null;
	private: System::Windows::Forms::Button^  One;
	private: System::Windows::Forms::Button^  Two;
	private: System::Windows::Forms::Button^  Three;
	private: System::Windows::Forms::Button^  Six;
	private: System::Windows::Forms::Button^  Five;
	private: System::Windows::Forms::Button^  Four;
	private: System::Windows::Forms::Button^  Nine;
	private: System::Windows::Forms::Button^  Eight;
	private: System::Windows::Forms::Button^  Seven;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Null = (gcnew System::Windows::Forms::Button());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Four = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SignPlus = (gcnew System::Windows::Forms::Button());
			this->SignDivide = (gcnew System::Windows::Forms::Button());
			this->SignMinus = (gcnew System::Windows::Forms::Button());
			this->SignSqrt = (gcnew System::Windows::Forms::Button());
			this->SignMultiply = (gcnew System::Windows::Forms::Button());
			this->SignEqually = (gcnew System::Windows::Forms::Button());
			this->SignPower = (gcnew System::Windows::Forms::Button());
			this->SignComma = (gcnew System::Windows::Forms::Button());
			this->SignClear1Symbol = (gcnew System::Windows::Forms::Button());
			this->SignDeleteAll = (gcnew System::Windows::Forms::Button());
			this->SIN = (gcnew System::Windows::Forms::Button());
			this->COS = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TAN = (gcnew System::Windows::Forms::Button());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создательToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->xPOWy = (gcnew System::Windows::Forms::Button());
			this->Percent = (gcnew System::Windows::Forms::Button());
			this->DEFECTED = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Null
			// 
			this->Null->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Null->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Null->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Null->Location = System::Drawing::Point(158, 558);
			this->Null->Name = L"Null";
			this->Null->Size = System::Drawing::Size(150, 70);
			this->Null->TabIndex = 22;
			this->Null->Text = L"0";
			this->Null->UseVisualStyleBackColor = false;
			this->Null->Click += gcnew System::EventHandler(this, &MyForm::Null_Click);
			// 
			// One
			// 
			this->One->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->One->Cursor = System::Windows::Forms::Cursors::Hand;
			this->One->ForeColor = System::Drawing::SystemColors::ControlText;
			this->One->Location = System::Drawing::Point(2, 482);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(150, 70);
			this->One->TabIndex = 25;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = false;
			this->One->Click += gcnew System::EventHandler(this, &MyForm::One_Click);
			// 
			// Two
			// 
			this->Two->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Two->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Two->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Two->Location = System::Drawing::Point(158, 482);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(150, 70);
			this->Two->TabIndex = 26;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = false;
			this->Two->Click += gcnew System::EventHandler(this, &MyForm::Two_Click);
			// 
			// Three
			// 
			this->Three->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Three->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Three->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Three->Location = System::Drawing::Point(314, 482);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(150, 70);
			this->Three->TabIndex = 27;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = false;
			this->Three->Click += gcnew System::EventHandler(this, &MyForm::Three_Click);
			// 
			// Six
			// 
			this->Six->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Six->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Six->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Six->Location = System::Drawing::Point(314, 406);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(150, 70);
			this->Six->TabIndex = 32;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = false;
			this->Six->Click += gcnew System::EventHandler(this, &MyForm::Six_Click);
			// 
			// Five
			// 
			this->Five->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Five->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Five->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Five->Location = System::Drawing::Point(158, 406);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(150, 70);
			this->Five->TabIndex = 34;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = false;
			this->Five->Click += gcnew System::EventHandler(this, &MyForm::Five_Click);
			// 
			// Four
			// 
			this->Four->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Four->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Four->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Four->Location = System::Drawing::Point(2, 406);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(150, 70);
			this->Four->TabIndex = 35;
			this->Four->Text = L"4";
			this->Four->UseVisualStyleBackColor = false;
			this->Four->Click += gcnew System::EventHandler(this, &MyForm::Four_Click);
			// 
			// Nine
			// 
			this->Nine->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Nine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Nine->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Nine->Location = System::Drawing::Point(314, 330);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(150, 70);
			this->Nine->TabIndex = 36;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = false;
			this->Nine->Click += gcnew System::EventHandler(this, &MyForm::Nine_Click);
			// 
			// Eight
			// 
			this->Eight->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Eight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Eight->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Eight->Location = System::Drawing::Point(158, 330);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(150, 70);
			this->Eight->TabIndex = 37;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = false;
			this->Eight->Click += gcnew System::EventHandler(this, &MyForm::Eight_Click);
			// 
			// Seven
			// 
			this->Seven->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Seven->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Seven->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Seven->Location = System::Drawing::Point(2, 330);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(150, 70);
			this->Seven->TabIndex = 38;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = false;
			this->Seven->Click += gcnew System::EventHandler(this, &MyForm::Seven_Click);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 38);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(618, 58);
			this->textBox1->TabIndex = 39;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// SignPlus
			// 
			this->SignPlus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignPlus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignPlus->Location = System::Drawing::Point(470, 558);
			this->SignPlus->Name = L"SignPlus";
			this->SignPlus->Size = System::Drawing::Size(150, 70);
			this->SignPlus->TabIndex = 40;
			this->SignPlus->Text = L"+";
			this->SignPlus->UseVisualStyleBackColor = false;
			this->SignPlus->Click += gcnew System::EventHandler(this, &MyForm::SignPlus_Click);
			// 
			// SignDivide
			// 
			this->SignDivide->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignDivide->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignDivide->Location = System::Drawing::Point(470, 330);
			this->SignDivide->Name = L"SignDivide";
			this->SignDivide->Size = System::Drawing::Size(150, 70);
			this->SignDivide->TabIndex = 41;
			this->SignDivide->Text = L"/";
			this->SignDivide->UseVisualStyleBackColor = false;
			this->SignDivide->Click += gcnew System::EventHandler(this, &MyForm::SignDivide_Click);
			// 
			// SignMinus
			// 
			this->SignMinus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignMinus->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignMinus->Location = System::Drawing::Point(470, 482);
			this->SignMinus->Name = L"SignMinus";
			this->SignMinus->Size = System::Drawing::Size(150, 70);
			this->SignMinus->TabIndex = 42;
			this->SignMinus->Text = L"-";
			this->SignMinus->UseVisualStyleBackColor = false;
			this->SignMinus->Click += gcnew System::EventHandler(this, &MyForm::SignMinus_Click);
			// 
			// SignSqrt
			// 
			this->SignSqrt->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignSqrt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignSqrt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignSqrt->Location = System::Drawing::Point(470, 254);
			this->SignSqrt->Name = L"SignSqrt";
			this->SignSqrt->Size = System::Drawing::Size(150, 70);
			this->SignSqrt->TabIndex = 44;
			this->SignSqrt->Text = L"Sqrt";
			this->SignSqrt->UseVisualStyleBackColor = false;
			this->SignSqrt->Click += gcnew System::EventHandler(this, &MyForm::SignSqrt_Click);
			// 
			// SignMultiply
			// 
			this->SignMultiply->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignMultiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignMultiply->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignMultiply->Location = System::Drawing::Point(470, 406);
			this->SignMultiply->Name = L"SignMultiply";
			this->SignMultiply->Size = System::Drawing::Size(150, 70);
			this->SignMultiply->TabIndex = 45;
			this->SignMultiply->Text = L"*";
			this->SignMultiply->UseVisualStyleBackColor = false;
			this->SignMultiply->Click += gcnew System::EventHandler(this, &MyForm::SignMultiply_Click);
			// 
			// SignEqually
			// 
			this->SignEqually->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignEqually->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignEqually->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignEqually->Location = System::Drawing::Point(314, 558);
			this->SignEqually->Name = L"SignEqually";
			this->SignEqually->Size = System::Drawing::Size(150, 70);
			this->SignEqually->TabIndex = 46;
			this->SignEqually->Text = L"=";
			this->SignEqually->UseVisualStyleBackColor = false;
			this->SignEqually->Click += gcnew System::EventHandler(this, &MyForm::SignEqually_Click);
			// 
			// SignPower
			// 
			this->SignPower->AutoSize = true;
			this->SignPower->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignPower->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SignPower->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignPower->Location = System::Drawing::Point(314, 254);
			this->SignPower->Name = L"SignPower";
			this->SignPower->Size = System::Drawing::Size(150, 70);
			this->SignPower->TabIndex = 47;
			this->SignPower->Text = L"x^2";
			this->SignPower->UseVisualStyleBackColor = false;
			this->SignPower->Click += gcnew System::EventHandler(this, &MyForm::SignPower_Click);
			// 
			// SignComma
			// 
			this->SignComma->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignComma->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignComma->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignComma->Location = System::Drawing::Point(2, 558);
			this->SignComma->Name = L"SignComma";
			this->SignComma->Size = System::Drawing::Size(150, 70);
			this->SignComma->TabIndex = 48;
			this->SignComma->Text = L".";
			this->SignComma->UseVisualStyleBackColor = false;
			this->SignComma->Click += gcnew System::EventHandler(this, &MyForm::SignComma_Click);
			// 
			// SignClear1Symbol
			// 
			this->SignClear1Symbol->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignClear1Symbol->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignClear1Symbol->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignClear1Symbol->Location = System::Drawing::Point(470, 178);
			this->SignClear1Symbol->Name = L"SignClear1Symbol";
			this->SignClear1Symbol->Size = System::Drawing::Size(150, 70);
			this->SignClear1Symbol->TabIndex = 49;
			this->SignClear1Symbol->Text = L"<<<---";
			this->SignClear1Symbol->UseVisualStyleBackColor = false;
			this->SignClear1Symbol->Click += gcnew System::EventHandler(this, &MyForm::SignClear1Symbol_Click);
			// 
			// SignDeleteAll
			// 
			this->SignDeleteAll->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SignDeleteAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignDeleteAll->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SignDeleteAll->Location = System::Drawing::Point(314, 178);
			this->SignDeleteAll->Name = L"SignDeleteAll";
			this->SignDeleteAll->Size = System::Drawing::Size(150, 70);
			this->SignDeleteAll->TabIndex = 50;
			this->SignDeleteAll->Text = L"DeleteAll";
			this->SignDeleteAll->UseVisualStyleBackColor = false;
			this->SignDeleteAll->Click += gcnew System::EventHandler(this, &MyForm::SignDeleteAll_Click);
			// 
			// SIN
			// 
			this->SIN->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->SIN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SIN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->SIN->Location = System::Drawing::Point(2, 254);
			this->SIN->Name = L"SIN";
			this->SIN->Size = System::Drawing::Size(150, 70);
			this->SIN->TabIndex = 52;
			this->SIN->Text = L"sin";
			this->SIN->UseVisualStyleBackColor = false;
			this->SIN->Click += gcnew System::EventHandler(this, &MyForm::SIN_Click);
			// 
			// COS
			// 
			this->COS->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->COS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->COS->ForeColor = System::Drawing::SystemColors::ControlText;
			this->COS->Location = System::Drawing::Point(158, 254);
			this->COS->Name = L"COS";
			this->COS->Size = System::Drawing::Size(150, 70);
			this->COS->TabIndex = 53;
			this->COS->Text = L"cos";
			this->COS->UseVisualStyleBackColor = false;
			this->COS->Click += gcnew System::EventHandler(this, &MyForm::COS_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(158, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 70);
			this->button1->TabIndex = 54;
			this->button1->Text = L"PlusOrMinus";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TAN
			// 
			this->TAN->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->TAN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TAN->ForeColor = System::Drawing::SystemColors::ControlText;
			this->TAN->Location = System::Drawing::Point(2, 178);
			this->TAN->Name = L"TAN";
			this->TAN->Size = System::Drawing::Size(150, 70);
			this->TAN->TabIndex = 55;
			this->TAN->Text = L"tan";
			this->TAN->UseVisualStyleBackColor = false;
			this->TAN->Click += gcnew System::EventHandler(this, &MyForm::TAN_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->создательToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			// 
			// создательToolStripMenuItem
			// 
			this->создательToolStripMenuItem->Name = L"создательToolStripMenuItem";
			this->создательToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->создательToolStripMenuItem->Text = L"Создатель";
			this->создательToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::создательToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->открытьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(621, 28);
			this->menuStrip1->TabIndex = 57;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// xPOWy
			// 
			this->xPOWy->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->xPOWy->Cursor = System::Windows::Forms::Cursors::Hand;
			this->xPOWy->ForeColor = System::Drawing::SystemColors::ControlText;
			this->xPOWy->Location = System::Drawing::Point(2, 102);
			this->xPOWy->Name = L"xPOWy";
			this->xPOWy->Size = System::Drawing::Size(150, 70);
			this->xPOWy->TabIndex = 58;
			this->xPOWy->Text = L"X^y";
			this->xPOWy->UseVisualStyleBackColor = false;
			this->xPOWy->Click += gcnew System::EventHandler(this, &MyForm::xPOWy_Click);
			// 
			// Percent
			// 
			this->Percent->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Percent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Percent->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Percent->Location = System::Drawing::Point(158, 102);
			this->Percent->Name = L"Percent";
			this->Percent->Size = System::Drawing::Size(150, 70);
			this->Percent->TabIndex = 59;
			this->Percent->Text = L"%";
			this->Percent->UseVisualStyleBackColor = false;
			this->Percent->Click += gcnew System::EventHandler(this, &MyForm::Percent_Click);
			// 
			// DEFECTED
			// 
			this->DEFECTED->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->DEFECTED->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DEFECTED->ForeColor = System::Drawing::SystemColors::ControlText;
			this->DEFECTED->Location = System::Drawing::Point(314, 102);
			this->DEFECTED->Name = L"DEFECTED";
			this->DEFECTED->Size = System::Drawing::Size(306, 70);
			this->DEFECTED->TabIndex = 60;
			this->DEFECTED->Text = L"Hello, my friend.";
			this->DEFECTED->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 631);
			this->Controls->Add(this->DEFECTED);
			this->Controls->Add(this->Percent);
			this->Controls->Add(this->xPOWy);
			this->Controls->Add(this->TAN);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->COS);
			this->Controls->Add(this->SIN);
			this->Controls->Add(this->SignDeleteAll);
			this->Controls->Add(this->SignClear1Symbol);
			this->Controls->Add(this->SignComma);
			this->Controls->Add(this->SignPower);
			this->Controls->Add(this->SignEqually);
			this->Controls->Add(this->SignMultiply);
			this->Controls->Add(this->SignSqrt);
			this->Controls->Add(this->SignMinus);
			this->Controls->Add(this->SignDivide);
			this->Controls->Add(this->SignPlus);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->One);
			this->Controls->Add(this->Null);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculater(UnitedInc)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#define PI 3.14159265    
#pragma endregion 

	private: System::Void Null_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "0";
	}
	private: System::Void One_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "1";
	}
	private: System::Void Two_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "2";
	}
	private: System::Void Three_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "3";
	}
	private: System::Void Four_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "4";
	}
	private: System::Void Five_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "5";
	}
	private: System::Void Six_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "6";
	}
	private: System::Void Seven_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "7";
	}
	private: System::Void Eight_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "8";
	}
	private: System::Void Nine_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += "9";
	}
	private: System::Void SignComa_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text += ",";
	}
	private: System::Void SignPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		Plus = true;
		textBox1->Tag = textBox1->Text;//Временное хранилище
		textBox1->Text = "";//Делаем пустое значение
	}
	private: System::Void SignMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		Minus = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SignMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
		Myltiply = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SignDivide_Click(System::Object^  sender, System::EventArgs^  e) {
		Divide = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SignSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
		Sqrt = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SignPower_Click(System::Object^  sender, System::EventArgs^  e) {
		Power = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SignComma_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text->IndexOf(',') == -1) {//Проверка для ввода запятой
			textBox1->Text += ",";
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Plussss = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SIN_Click(System::Object^  sender, System::EventArgs^  e) {
		signsin = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void COS_Click_1(System::Object^  sender, System::EventArgs^  e) {
		signcos = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void TAN_Click(System::Object^  sender, System::EventArgs^  e) {
		signtan = true;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void SIGNCTAN_Click(System::Object^  sender, System::EventArgs^  e) {
		bool signctan = false;
		textBox1->Tag = textBox1->Text;
		textBox1->Text = "";
	}
	private: System::Void xPOWy_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Tag = textBox1->Text;
		second = Convert::ToDouble(textBox1->Tag);
		textBox1->Text = "";
		flag = 1;
	}
	private: System::Void Percent_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Tag = textBox1->Text;
		second = Convert::ToDouble(textBox1->Tag);
		textBox1->Text = "";
		flag = 2;
	}
	private: System::Void SignEqually_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Plus) {
			firstnumer = Convert::ToDouble(textBox1->Text) + Convert::ToDouble(textBox1->Tag);
			textBox1->Text = Convert::ToString(firstnumer);
			Plus = false;
		}
		if (Minus) {
			firstnumer = Convert::ToDouble(textBox1->Tag) - Convert::ToDouble(textBox1->Text);
			textBox1->Text = Convert::ToString(firstnumer);
			Minus = false;
		}
		if (Myltiply) {
			firstnumer = Convert::ToDouble(textBox1->Tag) * Convert::ToDouble(textBox1->Text);
			textBox1->Text = Convert::ToString(firstnumer);
			Myltiply = false;
		}
		if (Divide) {
			firstnumer = Convert::ToDouble(textBox1->Tag) / Convert::ToDouble(textBox1->Text);
			textBox1->Text = Convert::ToString(firstnumer);
			Divide = false;
		}
		if (Power) {
			firstnumer = Convert::ToDouble(textBox1->Tag)*Convert::ToDouble(textBox1->Tag);
			textBox1->Text = Convert::ToString(firstnumer);
			Power = false;
		}
		if (Sqrt) {
			firstnumer = Math::Sqrt(Convert::ToDouble(textBox1->Tag));
			textBox1->Text = Convert::ToString(firstnumer);
			Sqrt = false;
		}
		if (Comma) {
			firstnumer = Convert::ToDouble(textBox1->Text) + ',';
			textBox1->Text = Convert::ToString(firstnumer);
			Comma = false;
		}
		if (signsin) {
			firstnumer = Math::Sin(Convert::ToDouble(textBox1->Tag) / 180 * PI);
			textBox1->Text = Convert::ToString(firstnumer);
			signsin = false;
		}
		if (signcos) {
			firstnumer = Math::Cos(Convert::ToDouble(textBox1->Tag) / 180 * PI);
			textBox1->Text = Convert::ToString(firstnumer);
			signcos = false;
		}
		if (signtan) {
			firstnumer = Math::Tan(Convert::ToDouble(textBox1->Tag) / 180 * PI);
			textBox1->Text = Convert::ToString(firstnumer);
			signtan = false;
		}
		if (Plussss) {
			firstnumer = Convert::ToDouble(textBox1->Tag) * -1;
			textBox1->Text = Convert::ToString(firstnumer);
			Plussss = false;
		}

		switch (flag) {
		case 1: {
			firstnumer = Convert::ToDouble(textBox1->Text);
			firstnumer = Math::Pow(second, firstnumer);
			textBox1->Text = Convert::ToString(firstnumer);
			flag = 0;
			break;
		}
		case 2: {
			firstnumer = Convert::ToDouble(textBox1->Text);
			firstnumer = (second * firstnumer) / 100;
			textBox1->Text = Convert::ToString(firstnumer);
			flag = 0;
			break;
		}
		}
	}
	private: System::Void SignClear1Symbol_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->TextLength)
			textBox1->Text = textBox1->Text->Remove(textBox1->TextLength - 1);
	}
	private: System::Void SignDeleteAll_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "";
	}
	private: System::Void Story_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Close();
	}
	private: System::Void создательToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(" UnitedTimurCompany \n https://vk.com/unitedtimur");
	}

	private: System::Void историяОперацийToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
