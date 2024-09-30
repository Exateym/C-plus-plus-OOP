#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonCyan_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ snow_image = gcnew Bitmap("..\\ColorMain\\Snow.png");
	pictureBoxPalette->Image = snow_image;
	pen = gcnew Pen(Color::Cyan, size);
	return System::Void();
}