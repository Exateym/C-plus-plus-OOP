#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonOrange_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ campfire_image = gcnew Bitmap("..\\ColorMain\\Campfire.png");
	pictureBoxPalette->Image = campfire_image;
	pen = gcnew Pen(Color::Orange, size);
	return System::Void();
}