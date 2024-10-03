#include "MyForm.h" 
#include <Windows.h>
using namespace Project1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	/*if (Environment::OSVersion->Version->Major >= 6)
		SetProcessDPIAware();*/

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	//System::Runtime::InteropServices::DllImportAttribute("user32.dll");
	//private: static extern bool SetProcessDPIAware();
	return 0;
}