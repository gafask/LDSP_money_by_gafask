#pragma once
#include <ctime>
#include <cstdlib>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <string>
#include <tchar.h>
#include <algorithm>
#include <vector>

bool Proverka_na_BUKVI_V_Text_Box ( System::Windows::Forms::TextBox^ Name_Text_Box )
	 {
	 System::String^ unmanaged = System::Convert::ToString ( Name_Text_Box->Text ); 
	 std::string s = msclr::interop::marshal_as<std::string> ( unmanaged );
	 for ( auto it = s.begin ( ); it != s.end ( ); it++ )
			   if (*it <= 47 && *it != 44 || *it >= 58  && *it != 44 || Name_Text_Box->Text == "" )
					{
					Name_Text_Box->BackColor = System::Drawing::Color::Red;
					return true;
					break;
					}			  
	 return false;
	 }


unsigned int Random_int ( )
	 {
		 // Наше стартовое число - 4 541
	 static unsigned int seed = time ( 0 );

	 // Берем стартовое число и, с его помощью, генерируем новое значение.
	 // Из-за использования очень больших чисел (и переполнения) угадать следующее число исходя из предыдущего - очень сложно
	 seed = ( 8253729 * seed + 2396403 );

	 // Берем стартовое число и возвращаем значение в диапазоне от 0 до 32767
	 return seed % 32768;
	 }
