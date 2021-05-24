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
	 if ( Name_Text_Box->Text == "" )Name_Text_Box->Text = "0";
	 System::String^ unmanaged = System::Convert::ToString ( Name_Text_Box->Text ); 
	 std::string s = msclr::interop::marshal_as<std::string> ( unmanaged );
	 for ( auto it = s.begin ( ); it != s.end ( ); it++ )
			   if (*it <= 47 && *it != 44 || *it >= 58  && *it != 44 )
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
		 private: array<TextBox^>^ Masiv_text_box_kolishistvo;
	public:
		Okno1(void)
		{
			InitializeComponent();
			Masiv_text_box_visota = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_shirina = gcnew array<TextBox^> ( MAX_PATH );
			Masiv_text_box_kolishistvo = gcnew array<TextBox^> ( MAX_PATH );
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
			 this->button1->Location = System::Drawing::Point ( 91, 37 );
			 this->button1->Name = L"button1";
			 this->button1->Size = System::Drawing::Size ( 112, 23 );
			 this->button1->TabIndex = 285;
			 this->button1->Text = L"Добавить строку";
			 this->button1->UseVisualStyleBackColor = true;
			 this->button1->Click += gcnew System::EventHandler ( this, &Okno1::button1_Click_1 );
			 // 
			 // button2
			 // 
			 this->button2->Location = System::Drawing::Point ( 459, 37 );
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
			 this->Otvet_visota->Size = System::Drawing::Size ( 89, 22 );
			 this->Otvet_visota->TabIndex = 310;
			 this->Otvet_visota->Text = L"";
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
			 this->Visota_0->Size = System::Drawing::Size ( 91, 22 );
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
			 this->Shirina_0->Size = System::Drawing::Size ( 91, 22 );
			 this->Shirina_0->TabIndex = 324;
			 this->Shirina_0->Text = L"1";
			 // 
			 // Kolichestvo_0
			 // 
			 this->Kolichestvo_0->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Kolichestvo_0->Location = System::Drawing::Point ( 535, 135 );
			 this->Kolichestvo_0->Name = L"Kolichestvo_0";
			 this->Kolichestvo_0->Size = System::Drawing::Size ( 52, 22 );
			 this->Kolichestvo_0->TabIndex = 325;
			 this->Kolichestvo_0->Text = L"1";
			 // 
			 // Otvet_shirina
			 // 
			 this->Otvet_shirina->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																		 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_shirina->Location = System::Drawing::Point ( 361, 99 );
			 this->Otvet_shirina->Name = L"Otvet_shirina";
			 this->Otvet_shirina->Size = System::Drawing::Size ( 89, 22 );
			 this->Otvet_shirina->TabIndex = 326;
			 this->Otvet_shirina->Text = L"";
			 // 
			 // Otvet_kolichestvo
			 // 
			 this->Otvet_kolichestvo->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ),
																			 System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			 this->Otvet_kolichestvo->Location = System::Drawing::Point ( 540, 99 );
			 this->Otvet_kolichestvo->Name = L"Otvet_kolichestvo";
			 this->Otvet_kolichestvo->Size = System::Drawing::Size ( 43, 22 );
			 this->Otvet_kolichestvo->TabIndex = 327;
			 this->Otvet_kolichestvo->Text = L"1";
			 // 
			 // Okno1
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF ( 96, 96 );
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			 this->AutoScroll = true;
			 this->BackColor = System::Drawing::Color::White;
			 this->BackgroundImage = ( cli::safe_cast< System::Drawing::Image^ >( resources->GetObject ( L"$this.BackgroundImage" ) ) );
			 this->ClientSize = System::Drawing::Size ( 818, 825 );
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
/////////////////////////////////////////////////////////////////////

			  Label^ Label_Text_Nomer = gcnew Label ( );
			  Label_Text_Nomer->Font = ( gcnew System::Drawing::Font ( L"Franklin Gothic Medium", 10, static_cast< System::Drawing::FontStyle >( ( System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic ) ), System::Drawing::GraphicsUnit::Point, static_cast< System::Byte >( 204 ) ) );
			  Label_Text_Nomer->Location = System::Drawing::Point ( 8, size_y_2 += 36 );
			  Label_Text_Nomer->Size = System::Drawing::Size ( 37, 18 );
			  Label_Text_Nomer->Text = ( m++ ).ToString ( );
			  Label_Text_Nomer->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			  this->Controls->Add ( Label_Text_Nomer );
			  if ( ves_masiva_box == 0 )
				   {
				   Masiv_text_box_visota[0] = Visota_0;
				   }
			  if ( ves_masiva_box == 0 )
				   {
				   Masiv_text_box_shirina[0] = Shirina_0;
				   }
			  if ( ves_masiva_box == 0 )
				   {
				   Masiv_text_box_kolishistvo[0] = Kolichestvo_0;
				   }

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


			  Masiv_text_box_kolishistvo[ves_masiva_box]->Focus ( );//Для переноса фокуса

			  ///
			  

			  ///
	}

	 private: System::Void button2_Click ( System::Object^ sender, System::EventArgs^ e )
		  {    	
		  
			 if(ves_masiva_box == 0){Masiv_text_box_visota[0] = Visota_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_shirina[0] = Shirina_0;}
			 if(ves_masiva_box == 0){Masiv_text_box_kolishistvo[0] = Kolichestvo_0;}
			   for ( int j = 0 ; j <= ves_masiva_box; j++ )
					{		
					if( Proverka_na_BUKVI_V_Text_Box(Masiv_text_box_visota[j]) || Proverka_na_BUKVI_V_Text_Box ( Masiv_text_box_shirina[j] ) || Proverka_na_BUKVI_V_Text_Box ( Masiv_text_box_kolishistvo[j] ) )
						 {
						 MessageBox::Show( "Ошибка , запрещено использовать буквы и любые другие символы   кроме запитой !\n  Вместо точек ипользуйте запятые !\nСтрочка с ошибкой изменила цвет на крассный!" );						
						 }
					else
						 {
					
						 Masiv_text_box_visota[j]->BackColor = System::Drawing::SystemColors::Window;
						 Masiv_text_box_shirina[j]->BackColor = System::Drawing::SystemColors::Window;
						 Masiv_text_box_kolishistvo[j]->BackColor = System::Drawing::SystemColors::Window;


						 obshie_chislo_visota += System::Convert::ToDouble ( Masiv_text_box_visota[j]->Text );
						 obshie_chislo_shirina += System::Convert::ToDouble ( Masiv_text_box_shirina[j]->Text );
						 obshie_chislo_kolichestvo += System::Convert::ToDouble ( Masiv_text_box_kolishistvo[j]->Text );
						 }
					}			   
		  Otvet_visota->Text = System::Convert::ToString ( obshie_chislo_visota );
		  Otvet_shirina->Text = System::Convert::ToString ( obshie_chislo_shirina );
		  Otvet_kolichestvo->Text = System::Convert::ToString ( obshie_chislo_kolichestvo );
		  obshie_chislo_visota = 0;
		  obshie_chislo_shirina = 0;
		  obshie_chislo_kolichestvo = 0;
		  }



};
}


