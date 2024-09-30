#include "../MyForm.h"

System::Void Risovalka::PaintForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
	image = gcnew Bitmap(Convert::ToInt32(numericUpDownCreateWidth->Value), Convert::ToInt32(numericUpDownCreateHeight->Value));
	canvas = Graphics::FromImage(image);
	pictureBoxCanvas->Image = image;
	groupBoxCreateCanvas->Visible = false;
	return System::Void();
}