#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	mouse_pressed = false;
	points->Clear();
	if (radioButtonLine->Checked == true)
	{
		canvas->DrawLine(pen, X, Y, e->Location.X, e->Location.Y);
	}
	X = -1;
	Y = -1;
	pictureBoxCanvas->Invalidate();
	return System::Void();
}