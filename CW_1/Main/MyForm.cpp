#include "pch.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "MyForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Myproject::Form1());
	return 0;
}

//
//•	Предметна область ІС : Договірна діяльність організації Мінімальний список характеристик : 
//• Шифр договору, найменування організації, терміни виконання, сума договору, примітки вид договору;
//• номер, ПІБ, адреса, телефон, посада, оклад співробітників, терміни роботи даного співробітника за даним договором.