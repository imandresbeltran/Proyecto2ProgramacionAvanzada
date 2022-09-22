#include "MenuPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Tarea1AndresBeltran1001122::MenuPrincipal form;
	Application::Run(% form);
	return 0;
}


