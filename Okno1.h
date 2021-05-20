#pragma once

namespace LDSP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Okno1
	/// </summary>
	public ref class Okno1 : public System::Windows::Forms::Form
	{
	public:
		Okno1(void)
		{
			InitializeComponent();
			Graphics^ g = this->CreateGraphics ( );
			g->DrawLine ( gcnew Pen ( Color::Red ), 0, 0, 50, 50 ); //Линия
			//
			// 
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Okno1()
		{
			if (components)
			{
				delete components;
			}
		}

		protected:
























		 private: System::Windows::Forms::Label^ label2;
		 private: System::Windows::Forms::Label^ label3;
		 private: System::Windows::Forms::Label^ label4;
		 private: System::Windows::Forms::TextBox^ textBox24;
		 private: System::Windows::Forms::TextBox^ textBox25;
		 private: System::Windows::Forms::TextBox^ textBox26;
		 private: System::Windows::Forms::TextBox^ textBox10;
		 private: System::Windows::Forms::TextBox^ textBox11;
		 private: System::Windows::Forms::TextBox^ textBox12;
		 private: System::Windows::Forms::Label^ label1;



		 private: System::Windows::Forms::TextBox^ textBox8;
		 private: System::Windows::Forms::TextBox^ textBox22;
		 private: System::Windows::Forms::Label^ label5;
		 private: System::Windows::Forms::Label^ label6;
		 private: System::Windows::Forms::Label^ label7;
		 private: System::Windows::Forms::Label^ label8;
		 private: System::Windows::Forms::Label^ label9;
		 private: System::Windows::Forms::TextBox^ textBox5;
		 private: System::Windows::Forms::TextBox^ textBox6;
		 private: System::Windows::Forms::TextBox^ textBox7;
		 private: System::Windows::Forms::TextBox^ textBox9;








		 private: System::Windows::Forms::Label^ label10;
		 private: System::Windows::Forms::TextBox^ textBox13;
		 private: System::Windows::Forms::TextBox^ textBox15;
		 private: System::Windows::Forms::Label^ label11;
		 private: System::Windows::Forms::TextBox^ textBox19;
		 private: System::Windows::Forms::Label^ label12;
		 private: System::Windows::Forms::TextBox^ textBox20;
		 private: System::Windows::Forms::TextBox^ textBox21;
		 private: System::Windows::Forms::Label^ label13;
		 private: System::Windows::Forms::Label^ label14;
		 private: System::Windows::Forms::PictureBox^ pictureBox1;







		 private: System::Windows::Forms::TextBox^ textBox23;
		 private: System::Windows::Forms::TextBox^ textBox27;
		 private: System::Windows::Forms::Label^ label15;
		 private: System::Windows::Forms::Label^ label16;
	 private: System::Windows::Forms::PictureBox^ pictureBox2;






		  private: System::Windows::Forms::TextBox^ textBox28;
		  private: System::Windows::Forms::TextBox^ textBox29;
		  private: System::Windows::Forms::TextBox^ textBox30;
		  private: System::Windows::Forms::Label^ label17;
		  private: System::Windows::Forms::Label^ label18;
		  private: System::Windows::Forms::Label^ label19;



		  private: System::Windows::Forms::TextBox^ textBox34;
		  private: System::Windows::Forms::TextBox^ textBox35;
		  private: System::Windows::Forms::TextBox^ textBox36;
		  private: System::Windows::Forms::TextBox^ textBox37;
		  private: System::Windows::Forms::TextBox^ textBox38;
		  private: System::Windows::Forms::TextBox^ textBox39;









		  private: System::Windows::Forms::TextBox^ textBox43;
		  private: System::Windows::Forms::TextBox^ textBox44;
		  private: System::Windows::Forms::TextBox^ textBox45;
		  private: System::Windows::Forms::Label^ label20;
		  private: System::Windows::Forms::Label^ label21;
		  private: System::Windows::Forms::Label^ label22;



		  private: System::Windows::Forms::TextBox^ textBox49;
		  private: System::Windows::Forms::TextBox^ textBox50;
		  private: System::Windows::Forms::TextBox^ textBox51;
		  private: System::Windows::Forms::TextBox^ textBox52;
		  private: System::Windows::Forms::TextBox^ textBox53;
		  private: System::Windows::Forms::TextBox^ textBox54;




	 private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	 private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
		  private: System::Windows::Forms::NumericUpDown^ numericUpDown10;









		  private: System::Windows::Forms::ComboBox^ comboBox11;
		  private: System::Windows::Forms::ComboBox^ comboBox12;
		  private: System::Windows::Forms::ComboBox^ comboBox13;
		  private: System::Windows::Forms::ComboBox^ comboBox14;
		  private: System::Windows::Forms::ComboBox^ comboBox15;
		  private: System::Windows::Forms::ComboBox^ comboBox16;
		  private: System::Windows::Forms::ComboBox^ comboBox17;
		  private: System::Windows::Forms::ComboBox^ comboBox18;
		  private: System::Windows::Forms::ComboBox^ comboBox19;
		  private: System::Windows::Forms::ComboBox^ comboBox20;
	 private: System::Windows::Forms::Label^ label23;
		  private: System::Windows::Forms::TextBox^ textBox14;
		  private: System::Windows::Forms::ComboBox^ comboBox1;
		  private: System::Windows::Forms::ComboBox^ comboBox2;
		  private: System::Windows::Forms::ComboBox^ comboBox3;
		  private: System::Windows::Forms::ComboBox^ comboBox4;
		  private: System::Windows::Forms::ComboBox^ comboBox5;
		  private: System::Windows::Forms::ComboBox^ comboBox6;
		  private: System::Windows::Forms::ComboBox^ comboBox7;
		  private: System::Windows::Forms::ComboBox^ comboBox8;
		  private: System::Windows::Forms::ComboBox^ comboBox9;
		  private: System::Windows::Forms::ComboBox^ comboBox10;
		  private: System::Windows::Forms::TextBox^ textBox1;
		  private: System::Windows::Forms::TextBox^ textBox2;
		  private: System::Windows::Forms::TextBox^ textBox3;
		  private: System::Windows::Forms::TextBox^ textBox4;
		  private: System::Windows::Forms::TextBox^ textBox16;
		  private: System::Windows::Forms::TextBox^ textBox17;
		  private: System::Windows::Forms::TextBox^ textBox18;
		  private: System::Windows::Forms::TextBox^ textBox31;
		  private: System::Windows::Forms::TextBox^ textBox32;
		  private: System::Windows::Forms::TextBox^ textBox33;
		  private: System::Windows::Forms::Label^ label24;
		  private: System::Windows::Forms::PictureBox^ pictureBox7;
		  private: System::Windows::Forms::PictureBox^ pictureBox3;
		  private: System::Windows::Forms::PictureBox^ pictureBox4;
		  private: System::Windows::Forms::PictureBox^ pictureBox5;
		  private: System::Windows::Forms::PictureBox^ pictureBox6;
	 private: System::Windows::Forms::PictureBox^ pictureBox8;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			 System::ComponentModel::ComponentResourceManager^ resources = ( gcnew System::ComponentModel::ComponentResourceManager ( Okno1::typeid ) );
			 this->label2 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label3 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label4 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox24 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox25 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox26 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox10 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox11 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox12 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label1 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox8 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox22 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label5 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label6 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label7 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label8 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label9 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox5 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox6 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox7 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox9 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label10 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox13 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox15 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label11 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox19 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label12 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox20 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox21 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label13 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label14 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->pictureBox1 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->textBox23 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox27 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label15 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label16 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->pictureBox2 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->textBox28 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox29 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox30 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label17 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label18 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label19 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox34 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox35 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox36 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox37 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox38 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox39 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox43 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox44 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox45 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label20 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label21 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label22 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox49 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox50 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox51 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox52 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox53 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox54 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->dateTimePicker1 = ( gcnew System::Windows::Forms::DateTimePicker ( ) );
			 this->numericUpDown1 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown2 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown3 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown4 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown5 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown6 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown7 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown8 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown9 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->numericUpDown10 = ( gcnew System::Windows::Forms::NumericUpDown ( ) );
			 this->comboBox11 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox12 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox13 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox14 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox15 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox16 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox17 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox18 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox19 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox20 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->label23 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->textBox14 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->comboBox1 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox2 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox3 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox4 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox5 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox6 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox7 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox8 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox9 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->comboBox10 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->textBox1 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox2 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox3 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox4 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox16 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox17 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox18 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox31 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox32 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->textBox33 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label24 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->pictureBox7 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox3 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox4 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox5 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox6 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox8 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown1 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown2 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown3 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown4 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown5 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown6 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown7 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown8 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown9 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown10 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->BeginInit ( );
			 this->SuspendLayout ( );
			 // 
			 // label2
			 // 
			 this->label2->AutoSize = true;
			 this->label2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label2->ForeColor = System::Drawing::Color::SeaShell;
			 this->label2->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label2.Image" ) ) );
			 this->label2->Location = System::Drawing::Point ( 533, 56 );
			 this->label2->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label2->Name = L"label2";
			 this->label2->Size = System::Drawing::Size ( 88, 18 );
			 this->label2->TabIndex = 26;
			 this->label2->Text = L"Количество";
			 this->label2->Click += gcnew System::EventHandler ( this, &Okno1::label2_Click );
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label3->ForeColor = System::Drawing::Color::SeaShell;
			 this->label3->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label3.Image" ) ) );
			 this->label3->Location = System::Drawing::Point ( 113, 60 );
			 this->label3->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size ( 51, 18 );
			 this->label3->TabIndex = 27;
			 this->label3->Text = L"Длина";
			 this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label4
			 // 
			 this->label4->AutoSize = true;
			 this->label4->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label4->ForeColor = System::Drawing::Color::SeaShell;
			 this->label4->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label4.Image" ) ) );
			 this->label4->Location = System::Drawing::Point ( 365, 60 );
			 this->label4->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size ( 65, 18 );
			 this->label4->TabIndex = 28;
			 this->label4->Text = L"Ширина";
			 this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // textBox24
			 // 
			 this->textBox24->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox24->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox24->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox24->Location = System::Drawing::Point ( 295, 158 );
			 this->textBox24->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox24->Name = L"textBox24";
			 this->textBox24->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox24->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox24->TabIndex = 31;
			 this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox25
			 // 
			 this->textBox25->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox25->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox25->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox25->Location = System::Drawing::Point ( 295, 117 );
			 this->textBox25->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox25->Name = L"textBox25";
			 this->textBox25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox25->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox25->TabIndex = 30;
			 this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox26
			 // 
			 this->textBox26->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox26->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox26->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox26->Location = System::Drawing::Point ( 295, 79 );
			 this->textBox26->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox26->Name = L"textBox26";
			 this->textBox26->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox26->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox26->TabIndex = 29;
			 this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox10
			 // 
			 this->textBox10->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox10->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox10->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox10->Location = System::Drawing::Point ( 621, 157 );
			 this->textBox10->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox10->Name = L"textBox10";
			 this->textBox10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox10->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox10->TabIndex = 37;
			 this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox11
			 // 
			 this->textBox11->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox11->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox11->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox11->Location = System::Drawing::Point ( 621, 114 );
			 this->textBox11->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox11->Name = L"textBox11";
			 this->textBox11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox11->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox11->TabIndex = 36;
			 this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox12
			 // 
			 this->textBox12->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox12->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox12->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox12->Location = System::Drawing::Point ( 621, 75 );
			 this->textBox12->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox12->Name = L"textBox12";
			 this->textBox12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox12->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox12->TabIndex = 35;
			 this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label1->ForeColor = System::Drawing::Color::SeaShell;
			 this->label1->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label1.Image" ) ) );
			 this->label1->Location = System::Drawing::Point ( 649, 56 );
			 this->label1->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label1->Name = L"label1";
			 this->label1->Size = System::Drawing::Size ( 27, 18 );
			 this->label1->TabIndex = 41;
			 this->label1->Text = L"м2";
			 this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 this->label1->UseMnemonic = false;
			 // 
			 // textBox8
			 // 
			 this->textBox8->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox8->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox8->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox8->Location = System::Drawing::Point ( 621, 195 );
			 this->textBox8->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox8->Name = L"textBox8";
			 this->textBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox8->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox8->TabIndex = 39;
			 this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox22
			 // 
			 this->textBox22->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox22->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox22->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox22->Location = System::Drawing::Point ( 295, 195 );
			 this->textBox22->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox22->Name = L"textBox22";
			 this->textBox22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox22->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox22->TabIndex = 33;
			 this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label5->Location = System::Drawing::Point ( 6, 82 );
			 this->label5->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size ( 17, 18 );
			 this->label5->TabIndex = 53;
			 this->label5->Text = L"1";
			 this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label6->Location = System::Drawing::Point ( 6, 120 );
			 this->label6->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size ( 17, 18 );
			 this->label6->TabIndex = 54;
			 this->label6->Text = L"2";
			 this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label7
			 // 
			 this->label7->AutoSize = true;
			 this->label7->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label7->Location = System::Drawing::Point ( 6, 162 );
			 this->label7->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size ( 17, 18 );
			 this->label7->TabIndex = 55;
			 this->label7->Text = L"3";
			 this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label8
			 // 
			 this->label8->AutoSize = true;
			 this->label8->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label8->Location = System::Drawing::Point ( 6, 199 );
			 this->label8->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label8->Name = L"label8";
			 this->label8->Size = System::Drawing::Size ( 17, 18 );
			 this->label8->TabIndex = 56;
			 this->label8->Text = L"4";
			 this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label9
			 // 
			 this->label9->AutoSize = true;
			 this->label9->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label9->ForeColor = System::Drawing::Color::SeaShell;
			 this->label9->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label9.Image" ) ) );
			 this->label9->Location = System::Drawing::Point ( 733, 54 );
			 this->label9->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label9->Name = L"label9";
			 this->label9->Size = System::Drawing::Size ( 60, 18 );
			 this->label9->TabIndex = 61;
			 this->label9->Text = L"Кромка";
			 this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 this->label9->UseMnemonic = false;
			 // 
			 // textBox5
			 // 
			 this->textBox5->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox5->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox5->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox5->Location = System::Drawing::Point ( 721, 195 );
			 this->textBox5->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox5->Name = L"textBox5";
			 this->textBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox5->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox5->TabIndex = 60;
			 this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox6
			 // 
			 this->textBox6->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox6->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox6->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox6->Location = System::Drawing::Point ( 721, 157 );
			 this->textBox6->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox6->Name = L"textBox6";
			 this->textBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox6->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox6->TabIndex = 59;
			 this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox7
			 // 
			 this->textBox7->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox7->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox7->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox7->Location = System::Drawing::Point ( 721, 114 );
			 this->textBox7->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox7->Name = L"textBox7";
			 this->textBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox7->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox7->TabIndex = 58;
			 this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox9
			 // 
			 this->textBox9->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox9->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox9->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox9->Location = System::Drawing::Point ( 721, 75 );
			 this->textBox9->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox9->Name = L"textBox9";
			 this->textBox9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox9->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox9->TabIndex = 57;
			 this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label10
			 // 
			 this->label10->AutoSize = true;
			 this->label10->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label10->ForeColor = System::Drawing::Color::SeaShell;
			 this->label10->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label10.Image" ) ) );
			 this->label10->Location = System::Drawing::Point ( 545, 562 );
			 this->label10->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label10->Name = L"label10";
			 this->label10->Size = System::Drawing::Size ( 86, 36 );
			 this->label10->TabIndex = 70;
			 this->label10->Text = L"   Общие \r\nколичество";
			 // 
			 // textBox13
			 // 
			 this->textBox13->Location = System::Drawing::Point ( 571, 599 );
			 this->textBox13->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox13->Name = L"textBox13";
			 this->textBox13->Size = System::Drawing::Size ( 37, 20 );
			 this->textBox13->TabIndex = 71;
			 // 
			 // textBox15
			 // 
			 this->textBox15->Location = System::Drawing::Point ( 629, 599 );
			 this->textBox15->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox15->Name = L"textBox15";
			 this->textBox15->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox15->TabIndex = 72;
			 // 
			 // label11
			 // 
			 this->label11->AutoSize = true;
			 this->label11->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label11->ForeColor = System::Drawing::Color::SeaShell;
			 this->label11->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label11.Image" ) ) );
			 this->label11->Location = System::Drawing::Point ( 645, 562 );
			 this->label11->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label11->Name = L"label11";
			 this->label11->Size = System::Drawing::Size ( 57, 36 );
			 this->label11->TabIndex = 73;
			 this->label11->Text = L"Общий\r\n    М2";
			 // 
			 // textBox19
			 // 
			 this->textBox19->Location = System::Drawing::Point ( 730, 599 );
			 this->textBox19->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox19->Name = L"textBox19";
			 this->textBox19->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox19->TabIndex = 74;
			 // 
			 // label12
			 // 
			 this->label12->AutoSize = true;
			 this->label12->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label12->ForeColor = System::Drawing::Color::SeaShell;
			 this->label12->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label12.Image" ) ) );
			 this->label12->Location = System::Drawing::Point ( 744, 562 );
			 this->label12->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label12->Name = L"label12";
			 this->label12->Size = System::Drawing::Size ( 58, 36 );
			 this->label12->TabIndex = 75;
			 this->label12->Text = L"Общая\r\nкромка";
			 // 
			 // textBox20
			 // 
			 this->textBox20->Location = System::Drawing::Point ( 289, 599 );
			 this->textBox20->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox20->Name = L"textBox20";
			 this->textBox20->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox20->TabIndex = 76;
			 // 
			 // textBox21
			 // 
			 this->textBox21->Location = System::Drawing::Point ( 47, 599 );
			 this->textBox21->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox21->Name = L"textBox21";
			 this->textBox21->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox21->TabIndex = 77;
			 // 
			 // label13
			 // 
			 this->label13->AutoSize = true;
			 this->label13->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label13->ForeColor = System::Drawing::Color::SeaShell;
			 this->label13->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label13.Image" ) ) );
			 this->label13->Location = System::Drawing::Point ( 62, 562 );
			 this->label13->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label13->Name = L"label13";
			 this->label13->Size = System::Drawing::Size ( 60, 36 );
			 this->label13->TabIndex = 78;
			 this->label13->Text = L"Общая \r\n Длина";
			 this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label14
			 // 
			 this->label14->AutoSize = true;
			 this->label14->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label14->ForeColor = System::Drawing::Color::SeaShell;
			 this->label14->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label14.Image" ) ) );
			 this->label14->Location = System::Drawing::Point ( 301, 562 );
			 this->label14->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label14->Name = L"label14";
			 this->label14->Size = System::Drawing::Size ( 63, 36 );
			 this->label14->TabIndex = 79;
			 this->label14->Text = L"Общая\r\nширина\r\n";
			 this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // pictureBox1
			 // 
			 this->pictureBox1->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox1.Image" ) ) );
			 this->pictureBox1->Location = System::Drawing::Point ( -9, -19 );
			 this->pictureBox1->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->pictureBox1->Name = L"pictureBox1";
			 this->pictureBox1->Size = System::Drawing::Size ( 872, 589 );
			 this->pictureBox1->TabIndex = 80;
			 this->pictureBox1->TabStop = false;
			 this->pictureBox1->Click += gcnew System::EventHandler ( this, &Okno1::pictureBox1_Click );
			 // 
			 // textBox23
			 // 
			 this->textBox23->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox23->ForeColor = System::Drawing::SystemColors::Window;
			 this->textBox23->Location = System::Drawing::Point ( 149, 26 );
			 this->textBox23->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox23->Name = L"textBox23";
			 this->textBox23->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox23->TabIndex = 88;
			 // 
			 // textBox27
			 // 
			 this->textBox27->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox27->ForeColor = System::Drawing::SystemColors::Window;
			 this->textBox27->Location = System::Drawing::Point ( 673, 25 );
			 this->textBox27->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox27->Name = L"textBox27";
			 this->textBox27->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox27->TabIndex = 89;
			 // 
			 // label15
			 // 
			 this->label15->AutoSize = true;
			 this->label15->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label15->ForeColor = System::Drawing::Color::SeaShell;
			 this->label15->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label15.Image" ) ) );
			 this->label15->Location = System::Drawing::Point ( 89, 7 );
			 this->label15->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label15->Name = L"label15";
			 this->label15->Size = System::Drawing::Size ( 214, 18 );
			 this->label15->TabIndex = 90;
			 this->label15->Text = L"Цена LDSP за погонный метр";
			 this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 this->label15->Click += gcnew System::EventHandler ( this, &Okno1::label15_Click );
			 // 
			 // label16
			 // 
			 this->label16->AutoSize = true;
			 this->label16->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label16->ForeColor = System::Drawing::Color::SeaShell;
			 this->label16->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label16.Image" ) ) );
			 this->label16->Location = System::Drawing::Point ( 656, 6 );
			 this->label16->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label16->Name = L"label16";
			 this->label16->Size = System::Drawing::Size ( 133, 18 );
			 this->label16->TabIndex = 91;
			 this->label16->Text = L"Цена кромки 2мм\r\n";
			 this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // pictureBox2
			 // 
			 this->pictureBox2->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox2.Image" ) ) );
			 this->pictureBox2->Location = System::Drawing::Point ( -19, 534 );
			 this->pictureBox2->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->pictureBox2->Name = L"pictureBox2";
			 this->pictureBox2->Size = System::Drawing::Size ( 849, 157 );
			 this->pictureBox2->TabIndex = 92;
			 this->pictureBox2->TabStop = false;
			 // 
			 // textBox28
			 // 
			 this->textBox28->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox28->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox28->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox28->Location = System::Drawing::Point ( 721, 314 );
			 this->textBox28->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox28->Name = L"textBox28";
			 this->textBox28->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox28->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox28->TabIndex = 110;
			 this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox29
			 // 
			 this->textBox29->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox29->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox29->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox29->Location = System::Drawing::Point ( 721, 276 );
			 this->textBox29->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox29->Name = L"textBox29";
			 this->textBox29->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox29->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox29->TabIndex = 109;
			 this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox30
			 // 
			 this->textBox30->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox30->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox30->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox30->Location = System::Drawing::Point ( 721, 233 );
			 this->textBox30->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox30->Name = L"textBox30";
			 this->textBox30->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox30->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox30->TabIndex = 108;
			 this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label17
			 // 
			 this->label17->AutoSize = true;
			 this->label17->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label17->Location = System::Drawing::Point ( 6, 320 );
			 this->label17->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label17->Name = L"label17";
			 this->label17->Size = System::Drawing::Size ( 17, 18 );
			 this->label17->TabIndex = 107;
			 this->label17->Text = L"7";
			 this->label17->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label18
			 // 
			 this->label18->AutoSize = true;
			 this->label18->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label18->Location = System::Drawing::Point ( 6, 280 );
			 this->label18->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label18->Name = L"label18";
			 this->label18->Size = System::Drawing::Size ( 17, 18 );
			 this->label18->TabIndex = 106;
			 this->label18->Text = L"6";
			 this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label19
			 // 
			 this->label19->AutoSize = true;
			 this->label19->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label19->Location = System::Drawing::Point ( 6, 238 );
			 this->label19->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label19->Name = L"label19";
			 this->label19->Size = System::Drawing::Size ( 17, 18 );
			 this->label19->TabIndex = 105;
			 this->label19->Text = L"5";
			 this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // textBox34
			 // 
			 this->textBox34->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox34->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox34->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox34->Location = System::Drawing::Point ( 621, 314 );
			 this->textBox34->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox34->Name = L"textBox34";
			 this->textBox34->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox34->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox34->TabIndex = 101;
			 this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox35
			 // 
			 this->textBox35->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox35->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox35->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox35->Location = System::Drawing::Point ( 621, 276 );
			 this->textBox35->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox35->Name = L"textBox35";
			 this->textBox35->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox35->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox35->TabIndex = 100;
			 this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox36
			 // 
			 this->textBox36->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox36->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox36->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox36->Location = System::Drawing::Point ( 621, 233 );
			 this->textBox36->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox36->Name = L"textBox36";
			 this->textBox36->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox36->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox36->TabIndex = 99;
			 this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox37
			 // 
			 this->textBox37->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox37->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox37->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox37->Location = System::Drawing::Point ( 295, 316 );
			 this->textBox37->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox37->Name = L"textBox37";
			 this->textBox37->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox37->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox37->TabIndex = 98;
			 this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox38
			 // 
			 this->textBox38->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox38->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox38->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox38->Location = System::Drawing::Point ( 295, 277 );
			 this->textBox38->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox38->Name = L"textBox38";
			 this->textBox38->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox38->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox38->TabIndex = 97;
			 this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox39
			 // 
			 this->textBox39->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox39->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox39->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox39->Location = System::Drawing::Point ( 295, 234 );
			 this->textBox39->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox39->Name = L"textBox39";
			 this->textBox39->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox39->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox39->TabIndex = 96;
			 this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox43
			 // 
			 this->textBox43->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox43->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox43->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox43->Location = System::Drawing::Point ( 721, 433 );
			 this->textBox43->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox43->Name = L"textBox43";
			 this->textBox43->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox43->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox43->TabIndex = 134;
			 this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox44
			 // 
			 this->textBox44->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox44->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox44->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox44->Location = System::Drawing::Point ( 721, 395 );
			 this->textBox44->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox44->Name = L"textBox44";
			 this->textBox44->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox44->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox44->TabIndex = 133;
			 this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox45
			 // 
			 this->textBox45->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox45->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox45->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox45->Location = System::Drawing::Point ( 721, 352 );
			 this->textBox45->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox45->Name = L"textBox45";
			 this->textBox45->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox45->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox45->TabIndex = 132;
			 this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label20
			 // 
			 this->label20->AutoSize = true;
			 this->label20->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label20->Location = System::Drawing::Point ( -3, 439 );
			 this->label20->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label20->Name = L"label20";
			 this->label20->Size = System::Drawing::Size ( 26, 18 );
			 this->label20->TabIndex = 131;
			 this->label20->Text = L"10";
			 this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label21
			 // 
			 this->label21->AutoSize = true;
			 this->label21->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label21->Location = System::Drawing::Point ( 6, 398 );
			 this->label21->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label21->Name = L"label21";
			 this->label21->Size = System::Drawing::Size ( 17, 18 );
			 this->label21->TabIndex = 130;
			 this->label21->Text = L"9";
			 this->label21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label22
			 // 
			 this->label22->AutoSize = true;
			 this->label22->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label22->Location = System::Drawing::Point ( 6, 357 );
			 this->label22->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label22->Name = L"label22";
			 this->label22->Size = System::Drawing::Size ( 17, 18 );
			 this->label22->TabIndex = 129;
			 this->label22->Text = L"8";
			 this->label22->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // textBox49
			 // 
			 this->textBox49->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox49->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox49->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox49->Location = System::Drawing::Point ( 621, 433 );
			 this->textBox49->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox49->Name = L"textBox49";
			 this->textBox49->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox49->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox49->TabIndex = 125;
			 this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox50
			 // 
			 this->textBox50->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox50->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox50->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox50->Location = System::Drawing::Point ( 621, 395 );
			 this->textBox50->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox50->Name = L"textBox50";
			 this->textBox50->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox50->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox50->TabIndex = 124;
			 this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox51
			 // 
			 this->textBox51->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox51->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox51->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox51->Location = System::Drawing::Point ( 621, 352 );
			 this->textBox51->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox51->Name = L"textBox51";
			 this->textBox51->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox51->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox51->TabIndex = 123;
			 this->textBox51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox52
			 // 
			 this->textBox52->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox52->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox52->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox52->Location = System::Drawing::Point ( 295, 435 );
			 this->textBox52->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox52->Name = L"textBox52";
			 this->textBox52->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox52->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox52->TabIndex = 122;
			 this->textBox52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox53
			 // 
			 this->textBox53->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox53->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox53->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox53->Location = System::Drawing::Point ( 295, 395 );
			 this->textBox53->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox53->Name = L"textBox53";
			 this->textBox53->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox53->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox53->TabIndex = 121;
			 this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox54
			 // 
			 this->textBox54->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox54->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox54->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox54->Location = System::Drawing::Point ( 295, 353 );
			 this->textBox54->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox54->Name = L"textBox54";
			 this->textBox54->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox54->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox54->TabIndex = 120;
			 this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // dateTimePicker1
			 // 
			 this->dateTimePicker1->Location = System::Drawing::Point ( 681, 638 );
			 this->dateTimePicker1->Name = L"dateTimePicker1";
			 this->dateTimePicker1->Size = System::Drawing::Size ( 137, 20 );
			 this->dateTimePicker1->TabIndex = 144;
			 // 
			 // numericUpDown1
			 // 
			 this->numericUpDown1->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown1->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown1->Location = System::Drawing::Point ( 550, 77 );
			 this->numericUpDown1->Name = L"numericUpDown1";
			 this->numericUpDown1->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown1->TabIndex = 145;
			 this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown1->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown2
		// 
			 this->numericUpDown2->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown2->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown2->Location = System::Drawing::Point ( 550, 116 );
			 this->numericUpDown2->Name = L"numericUpDown2";
			 this->numericUpDown2->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown2->TabIndex = 146;
			 this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown2->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown3
		// 
			 this->numericUpDown3->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown3->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown3->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown3->Location = System::Drawing::Point ( 550, 393 );
			 this->numericUpDown3->Name = L"numericUpDown3";
			 this->numericUpDown3->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown3->TabIndex = 147;
			 this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown3->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown4
		// 
			 this->numericUpDown4->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown4->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown4->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown4->Location = System::Drawing::Point ( 550, 352 );
			 this->numericUpDown4->Name = L"numericUpDown4";
			 this->numericUpDown4->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown4->TabIndex = 148;
			 this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown4->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown5
		// 
			 this->numericUpDown5->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown5->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown5->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown5->Location = System::Drawing::Point ( 550, 156 );
			 this->numericUpDown5->Name = L"numericUpDown5";
			 this->numericUpDown5->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown5->TabIndex = 149;
			 this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown5->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown6
		// 
			 this->numericUpDown6->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown6->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown6->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown6->Location = System::Drawing::Point ( 550, 194 );
			 this->numericUpDown6->Name = L"numericUpDown6";
			 this->numericUpDown6->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown6->TabIndex = 150;
			 this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown6->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown7
		// 
			 this->numericUpDown7->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown7->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown7->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown7->Location = System::Drawing::Point ( 550, 314 );
			 this->numericUpDown7->Name = L"numericUpDown7";
			 this->numericUpDown7->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown7->TabIndex = 151;
			 this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown7->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown8
		// 
			 this->numericUpDown8->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown8->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown8->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown8->Location = System::Drawing::Point ( 550, 275 );
			 this->numericUpDown8->Name = L"numericUpDown8";
			 this->numericUpDown8->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown8->TabIndex = 152;
			 this->numericUpDown8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown8->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown9
		// 
			 this->numericUpDown9->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown9->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown9->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown9->Location = System::Drawing::Point ( 550, 234 );
			 this->numericUpDown9->Name = L"numericUpDown9";
			 this->numericUpDown9->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown9->TabIndex = 153;
			 this->numericUpDown9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown9->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// numericUpDown10
		// 
			 this->numericUpDown10->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->numericUpDown10->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->numericUpDown10->ForeColor = System::Drawing::Color::MintCream;
			 this->numericUpDown10->Location = System::Drawing::Point ( 550, 435 );
			 this->numericUpDown10->Name = L"numericUpDown10";
			 this->numericUpDown10->Size = System::Drawing::Size ( 53, 23 );
			 this->numericUpDown10->TabIndex = 154;
			 this->numericUpDown10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 this->numericUpDown10->Value = System::Decimal ( gcnew cli::array< System::Int32 > ( 4 )
				  {
				  1, 0, 0, 0
				  } );
		// 
		// comboBox11
		// 
			 this->comboBox11->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox11->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox11->FormattingEnabled = true;
			 this->comboBox11->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox11->Location = System::Drawing::Point ( 384, 156 );
			 this->comboBox11->Name = L"comboBox11";
			 this->comboBox11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox11->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox11->TabIndex = 173;
			 // 
			 // comboBox12
			 // 
			 this->comboBox12->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox12->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox12->FormattingEnabled = true;
			 this->comboBox12->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox12->Location = System::Drawing::Point ( 384, 194 );
			 this->comboBox12->Name = L"comboBox12";
			 this->comboBox12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox12->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox12->TabIndex = 172;
			 // 
			 // comboBox13
			 // 
			 this->comboBox13->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox13->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox13->FormattingEnabled = true;
			 this->comboBox13->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox13->Location = System::Drawing::Point ( 384, 233 );
			 this->comboBox13->Name = L"comboBox13";
			 this->comboBox13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox13->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox13->TabIndex = 171;
			 // 
			 // comboBox14
			 // 
			 this->comboBox14->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox14->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox14->FormattingEnabled = true;
			 this->comboBox14->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox14->Location = System::Drawing::Point ( 384, 275 );
			 this->comboBox14->Name = L"comboBox14";
			 this->comboBox14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox14->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox14->TabIndex = 170;
			 // 
			 // comboBox15
			 // 
			 this->comboBox15->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox15->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox15->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox15->FormattingEnabled = true;
			 this->comboBox15->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox15->Location = System::Drawing::Point ( 384, 315 );
			 this->comboBox15->Name = L"comboBox15";
			 this->comboBox15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox15->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox15->TabIndex = 169;
			 // 
			 // comboBox16
			 // 
			 this->comboBox16->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox16->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox16->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox16->FormattingEnabled = true;
			 this->comboBox16->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox16->Location = System::Drawing::Point ( 384, 352 );
			 this->comboBox16->Name = L"comboBox16";
			 this->comboBox16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox16->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox16->TabIndex = 168;
			 // 
			 // comboBox17
			 // 
			 this->comboBox17->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox17->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox17->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox17->FormattingEnabled = true;
			 this->comboBox17->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox17->Location = System::Drawing::Point ( 384, 394 );
			 this->comboBox17->Name = L"comboBox17";
			 this->comboBox17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox17->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox17->TabIndex = 167;
			 // 
			 // comboBox18
			 // 
			 this->comboBox18->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox18->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox18->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox18->FormattingEnabled = true;
			 this->comboBox18->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox18->Location = System::Drawing::Point ( 384, 434 );
			 this->comboBox18->Name = L"comboBox18";
			 this->comboBox18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox18->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox18->TabIndex = 166;
			 // 
			 // comboBox19
			 // 
			 this->comboBox19->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox19->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox19->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox19->FormattingEnabled = true;
			 this->comboBox19->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox19->Location = System::Drawing::Point ( 384, 116 );
			 this->comboBox19->Name = L"comboBox19";
			 this->comboBox19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox19->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox19->TabIndex = 165;
			 // 
			 // comboBox20
			 // 
			 this->comboBox20->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox20->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox20->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox20->FormattingEnabled = true;
			 this->comboBox20->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox20->Location = System::Drawing::Point ( 384, 77 );
			 this->comboBox20->Name = L"comboBox20";
			 this->comboBox20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox20->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox20->TabIndex = 164;
			 // 
			 // label23
			 // 
			 this->label23->AutoSize = true;
			 this->label23->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label23->ForeColor = System::Drawing::Color::SeaShell;
			 this->label23->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label23.Image" ) ) );
			 this->label23->Location = System::Drawing::Point ( 514, 7 );
			 this->label23->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label23->Name = L"label23";
			 this->label23->Size = System::Drawing::Size ( 137, 18 );
			 this->label23->TabIndex = 174;
			 this->label23->Text = L"Цена кромки 4мм.";
			 this->label23->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // textBox14
			 // 
			 this->textBox14->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox14->ForeColor = System::Drawing::SystemColors::Window;
			 this->textBox14->Location = System::Drawing::Point ( 541, 25 );
			 this->textBox14->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox14->Name = L"textBox14";
			 this->textBox14->Size = System::Drawing::Size ( 88, 20 );
			 this->textBox14->TabIndex = 175;
			 // 
			 // comboBox1
			 // 
			 this->comboBox1->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox1->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox1->FormattingEnabled = true;
			 this->comboBox1->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox1->Location = System::Drawing::Point ( 131, 157 );
			 this->comboBox1->Name = L"comboBox1";
			 this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox1->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox1->TabIndex = 197;
			 // 
			 // comboBox2
			 // 
			 this->comboBox2->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox2->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox2->FormattingEnabled = true;
			 this->comboBox2->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox2->Location = System::Drawing::Point ( 131, 195 );
			 this->comboBox2->Name = L"comboBox2";
			 this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox2->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox2->TabIndex = 196;
			 // 
			 // comboBox3
			 // 
			 this->comboBox3->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox3->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox3->FormattingEnabled = true;
			 this->comboBox3->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox3->Location = System::Drawing::Point ( 131, 234 );
			 this->comboBox3->Name = L"comboBox3";
			 this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox3->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox3->TabIndex = 195;
			 // 
			 // comboBox4
			 // 
			 this->comboBox4->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox4->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox4->FormattingEnabled = true;
			 this->comboBox4->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox4->Location = System::Drawing::Point ( 131, 276 );
			 this->comboBox4->Name = L"comboBox4";
			 this->comboBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox4->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox4->TabIndex = 194;
			 // 
			 // comboBox5
			 // 
			 this->comboBox5->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox5->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox5->FormattingEnabled = true;
			 this->comboBox5->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox5->Location = System::Drawing::Point ( 131, 316 );
			 this->comboBox5->Name = L"comboBox5";
			 this->comboBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox5->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox5->TabIndex = 193;
			 // 
			 // comboBox6
			 // 
			 this->comboBox6->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox6->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox6->FormattingEnabled = true;
			 this->comboBox6->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox6->Location = System::Drawing::Point ( 131, 353 );
			 this->comboBox6->Name = L"comboBox6";
			 this->comboBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox6->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox6->TabIndex = 192;
			 // 
			 // comboBox7
			 // 
			 this->comboBox7->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox7->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox7->FormattingEnabled = true;
			 this->comboBox7->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox7->Location = System::Drawing::Point ( 131, 395 );
			 this->comboBox7->Name = L"comboBox7";
			 this->comboBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox7->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox7->TabIndex = 191;
			 // 
			 // comboBox8
			 // 
			 this->comboBox8->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox8->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox8->FormattingEnabled = true;
			 this->comboBox8->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox8->Location = System::Drawing::Point ( 131, 435 );
			 this->comboBox8->Name = L"comboBox8";
			 this->comboBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox8->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox8->TabIndex = 190;
			 // 
			 // comboBox9
			 // 
			 this->comboBox9->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox9->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox9->FormattingEnabled = true;
			 this->comboBox9->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox9->Location = System::Drawing::Point ( 131, 117 );
			 this->comboBox9->Name = L"comboBox9";
			 this->comboBox9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox9->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox9->TabIndex = 189;
			 // 
			 // comboBox10
			 // 
			 this->comboBox10->BackColor = System::Drawing::Color::Wheat;
			 this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->comboBox10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			 this->comboBox10->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->comboBox10->FormattingEnabled = true;
			 this->comboBox10->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				  {
				  L"Кромка 1 сторона", L"Кромка 2 сторона", L"Кромка в круг "
				  } );
			 this->comboBox10->Location = System::Drawing::Point ( 131, 78 );
			 this->comboBox10->Name = L"comboBox10";
			 this->comboBox10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->comboBox10->Size = System::Drawing::Size ( 147, 25 );
			 this->comboBox10->TabIndex = 188;
			 // 
			 // textBox1
			 // 
			 this->textBox1->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox1->Location = System::Drawing::Point ( 42, 436 );
			 this->textBox1->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox1->Name = L"textBox1";
			 this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox1->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox1->TabIndex = 187;
			 this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox2
			 // 
			 this->textBox2->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox2->Location = System::Drawing::Point ( 42, 396 );
			 this->textBox2->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox2->Name = L"textBox2";
			 this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox2->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox2->TabIndex = 186;
			 this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox3
			 // 
			 this->textBox3->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox3->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox3->Location = System::Drawing::Point ( 42, 354 );
			 this->textBox3->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox3->Name = L"textBox3";
			 this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox3->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox3->TabIndex = 185;
			 this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox4
			 // 
			 this->textBox4->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox4->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox4->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox4->Location = System::Drawing::Point ( 42, 317 );
			 this->textBox4->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox4->Name = L"textBox4";
			 this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox4->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox4->TabIndex = 184;
			 this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox16
			 // 
			 this->textBox16->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox16->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox16->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox16->Location = System::Drawing::Point ( 42, 278 );
			 this->textBox16->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox16->Name = L"textBox16";
			 this->textBox16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox16->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox16->TabIndex = 183;
			 this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox17
			 // 
			 this->textBox17->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox17->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox17->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox17->Location = System::Drawing::Point ( 42, 235 );
			 this->textBox17->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox17->Name = L"textBox17";
			 this->textBox17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox17->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox17->TabIndex = 182;
			 this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox18
			 // 
			 this->textBox18->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox18->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox18->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox18->Location = System::Drawing::Point ( 42, 196 );
			 this->textBox18->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox18->Name = L"textBox18";
			 this->textBox18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox18->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox18->TabIndex = 181;
			 this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox31
			 // 
			 this->textBox31->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox31->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox31->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox31->Location = System::Drawing::Point ( 42, 159 );
			 this->textBox31->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox31->Name = L"textBox31";
			 this->textBox31->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox31->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox31->TabIndex = 180;
			 this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox32
			 // 
			 this->textBox32->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox32->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox32->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox32->Location = System::Drawing::Point ( 42, 118 );
			 this->textBox32->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox32->Name = L"textBox32";
			 this->textBox32->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox32->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox32->TabIndex = 179;
			 this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // textBox33
			 // 
			 this->textBox33->BackColor = System::Drawing::Color::DarkGoldenrod;
			 this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->textBox33->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->textBox33->ForeColor = System::Drawing::SystemColors::ControlLight;
			 this->textBox33->Location = System::Drawing::Point ( 42, 80 );
			 this->textBox33->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->textBox33->Name = L"textBox33";
			 this->textBox33->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->textBox33->Size = System::Drawing::Size ( 88, 23 );
			 this->textBox33->TabIndex = 178;
			 this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label24
			 // 
			 this->label24->AutoSize = true;
			 this->label24->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label24->ForeColor = System::Drawing::Color::SeaShell;
			 this->label24->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"label24.Image" ) ) );
			 this->label24->Location = System::Drawing::Point ( 6, 60 );
			 this->label24->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label24->Name = L"label24";
			 this->label24->Size = System::Drawing::Size ( 23, 18 );
			 this->label24->TabIndex = 198;
			 this->label24->Text = L"№";
			 this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // pictureBox7
			 // 
			 this->pictureBox7->BackColor = System::Drawing::Color::Black;
			 this->pictureBox7->Location = System::Drawing::Point ( 30, 79 );
			 this->pictureBox7->Name = L"pictureBox7";
			 this->pictureBox7->Size = System::Drawing::Size ( 7, 389 );
			 this->pictureBox7->TabIndex = 201;
			 this->pictureBox7->TabStop = false;
			 // 
			 // pictureBox3
			 // 
			 this->pictureBox3->BackColor = System::Drawing::Color::Black;
			 this->pictureBox3->Location = System::Drawing::Point ( 283, 78 );
			 this->pictureBox3->Name = L"pictureBox3";
			 this->pictureBox3->Size = System::Drawing::Size ( 7, 389 );
			 this->pictureBox3->TabIndex = 202;
			 this->pictureBox3->TabStop = false;
			 // 
			 // pictureBox4
			 // 
			 this->pictureBox4->BackColor = System::Drawing::Color::Black;
			 this->pictureBox4->Location = System::Drawing::Point ( 534, 77 );
			 this->pictureBox4->Name = L"pictureBox4";
			 this->pictureBox4->Size = System::Drawing::Size ( 7, 389 );
			 this->pictureBox4->TabIndex = 203;
			 this->pictureBox4->TabStop = false;
			 // 
			 // pictureBox5
			 // 
			 this->pictureBox5->BackColor = System::Drawing::Color::Black;
			 this->pictureBox5->Location = System::Drawing::Point ( 613, 75 );
			 this->pictureBox5->Name = L"pictureBox5";
			 this->pictureBox5->Size = System::Drawing::Size ( 7, 389 );
			 this->pictureBox5->TabIndex = 204;
			 this->pictureBox5->TabStop = false;
			 // 
			 // pictureBox6
			 // 
			 this->pictureBox6->BackColor = System::Drawing::Color::Black;
			 this->pictureBox6->Location = System::Drawing::Point ( 711, 74 );
			 this->pictureBox6->Name = L"pictureBox6";
			 this->pictureBox6->Size = System::Drawing::Size ( 7, 389 );
			 this->pictureBox6->TabIndex = 205;
			 this->pictureBox6->TabStop = false;
			 // 
			 // pictureBox8
			 // 
			 this->pictureBox8->BackColor = System::Drawing::Color::Black;
			 this->pictureBox8->Location = System::Drawing::Point ( -9, 106 );
			 this->pictureBox8->Name = L"pictureBox8";
			 this->pictureBox8->Size = System::Drawing::Size ( 900, 7 );
			 this->pictureBox8->TabIndex = 206;
			 this->pictureBox8->TabStop = false;
			 // 
			 // Okno1
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF ( 7, 15 );
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			 this->BackColor = System::Drawing::SystemColors::Control;
			 this->ClientSize = System::Drawing::Size ( 826, 661 );
			 this->Controls->Add ( this->pictureBox8 );
			 this->Controls->Add ( this->pictureBox6 );
			 this->Controls->Add ( this->pictureBox5 );
			 this->Controls->Add ( this->pictureBox4 );
			 this->Controls->Add ( this->pictureBox3 );
			 this->Controls->Add ( this->pictureBox7 );
			 this->Controls->Add ( this->label24 );
			 this->Controls->Add ( this->comboBox1 );
			 this->Controls->Add ( this->comboBox2 );
			 this->Controls->Add ( this->comboBox3 );
			 this->Controls->Add ( this->comboBox4 );
			 this->Controls->Add ( this->comboBox5 );
			 this->Controls->Add ( this->comboBox6 );
			 this->Controls->Add ( this->comboBox7 );
			 this->Controls->Add ( this->comboBox8 );
			 this->Controls->Add ( this->comboBox9 );
			 this->Controls->Add ( this->comboBox10 );
			 this->Controls->Add ( this->textBox1 );
			 this->Controls->Add ( this->textBox2 );
			 this->Controls->Add ( this->textBox3 );
			 this->Controls->Add ( this->textBox4 );
			 this->Controls->Add ( this->textBox16 );
			 this->Controls->Add ( this->textBox17 );
			 this->Controls->Add ( this->textBox18 );
			 this->Controls->Add ( this->textBox31 );
			 this->Controls->Add ( this->textBox32 );
			 this->Controls->Add ( this->textBox33 );
			 this->Controls->Add ( this->textBox14 );
			 this->Controls->Add ( this->label23 );
			 this->Controls->Add ( this->comboBox11 );
			 this->Controls->Add ( this->comboBox12 );
			 this->Controls->Add ( this->comboBox13 );
			 this->Controls->Add ( this->comboBox14 );
			 this->Controls->Add ( this->comboBox15 );
			 this->Controls->Add ( this->comboBox16 );
			 this->Controls->Add ( this->comboBox17 );
			 this->Controls->Add ( this->comboBox18 );
			 this->Controls->Add ( this->comboBox19 );
			 this->Controls->Add ( this->comboBox20 );
			 this->Controls->Add ( this->numericUpDown10 );
			 this->Controls->Add ( this->numericUpDown9 );
			 this->Controls->Add ( this->numericUpDown8 );
			 this->Controls->Add ( this->numericUpDown7 );
			 this->Controls->Add ( this->numericUpDown6 );
			 this->Controls->Add ( this->numericUpDown5 );
			 this->Controls->Add ( this->numericUpDown4 );
			 this->Controls->Add ( this->numericUpDown3 );
			 this->Controls->Add ( this->numericUpDown2 );
			 this->Controls->Add ( this->numericUpDown1 );
			 this->Controls->Add ( this->dateTimePicker1 );
			 this->Controls->Add ( this->textBox43 );
			 this->Controls->Add ( this->textBox44 );
			 this->Controls->Add ( this->textBox45 );
			 this->Controls->Add ( this->label20 );
			 this->Controls->Add ( this->label21 );
			 this->Controls->Add ( this->label22 );
			 this->Controls->Add ( this->textBox49 );
			 this->Controls->Add ( this->textBox50 );
			 this->Controls->Add ( this->textBox51 );
			 this->Controls->Add ( this->textBox52 );
			 this->Controls->Add ( this->textBox53 );
			 this->Controls->Add ( this->textBox54 );
			 this->Controls->Add ( this->textBox28 );
			 this->Controls->Add ( this->textBox29 );
			 this->Controls->Add ( this->textBox30 );
			 this->Controls->Add ( this->label17 );
			 this->Controls->Add ( this->label18 );
			 this->Controls->Add ( this->label19 );
			 this->Controls->Add ( this->textBox34 );
			 this->Controls->Add ( this->textBox35 );
			 this->Controls->Add ( this->textBox36 );
			 this->Controls->Add ( this->textBox37 );
			 this->Controls->Add ( this->textBox38 );
			 this->Controls->Add ( this->textBox39 );
			 this->Controls->Add ( this->label16 );
			 this->Controls->Add ( this->label15 );
			 this->Controls->Add ( this->textBox27 );
			 this->Controls->Add ( this->textBox23 );
			 this->Controls->Add ( this->label14 );
			 this->Controls->Add ( this->label13 );
			 this->Controls->Add ( this->textBox21 );
			 this->Controls->Add ( this->textBox20 );
			 this->Controls->Add ( this->label12 );
			 this->Controls->Add ( this->textBox19 );
			 this->Controls->Add ( this->label11 );
			 this->Controls->Add ( this->textBox15 );
			 this->Controls->Add ( this->textBox13 );
			 this->Controls->Add ( this->label10 );
			 this->Controls->Add ( this->label9 );
			 this->Controls->Add ( this->textBox5 );
			 this->Controls->Add ( this->textBox6 );
			 this->Controls->Add ( this->textBox7 );
			 this->Controls->Add ( this->textBox9 );
			 this->Controls->Add ( this->label8 );
			 this->Controls->Add ( this->label7 );
			 this->Controls->Add ( this->label6 );
			 this->Controls->Add ( this->label5 );
			 this->Controls->Add ( this->label1 );
			 this->Controls->Add ( this->textBox8 );
			 this->Controls->Add ( this->textBox10 );
			 this->Controls->Add ( this->textBox11 );
			 this->Controls->Add ( this->textBox12 );
			 this->Controls->Add ( this->textBox22 );
			 this->Controls->Add ( this->textBox24 );
			 this->Controls->Add ( this->textBox25 );
			 this->Controls->Add ( this->textBox26 );
			 this->Controls->Add ( this->label4 );
			 this->Controls->Add ( this->label3 );
			 this->Controls->Add ( this->label2 );
			 this->Controls->Add ( this->pictureBox1 );
			 this->Controls->Add ( this->pictureBox2 );
			 this->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 8.25F, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
														  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->ForeColor = System::Drawing::SystemColors::ControlText;
			 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			 this->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->Name = L"Okno1";
			 this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->Text = L"Подсчет цена за ЛДПС by gafask";
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown1 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown2 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown3 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown4 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown5 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown6 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown7 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown8 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown9 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->numericUpDown10 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->EndInit ( );
			 this->ResumeLayout ( false );
			 this->PerformLayout ( );

			 }
#pragma endregion
		private: System::Void label1_Click ( System::Object^ sender, System::EventArgs^ e )
			{ }
	 private: System::Void label2_Click ( System::Object^ sender, System::EventArgs^ e )
		  { }
	 private: System::Void checkedListBox8_SelectedIndexChanged ( System::Object^ sender, System::EventArgs^ e )
		  { }
	 private: System::Void label15_Click ( System::Object^ sender, System::EventArgs^ e )
		  { }
	 private: System::Void pictureBox1_Click ( System::Object^ sender, System::EventArgs^ e )
		  { }
	 private: System::Void comboBox2_SelectedIndexChanged ( System::Object^ sender, System::EventArgs^ e )
		  { }
	 private: System::Void checkedListBox7_SelectedIndexChanged ( System::Object^ sender, System::EventArgs^ e )
		  { }
};
}
