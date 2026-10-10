#include "loginform.h"
#include "DashBoard.h"
#include "Add vehical.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LankaExpressPay::Addvehical form;
	Application::Run(% form);
}