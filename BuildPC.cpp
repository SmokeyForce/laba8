#include "BuildPC.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	yavtilte::BuildPC form;
	Application::Run(% form);
}