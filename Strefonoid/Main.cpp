#include "Powitanie.h"
#include "Autor.h"
#include "Gra.h"
#include "OAutorze2.h"

using namespace Strefonoid;

void ExitWindow(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();
	}
	else
	{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWindow);
	}

}

[STAThreadAttribute]

int main(array<String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Powitanie^ First = gcnew Powitanie();
	First->FormClosed += gcnew FormClosedEventHandler(ExitWindow);
	First->Show();


	Application::Run();
	return 0;
}
