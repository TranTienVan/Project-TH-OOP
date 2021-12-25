#include"FormLogin.h"
#include"FormDictionary.h"
#include"FormMatrixWordGame.h"
#include"FormExam.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]



int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	source::FormExam form;
    
	
	
	Application::Run(% form);

	

}