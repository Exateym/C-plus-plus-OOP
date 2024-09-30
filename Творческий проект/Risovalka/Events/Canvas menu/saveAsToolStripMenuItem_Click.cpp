#include "../../MyForm.h"
System::Void Risovalka::PaintForm::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFileDialog1->ShowDialog();
	String^ fname = saveFileDialog1->FileName;
	if (fname == "")
	{
		return;
	}
	Bitmap^ img_to_save = gcnew Bitmap(pictureBoxCanvas->Image);
	img_to_save->Save(fname);
	if(localization_identifier == "English")
	{
		MessageBox::Show("Picture was saved.\nAdress: " + fname);
	}
	if (localization_identifier == "Russian")
	{
		MessageBox::Show("Изображение было сохранено.\nАдрес: " + fname);
	}
	return System::Void();
}