#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonPurple_Click(System::Object^ sender, System::EventArgs^ e)
{
	//radioButtonDraw->Checked = true;
	Bitmap^ thunder_image = gcnew Bitmap("..\\ColorMain\\Thunder.png");
	pictureBoxPalette->Image = thunder_image;
	pen = gcnew Pen(Color::Purple, size);
	return System::Void();
}