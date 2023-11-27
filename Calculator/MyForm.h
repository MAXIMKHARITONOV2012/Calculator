#pragma once

namespace Calculator {

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
			//
			//TODO: добавьте код конструктора
			//
		}

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnMin;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btnPlus;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btnDevide;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btnRav;

	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ kvk;


	private: System::Windows::Forms::Button^ btnUmn;

	private: System::Windows::Forms::Button^ btnFakt;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ toch;
	private: System::Windows::Forms::Button^ pi;



	private: System::Windows::Forms::Button^ step;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ otr;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btnDevide = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btnRav = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->kvk = (gcnew System::Windows::Forms::Button());
			this->btnUmn = (gcnew System::Windows::Forms::Button());
			this->btnFakt = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->toch = (gcnew System::Windows::Forms::Button());
			this->pi = (gcnew System::Windows::Forms::Button());
			this->step = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->otr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(15, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(107, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(202, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btnMin
			// 
			this->btnMin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMin.BackgroundImage")));
			this->btnMin->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnMin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnMin->Location = System::Drawing::Point(298, 149);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(75, 75);
			this->btnMin->TabIndex = 3;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::btnMin_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(14, 243);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(107, 243);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 75);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(202, 243);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 75);
			this->button7->TabIndex = 6;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPlus.BackgroundImage")));
			this->btnPlus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPlus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPlus->Location = System::Drawing::Point(298, 243);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(75, 75);
			this->btnPlus->TabIndex = 7;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(14, 344);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 75);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(107, 344);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 75);
			this->button10->TabIndex = 9;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btnDevide
			// 
			this->btnDevide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDevide.BackgroundImage")));
			this->btnDevide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDevide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDevide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDevide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDevide->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDevide->Location = System::Drawing::Point(298, 344);
			this->btnDevide->Name = L"btnDevide";
			this->btnDevide->Size = System::Drawing::Size(75, 75);
			this->btnDevide->TabIndex = 10;
			this->btnDevide->Text = L"÷";
			this->btnDevide->UseVisualStyleBackColor = true;
			this->btnDevide->Click += gcnew System::EventHandler(this, &MyForm::btnDevide_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(202, 344);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 75);
			this->button12->TabIndex = 11;
			this->button12->Text = L"9";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// btnRav
			// 
			this->btnRav->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRav.BackgroundImage")));
			this->btnRav->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRav->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRav->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRav->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRav->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnRav->Location = System::Drawing::Point(414, 438);
			this->btnRav->Name = L"btnRav";
			this->btnRav->Size = System::Drawing::Size(164, 74);
			this->btnRav->TabIndex = 14;
			this->btnRav->Text = L"=";
			this->btnRav->UseVisualStyleBackColor = true;
			this->btnRav->Click += gcnew System::EventHandler(this, &MyForm::btnRav_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReset.BackgroundImage")));
			this->btnReset->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnReset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnReset->Location = System::Drawing::Point(298, 438);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(103, 74);
			this->btnReset->TabIndex = 15;
			this->btnReset->Text = L"RES";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// kvk
			// 
			this->kvk->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kvk.BackgroundImage")));
			this->kvk->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kvk->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kvk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kvk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kvk->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->kvk->Location = System::Drawing::Point(396, 344);
			this->kvk->Name = L"kvk";
			this->kvk->Size = System::Drawing::Size(75, 75);
			this->kvk->TabIndex = 16;
			this->kvk->Text = L"√";
			this->kvk->UseVisualStyleBackColor = true;
			this->kvk->Click += gcnew System::EventHandler(this, &MyForm::kvk_Click);
			// 
			// btnUmn
			// 
			this->btnUmn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnUmn.BackgroundImage")));
			this->btnUmn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUmn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUmn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUmn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUmn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnUmn->Location = System::Drawing::Point(396, 243);
			this->btnUmn->Name = L"btnUmn";
			this->btnUmn->Size = System::Drawing::Size(75, 75);
			this->btnUmn->TabIndex = 17;
			this->btnUmn->Text = L"X";
			this->btnUmn->UseVisualStyleBackColor = true;
			this->btnUmn->Click += gcnew System::EventHandler(this, &MyForm::btnUmn_Click);
			// 
			// btnFakt
			// 
			this->btnFakt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFakt.BackgroundImage")));
			this->btnFakt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnFakt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnFakt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFakt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFakt->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnFakt->Location = System::Drawing::Point(396, 149);
			this->btnFakt->Name = L"btnFakt";
			this->btnFakt->Size = System::Drawing::Size(75, 75);
			this->btnFakt->TabIndex = 18;
			this->btnFakt->Text = L"!";
			this->btnFakt->UseVisualStyleBackColor = true;
			this->btnFakt->Click += gcnew System::EventHandler(this, &MyForm::btnFakt_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(202, 438);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 75);
			this->button18->TabIndex = 19;
			this->button18->Text = L"DEL";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// toch
			// 
			this->toch->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toch.BackgroundImage")));
			this->toch->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->toch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->toch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toch->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->toch->Location = System::Drawing::Point(494, 344);
			this->toch->Name = L"toch";
			this->toch->Size = System::Drawing::Size(75, 75);
			this->toch->TabIndex = 21;
			this->toch->Text = L".";
			this->toch->UseVisualStyleBackColor = true;
			this->toch->Click += gcnew System::EventHandler(this, &MyForm::toch_Click);
			// 
			// pi
			// 
			this->pi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pi.BackgroundImage")));
			this->pi->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pi->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->pi->Location = System::Drawing::Point(494, 243);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(75, 75);
			this->pi->TabIndex = 22;
			this->pi->Text = L"π";
			this->pi->UseVisualStyleBackColor = true;
			this->pi->Click += gcnew System::EventHandler(this, &MyForm::pi_Click);
			// 
			// step
			// 
			this->step->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"step.BackgroundImage")));
			this->step->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->step->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->step->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->step->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->step->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->step->Location = System::Drawing::Point(494, 149);
			this->step->Name = L"step";
			this->step->Size = System::Drawing::Size(75, 75);
			this->step->TabIndex = 23;
			this->step->Text = L"^";
			this->step->UseVisualStyleBackColor = true;
			this->step->Click += gcnew System::EventHandler(this, &MyForm::step_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(23, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(555, 77);
			this->label1->TabIndex = 24;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button19
			// 
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(14, 439);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 75);
			this->button19->TabIndex = 25;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btnNumber_Click);
			// 
			// otr
			// 
			this->otr->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"otr.BackgroundImage")));
			this->otr->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->otr->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->otr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->otr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otr->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->otr->Location = System::Drawing::Point(107, 439);
			this->otr->Name = L"otr";
			this->otr->Size = System::Drawing::Size(75, 75);
			this->otr->TabIndex = 26;
			this->otr->Text = L"—";
			this->otr->UseVisualStyleBackColor = true;
			this->otr->Click += gcnew System::EventHandler(this, &MyForm::otr_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(590, 598);
			this->Controls->Add(this->otr);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->step);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->toch);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->btnFakt);
			this->Controls->Add(this->btnUmn);
			this->Controls->Add(this->kvk);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnRav);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btnDevide);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(612, 654);
			this->MinimumSize = System::Drawing::Size(612, 654);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}

