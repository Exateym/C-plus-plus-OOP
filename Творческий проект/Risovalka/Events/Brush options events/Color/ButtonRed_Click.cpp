#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonRed_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ lava_image = gcnew Bitmap("..\\ColorMain\\Lava.png");
	pictureBoxPalette->Image = lava_image;
	pen = gcnew Pen(Color::Red, size);
	return System::Void();
}