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
	 Name_Text_Box->BackColor = System::Drawing::Color::LightSteelBlue;
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
	 static unsigned int seed = time ( 0 );
	 seed = ( 8253729 * seed + 2396403 );
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
		 private: System::Windows::Forms::TextBox^ Obhie_money_1;

		 private: System::Windows::Forms::Label^ label10;
		 private: System::Windows::Forms::Button^ Delit_form;
		 private: array<ComboBox^>^ Masiv_kombo_box_Kromka_Visota;
		 private: array<PictureBox^>^ Masiv_linia_1;
		 private: array<PictureBox^>^ Masiv_linia_2;
		 private: array<PictureBox^>^ Masiv_linia_3;
		 private: array<PictureBox^>^ Masiv_linia_4;
		 private: array<PictureBox^>^ Masiv_linia_5;
		 private: array<PictureBox^>^ Masiv_linia_6;
		 private: array<PictureBox^>^ Masiv_linia_7;
		 private: array<PictureBox^>^ Masiv_linia_8;
		 private: array<Label^>^ Masiv_kolihestvo;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::PictureBox^ pictureBox2;
		private: System::Windows::Forms::PictureBox^ pictureBox11;
		private: System::Windows::Forms::PictureBox^ pictureBox12;
		private: System::Windows::Forms::PictureBox^ pictureBox13;
		private: System::Windows::Forms::PictureBox^ pictureBox14;
		private: System::Windows::Forms::PictureBox^ pictureBox15;
		private: System::Windows::Forms::PictureBox^ pictureBox16;
		private: System::Windows::Forms::PictureBox^ pictureBox20;
		private: System::Windows::Forms::PictureBox^ pictureBox21;
		private: System::Windows::Forms::PictureBox^ pictureBox22;
		private: System::Windows::Forms::PictureBox^ pictureBox23;

		private: System::Windows::Forms::PictureBox^ pictureBox25;
		private: System::Windows::Forms::PictureBox^ pictureBox26;
		private: System::Windows::Forms::PictureBox^ pictureBox24;
		 private: System::Windows::Forms::PictureBox^ pictureBox3;
		 private: System::Windows::Forms::PictureBox^ pictureBox5;
		 private: array<PictureBox^>^ Kartinka_1;
		 private: array<PictureBox^>^ Kartinka_2;
		 public:
	static Okno1^ TheInstance;
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
			Masiv_linia_1 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_2 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_3 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_4 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_5 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_6 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_7 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_linia_8 = gcnew array<PictureBox^> ( MAX_PATH );
			Masiv_kolihestvo = gcnew array<Label^> ( MAX_PATH );
			Kartinka_1 = gcnew array<PictureBox^> ( MAX_PATH );
			Kartinka_2 = gcnew array<PictureBox^> ( MAX_PATH );
			TheInstance = this;
		}
		System::ComponentModel::ComponentResourceManager^ resources = ( gcnew System::ComponentModel::ComponentResourceManager ( Okno1::typeid ) );

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
		 public: System::Windows::Forms::TextBox^ Otvet_visota;
		 private:




		 private: System::Windows::Forms::PictureBox^ pictureBox4;

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
			 this->pictureBox4 = ( gcnew System::Windows::Forms::PictureBox ( ) );
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
			 this->Obhie_money_1 = ( gcnew System::Windows::Forms::TextBox ( ) );
			 this->label10 = ( gcnew System::Windows::Forms::Label ( ) );
			 this->Delit_form = ( gcnew System::Windows::Forms::Button ( ) );
			 this->pictureBox1 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox2 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox11 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox12 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox13 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox14 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox15 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox16 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox20 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox21 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox22 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox23 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox24 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox25 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox26 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox3 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 this->pictureBox5 = ( gcnew System::Windows::Forms::PictureBox ( ) );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox9 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox10 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox17 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox18 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox19 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox11 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox12 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox13 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox14 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox15 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox16 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox20 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox21 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox22 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox23 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox24 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox25 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox26 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->BeginInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->BeginInit ( );
			 this->SuspendLayout ( );
			 // 
			 // button1
			 // 
			 this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->button1->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 12, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->button1->Location = System::Drawing::Point ( 483, 91 );
			 this->button1->Name = L"button1";
			 this->button1->Size = System::Drawing::Size ( 145, 61 );
			 this->button1->TabIndex = 285;
			 this->button1->Text = L"Добавить строку";
			 this->button1->UseVisualStyleBackColor = false;
			 this->button1->Click += gcnew System::EventHandler ( this, &Okno1::button1_Click_1 );
			 // 
			 // button2
			 // 
			 this->button2->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->button2->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 12, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->button2->Location = System::Drawing::Point ( 331, 91 );
			 this->button2->Name = L"button2";
			 this->button2->Size = System::Drawing::Size ( 145, 61 );
			 this->button2->TabIndex = 309;
			 this->button2->Text = L"ПОДСЧИТАТЬ";
			 this->button2->UseVisualStyleBackColor = false;
			 this->button2->Click += gcnew System::EventHandler ( this, &Okno1::button2_Click );
			 // 
			 // Otvet_visota
			 // 
			 this->Otvet_visota->BackColor = System::Drawing::Color::SlateGray;
			 this->Otvet_visota->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_visota->Location = System::Drawing::Point ( 138, 214 );
			 this->Otvet_visota->Name = L"Otvet_visota";
			 this->Otvet_visota->Size = System::Drawing::Size ( 89, 23 );
			 this->Otvet_visota->TabIndex = 310;
			 this->Otvet_visota->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // pictureBox4
			 // 
			 this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlText;
			 this->pictureBox4->Location = System::Drawing::Point ( 9, 238 );
			 this->pictureBox4->Name = L"pictureBox4";
			 this->pictureBox4->Size = System::Drawing::Size ( 781, 11 );
			 this->pictureBox4->TabIndex = 316;
			 this->pictureBox4->TabStop = false;
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->BackColor = System::Drawing::Color::DimGray;
			 this->label3->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 15, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label3->Location = System::Drawing::Point ( 13, 248 );
			 this->label3->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size ( 49, 25 );
			 this->label3->TabIndex = 308;
			 this->label3->Text = L"  1  ";
			 this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Visota_0
			 // 
			 this->Visota_0->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Visota_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Visota_0->Location = System::Drawing::Point ( 68, 249 );
			 this->Visota_0->Name = L"Visota_0";
			 this->Visota_0->Size = System::Drawing::Size ( 97, 23 );
			 this->Visota_0->TabIndex = 318;
			 this->Visota_0->Text = L"1";
			 // 
			 // pictureBox6
			 // 
			 this->pictureBox6->BackColor = System::Drawing::Color::Black;
			 this->pictureBox6->Location = System::Drawing::Point ( 287, 240 );
			 this->pictureBox6->Name = L"pictureBox6";
			 this->pictureBox6->Size = System::Drawing::Size ( 10, 40 );
			 this->pictureBox6->TabIndex = 310;
			 this->pictureBox6->TabStop = false;
			 // 
			 // pictureBox7
			 // 
			 this->pictureBox7->BackColor = System::Drawing::Color::Black;
			 this->pictureBox7->Location = System::Drawing::Point ( 9, 272 );
			 this->pictureBox7->Name = L"pictureBox7";
			 this->pictureBox7->Size = System::Drawing::Size ( 781, 11 );
			 this->pictureBox7->TabIndex = 317;
			 this->pictureBox7->TabStop = false;
			 // 
			 // pictureBox8
			 // 
			 this->pictureBox8->BackColor = System::Drawing::Color::Black;
			 this->pictureBox8->Location = System::Drawing::Point ( 515, 239 );
			 this->pictureBox8->Name = L"pictureBox8";
			 this->pictureBox8->Size = System::Drawing::Size ( 10, 39 );
			 this->pictureBox8->TabIndex = 311;
			 this->pictureBox8->TabStop = false;
			 // 
			 // pictureBox9
			 // 
			 this->pictureBox9->BackColor = System::Drawing::Color::Black;
			 this->pictureBox9->Location = System::Drawing::Point ( 580, 240 );
			 this->pictureBox9->Name = L"pictureBox9";
			 this->pictureBox9->Size = System::Drawing::Size ( 10, 43 );
			 this->pictureBox9->TabIndex = 312;
			 this->pictureBox9->TabStop = false;
			 // 
			 // pictureBox10
			 // 
			 this->pictureBox10->BackColor = System::Drawing::Color::Black;
			 this->pictureBox10->Location = System::Drawing::Point ( 9, 240 );
			 this->pictureBox10->Name = L"pictureBox10";
			 this->pictureBox10->Size = System::Drawing::Size ( 10, 40 );
			 this->pictureBox10->TabIndex = 309;
			 this->pictureBox10->TabStop = false;
			 // 
			 // pictureBox17
			 // 
			 this->pictureBox17->BackColor = System::Drawing::Color::Black;
			 this->pictureBox17->Location = System::Drawing::Point ( 680, 240 );
			 this->pictureBox17->Name = L"pictureBox17";
			 this->pictureBox17->Size = System::Drawing::Size ( 10, 40 );
			 this->pictureBox17->TabIndex = 313;
			 this->pictureBox17->TabStop = false;
			 // 
			 // pictureBox18
			 // 
			 this->pictureBox18->BackColor = System::Drawing::Color::Black;
			 this->pictureBox18->Location = System::Drawing::Point ( 57, 240 );
			 this->pictureBox18->Name = L"pictureBox18";
			 this->pictureBox18->Size = System::Drawing::Size ( 10, 40 );
			 this->pictureBox18->TabIndex = 315;
			 this->pictureBox18->TabStop = false;
			 // 
			 // pictureBox19
			 // 
			 this->pictureBox19->BackColor = System::Drawing::Color::Black;
			 this->pictureBox19->Location = System::Drawing::Point ( 780, 240 );
			 this->pictureBox19->Name = L"pictureBox19";
			 this->pictureBox19->Size = System::Drawing::Size ( 10, 40 );
			 this->pictureBox19->TabIndex = 314;
			 this->pictureBox19->TabStop = false;
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label1->Location = System::Drawing::Point ( 153, 195 );
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
			 this->label2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label2->Location = System::Drawing::Point ( 382, 195 );
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
			 this->label4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label4->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label4->Location = System::Drawing::Point ( 508, 195 );
			 this->label4->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size ( 88, 18 );
			 this->label4->TabIndex = 323;
			 this->label4->Text = L"Количество";
			 this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Shirina_0
			 // 
			 this->Shirina_0->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Shirina_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Shirina_0->Location = System::Drawing::Point ( 297, 249 );
			 this->Shirina_0->Name = L"Shirina_0";
			 this->Shirina_0->Size = System::Drawing::Size ( 97, 23 );
			 this->Shirina_0->TabIndex = 324;
			 this->Shirina_0->Text = L"1";
			 // 
			 // Kolichestvo_0
			 // 
			 this->Kolichestvo_0->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Kolichestvo_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Kolichestvo_0->Location = System::Drawing::Point ( 526, 249 );
			 this->Kolichestvo_0->Name = L"Kolichestvo_0";
			 this->Kolichestvo_0->Size = System::Drawing::Size ( 52, 23 );
			 this->Kolichestvo_0->TabIndex = 325;
			 this->Kolichestvo_0->Text = L"1";
			 // 
			 // Otvet_shirina
			 // 
			 this->Otvet_shirina->BackColor = System::Drawing::Color::SlateGray;
			 this->Otvet_shirina->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_shirina->Location = System::Drawing::Point ( 368, 214 );
			 this->Otvet_shirina->Name = L"Otvet_shirina";
			 this->Otvet_shirina->Size = System::Drawing::Size ( 89, 23 );
			 this->Otvet_shirina->TabIndex = 326;
			 this->Otvet_shirina->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // Otvet_kolichestvo
			 // 
			 this->Otvet_kolichestvo->BackColor = System::Drawing::Color::SlateGray;
			 this->Otvet_kolichestvo->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																			 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_kolichestvo->Location = System::Drawing::Point ( 526, 214 );
			 this->Otvet_kolichestvo->Name = L"Otvet_kolichestvo";
			 this->Otvet_kolichestvo->Size = System::Drawing::Size ( 52, 23 );
			 this->Otvet_kolichestvo->TabIndex = 327;
			 this->Otvet_kolichestvo->Text = L"1";
			 this->Otvet_kolichestvo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // Kromka_box_visova_0
			 // 
			 this->Kromka_box_visova_0->BackColor = System::Drawing::Color::DimGray;
			 this->Kromka_box_visova_0->FormattingEnabled = true;
			 this->Kromka_box_visova_0->Items->AddRange ( gcnew cli::array< System::Object^  > ( 2 )
				  {
				  L"/", L"//"
				  } );
			 this->Kromka_box_visova_0->Location = System::Drawing::Point ( 195, 249 );
			 this->Kromka_box_visova_0->Name = L"Kromka_box_visova_0";
			 this->Kromka_box_visova_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Kromka_box_visova_0->TabIndex = 328;
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label5->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label5->Location = System::Drawing::Point ( 622, 195 );
			 this->label5->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size ( 29, 18 );
			 this->label5->TabIndex = 329;
			 this->label5->Text = L"М2";
			 this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshie_M2
			 // 
			 this->Obshie_M2->BackColor = System::Drawing::Color::SlateGray;
			 this->Obshie_M2->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshie_M2->Location = System::Drawing::Point ( 591, 214 );
			 this->Obshie_M2->Name = L"Obshie_M2";
			 this->Obshie_M2->Size = System::Drawing::Size ( 87, 23 );
			 this->Obshie_M2->TabIndex = 330;
			 this->Obshie_M2->Text = L"1";
			 this->Obshie_M2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // M2_0
			 // 
			 this->M2_0->BackColor = System::Drawing::Color::DimGray;
			 this->M2_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->M2_0->Location = System::Drawing::Point ( 591, 249 );
			 this->M2_0->Name = L"M2_0";
			 this->M2_0->Size = System::Drawing::Size ( 87, 23 );
			 this->M2_0->TabIndex = 331;
			 this->M2_0->Text = L"1";
			 // 
			 // Kromka_0
			 // 
			 this->Kromka_0->BackColor = System::Drawing::Color::DimGray;
			 this->Kromka_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Kromka_0->Location = System::Drawing::Point ( 691, 249 );
			 this->Kromka_0->Name = L"Kromka_0";
			 this->Kromka_0->Size = System::Drawing::Size ( 88, 23 );
			 this->Kromka_0->TabIndex = 332;
			 this->Kromka_0->Text = L"1";
			 // 
			 // afsfsldkflk
			 // 
			 this->afsfsldkflk->AutoSize = true;
			 this->afsfsldkflk->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->afsfsldkflk->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																	   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->afsfsldkflk->Location = System::Drawing::Point ( 704, 195 );
			 this->afsfsldkflk->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->afsfsldkflk->Name = L"afsfsldkflk";
			 this->afsfsldkflk->Size = System::Drawing::Size ( 60, 18 );
			 this->afsfsldkflk->TabIndex = 333;
			 this->afsfsldkflk->Text = L"Кромка";
			 this->afsfsldkflk->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshie_Kromka
			 // 
			 this->Obshie_Kromka->BackColor = System::Drawing::Color::SlateGray;
			 this->Obshie_Kromka->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshie_Kromka->Location = System::Drawing::Point ( 691, 214 );
			 this->Obshie_Kromka->Name = L"Obshie_Kromka";
			 this->Obshie_Kromka->Size = System::Drawing::Size ( 88, 23 );
			 this->Obshie_Kromka->TabIndex = 334;
			 this->Obshie_Kromka->Text = L"1";
			 this->Obshie_Kromka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // Kromka_box_shirina_0
			 // 
			 this->Kromka_box_shirina_0->BackColor = System::Drawing::Color::DimGray;
			 this->Kromka_box_shirina_0->FormattingEnabled = true;
			 this->Kromka_box_shirina_0->Items->AddRange ( gcnew cli::array< System::Object^  > ( 2 )
				  {
				  L"/", L"//"
				  } );
			 this->Kromka_box_shirina_0->Location = System::Drawing::Point ( 424, 249 );
			 this->Kromka_box_shirina_0->Name = L"Kromka_box_shirina_0";
			 this->Kromka_box_shirina_0->Size = System::Drawing::Size ( 91, 23 );
			 this->Kromka_box_shirina_0->TabIndex = 335;
			 // 
			 // Money_LDSP_1
			 // 
			 this->Money_LDSP_1->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Money_LDSP_1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Money_LDSP_1->ForeColor = System::Drawing::Color::Black;
			 this->Money_LDSP_1->Location = System::Drawing::Point ( 483, 42 );
			 this->Money_LDSP_1->Name = L"Money_LDSP_1";
			 this->Money_LDSP_1->Size = System::Drawing::Size ( 180, 23 );
			 this->Money_LDSP_1->TabIndex = 336;
			 this->Money_LDSP_1->Text = L"830";
			 this->Money_LDSP_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label6->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label6->Location = System::Drawing::Point ( 485, 65 );
			 this->label6->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size ( 178, 18 );
			 this->label6->TabIndex = 337;
			 this->label6->Text = L"   Цена ЛДСП за метр    ";
			 this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // label7
			 // 
			 this->label7->AutoSize = true;
			 this->label7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label7->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label7->Location = System::Drawing::Point ( 145, 64 );
			 this->label7->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size ( 176, 18 );
			 this->label7->TabIndex = 338;
			 this->label7->Text = L"Цена за кромки за метр";
			 this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Money_Kromka_1
			 // 
			 this->Money_Kromka_1->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Money_Kromka_1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Money_Kromka_1->Location = System::Drawing::Point ( 143, 42 );
			 this->Money_Kromka_1->Name = L"Money_Kromka_1";
			 this->Money_Kromka_1->Size = System::Drawing::Size ( 182, 23 );
			 this->Money_Kromka_1->TabIndex = 339;
			 this->Money_Kromka_1->Text = L"50";
			 this->Money_Kromka_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // Obshia_stoimost_KROMKA
			 // 
			 this->Obshia_stoimost_KROMKA->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Obshia_stoimost_KROMKA->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																				  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshia_stoimost_KROMKA->Location = System::Drawing::Point ( 308, 13 );
			 this->Obshia_stoimost_KROMKA->Name = L"Obshia_stoimost_KROMKA";
			 this->Obshia_stoimost_KROMKA->Size = System::Drawing::Size ( 89, 23 );
			 this->Obshia_stoimost_KROMKA->TabIndex = 343;
			 // 
			 // label8
			 // 
			 this->label8->AutoSize = true;
			 this->label8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label8->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label8->Location = System::Drawing::Point ( 111, 15 );
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
			 this->label9->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label9->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label9->Location = System::Drawing::Point ( 494, 15 );
			 this->label9->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label9->Name = L"label9";
			 this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->label9->Size = System::Drawing::Size ( 194, 18 );
			 this->label9->TabIndex = 341;
			 this->label9->Text = L"Общая стоимость     ЛДСП";
			 this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Obshia_stoimost_LDSP
			 // 
			 this->Obshia_stoimost_LDSP->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Obshia_stoimost_LDSP->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																				System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obshia_stoimost_LDSP->Location = System::Drawing::Point ( 405, 13 );
			 this->Obshia_stoimost_LDSP->Name = L"Obshia_stoimost_LDSP";
			 this->Obshia_stoimost_LDSP->Size = System::Drawing::Size ( 89, 23 );
			 this->Obshia_stoimost_LDSP->TabIndex = 340;
			 // 
			 // Obhie_money_1
			 // 
			 this->Obhie_money_1->BackColor = System::Drawing::Color::LightSteelBlue;
			 this->Obhie_money_1->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Obhie_money_1->Location = System::Drawing::Point ( 331, 42 );
			 this->Obhie_money_1->Name = L"Obhie_money_1";
			 this->Obhie_money_1->Size = System::Drawing::Size ( 145, 23 );
			 this->Obhie_money_1->TabIndex = 345;
			 this->Obhie_money_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			 // 
			 // label10
			 // 
			 this->label10->AutoSize = true;
			 this->label10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->label10->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																   System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->label10->Location = System::Drawing::Point ( 331, 65 );
			 this->label10->Margin = System::Windows::Forms::Padding ( 2, 0, 2, 0 );
			 this->label10->Name = L"label10";
			 this->label10->Size = System::Drawing::Size ( 145, 18 );
			 this->label10->TabIndex = 344;
			 this->label10->Text = L"Общая цена заказа";
			 this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			 // 
			 // Delit_form
			 // 
			 this->Delit_form->BackColor = System::Drawing::SystemColors::AppWorkspace;
			 this->Delit_form->Font = ( gcnew System::Drawing::Font ( L"Segoe UI Black", 9, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ) ) );
			 this->Delit_form->Location = System::Drawing::Point ( 172, 91 );
			 this->Delit_form->Name = L"Delit_form";
			 this->Delit_form->Size = System::Drawing::Size ( 151, 61 );
			 this->Delit_form->TabIndex = 346;
			 this->Delit_form->Text = L"Удалить последнию  строку";
			 this->Delit_form->UseVisualStyleBackColor = false;
			 this->Delit_form->Click += gcnew System::EventHandler ( this, &Okno1::Delit_form_Click );
			 // 
			 // pictureBox1
			 // 
			 this->pictureBox1->BackColor = System::Drawing::Color::Black;
			 this->pictureBox1->Location = System::Drawing::Point ( 137, 82 );
			 this->pictureBox1->Name = L"pictureBox1";
			 this->pictureBox1->Size = System::Drawing::Size ( 536, 10 );
			 this->pictureBox1->TabIndex = 347;
			 this->pictureBox1->TabStop = false;
			 // 
			 // pictureBox2
			 // 
			 this->pictureBox2->BackColor = System::Drawing::Color::Black;
			 this->pictureBox2->Location = System::Drawing::Point ( 104, 5 );
			 this->pictureBox2->Name = L"pictureBox2";
			 this->pictureBox2->Size = System::Drawing::Size ( 592, 10 );
			 this->pictureBox2->TabIndex = 348;
			 this->pictureBox2->TabStop = false;
			 // 
			 // pictureBox11
			 // 
			 this->pictureBox11->BackColor = System::Drawing::Color::Black;
			 this->pictureBox11->Location = System::Drawing::Point ( 103, 33 );
			 this->pictureBox11->Name = L"pictureBox11";
			 this->pictureBox11->Size = System::Drawing::Size ( 593, 10 );
			 this->pictureBox11->TabIndex = 349;
			 this->pictureBox11->TabStop = false;
			 // 
			 // pictureBox12
			 // 
			 this->pictureBox12->BackColor = System::Drawing::Color::Black;
			 this->pictureBox12->Location = System::Drawing::Point ( 396, 9 );
			 this->pictureBox12->Name = L"pictureBox12";
			 this->pictureBox12->Size = System::Drawing::Size ( 10, 30 );
			 this->pictureBox12->TabIndex = 350;
			 this->pictureBox12->TabStop = false;
			 // 
			 // pictureBox13
			 // 
			 this->pictureBox13->BackColor = System::Drawing::Color::Black;
			 this->pictureBox13->Location = System::Drawing::Point ( 322, 42 );
			 this->pictureBox13->Name = L"pictureBox13";
			 this->pictureBox13->Size = System::Drawing::Size ( 10, 53 );
			 this->pictureBox13->TabIndex = 351;
			 this->pictureBox13->TabStop = false;
			 // 
			 // pictureBox14
			 // 
			 this->pictureBox14->BackColor = System::Drawing::Color::Black;
			 this->pictureBox14->Location = System::Drawing::Point ( 475, 42 );
			 this->pictureBox14->Name = L"pictureBox14";
			 this->pictureBox14->Size = System::Drawing::Size ( 10, 54 );
			 this->pictureBox14->TabIndex = 352;
			 this->pictureBox14->TabStop = false;
			 // 
			 // pictureBox15
			 // 
			 this->pictureBox15->BackColor = System::Drawing::Color::Black;
			 this->pictureBox15->Location = System::Drawing::Point ( 103, 5 );
			 this->pictureBox15->Name = L"pictureBox15";
			 this->pictureBox15->Size = System::Drawing::Size ( 10, 38 );
			 this->pictureBox15->TabIndex = 353;
			 this->pictureBox15->TabStop = false;
			 // 
			 // pictureBox16
			 // 
			 this->pictureBox16->BackColor = System::Drawing::Color::Black;
			 this->pictureBox16->Location = System::Drawing::Point ( 686, 5 );
			 this->pictureBox16->Name = L"pictureBox16";
			 this->pictureBox16->Size = System::Drawing::Size ( 10, 37 );
			 this->pictureBox16->TabIndex = 354;
			 this->pictureBox16->TabStop = false;
			 // 
			 // pictureBox20
			 // 
			 this->pictureBox20->BackColor = System::Drawing::Color::Black;
			 this->pictureBox20->Location = System::Drawing::Point ( 322, 91 );
			 this->pictureBox20->Name = L"pictureBox20";
			 this->pictureBox20->Size = System::Drawing::Size ( 10, 66 );
			 this->pictureBox20->TabIndex = 355;
			 this->pictureBox20->TabStop = false;
			 // 
			 // pictureBox21
			 // 
			 this->pictureBox21->BackColor = System::Drawing::Color::Black;
			 this->pictureBox21->Location = System::Drawing::Point ( 475, 86 );
			 this->pictureBox21->Name = L"pictureBox21";
			 this->pictureBox21->Size = System::Drawing::Size ( 10, 69 );
			 this->pictureBox21->TabIndex = 356;
			 this->pictureBox21->TabStop = false;
			 // 
			 // pictureBox22
			 // 
			 this->pictureBox22->BackColor = System::Drawing::Color::Black;
			 this->pictureBox22->Location = System::Drawing::Point ( 163, 151 );
			 this->pictureBox22->Name = L"pictureBox22";
			 this->pictureBox22->Size = System::Drawing::Size ( 475, 10 );
			 this->pictureBox22->TabIndex = 357;
			 this->pictureBox22->TabStop = false;
			 // 
			 // pictureBox23
			 // 
			 this->pictureBox23->BackColor = System::Drawing::Color::Black;
			 this->pictureBox23->Location = System::Drawing::Point ( 163, 82 );
			 this->pictureBox23->Name = L"pictureBox23";
			 this->pictureBox23->Size = System::Drawing::Size ( 10, 79 );
			 this->pictureBox23->TabIndex = 358;
			 this->pictureBox23->TabStop = false;
			 // 
			 // pictureBox24
			 // 
			 this->pictureBox24->BackColor = System::Drawing::Color::Black;
			 this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Default;
			 this->pictureBox24->Location = System::Drawing::Point ( 628, 82 );
			 this->pictureBox24->Margin = System::Windows::Forms::Padding ( 0 );
			 this->pictureBox24->Name = L"pictureBox24";
			 this->pictureBox24->Size = System::Drawing::Size ( 10, 79 );
			 this->pictureBox24->TabIndex = 359;
			 this->pictureBox24->TabStop = false;
			 // 
			 // pictureBox25
			 // 
			 this->pictureBox25->BackColor = System::Drawing::Color::Black;
			 this->pictureBox25->Location = System::Drawing::Point ( 137, 42 );
			 this->pictureBox25->Name = L"pictureBox25";
			 this->pictureBox25->Size = System::Drawing::Size ( 10, 50 );
			 this->pictureBox25->TabIndex = 360;
			 this->pictureBox25->TabStop = false;
			 // 
			 // pictureBox26
			 // 
			 this->pictureBox26->BackColor = System::Drawing::Color::Black;
			 this->pictureBox26->Location = System::Drawing::Point ( 662, 42 );
			 this->pictureBox26->Name = L"pictureBox26";
			 this->pictureBox26->Size = System::Drawing::Size ( 10, 50 );
			 this->pictureBox26->TabIndex = 361;
			 this->pictureBox26->TabStop = false;
			 // 
			 // pictureBox3
			 // 
			 this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox3->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox3.Image" ) ) );
			 this->pictureBox3->Location = System::Drawing::Point ( 395, 249 );
			 this->pictureBox3->Margin = System::Windows::Forms::Padding ( 0 );
			 this->pictureBox3->Name = L"pictureBox3";
			 this->pictureBox3->Size = System::Drawing::Size ( 28, 23 );
			 this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox3->TabIndex = 362;
			 this->pictureBox3->TabStop = false;
			 // 
			 // pictureBox5
			 // 
			 this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			 this->pictureBox5->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox5.Image" ) ) );
			 this->pictureBox5->Location = System::Drawing::Point ( 165, 249 );
			 this->pictureBox5->Margin = System::Windows::Forms::Padding ( 0 );
			 this->pictureBox5->Name = L"pictureBox5";
			 this->pictureBox5->Size = System::Drawing::Size ( 28, 23 );
			 this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			 this->pictureBox5->TabIndex = 363;
			 this->pictureBox5->TabStop = false;
			 // 
			 // Okno1
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF ( 96, 96 );
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			 this->AutoScroll = true;
			 this->AutoSize = true;
			 this->BackColor = System::Drawing::SystemColors::WindowFrame;
			 this->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"$this.BackgroundImage" ) ) );
			 this->ClientSize = System::Drawing::Size ( 802, 825 );
			 this->Controls->Add ( this->pictureBox3 );
			 this->Controls->Add ( this->pictureBox7 );
			 this->Controls->Add ( this->pictureBox22 );
			 this->Controls->Add ( this->pictureBox2 );
			 this->Controls->Add ( this->pictureBox11 );
			 this->Controls->Add ( this->pictureBox1 );
			 this->Controls->Add ( this->pictureBox26 );
			 this->Controls->Add ( this->pictureBox25 );
			 this->Controls->Add ( this->pictureBox24 );
			 this->Controls->Add ( this->pictureBox23 );
			 this->Controls->Add ( this->pictureBox21 );
			 this->Controls->Add ( this->pictureBox20 );
			 this->Controls->Add ( this->label9 );
			 this->Controls->Add ( this->pictureBox14 );
			 this->Controls->Add ( this->pictureBox13 );
			 this->Controls->Add ( this->pictureBox12 );
			 this->Controls->Add ( this->Delit_form );
			 this->Controls->Add ( this->Obhie_money_1 );
			 this->Controls->Add ( this->label10 );
			 this->Controls->Add ( this->label8 );
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
			 this->Controls->Add ( this->Otvet_visota );
			 this->Controls->Add ( this->pictureBox4 );
			 this->Controls->Add ( this->button2 );
			 this->Controls->Add ( this->Visota_0 );
			 this->Controls->Add ( this->pictureBox6 );
			 this->Controls->Add ( this->button1 );
			 this->Controls->Add ( this->pictureBox8 );
			 this->Controls->Add ( this->pictureBox19 );
			 this->Controls->Add ( this->pictureBox9 );
			 this->Controls->Add ( this->pictureBox18 );
			 this->Controls->Add ( this->pictureBox10 );
			 this->Controls->Add ( this->pictureBox17 );
			 this->Controls->Add ( this->Obshia_stoimost_LDSP );
			 this->Controls->Add ( this->Obshia_stoimost_KROMKA );
			 this->Controls->Add ( this->label3 );
			 this->Controls->Add ( this->pictureBox15 );
			 this->Controls->Add ( this->pictureBox16 );
			 this->Controls->Add ( this->pictureBox5 );
			 this->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 8.25F, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
														  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->ForeColor = System::Drawing::SystemColors::ControlText;
			 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			 this->Margin = System::Windows::Forms::Padding ( 2, 1, 2, 1 );
			 this->Name = L"Okno1";
			 this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			 this->Text = L"Подсчет цена за ЛДПС by gafask";
			 this->Load += gcnew System::EventHandler ( this, &Okno1::Okno1_Load );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox4 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox6 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox7 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox8 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox9 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox10 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox17 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox18 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox19 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox1 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox2 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox11 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox12 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox13 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox14 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox15 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox16 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox20 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox21 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox22 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox23 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox24 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox25 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox26 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox3 ) )->EndInit ( );
			 ( cli::safe_cast< System::ComponentModel::ISupportInitialize^ >( this->pictureBox5 ) )->EndInit ( );
			 this->ResumeLayout ( false );
			 this->PerformLayout ( );

			 }
