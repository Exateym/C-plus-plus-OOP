#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonYellow_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ lightning_image = gcnew Bitmap("..\\ColorMain\\Lightning.png");
	pictureBoxPalette->Image = lightning_image;
	pen = gcnew Pen(Color::Yellow, size);
	return System::Void();
}