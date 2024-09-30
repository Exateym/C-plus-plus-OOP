#include "../../MyForm.h"

System::Void Risovalka::PaintForm::comboBoxSoundDiagramInstrument_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ img_temp;
	if (localization_identifier == "English")
	{
		if (comboBoxSoundDiagramInstrument->Text == "None")
		{
			numericUpDownSoundDiagramOctave->Minimum = 0;
			numericUpDownSoundDiagramOctave->Maximum = 0;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Marimba")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave1-3.png");
			numericUpDownSoundDiagramOctave->Minimum = 1;
			numericUpDownSoundDiagramOctave->Maximum = 3;
		}
		if (comboBoxSoundDiagramInstrument->Text == "WoodWind")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave4-5.png");
			numericUpDownSoundDiagramOctave->Minimum = 4;
			numericUpDownSoundDiagramOctave->Maximum = 5;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Piano")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave6-7.png");
			numericUpDownSoundDiagramOctave->Minimum = 6;
			numericUpDownSoundDiagramOctave->Maximum = 7;
		}
	}
	if (localization_identifier == "Russian")
	{
		if (comboBoxSoundDiagramInstrument->Text == "None")
		{
			numericUpDownSoundDiagramOctave->Minimum = 0;
			numericUpDownSoundDiagramOctave->Maximum = 0;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Маримба")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave1-3.png");
			numericUpDownSoundDiagramOctave->Minimum = 1;
			numericUpDownSoundDiagramOctave->Maximum = 3;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Флейта")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave4-5.png");
			numericUpDownSoundDiagramOctave->Minimum = 4;
			numericUpDownSoundDiagramOctave->Maximum = 5;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Пианино")
		{
			img_temp = gcnew Bitmap("..\\ColorMain\\Octave6-7.png");
			numericUpDownSoundDiagramOctave->Minimum = 6;
			numericUpDownSoundDiagramOctave->Maximum = 7;
		}
	}
	pictureBoxOctaveWhatPanel->Image = img_temp;
}