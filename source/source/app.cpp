#include"FormLogin.h"
#include"FormDictionary.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThread]



int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	source::FormLogin form;
    
	
	
	Application::Run(% form);

	

}