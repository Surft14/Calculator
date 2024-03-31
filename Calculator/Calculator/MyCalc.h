#pragma once
#include <string>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyCalc
	/// </summary>
	public ref class MyCalc : public System::Windows::Forms::Form
	{
	public:
		MyCalc(void)
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
		~MyCalc()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ answer;
	private: System::Windows::Forms::Button^ b_ac;
	private: System::Windows::Forms::Button^ b_dm;



	private: System::Windows::Forms::Button^ b_percent;

	private: System::Windows::Forms::Button^ b_divide;
	private: System::Windows::Forms::Button^ b_multiply;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button7;





	private: System::Windows::Forms::Button^ b_subtract;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ b_stack;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ b_answer;
	private: System::Windows::Forms::Button^ b_point;
	private: System::Windows::Forms::Button^ button0;




	private: float first_number;
	private: char user_action = ' ';
	private: bool is_equal = false;
		   MyCalc^ mycalc;
		   MyCalc^ calculait;


	private: System::Windows::Forms::Label^ txt_history;
	private: System::Windows::Forms::Button^ b_tan;

	private: System::Windows::Forms::Button^ b_cos;

	private: System::Windows::Forms::Button^ b_sin;


	private: System::Windows::Forms::Button^ b_sqert;
	private: System::Windows::Forms::Button^ b_2;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyCalc::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->answer = (gcnew System::Windows::Forms::Label());
			this->b_ac = (gcnew System::Windows::Forms::Button());
			this->b_dm = (gcnew System::Windows::Forms::Button());
			this->b_percent = (gcnew System::Windows::Forms::Button());
			this->b_divide = (gcnew System::Windows::Forms::Button());
			this->b_multiply = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->b_subtract = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->b_stack = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->b_answer = (gcnew System::Windows::Forms::Button());
			this->b_point = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->txt_history = (gcnew System::Windows::Forms::Label());
			this->b_tan = (gcnew System::Windows::Forms::Button());
			this->b_cos = (gcnew System::Windows::Forms::Button());
			this->b_sin = (gcnew System::Windows::Forms::Button());
			this->b_sqert = (gcnew System::Windows::Forms::Button());
			this->b_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::Black;
			this->button_exit->Location = System::Drawing::Point(6, 9);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(30, 27);
			this->button_exit->TabIndex = 1;
			this->button_exit->Text = L" X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyCalc::button_exit_Click);
			// 
			// answer
			// 
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer->Location = System::Drawing::Point(6, 54);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(389, 65);
			this->answer->TabIndex = 2;
			this->answer->Text = L"0";
			this->answer->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// b_ac
			// 
			this->b_ac->BackColor = System::Drawing::SystemColors::Control;
			this->b_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_ac->Location = System::Drawing::Point(6, 122);
			this->b_ac->Name = L"b_ac";
			this->b_ac->Size = System::Drawing::Size(73, 55);
			this->b_ac->TabIndex = 3;
			this->b_ac->Text = L"AC";
			this->b_ac->UseVisualStyleBackColor = false;
			this->b_ac->Click += gcnew System::EventHandler(this, &MyCalc::b_ac_Click);
			// 
			// b_dm
			// 
			this->b_dm->BackColor = System::Drawing::SystemColors::Control;
			this->b_dm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_dm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_dm->Location = System::Drawing::Point(85, 122);
			this->b_dm->Name = L"b_dm";
			this->b_dm->Size = System::Drawing::Size(73, 55);
			this->b_dm->TabIndex = 4;
			this->b_dm->Text = L"+/-";
			this->b_dm->UseVisualStyleBackColor = false;
			this->b_dm->Click += gcnew System::EventHandler(this, &MyCalc::b_dm_Click);
			// 
			// b_percent
			// 
			this->b_percent->BackColor = System::Drawing::SystemColors::Control;
			this->b_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_percent->Location = System::Drawing::Point(164, 122);
			this->b_percent->Name = L"b_percent";
			this->b_percent->Size = System::Drawing::Size(73, 55);
			this->b_percent->TabIndex = 5;
			this->b_percent->Text = L"%";
			this->b_percent->UseVisualStyleBackColor = false;
			this->b_percent->Click += gcnew System::EventHandler(this, &MyCalc::b_percent_Click);
			// 
			// b_divide
			// 
			this->b_divide->BackColor = System::Drawing::Color::Orange;
			this->b_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_divide->Location = System::Drawing::Point(243, 122);
			this->b_divide->Name = L"b_divide";
			this->b_divide->Size = System::Drawing::Size(73, 55);
			this->b_divide->TabIndex = 6;
			this->b_divide->Text = L"/";
			this->b_divide->UseVisualStyleBackColor = false;
			this->b_divide->Click += gcnew System::EventHandler(this, &MyCalc::b_divide_Click);
			// 
			// b_multiply
			// 
			this->b_multiply->BackColor = System::Drawing::Color::Orange;
			this->b_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_multiply->Location = System::Drawing::Point(243, 183);
			this->b_multiply->Name = L"b_multiply";
			this->b_multiply->Size = System::Drawing::Size(73, 55);
			this->b_multiply->TabIndex = 10;
			this->b_multiply->Text = L"*";
			this->b_multiply->UseVisualStyleBackColor = false;
			this->b_multiply->Click += gcnew System::EventHandler(this, &MyCalc::b_multiply_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(165, 183);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(73, 55);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(85, 183);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(73, 55);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(6, 183);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(73, 55);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// b_subtract
			// 
			this->b_subtract->BackColor = System::Drawing::Color::Orange;
			this->b_subtract->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_subtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_subtract->Location = System::Drawing::Point(243, 244);
			this->b_subtract->Name = L"b_subtract";
			this->b_subtract->Size = System::Drawing::Size(73, 55);
			this->b_subtract->TabIndex = 14;
			this->b_subtract->Text = L"-";
			this->b_subtract->UseVisualStyleBackColor = false;
			this->b_subtract->Click += gcnew System::EventHandler(this, &MyCalc::b_subtract_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(165, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 55);
			this->button6->TabIndex = 13;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(85, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 55);
			this->button5->TabIndex = 12;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(6, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 55);
			this->button4->TabIndex = 11;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// b_stack
			// 
			this->b_stack->BackColor = System::Drawing::Color::Orange;
			this->b_stack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_stack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_stack->Location = System::Drawing::Point(243, 305);
			this->b_stack->Name = L"b_stack";
			this->b_stack->Size = System::Drawing::Size(73, 55);
			this->b_stack->TabIndex = 18;
			this->b_stack->Text = L"+";
			this->b_stack->UseVisualStyleBackColor = false;
			this->b_stack->Click += gcnew System::EventHandler(this, &MyCalc::b_stack_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(164, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 55);
			this->button3->TabIndex = 17;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(85, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 55);
			this->button2->TabIndex = 16;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 55);
			this->button1->TabIndex = 15;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// b_answer
			// 
			this->b_answer->BackColor = System::Drawing::Color::Orange;
			this->b_answer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_answer->Location = System::Drawing::Point(164, 366);
			this->b_answer->Name = L"b_answer";
			this->b_answer->Size = System::Drawing::Size(152, 55);
			this->b_answer->TabIndex = 22;
			this->b_answer->Text = L"=";
			this->b_answer->UseVisualStyleBackColor = false;
			this->b_answer->Click += gcnew System::EventHandler(this, &MyCalc::b_answer_Click);
			// 
			// b_point
			// 
			this->b_point->BackColor = System::Drawing::Color::Gray;
			this->b_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_point->Location = System::Drawing::Point(6, 366);
			this->b_point->Name = L"b_point";
			this->b_point->Size = System::Drawing::Size(73, 55);
			this->b_point->TabIndex = 21;
			this->b_point->Text = L".";
			this->b_point->UseVisualStyleBackColor = false;
			this->b_point->Click += gcnew System::EventHandler(this, &MyCalc::b_point_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::Gray;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(85, 366);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(73, 55);
			this->button0->TabIndex = 19;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyCalc::button_Click);
			// 
			// txt_history
			// 
			this->txt_history->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt_history->Location = System::Drawing::Point(42, 9);
			this->txt_history->Name = L"txt_history";
			this->txt_history->Size = System::Drawing::Size(353, 33);
			this->txt_history->TabIndex = 25;
			this->txt_history->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// b_tan
			// 
			this->b_tan->BackColor = System::Drawing::Color::Orange;
			this->b_tan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_tan->Location = System::Drawing::Point(322, 305);
			this->b_tan->Name = L"b_tan";
			this->b_tan->Size = System::Drawing::Size(73, 55);
			this->b_tan->TabIndex = 29;
			this->b_tan->Text = L"tang";
			this->b_tan->UseVisualStyleBackColor = false;
			this->b_tan->Click += gcnew System::EventHandler(this, &MyCalc::b_tan_Click);
			// 
			// b_cos
			// 
			this->b_cos->BackColor = System::Drawing::Color::Orange;
			this->b_cos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_cos->Location = System::Drawing::Point(322, 244);
			this->b_cos->Name = L"b_cos";
			this->b_cos->Size = System::Drawing::Size(73, 55);
			this->b_cos->TabIndex = 28;
			this->b_cos->Text = L"cos";
			this->b_cos->UseVisualStyleBackColor = false;
			this->b_cos->Click += gcnew System::EventHandler(this, &MyCalc::b_cos_Click);
			// 
			// b_sin
			// 
			this->b_sin->BackColor = System::Drawing::Color::Orange;
			this->b_sin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_sin->Location = System::Drawing::Point(322, 183);
			this->b_sin->Name = L"b_sin";
			this->b_sin->Size = System::Drawing::Size(73, 55);
			this->b_sin->TabIndex = 27;
			this->b_sin->Text = L"sin";
			this->b_sin->UseVisualStyleBackColor = false;
			this->b_sin->Click += gcnew System::EventHandler(this, &MyCalc::b_sin_Click);
			// 
			// b_sqert
			// 
			this->b_sqert->BackColor = System::Drawing::Color::Orange;
			this->b_sqert->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_sqert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_sqert->Location = System::Drawing::Point(322, 122);
			this->b_sqert->Name = L"b_sqert";
			this->b_sqert->Size = System::Drawing::Size(73, 55);
			this->b_sqert->TabIndex = 26;
			this->b_sqert->Text = L"squart";
			this->b_sqert->UseVisualStyleBackColor = false;
			this->b_sqert->Click += gcnew System::EventHandler(this, &MyCalc::b_sqert_Click);
			// 
			// b_2
			// 
			this->b_2->BackColor = System::Drawing::Color::Orange;
			this->b_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->b_2->Location = System::Drawing::Point(322, 366);
			this->b_2->Name = L"b_2";
			this->b_2->Size = System::Drawing::Size(73, 55);
			this->b_2->TabIndex = 30;
			this->b_2->Text = L"^2";
			this->b_2->UseVisualStyleBackColor = false;
			this->b_2->Click += gcnew System::EventHandler(this, &MyCalc::b_2_Click);
			// 
			// MyCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(405, 425);
			this->Controls->Add(this->b_2);
			this->Controls->Add(this->b_tan);
			this->Controls->Add(this->b_cos);
			this->Controls->Add(this->b_sin);
			this->Controls->Add(this->b_sqert);
			this->Controls->Add(this->txt_history);
			this->Controls->Add(this->b_answer);
			this->Controls->Add(this->b_point);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->b_stack);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->b_subtract);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->b_multiply);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->b_divide);
			this->Controls->Add(this->b_percent);
			this->Controls->Add(this->b_dm);
			this->Controls->Add(this->b_ac);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->button_exit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyCalc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyCalc";
			this->ResumeLayout(false);


		}
