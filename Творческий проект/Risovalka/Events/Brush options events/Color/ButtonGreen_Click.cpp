#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonGreen_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ leaves_image = gcnew Bitmap("..\\ColorMain\\Leaves.png");
	pictureBoxPalette->Image = leaves_image;
	pen = gcnew Pen(Color::Green, size);
	return System::Void();
}