int ves_masiva_box = 0;
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
	/// 
	//array<TextBox^>^ Masiv_text_box_visota = gcnew array<TextBox^> ( MAX_PATH );
	public ref class Okno1 : public System::Windows::Forms::Form
	{
		 private: array<TextBox^>^ Masiv_text_box_visota;
		 private: array<TextBox^>^ Masiv_text_box_shirina;
		 private: System::Windows::Forms::TextBox^ Otvet_shirina;
		 private: System::Windows::Forms::TextBox^ Otvet_kolichestvo;
		 private: System::Windows::Forms::ComboBox^ Kromka_box_visova_0;


		 private: System::Windows::Forms::Label^ label5;
		 private: System::Windows::Forms::TextBox^ Obshie_M2;
		 private: System::Windows::Forms::TextBox^ M2_0;

		 private: System::Windows::Forms::TextBox^ Kromka_0;
		 private: System::Windows::Forms::Label^ afsfsldkflk;
		 private: System::Windows::Forms::TextBox^ Obshie_Kromka;

		 private: array<TextBox^>^ Masiv_text_box_kolishistvo;
		 private: array<TextBox^>^ Masiv_text_box_M2;
		 private: System::Windows::Forms::ComboBox^ Kromka_box_shirina_0;

		 private: array<TextBox^>^ Masiv_text_box_Kromka;
		 private: array<ComboBox^>^ Masiv_kombo_box_Kromka_Shirina;
		 private: System::Windows::Forms::TextBox^ Money_LDSP_1;

		 private: System::Windows::Forms::Label^ label6;
		 private: System::Windows::Forms::Label^ label7;
		 private: System::Windows::Forms::TextBox^ Money_Kromka_1;

		 private: System::Windows::Forms::TextBox^ Obshia_stoimost_KROMKA;
		 private: System::Windows::Forms::Label^ label8;
		 private: System::Windows::Forms::Label^ label9;
		 private: System::Windows::Forms::TextBox^ Obshia_stoimost_LDSP;
		 private: array<ComboBox^>^ Masiv_kombo_box_Kromka_Visota;
	public:
		Okno1(void)
		{
			InitializeComponent();
			Masiv_text_box_visota = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_shirina = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_kolishistvo = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_M2 = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_Kromka = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_kombo_box_Kromka_Shirina = gcnew array<ComboBox^> ( MAX_PATH );
			Masiv_kombo_box_Kromka_Visota = gcnew array<ComboBox^> ( MAX_PATH );
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
		 private: System::Windows::Forms::Button^ button1;

		 private: System::Windows::Forms::Button^ button2;
		 private: System::Windows::Forms::TextBox^ Otvet_visota;


		 private: System::Windows::Forms::PictureBox^ pictureBox3;
		 private: System::Windows::Forms::PictureBox^ pictureBox4;
		 private: System::Windows::Forms::PictureBox^ pictureBox5;
		 private: System::Windows::Forms::Label^ label3;
		 private: System::Windows::Forms::TextBox^ Visota_0;

		 private: System::Windows::Forms::PictureBox^ pictureBox6;
		 private: System::Windows::Forms::PictureBox^ pictureBox7;
		 private: System::Windows::Forms::PictureBox^ pictureBox8;
		 private: System::Windows::Forms::PictureBox^ pictureBox9;
		 private: System::Windows::Forms::PictureBox^ pictureBox10;
		 private: System::Windows::Forms::PictureBox^ pictureBox17;
		 private: System::Windows::Forms::PictureBox^ pictureBox18;
		 private: System::Windows::Forms::PictureBox^ pictureBox19;
		 private: System::Windows::Forms::Label^ label1;
		 private: System::Windows::Forms::Label^ label2;
		 private: System::Windows::Forms::Label^ label4;
		 private: System::Windows::Forms::TextBox^ Shirina_0;

		 private: System::Windows::Forms::TextBox^ Kolichestvo_0;


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
			 this->button1 = ( gcnew System::Windows::Forms::Button ( ) );
			 this->button2 = ( gcnew System::Windows::Forms::Button ( ) );
			 this->Otvet_visota = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->pictureBox3 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox4 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox5 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->label3 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Visota_0 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->pictureBox6 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox7 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox8 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox9 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox10 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox17 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox18 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox19 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->label1 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label2 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label4 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Shirina_0 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Kolichestvo_0 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Otvet_shirina = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Otvet_kolichestvo = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Kromka_box_visova_0 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->label5 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Obshie_M2 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->M2_0 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Kromka_0 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->afsfsldkflk = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Obshie_Kromka = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Kromka_box_shirina_0 = ( gcnew System::Windows::Forms::ComboBox ( ) );
			 this->Money_LDSP_1 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label6 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label7 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Money_Kromka_1 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->Obshia_stoimost_KROMKA = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label8 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->label9 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Obshia_stoimost_LDSP = ( gcnew System::Windows::Forms::TextBox ( ) );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox9 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox10 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox17 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox18 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox19 ) )->BeginInit ( );
			 this->SuspendLayout ( );
			 // 
			 // button1
			 // 
			 this->button1->Location = System::Drawing::Point ( 689, 8 );
			 this->button1->Name = L"button1";
			 this->button1->Size = System::Drawing::Size ( 112, 23 );
			 this->button1->TabIndex = 285;
			 this->button1->Text = L"Добавить строку";
			 this->button1->UseVisualStyleBackColor = true;
			 this->button1->Click += gcnew System::EventHandler ( this, &Okno1::button1_Click_1 );
			 // 
			 // button2
			 // 
			 this->button2->Location = System::Drawing::Point ( 713, 37 );
			 this->button2->Name = L"button2";
			 this->button2->Size = System::Drawing::Size ( 75, 23 );
			 this->button2->TabIndex = 309;
			 this->button2->Text = L"Посчитать";
			 this->button2->UseVisualStyleBackColor = true;
			 this->button2->Click += gcnew System::EventHandler ( this, &Okno1::button2_Click );
			 // 
			 // Otvet_visota
			 // 
			 this->Otvet_visota->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_visota->Location = System::Drawing::Point ( 126, 99 );
			 this->Otvet_visota->Name = L"Otvet_visota";
			 this->Otvet_visota->Size = System::Drawing::Size ( 89, 23 );
			 this->Otvet_visota->TabIndex = 310;
			 // 
			 // pictureBox3
			 // 
			 this->pictureBox3->BackColor = System::Drawing::Color::Black;
			 this->pictureBox3->Location = System::Drawing::Point ( -2, 161 );
			 this->pictureBox3->Name = L"pictureBox3";
			 this->pictureBox3->Size = System::Drawing::Size ( 801, 11 );
			 this->pictureBox3->TabIndex = 320;
			 this->pictureBox3->TabStop = false;
			 // 
			 // pictureBox4
			 // 
			 this->pictureBox4->BackColor = System::Drawing::Color::Black;
			 this->pictureBox4->Location = System::Drawing::Point ( -2, 123 );
			 this->pictureBox4->Name = L"pictureBox4";
			 this->pictureBox4->Size = System::Drawing::Size ( 801, 11 );
			 this->pictureBox4->TabIndex = 316;
			 this->pictureBox4->TabStop = false;
			 // 
			 // pictureBox5
			 // 
			 this->pictureBox5->BackColor = System::Drawing::Color::Black;
			 this->pictureBox5->Location = System::Drawing::Point ( -2, 159 );
			 this->pictureBox5->Name = L"pictureBox5";
			 this->pictureBox5->Size = System::Drawing::Size ( 801, 11 );
			 this->pictureBox5->TabIndex = 319;
			 this->pictureBox5->TabStop = false;
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label3->Location = System::Drawing::Point ( 8, 138 );
			 this->label3->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size ( 37, 18 );
			 this->label3->TabIndex = 308;
			 this->label3->Text = L"  1  ";
			 this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Visota_0
			 // 
			 this->Visota_0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->Visota_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Visota_0->Location = System::Drawing::Point ( 57, 135 );
			 this->Visota_0->Name = L"Visota_0";
			 this->Visota_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Visota_0->TabIndex = 318;
			 this->Visota_0->Text = L"1";
			 // 
			 // pictureBox6
			 // 
			 this->pictureBox6->BackColor = System::Drawing::Color::Black;
			 this->pictureBox6->Location = System::Drawing::Point ( 276, 123 );
			 this->pictureBox6->Name = L"pictureBox6";
			 this->pictureBox6->Size = System::Drawing::Size ( 10, 41 );
			 this->pictureBox6->TabIndex = 310;
			 this->pictureBox6->TabStop = false;
			 // 
			 // pictureBox7
			 // 
			 this->pictureBox7->BackColor = System::Drawing::Color::Black;
			 this->pictureBox7->Location = System::Drawing::Point ( -2, 161 );
			 this->pictureBox7->Name = L"pictureBox7";
			 this->pictureBox7->Size = System::Drawing::Size ( 801, 11 );
			 this->pictureBox7->TabIndex = 317;
			 this->pictureBox7->TabStop = false;
			 // 
			 // pictureBox8
			 // 
			 this->pictureBox8->BackColor = System::Drawing::Color::Black;
			 this->pictureBox8->Location = System::Drawing::Point ( 524, 123 );
			 this->pictureBox8->Name = L"pictureBox8";
			 this->pictureBox8->Size = System::Drawing::Size ( 10, 39 );
			 this->pictureBox8->TabIndex = 311;
			 this->pictureBox8->TabStop = false;
			 // 
			 // pictureBox9
			 // 
			 this->pictureBox9->BackColor = System::Drawing::Color::Black;
			 this->pictureBox9->Location = System::Drawing::Point ( 589, 123 );
			 this->pictureBox9->Name = L"pictureBox9";
			 this->pictureBox9->Size = System::Drawing::Size ( 10, 43 );
			 this->pictureBox9->TabIndex = 312;
			 this->pictureBox9->TabStop = false;
			 // 
			 // pictureBox10
			 // 
			 this->pictureBox10->BackColor = System::Drawing::Color::Black;
			 this->pictureBox10->Location = System::Drawing::Point ( -2, 123 );
			 this->pictureBox10->Name = L"pictureBox10";
			 this->pictureBox10->Size = System::Drawing::Size ( 10, 43 );
			 this->pictureBox10->TabIndex = 309;
			 this->pictureBox10->TabStop = false;
			 // 
			 // pictureBox17
			 // 
			 this->pictureBox17->BackColor = System::Drawing::Color::Black;
			 this->pictureBox17->Location = System::Drawing::Point ( 689, 123 );
			 this->pictureBox17->Name = L"pictureBox17";
			 this->pictureBox17->Size = System::Drawing::Size ( 10, 43 );
			 this->pictureBox17->TabIndex = 313;
			 this->pictureBox17->TabStop = false;
			 // 
			 // pictureBox18
			 // 
			 this->pictureBox18->BackColor = System::Drawing::Color::Black;
			 this->pictureBox18->Location = System::Drawing::Point ( 46, 123 );
			 this->pictureBox18->Name = L"pictureBox18";
			 this->pictureBox18->Size = System::Drawing::Size ( 10, 45 );
			 this->pictureBox18->TabIndex = 315;
			 this->pictureBox18->TabStop = false;
			 // 
			 // pictureBox19
			 // 
			 this->pictureBox19->BackColor = System::Drawing::Color::Black;
			 this->pictureBox19->Location = System::Drawing::Point ( 789, 123 );
			 this->pictureBox19->Name = L"pictureBox19";
			 this->pictureBox19->Size = System::Drawing::Size ( 10, 44 );
			 this->pictureBox19->TabIndex = 314;
			 this->pictureBox19->TabStop = false;
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label1->Location = System::Drawing::Point ( 144, 78 );
			 this->label1->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label1->Name = L"label1";
			 this->label1->Size = System::Drawing::Size ( 59, 18 );
			 this->label1->TabIndex = 321;
			 this->label1->Text = L"Высота";
			 this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label2
			 // 
			 this->label2->AutoSize = true;
			 this->label2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label2->Location = System::Drawing::Point ( 373, 78 );
			 this->label2->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label2->Name = L"label2";
			 this->label2->Size = System::Drawing::Size ( 65, 18 );
			 this->label2->TabIndex = 322;
			 this->label2->Text = L"Ширина";
			 this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label4
			 // 
			 this->label4->AutoSize = true;
			 this->label4->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label4->Location = System::Drawing::Point ( 521, 78 );
			 this->label4->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size ( 88, 18 );
			 this->label4->TabIndex = 323;
			 this->label4->Text = L"Количество";
			 this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Shirina_0
			 // 
			 this->Shirina_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Shirina_0->Location = System::Drawing::Point ( 286, 135 );
			 this->Shirina_0->Name = L"Shirina_0";
			 this->Shirina_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Shirina_0->TabIndex = 324;
			 this->Shirina_0->Text = L"1";
			 // 
			 // Kolichestvo_0
			 // 
			 this->Kolichestvo_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Kolichestvo_0->Location = System::Drawing::Point ( 535, 135 );
			 this->Kolichestvo_0->Name = L"Kolichestvo_0";
			 this->Kolichestvo_0->Size = System::Drawing::Size ( 52, 23 );
			 this->Kolichestvo_0->TabIndex = 325;
			 this->Kolichestvo_0->Text = L"1";
			 // 
			 // Otvet_shirina
			 // 
			 this->Otvet_shirina->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_shirina->Location = System::Drawing::Point ( 361, 99 );
			 this->Otvet_shirina->Name = L"Otvet_shirina";
			 this->Otvet_shirina->Size = System::Drawing::Size ( 89, 23 );
			 this->Otvet_shirina->TabIndex = 326;
			 // 
			 // Otvet_kolichestvo
			 // 
			 this->Otvet_kolichestvo->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																			 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_kolichestvo->Location = System::Drawing::Point ( 540, 99 );
			 this->Otvet_kolichestvo->Name = L"Otvet_kolichestvo";
			 this->Otvet_kolichestvo->Size = System::Drawing::Size ( 43, 23 );
			 this->Otvet_kolichestvo->TabIndex = 327;
			 this->Otvet_kolichestvo->Text = L"1";
			 // 
			 // Kromka_box_visova_0
			 // 
			 this->Kromka_box_visova_0->FormattingEnabled = true;
			 this->Kromka_box_visova_0->Items->AddRange ( gcnew cli::array< System::Object^  > ( 2 )
				  {
				  L"/", L"//"
				  } );
			 this->Kromka_box_visova_0->Location = System::Drawing::Point ( 184, 135 );
			 this->Kromka_box_visova_0->Name = L"Kromka_box_visova_0";
			 this->Kromka_box_visova_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Kromka_box_visova_0->TabIndex = 328;
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label5->Location = System::Drawing::Point ( 631, 78 );
			 this->label5->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size ( 29, 18 );
			 this->label5->TabIndex = 329;
			 this->label5->Text = L"М2";
			 this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshie_M2
			 // 
			 this->Obshie_M2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshie_M2->Location = System::Drawing::Point ( 617, 99 );
			 this->Obshie_M2->Name = L"Obshie_M2";
			 this->Obshie_M2->Size = System::Drawing::Size ( 59, 23 );
			 this->Obshie_M2->TabIndex = 330;
			 this->Obshie_M2->Text = L"1";
			 // 
			 // M2_0
			 // 
			 this->M2_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->M2_0->Location = System::Drawing::Point ( 600, 135 );
			 this->M2_0->Name = L"M2_0";
			 this->M2_0->Size = System::Drawing::Size ( 87, 23 );
			 this->M2_0->TabIndex = 331;
			 this->M2_0->Text = L"1";
			 // 
			 // Kromka_0
			 // 
			 this->Kromka_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Kromka_0->Location = System::Drawing::Point ( 700, 135 );
			 this->Kromka_0->Name = L"Kromka_0";
			 this->Kromka_0->Size = System::Drawing::Size ( 88, 23 );
			 this->Kromka_0->TabIndex = 332;
			 this->Kromka_0->Text = L"1";
			 // 
			 // afsfsldkflk
			 // 
			 this->afsfsldkflk->AutoSize = true;
			 this->afsfsldkflk->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->afsfsldkflk->Location = System::Drawing::Point ( 710, 78 );
			 this->afsfsldkflk->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->afsfsldkflk->Name = L"afsfsldkflk";
			 this->afsfsldkflk->Size = System::Drawing::Size ( 60, 18 );
			 this->afsfsldkflk->TabIndex = 333;
			 this->afsfsldkflk->Text = L"Кромка";
			 this->afsfsldkflk->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshie_Kromka
			 // 
			 this->Obshie_Kromka->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshie_Kromka->Location = System::Drawing::Point ( 700, 99 );
			 this->Obshie_Kromka->Name = L"Obshie_Kromka";
			 this->Obshie_Kromka->Size = System::Drawing::Size ( 88, 23 );
			 this->Obshie_Kromka->TabIndex = 334;
			 this->Obshie_Kromka->Text = L"1";
			 // 
			 // Kromka_box_shirina_0
			 // 
			 this->Kromka_box_shirina_0->FormattingEnabled = true;
			 this->Kromka_box_shirina_0->Items->AddRange ( gcnew cli::array< System::Object^  > ( 2 )
				  {
				  L"/", L"//"
				  } );
			 this->Kromka_box_shirina_0->Location = System::Drawing::Point ( 433, 135 );
			 this->Kromka_box_shirina_0->Name = L"Kromka_box_shirina_0";
			 this->Kromka_box_shirina_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Kromka_box_shirina_0->TabIndex = 335;
			 // 
			 // Money_LDSP_1
			 // 
			 this->Money_LDSP_1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Money_LDSP_1->Location = System::Drawing::Point ( 543, 1 );
			 this->Money_LDSP_1->Name = L"Money_LDSP_1";
			 this->Money_LDSP_1->Size = System::Drawing::Size ( 89, 23 );
			 this->Money_LDSP_1->TabIndex = 336;
			 this->Money_LDSP_1->Text = L"790";
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label6->Location = System::Drawing::Point ( 399, 4 );
			 this->label6->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size ( 143, 18 );
			 this->label6->TabIndex = 337;
			 this->label6->Text = L"Цена ЛДСП за метр";
			 this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label7
			 // 
			 this->label7->AutoSize = true;
			 this->label7->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label7->Location = System::Drawing::Point ( 366, 31 );
			 this->label7->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size ( 176, 18 );
			 this->label7->TabIndex = 338;
			 this->label7->Text = L"Цена за кромки за метр";
			 this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Money_Kromka_1
			 // 
			 this->Money_Kromka_1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Money_Kromka_1->Location = System::Drawing::Point ( 543, 29 );
			 this->Money_Kromka_1->Name = L"Money_Kromka_1";
			 this->Money_Kromka_1->Size = System::Drawing::Size ( 89, 23 );
			 this->Money_Kromka_1->TabIndex = 339;
			 this->Money_Kromka_1->Text = L"50";
			 // 
			 // Obshia_stoimost_KROMKA
			 // 
			 this->Obshia_stoimost_KROMKA->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																				  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshia_stoimost_KROMKA->Location = System::Drawing::Point ( 207, 36 );
			 this->Obshia_stoimost_KROMKA->Name = L"Obshia_stoimost_KROMKA";
			 this->Obshia_stoimost_KROMKA->Size = System::Drawing::Size ( 89, 23 );
			 this->Obshia_stoimost_KROMKA->TabIndex = 343;
			 // 
			 // label8
			 // 
			 this->label8->AutoSize = true;
			 this->label8->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label8->Location = System::Drawing::Point ( 7, 38 );
			 this->label8->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label8->Name = L"label8";
			 this->label8->Size = System::Drawing::Size ( 197, 18 );
			 this->label8->TabIndex = 342;
			 this->label8->Text = L"Общая стоимость КРОМКИ";
			 this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label9
			 // 
			 this->label9->AutoSize = true;
			 this->label9->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label9->Location = System::Drawing::Point ( 30, 11 );
			 this->label9->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label9->Name = L"label9";
			 this->label9->Size = System::Drawing::Size ( 174, 18 );
			 this->label9->TabIndex = 341;
			 this->label9->Text = L"Общая стоимость ЛДСП";
			 this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshia_stoimost_LDSP
			 // 
			 this->Obshia_stoimost_LDSP->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																				System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshia_stoimost_LDSP->Location = System::Drawing::Point ( 207, 8 );
			 this->Obshia_stoimost_LDSP->Name = L"Obshia_stoimost_LDSP";
			 this->Obshia_stoimost_LDSP->Size = System::Drawing::Size ( 89, 23 );
			 this->Obshia_stoimost_LDSP->TabIndex = 340;
			 // 
			 // Okno1
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF ( 96, 96 );
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			 this->AutoScroll = true;
			 this->BackColor = System::Drawing::Color::White;
			 this->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"$this.BackgroundImage" ) ) );
			 this->ClientSize = System::Drawing::Size ( 818, 825 );
			 this->Controls->Add ( this->Obshia_stoimost_KROMKA );
			 this->Controls->Add ( this->label8 );
			 this->Controls->Add ( this->label9 );
			 this->Controls->Add ( this->Obshia_stoimost_LDSP );
			 this->Controls->Add ( this->Money_Kromka_1 );
			 this->Controls->Add ( this->label7 );
			 this->Controls->Add ( this->label6 );
			 this->Controls->Add ( this->Money_LDSP_1 );
			 this->Controls->Add ( this->Kromka_box_shirina_0 );
			 this->Controls->Add ( this->Obshie_Kromka );
			 this->Controls->Add ( this->afsfsldkflk );
			 this->Controls->Add ( this->Kromka_0 );
			 this->Controls->Add ( this->M2_0 );
			 this->Controls->Add ( this->Obshie_M2 );
			 this->Controls->Add ( this->label5 );
			 this->Controls->Add ( this->Kromka_box_visova_0 );
			 this->Controls->Add ( this->Otvet_kolichestvo );
			 this->Controls->Add ( this->Otvet_shirina );
			 this->Controls->Add ( this->Kolichestvo_0 );
			 this->Controls->Add ( this->Shirina_0 );
			 this->Controls->Add ( this->label4 );
			 this->Controls->Add ( this->label2 );
			 this->Controls->Add ( this->label1 );
			 this->Controls->Add ( this->pictureBox3 );
			 this->Controls->Add ( this->Otvet_visota );
			 this->Controls->Add ( this->pictureBox4 );
			 this->Controls->Add ( this->pictureBox5 );
			 this->Controls->Add ( this->button2 );
			 this->Controls->Add ( this->label3 );
			 this->Controls->Add ( this->Visota_0 );
			 this->Controls->Add ( this->pictureBox6 );
			 this->Controls->Add ( this->button1 );
			 this->Controls->Add ( this->pictureBox7 );
			 this->Controls->Add ( this->pictureBox8 );
			 this->Controls->Add ( this->pictureBox19 );
			 this->Controls->Add ( this->pictureBox9 );
			 this->Controls->Add ( this->pictureBox18 );
			 this->Controls->Add ( this->pictureBox10 );
			 this->Controls->Add ( this->pictureBox17 );
			 this->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 8.25F, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
														  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->ForeColor = System::Drawing::SystemColors::ControlText;
			 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			 this->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->Name = L"Okno1";
			 this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->Text = L"Подсчет цена за ЛДПС by gafask";
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox9 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox10 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox17 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox18 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox19 ) )->EndInit ( );
			 this->ResumeLayout ( false );
			 this->PerformLayout ( );

			 }
