#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonBlue_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ ocean_image = gcnew Bitmap("..\\ColorMain\\Ocean.png");
	pictureBoxPalette->Image = ocean_image;
	pen = gcnew Pen(Color::Blue, size);
	return System::Void();
}