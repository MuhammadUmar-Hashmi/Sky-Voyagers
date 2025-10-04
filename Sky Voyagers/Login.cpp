#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SkyVoyagers::Login form;
	Application::Run(% form);

}