#pragma endregion

		   int  size_y = 272, size_y_1 = 234, size_y_2 = 248, size_y_text_box = 249;
		   int m = 2;
		   
	
		   double  obshie_chislo_visota = 0;
		   double  obshie_chislo_shirina = 0;
		   double  obshie_chislo_kolichestvo = 0;
		   double  obshie_chislo_M2 = 0;
		   double  obshie_chislo_Kromka = 0;
	   
		 private: System::Void button1_Click_1 ( System::Object^ sender, System::EventArgs^ e )
			  {
			 if(ves_masiva_box == 0){Masiv_text_box_visota[0] = Visota_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_shirina[0] = Shirina_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_kolishistvo[0] = Kolichestvo_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_M2[0] = M2_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_Kromka[0] = Kromka_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Shirina[0] = Kromka_box_visova_0;}
			 if(ves_masiva_box == 0){Masiv_kombo_box_Kromka_Visota[0] = Kromka_box_shirina_0;}

			  ves_masiva_box++;
//////////////////////////////////ЧЕРНЫЙ ЛИНИИ//////////////////////////
			  size_y += 34;
			  size_y_1 += 34;
			  size_y_text_box += 34;
			  size_y_2 += 34;
			  Masiv_linia_1[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_1[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_1[ves_masiva_box]->Location = System::Drawing::Point ( 9, size_y );
			  Masiv_linia_1[ves_masiva_box]->Size = System::Drawing::Size ( 781, 11 );
			  this->Controls->Add ( Masiv_linia_1[ves_masiva_box] );

			  Masiv_linia_2[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_2[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_2[ves_masiva_box]->Location = System::Drawing::Point ( 515, size_y_1 );
			  Masiv_linia_2[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_2[ves_masiva_box] );

			  Masiv_linia_3[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_3[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_3[ves_masiva_box]->Location = System::Drawing::Point ( 57, size_y_1 );//
			  Masiv_linia_3[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_3[ves_masiva_box] );


			  Masiv_linia_4[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_4[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_4[ves_masiva_box]->Location = System::Drawing::Point ( 287, size_y_1 );//
			  Masiv_linia_4[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_4[ves_masiva_box] );


			  Masiv_linia_5[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_5[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_5[ves_masiva_box]->Location = System::Drawing::Point ( 680, size_y_1 );
			  Masiv_linia_5[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_5[ves_masiva_box] );

			  Masiv_linia_6[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_6[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_6[ves_masiva_box]->Location = System::Drawing::Point ( 780, size_y_1 );
			  Masiv_linia_6[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_6[ves_masiva_box] );

			  Masiv_linia_7[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_7[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_7[ves_masiva_box]->Location = System::Drawing::Point ( 9, size_y_1 );//
			  Masiv_linia_7[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_7[ves_masiva_box] );

			  Masiv_linia_8[ves_masiva_box] = gcnew PictureBox ( );
			  Masiv_linia_8[ves_masiva_box]->BackColor = System::Drawing::Color::Black;
			  Masiv_linia_8[ves_masiva_box]->Location = System::Drawing::Point ( 579, size_y_1 );
			  Masiv_linia_8[ves_masiva_box]->Size = System::Drawing::Size ( 10, 45 );
			  this->Controls->Add ( Masiv_linia_8[ves_masiva_box] );
/////////////////////////////////////////////////////////////////////
								   //nomer
			  Masiv_kolihestvo[ves_masiva_box] = gcnew Label ( );
			  Masiv_kolihestvo[ves_masiva_box]->BackColor = System::Drawing::Color::DimGray;
			  Masiv_kolihestvo[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 15, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
			  System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_kolihestvo[ves_masiva_box]->Location = System::Drawing::Point ( 12, size_y_2 );
			  Masiv_kolihestvo[ves_masiva_box]->Size = System::Drawing::Size ( 49, 25 );
			  Masiv_kolihestvo[ves_masiva_box]->Text = ( m++ ).ToString ( );
			  Masiv_kolihestvo[ves_masiva_box]->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			  this->Controls->Add ( Masiv_kolihestvo[ves_masiva_box] );
/////////////////////////////////////////////////////////////////////

		  //Kartinka
			  Kartinka_1[ves_masiva_box] = gcnew PictureBox ( );
			  Kartinka_1[ves_masiva_box]->BackColor = System::Drawing::Color::Transparent;
			  Kartinka_1[ves_masiva_box]->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox3.Image" ) ) );
			  Kartinka_1[ves_masiva_box]->Location = System::Drawing::Point ( 395, size_y_2 );
			  Kartinka_1[ves_masiva_box]->Margin = System::Windows::Forms::Padding ( 0 );
			  Kartinka_1[ves_masiva_box]->Size = System::Drawing::Size ( 28, 25 );
			  Kartinka_1[ves_masiva_box]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  Kartinka_1[ves_masiva_box]->TabIndex = 362;
			  Kartinka_1[ves_masiva_box]->TabStop = false;
			  Controls->Add ( Kartinka_1[ves_masiva_box] );

			  Kartinka_2[ves_masiva_box] = gcnew PictureBox ( );
			  Kartinka_2[ves_masiva_box]->BackColor = System::Drawing::Color::Transparent;
			  Kartinka_2[ves_masiva_box]->Image = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"pictureBox3.Image" ) ) );
			  Kartinka_2[ves_masiva_box]->Location = System::Drawing::Point ( 165, size_y_2 );
			  Kartinka_2[ves_masiva_box]->Margin = System::Windows::Forms::Padding ( 0 );
			  Kartinka_2[ves_masiva_box]->Size = System::Drawing::Size ( 28, 25 );
			  Kartinka_2[ves_masiva_box]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			  Kartinka_2[ves_masiva_box]->TabIndex = 362;
			  Kartinka_2[ves_masiva_box]->TabStop = false;
			  Controls->Add ( Kartinka_2[ves_masiva_box] );

		  ///Visota
			  Masiv_text_box_visota[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_visota[ves_masiva_box]->Size = System::Drawing::Size ( 97, 23 );
			  Masiv_text_box_visota[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_visota[ves_masiva_box]->Location = System::Drawing::Point ( 67, size_y_text_box );
			  Masiv_text_box_visota[ves_masiva_box]->Text = "1";
			  Masiv_text_box_visota[ves_masiva_box]->BackColor = System::Drawing::Color::LightSteelBlue;
			  Controls->Add ( Masiv_text_box_visota[ves_masiva_box] );
			  ///



			  ///Shirina
			  Masiv_text_box_shirina[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_shirina[ves_masiva_box]->Size = System::Drawing::Size ( 97, 23 );
			  Masiv_text_box_shirina[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_shirina[ves_masiva_box]->Location = System::Drawing::Point ( 296, size_y_text_box );
			  Masiv_text_box_shirina[ves_masiva_box]->Text = "1";
			  Masiv_text_box_shirina[ves_masiva_box]->BackColor = System::Drawing::Color::LightSteelBlue;
			  Controls->Add ( Masiv_text_box_shirina[ves_masiva_box] );
			  ///


			  ///Kolishistvo
			  Masiv_text_box_kolishistvo[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Size = System::Drawing::Size ( 52, 22 );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Location = System::Drawing::Point ( 525, size_y_text_box );
			  Masiv_text_box_kolishistvo[ves_masiva_box]->Text = "1";
			  Masiv_text_box_kolishistvo[ves_masiva_box]->BackColor = System::Drawing::Color::LightSteelBlue;
			  Controls->Add ( Masiv_text_box_kolishistvo[ves_masiva_box] );
			  ///

			  ///M2
			  Masiv_text_box_M2[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_M2[ves_masiva_box]->Size = System::Drawing::Size ( 87, 23 );
			  Masiv_text_box_M2[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_M2[ves_masiva_box]->Location = System::Drawing::Point ( 590, size_y_text_box );
			  Masiv_text_box_M2[ves_masiva_box]->Text = "1";
			  Masiv_text_box_M2[ves_masiva_box] ->BackColor = System::Drawing::Color::DimGray;
			  Controls->Add ( Masiv_text_box_M2[ves_masiva_box] );
			  ///

			   ///Kromka
			  Masiv_text_box_Kromka[ves_masiva_box] = gcnew TextBox ( );
			  Masiv_text_box_Kromka[ves_masiva_box]->Size = System::Drawing::Size ( 88, 23 );
			  Masiv_text_box_Kromka[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_text_box_Kromka[ves_masiva_box]->Location = System::Drawing::Point ( 690, size_y_text_box );
			  Masiv_text_box_Kromka[ves_masiva_box]->Text = "1";
			  Masiv_text_box_Kromka[ves_masiva_box] ->BackColor = System::Drawing::Color::DimGray;
			  Controls->Add ( Masiv_text_box_Kromka[ves_masiva_box] );
			  ///
			  
			
			 ///Kromka_shirina
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box] = gcnew ComboBox ( );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Size = System::Drawing::Size ( 91, 23 );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box]->Location = System::Drawing::Point ( 195, size_y_text_box );
			  Masiv_kombo_box_Kromka_Shirina[ves_masiva_box] ->BackColor = System::Drawing::Color::DimGray;
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
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box]->Location = System::Drawing::Point ( 424, size_y_text_box );
			  Masiv_kombo_box_Kromka_Visota[ves_masiva_box] ->BackColor = System::Drawing::Color::DimGray;
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
		   Obhie_money_1->Text = System::Convert::ToString ( double_stoimost_KROMKA + double_obshie_Money_LDSP );




		  double_obshie_Money_LDSP = 0;
		  double_stoimost_KROMKA = 0;
		  obshie_chislo_visota = 0;
		  obshie_chislo_shirina = 0;
		  obshie_chislo_kolichestvo = 0;
		  obshie_chislo_M2 = 0;
		  obshie_chislo_Kromka = 0;
		  }



	 private: System::Void Delit_form_Click ( System::Object^ sender, System::EventArgs^ e )
		  { 	
		  if ( size_y != 272 && size_y_1 != 234 && size_y_2 != 248 && size_y_text_box != 249 && ves_masiva_box != 0 )
			   {
			   delete Masiv_text_box_visota[ves_masiva_box];
			   delete Masiv_text_box_shirina[ves_masiva_box];
			   delete Masiv_kombo_box_Kromka_Shirina[ves_masiva_box];
			   delete Masiv_kombo_box_Kromka_Visota[ves_masiva_box];
			   delete Masiv_kolihestvo[ves_masiva_box];
			   delete Masiv_linia_1[ves_masiva_box];
			   delete Masiv_linia_2[ves_masiva_box];
			   delete Masiv_linia_3[ves_masiva_box];
			   delete Masiv_linia_4[ves_masiva_box];
			   delete Masiv_linia_5[ves_masiva_box];
			   delete Masiv_linia_6[ves_masiva_box];
			   delete Masiv_linia_7[ves_masiva_box];
			   delete Masiv_linia_8[ves_masiva_box];
			   delete Masiv_text_box_Kromka[ves_masiva_box];
			   delete Masiv_text_box_M2[ves_masiva_box];
			   delete Masiv_text_box_kolishistvo[ves_masiva_box];
			   size_y -= 34;
			   size_y_1 -= 34;
			   size_y_text_box -= 34;
			   size_y_2 -= 34;
			   ves_masiva_box--;
			   }
		  }
	private: System::Void Okno1_Load ( System::Object^ sender, System::EventArgs^ e )
		{ }
};
}


