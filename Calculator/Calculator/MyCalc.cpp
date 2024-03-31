#include "MyCalc.h"
#include <Windows.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;





[STAThreadAttribute]
int main(array<String^>^ argum) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Calculator::MyCalc calculait;
	

	Application::Run(% calculait);

}