#pragma endregion 

		
		private:void OnKeyPress(Object^ sender, KeyPressEventArgs^ e) {// This function doesn't work
			if (e->KeyChar == (char)Keys::M)
			{
				calculait->b_answer_Click(sender, e); 
			}
		}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->answer->ForeColor = Color::Black;
		Button^ button = safe_cast<Button^>(sender);
		if (this->answer->Text == "0" || this->answer->Text == "*" || this->answer->Text == "/" || this->answer->Text == "+" || this->answer->Text == "-" || is_equal || this->answer->Text == "%") {
			this->answer->Text = button->Text;
			this->is_equal = false;
		}
		else {
			this->answer->Text = this->answer->Text + button->Text;
		}
	}
	private: System::Void b_stack_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('+');
	}
	private: System::Void b_subtract_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('-');
	}
	private: System::Void b_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('*');
	}
	private: System::Void b_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('/');
	}
	private: System::Void b_sqert_Click(System::Object^ sender, System::EventArgs^ e) {	
		b_math_Click('r');
	}
	private: System::Void b_sin_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('s');
	}
	private: System::Void b_cos_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('c');
	}
	private: System::Void b_tan_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('t');
	}
	private: System::Void b_2_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('2');
	}
	private: System::Void b_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		b_math_Click('%');
	}
		   private: System::Void b_point_Click(System::Object^ sender, System::EventArgs^ e) {
			   String^ text = this->answer->Text;
			   if (!text->Contains(",")) {
				   this->answer->Text = text + ",";
			   }
		   }
	private: System::Void b_math_Click(char _operator) {
		this->first_number = System::Convert::ToDouble(this->answer->Text);
		this->user_action = _operator;

		switch (this->user_action)
		{
		case'+':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "+";
			break;
		case'-':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "-";
			break;
		case'*':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "*";
			break;
		case'/':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "/";
			break;
		case'%':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "&";
			break;
		case's':
			this->answer->Text = "0";
			this->txt_history->Text = "sin()";
			break;
		case'c':
			this->answer->Text = "0";
			this->txt_history->Text = "cos()";
			break;
		case't':
			this->answer->Text = "0";
			this->txt_history->Text = "tan()";
			break;
		case'r':
			this->answer->Text = "0";
			this->txt_history->Text = "squert()";
			break;
		case'2':
			this->answer->Text = "0";
			this->txt_history->Text = System::Convert::ToString(first_number) + "^2";
			break;
		}
	}

	private: System::Void b_answer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		float second = System::Convert::ToDouble(this->answer->Text);
		float anw;
		switch (this->user_action)
		{
		case'%':
			anw = this->first_number * second / 100;
			this->txt_history->Text = System::Convert::ToString(first_number) + "%" + System::Convert::ToString(second) + "=";
			break;
		case'+':
			anw = this->first_number + second;
			this->txt_history->Text = System::Convert::ToString(first_number) + "+" + System::Convert::ToString(second) + "=";
			break;
		case'-':
			anw = this->first_number - second;
			this->txt_history->Text = System::Convert::ToString(first_number) + "-" + System::Convert::ToString(second) + "=";
			break;
		case'*':
			anw = this->first_number * second;
			this->txt_history->Text = System::Convert::ToString(first_number) + "*" + System::Convert::ToString(second) + "=";
			break;
		case'/':
			if (second == 0) {
				anw = 0;
				this->answer->ForeColor = Color::Red;
				MessageBox::Show(this, "На ноль нельзя делить", "Error", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				break;
			}
			else {
				anw = this->first_number / second;
				this->txt_history->Text = System::Convert::ToString(first_number) + "/" + System::Convert::ToString(second) + "=";
				break;
			}
			break;
		case's':
			anw = Math::Sin(second);
			this->txt_history->Text = "sin(" + System::Convert::ToString(second) + ")=";
			break;
		case'c':
			anw = Math::Cos(second);
			this->txt_history->Text = "cos(" + System::Convert::ToString(second) + ")=";
			break;
		case't':
			anw = Math::Tan(second);
			this->txt_history->Text = "tan(" + System::Convert::ToString(second) + ")=";
			break;
		case'r':
			anw = Math::Pow(second, 0.5);
			this->txt_history->Text = "squart(" + System::Convert::ToString(second) + ")=";
			break;
		case'2':
			anw = Math::Pow(first_number, 2);
			this->txt_history->Text = System::Convert::ToString(first_number) + "^2=";
			break;
		}
		this->is_equal = true;
		this->answer->Text = System::Convert::ToString(anw);
	}
	private: System::Void b_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->answer->Text = "0";
		this->answer->ForeColor = Color::Black;
		this->first_number = 0;
		this->user_action = ' ';
		this->is_equal = false;
		this->txt_history->Text = " ";
	}
	private: System::Void b_dm_Click(System::Object^ sender, System::EventArgs^ e) {
		double number = System::Convert::ToDouble(this->answer->Text);
		number *= -1;
		this->answer->Text = System::Convert::ToString(number);
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}