#include "../../MyForm.h"

System::Void Risovalka::PaintForm::numericUpDownSoundDiagramOctave_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen1.png");
	if (localization_identifier == "English")
	{
		if (numericUpDownSoundDiagramOctave->Value == 1)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen1.png");
			labelOctaveWhat->Text = "Contra octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 2)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen2.png");
			labelOctaveWhat->Text = "Great octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 3)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen3.png");
			labelOctaveWhat->Text = "Small octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 4)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen4.png");
			labelOctaveWhat->Text = "One-line octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 5)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen5.png");
			labelOctaveWhat->Text = "Two-line octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 6)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen6.png");
			labelOctaveWhat->Text = "Three-line octave";
		}
		if (numericUpDownSoundDiagramOctave->Value == 7)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen7.png");
			labelOctaveWhat->Text = "Four-line octave";
		}
	}
	if (localization_identifier == "Russian")
	{
		if (numericUpDownSoundDiagramOctave->Value == 1)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen1.png");
			labelOctaveWhat->Text = "Контроктава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 2)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen2.png");
			labelOctaveWhat->Text = "Большая октава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 3)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen3.png");
			labelOctaveWhat->Text = "Малая октава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 4)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen4.png");
			labelOctaveWhat->Text = "Первая октава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 5)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen5.png");
			labelOctaveWhat->Text = "Вторая октава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 6)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen6.png");
			labelOctaveWhat->Text = "Третья октава";
		}
		if (numericUpDownSoundDiagramOctave->Value == 7)
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen7.png");
			labelOctaveWhat->Text = "Четвертая октава";
		}
	}
	pictureBoxOctaveWhatChosen->Image = img_temp;
}