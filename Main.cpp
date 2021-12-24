#include "Main.h"



using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	yavtilte::Main form;
	Application::Run(% form);
}