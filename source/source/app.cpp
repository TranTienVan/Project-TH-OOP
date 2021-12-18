#include"FormLogin.h"
#include"FormDictionary.h"
#include"FormMatrixWordGame.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]



int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	source::FormMatrixWordGame form;
    
	
	
	Application::Run(% form);

	

}