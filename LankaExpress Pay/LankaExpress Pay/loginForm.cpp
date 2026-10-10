#include "loginform.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LankaExpressPay::loginForm  form;
	Application::Run(% form);
}