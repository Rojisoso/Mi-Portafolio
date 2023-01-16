#include "pch.h"
#include "ClinicaMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ClinicaView::ClinicaMainForm form;
	Application::Run(% form);
	return 0;
}