#pragma endregion

		   int  size_y = 155, size_y_1 = 117, size_y_2 = 134, size_y_text_box = 131;
		   int m = 2;
		   
	
		   double  obshie_chislo_visota = 0;
		   double  obshie_chislo_shirina = 0;
		   double  obshie_chislo_kolichestvo = 0;
		   double  obshie_chislo_M2 = 0;
		   double  obshie_chislo_Kromka = 0;
	   
		 private: System::Void button1_Click_1 ( System::Object^ sender, System::EventArgs^ e )
			  {
					// array<TextBox^>^ Masiv_text_box_visota = gcnew array<TextBox^> ( MAX_PATH );// pereopredelenie FIX nado
//////////////////////////////////ЧЕРНЫЙ ЛИНИИ//////////////////////////
			  size_y += 36;
			  size_y_1 += 36;
			  size_y_text_box += 36;
			  PictureBox^ black_lines_1 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_1 );
			  black_lines_1->BackColor = System::Drawing::Color::Black;
			  black_lines_1->Location = System::Drawing::Point ( -2, size_y );
			  black_lines_1->Size = System::Drawing::Size ( 801, 11 );
			  this->Controls->Add ( black_lines_1 );

			  PictureBox^ black_lines_2 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_2 );
			  black_lines_2->BackColor = System::Drawing::Color::Black;
			  black_lines_2->Location = System::Drawing::Point ( 524, size_y_1 );
			  black_lines_2->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_2 );

			  PictureBox^ black_lines_3 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_3 );
			  black_lines_3->BackColor = System::Drawing::Color::Black;
			  black_lines_3->Location = System::Drawing::Point ( 46, size_y_1 );
			  black_lines_3->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_3 );


			  PictureBox^ black_lines_4 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_4 );
			  black_lines_4->BackColor = System::Drawing::Color::Black;
			  black_lines_4->Location = System::Drawing::Point ( 276, size_y_1 );
			  black_lines_4->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_4 );


			  PictureBox^ black_lines_5 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_5 );
			  black_lines_5->BackColor = System::Drawing::Color::Black;
			  black_lines_5->Location = System::Drawing::Point ( 689, size_y_1 );
			  black_lines_5->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_5 );

			  PictureBox^ black_lines_6 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_6 );
			  black_lines_6->BackColor = System::Drawing::Color::Black;
			  black_lines_6->Location = System::Drawing::Point ( 789, size_y_1 );
			  black_lines_6->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_6 );

			  PictureBox^ black_lines_7 = gcnew PictureBox ( );
			  //this->panel1->Controls->Add ( black_lines_7 );
			  black_lines_7->BackColor = System::Drawing::Color::Black;
			  black_lines_7->Location = System::Drawing::Point ( -2, size_y_1 );
			  black_lines_7->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_7 );

			  PictureBox^ black_lines_8 = gcnew PictureBox ( );
			  black_lines_8->BackColor = System::Drawing::Color::Black;
			  black_lines_8->Location = System::Drawing::Point ( 589, size_y_1 );
			  black_lines_8->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( black_lines_8 );
