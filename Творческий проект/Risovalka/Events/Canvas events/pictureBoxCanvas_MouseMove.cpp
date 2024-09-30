#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if(mouse_pressed == false)
	{
		return;
	}
	if(e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		points->Add(e->Location);
	}
	pictureBoxCanvas->Invalidate();
	return System::Void();
}