#pragma endregion
	private: double first = 0;
	private: char user = '+';
	private: System::Void btnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (label1->Text == "0")
		{
			this->label1->Text = button->Text;
		}
		else if(this->label1->Text->Length<16)
		{
			this->label1->Text += button->Text;
		}
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
	}
	private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
		math('-');
	}
	private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		math('+');

	}
	private: System::Void btnDevide_Click(System::Object^ sender, System::EventArgs^ e) {
		math('/');

	}
	private: System::Void btnFakt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->first = System::Convert::ToDouble(this->label1->Text);
		long long fackt = 1;
		if (System::Convert::ToInt64(this->label1->Text) < 20 && System::Convert::ToInt64(this->label1->Text) > 0) {
			for (int bob = 1; bob <= first; bob++)
			{
				fackt *= bob;
			}
			this->label1->Text = System::Convert::ToString(fackt);
		}
		else
		{
			this->label1->Text = "0";
		}
	}
	private: System::Void btnUmn_Click(System::Object^ sender, System::EventArgs^ e) {
		math('*');

	}
	private: System::Void math(char Action) {
		this->first = System::Convert::ToDouble(this->label1->Text);
		this->user = Action;
		this->label1->Text = "0";
	};
	private: System::Void btnRav_Click(System::Object^ sender, System::EventArgs^ e) {
		double second = System::Convert::ToDouble(this->label1->Text);
		double res = 0;
			switch (this->user)
			{
			case '+': res = this->first + second; break;
			case '-': res = this->first - second; break;
			case '*': res = this->first * second; break;
			case '/': res = this->first / second; break;
			case '^': res = System::Math::Pow(first, second); break;



			}
			this->label1->Text = System::Convert::ToString(res);

	}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label1->Text != "") {
		String^ anonimus = this->label1->Text;
		String^ result = anonimus->Remove(anonimus->Length - 1);
		this->label1->Text = result;
	}
	if (this->label1->Text == "")
	{
		this->label1->Text = "0";
	}
}
private: System::Void kvk_Click(System::Object^ sender, System::EventArgs^ e) {
	double res;
	this->first = System::Convert::ToDouble(this->label1->Text);
	res = System::Math::Sqrt(first);
	this->label1->Text = System::Convert::ToString(res);

}
private: System::Void step_Click(System::Object^ sender, System::EventArgs^ e) {
	math('^');
}
private: System::Void toch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ww = this->label1->Text;
	if (ww[ww->Length - 1] != ',') {
		this->label1->Text += ",";
	}
}
private: System::Void pi_Click(System::Object^ sender, System::EventArgs^ e) {
this->label1->Text = "3,141592";

	
	
}
private: System::Void otr_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label1->Text == "0")
	{
		this->label1->Text = "-";
	}
	else 
	{
		if (this->label1->Text != "0" && !this->label1->Text->StartsWith("-"))
			 {

			String^ old = this->label1->Text;
			this->label1->Text = "-" + old;
		}
	}
}
};
}