/////////////////////////////////////////////////////////////////////

			  Label^ Label_Text_Nomer = gcnew Label ( );
			  Label_Text_Nomer->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Label_Text_Nomer->Location = System::Drawing::Point ( 8, size_y_2 += 36 );
			  Label_Text_Nomer->Size = System::Drawing::Size ( 37, 18 );
			  Label_Text_Nomer->Text = ( m++ ).ToString ( );
			  Label_Text_Nomer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			  this->Controls->Add ( Label_Text_Nomer );

			 if(ves_masiva_box == 0){Masiv_text_box_visota[0] = Visota_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_shirina[0] = Shirina_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_kolishistvo[0] = Kolichestvo_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_M2[0] = M2_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_Kromka[0] = Kromka_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Shirina[0] = Kromka_box_visova_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Visota[0] = Kromka_box_shirina_0;}

			  ves_masiva_box++;

		  ///Visota
			  Masiv_text_box_visota[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_visota[ves_masiva_box]->Size = System::Drawing::Size ( 91, 28 );
			  Masiv_text_box_visota[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_visota[ves_masiva_box]->Location = System::Drawing::Point ( 57, size_y_text_box );
			  Masiv_text_box_visota[ves_masiva_box]->Text = "1";
			  Controls->Add ( Masiv_text_box_visota[ves_masiva_box] );
			  ///



			  ///Shirina
			  Masiv_text_box_shirina[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_shirina[ves_masiva_box]->Size = System::Drawing::Size ( 91, 28 );
			  Masiv_text_box_shirina[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_shirina[ves_masiva_box]->Location = System::Drawing::Point ( 286, size_y_text_box );
			  Masiv_text_box_shirina[ves_masiva_box]->Text = "1";
			  Controls->Add ( Masiv_text_box_shirina[ves_masiva_box] );
			  ///


			  ///Kolishistvo
			  Masiv_text_box_kolishistvo[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Size = System::Drawing::Size ( 52, 22 );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Location = System::Drawing::Point ( 535, size_y_text_box );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Text = "1";
			  Controls->Add ( Masiv_text_box_kolishistvo[ves_masiva_box] );
			  ///

			  ///M2
			  Masiv_text_box_M2[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_M2[ves_masiva_box]->Size = System::Drawing::Size ( 87, 23 );
			  Masiv_text_box_M2[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_M2[ves_masiva_box]->Location = System::Drawing::Point ( 600, size_y_text_box );
			  Masiv_text_box_M2[ves_masiva_box]->Text = "1";
			  Controls->Add ( Masiv_text_box_M2[ves_masiva_box] );
			  ///

			   ///Kromka
			  Masiv_text_box_Kromka[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_Kromka[ves_masiva_box]->Size = System::Drawing::Size ( 88, 23 );
			  Masiv_text_box_Kromka[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_Kromka[ves_masiva_box]->Location = System::Drawing::Point ( 700, size_y_text_box );
			  Masiv_text_box_Kromka[ves_masiva_box]->Text = "1";
			  Controls->Add ( Masiv_text_box_Kromka[ves_masiva_box] );
			  ///
			  
			
			 ///Kromka_shirina
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box] = gcnew ComboBox ( );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Size = System::Drawing::Size ( 91, 23 );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Location = System::Drawing::Point ( 184, size_y_text_box );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				   {
				   " ",L"/", L"//", 
				   } );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->FormattingEnabled = true;
			  Controls->Add ( Masiv_kombo_box_Kromka_Shirina[ves_masiva_box] );
			  ///

			   ///Kromka_visota
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box] = gcnew ComboBox ( );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->Size = System::Drawing::Size ( 91, 23 );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->Location = System::Drawing::Point ( 433, size_y_text_box );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->Items->AddRange ( gcnew cli::array< System::Object^  > ( 3 )
				   {
				   " ",L"/", L"//"
				   } );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->FormattingEnabled = true;
			  Controls->Add ( Masiv_kombo_box_Kromka_Visota[ves_masiva_box] );
			  ///


			  
				///Masiv_kombo_box_Kromka_Shirina
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Focus ( );//Для переноса фокуса









	}

	double cromka_otvet_shirina = 0;
	double cromka_otvet_visota = 0;
	double cromka_otvet = 0;

	double double_Money_LDSP = 0;
	double double_Money_KROMKA = 0;

	double double_obshie_Money_LDSP = 0;
	double double_stoimost_KROMKA = 0;

	 private: System::Void button2_Click ( System::Object^ sender, System::EventArgs^ e )
		  {    	

			 if(ves_masiva_box == 0){Masiv_text_box_visota[0] = Visota_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_shirina[0] = Shirina_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_kolishistvo[0] = Kolichestvo_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_M2[0] = M2_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_Kromka[0] = Kromka_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Shirina[0] = Kromka_box_shirina_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Visota[0] = Kromka_box_visova_0;}

			   for ( int j = 0 ; j <= ves_masiva_box; j++ )
					{		
					if( Proverka_na_BUKVI_V_Text_Box (Masiv_text_box_visota[j]) 
					 || Proverka_na_BUKVI_V_Text_Box ( Masiv_text_box_shirina[j] ) 
					 || Proverka_na_BUKVI_V_Text_Box ( Masiv_text_box_kolishistvo[j] ) 
					 || Proverka_na_BUKVI_V_Text_Box ( Money_LDSP_1 ) 
					 || Proverka_na_BUKVI_V_Text_Box ( Money_Kromka_1 )
					  )
						 {
						 MessageBox::Show( "Ошибка , запрещено использовать буквы , пустые строчки и любые другие символы кроме запитой !\n  Вместо точек ипользуйте запятые !\nСтрочка с ошибкой изменила цвет на крассный!" );						
						 break;
						 }
					else
						 {
						 double_Money_LDSP = System::Convert::ToDouble ( Money_LDSP_1->Text );
						 double_Money_KROMKA = System::Convert::ToDouble ( Money_Kromka_1->Text );


						 Masiv_text_box_visota[j]->BackColor = System::Drawing::SystemColors::Window;
						 Masiv_text_box_shirina[j]->BackColor = System::Drawing::SystemColors::Window;
						 Masiv_text_box_kolishistvo[j]->BackColor = System::Drawing::SystemColors::Window;


						 obshie_chislo_visota += System::Convert::ToDouble ( Masiv_text_box_visota[j]->Text );
						 obshie_chislo_shirina += System::Convert::ToDouble ( Masiv_text_box_shirina[j]->Text );
						 obshie_chislo_kolichestvo += System::Convert::ToInt64 ( Masiv_text_box_kolishistvo[j]->Text );
						 
						 
						 double Visota = System::Convert::ToDouble ( Masiv_text_box_visota[j]->Text );
						 double Shirina = System::Convert::ToDouble ( Masiv_text_box_shirina[j]->Text );
						 int Kolichestvo = System::Convert::ToInt64 ( Masiv_text_box_kolishistvo[j]->Text );
						 double M2 = ((Visota/1000)*(Shirina/1000)) * Kolichestvo;
						 Masiv_text_box_M2[j]->Text = System::Convert::ToString ( M2 );


						 


						 if( Masiv_kombo_box_Kromka_Shirina[j]->Text == ""){}
						 else if ( Masiv_kombo_box_Kromka_Shirina[j]->Text == "/" )
							  cromka_otvet_shirina += System::Convert::ToDouble( Masiv_text_box_shirina[j]->Text);
						 else if ( Masiv_kombo_box_Kromka_Shirina[j]->Text == "//" )					  
							  cromka_otvet_shirina += 2 * System::Convert::ToDouble ( Masiv_text_box_shirina[j]->Text );
							  
						 if( Masiv_kombo_box_Kromka_Visota[j]->Text == ""){}
						 else if ( Masiv_kombo_box_Kromka_Visota[j]->Text == "/" )
							  cromka_otvet_visota += System::Convert::ToDouble( Masiv_text_box_visota[j]->Text);
						 else if ( Masiv_kombo_box_Kromka_Visota[j]->Text == "//" )
							  cromka_otvet_visota += 2 * System::Convert::ToDouble ( Masiv_text_box_visota[j]->Text );
							  
						 cromka_otvet = ((cromka_otvet_visota/1000) + (cromka_otvet_shirina/1000)) * Kolichestvo;
						 Masiv_text_box_Kromka[j]->Text = System::Convert::ToString ( cromka_otvet );
						 cromka_otvet_shirina = 0;
						 cromka_otvet_visota = 0;
						 obshie_chislo_M2 += System::Convert::ToDouble ( Masiv_text_box_M2[j]->Text );
						 obshie_chislo_Kromka += System::Convert::ToDouble ( Masiv_text_box_Kromka[j]->Text );						 												 
						 }
					}			
		  
		  Otvet_visota->Text = System::Convert::ToString ( obshie_chislo_visota );
		  Otvet_shirina->Text = System::Convert::ToString ( obshie_chislo_shirina );
		  Otvet_kolichestvo->Text = System::Convert::ToString ( obshie_chislo_kolichestvo );
		  Obshie_M2->Text = System::Convert::ToString ( obshie_chislo_M2 );
		  Obshie_Kromka->Text = System::Convert::ToString ( obshie_chislo_Kromka );
		  //////////////////////////////////////////////////////////////////////////////////////////


		   double_obshie_Money_LDSP = obshie_chislo_M2     * double_Money_LDSP;
		   double_stoimost_KROMKA   = obshie_chislo_Kromka * double_Money_KROMKA;

		   Obshia_stoimost_LDSP->Text = System::Convert::ToString ( double_obshie_Money_LDSP );
		   Obshia_stoimost_KROMKA->Text = System::Convert::ToString ( double_stoimost_KROMKA );





		  double_obshie_Money_LDSP = 0;
		  double_stoimost_KROMKA = 0;
		  obshie_chislo_visota = 0;
		  obshie_chislo_shirina = 0;
		  obshie_chislo_kolichestvo = 0;
		  obshie_chislo_M2 = 0;
		  obshie_chislo_Kromka = 0;
		  }




};
}


