#include "Okno1.h"
#include <thread>
#include <iostream>
#include <conio.h> // для _getch()
#include <clocale> // для погдключения русской локали 

#include <stdio.h>  //strcat
#include <iostream>
#include <string>
using namespace System;
using namespace System::Windows::Forms;

//void t()
//     {
//     Sleep ( 10000 );
//     while ( true )
//          {
//          System::String^ unmanageds = System::Convert::ToString ( LDSP::Okno1::TheInstance->Otvet_visota->Text );
//          std::string ss = msclr::interop::marshal_as<std::string> ( unmanageds );
//          std::cout << ss << std::endl;
//          }
//     }


[STAThread]
void main ( array<String^>^ arg )
     {
     //std::thread ( t );
     Application::EnableVisualStyles ( );
     Application::SetCompatibleTextRenderingDefault ( false );

     LDSP::Okno1 form;
     Application::Run ( % form );

     
     }