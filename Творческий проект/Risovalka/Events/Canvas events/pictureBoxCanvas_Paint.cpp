#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	if (Pipette->Checked == true) {
		if (X != -1 && Y != -1) {
			Bitmap^ current_image = gcnew Bitmap(pictureBoxCanvas->Image);
			Color pixel = current_image->GetPixel(X, Y);
			pen = gcnew Pen(Color::White, size);
			if (pixel.R == 255 && pixel.G == 0 && pixel.B == 0)
				pen = gcnew Pen(Color::Red, size);
			if (pixel.R == 255 && pixel.G == 165 && pixel.B == 0)
				pen = gcnew Pen(Color::Orange, size);
			if (pixel.R == 255 && pixel.G == 255 && pixel.B == 0)
				pen = gcnew Pen(Color::Yellow, size);
			if (pixel.R == 0 && pixel.G == 128 && pixel.B == 0)
				pen = gcnew Pen(Color::Green, size);
			if (pixel.R == 0 && pixel.G == 255 && pixel.B == 255)
				pen = gcnew Pen(Color::Cyan, size);
			if (pixel.R == 0 && pixel.G == 0 && pixel.B == 255)
				pen = gcnew Pen(Color::Blue, size);
			if (pixel.R == 128 && pixel.G == 0 && pixel.B == 128)
				pen = gcnew Pen(Color::Purple, size);

			delete current_image;
			if (localization_identifier == "English" || localization_identifier == "Russian")
			{
				if (comboBoxInstruments->Text == "Marimba" || comboBoxInstruments->Text == "Маримба")
				{
					if (pen->Color == Color::Red)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaC.wav");
					}
					if (pen->Color == Color::Orange)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaD.wav");
					}
					if (pen->Color == Color::Yellow)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaE.wav");
					}
					if (pen->Color == Color::Green)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaF.wav");
					}
					if (pen->Color == Color::Cyan)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaG.wav");
					}
					if (pen->Color == Color::Blue)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaA.wav");
					}
					if (pen->Color == Color::Purple)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaB.wav");
					}

				}
				if (comboBoxInstruments->Text == "Piano" || comboBoxInstruments->Text == "Пианино")
				{
					if (pen->Color == Color::Red)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoC.wav");
					}
					if (pen->Color == Color::Orange)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoD.wav");
					}
					if (pen->Color == Color::Yellow)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoE.wav");
					}
					if (pen->Color == Color::Green)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoF.wav");
					}
					if (pen->Color == Color::Cyan)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoG.wav");
					}
					if (pen->Color == Color::Blue)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoA.wav");
					}
					if (pen->Color == Color::Purple)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoB.wav");
					}
				}
				if (comboBoxInstruments->Text == "String" || comboBoxInstruments->Text == "Струны")
				{
					if (pen->Color == Color::Red)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringC.wav");
					}
					if (pen->Color == Color::Orange)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringD.wav");
					}
					if (pen->Color == Color::Yellow)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringE.wav");
					}
					if (pen->Color == Color::Green)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringF.wav");
					}
					if (pen->Color == Color::Cyan)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringG.wav");
					}
					if (pen->Color == Color::Blue)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringA.wav");
					}
					if (pen->Color == Color::Purple)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringB.wav");
					}
				}
				if (comboBoxInstruments->Text == "WoodWind" || comboBoxInstruments->Text == "Флейта")
				{
					if (pen->Color == Color::Red)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindC.wav");
					}
					if (pen->Color == Color::Orange)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindD.wav");
					}
					if (pen->Color == Color::Yellow)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindE.wav");
					}
					if (pen->Color == Color::Green)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindF.wav");
					}
					if (pen->Color == Color::Cyan)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindG.wav");
					}
					if (pen->Color == Color::Blue)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindA.wav");
					}
					if (pen->Color == Color::Purple)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindB.wav");
					}
				}
				if (comboBoxInstruments->Text == "Nature" || comboBoxInstruments->Text == "Природа")
				{
					if (pen->Color == Color::Red)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lava.wav");
					}
					if (pen->Color == Color::Orange)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Campfire.wav");
					}
					if (pen->Color == Color::Yellow)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lightning.wav");
					}
					if (pen->Color == Color::Green)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Leaves.wav");
					}
					if (pen->Color == Color::Cyan)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\SnowStep.wav");
					}
					if (pen->Color == Color::Blue)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Water.wav");
					}
					if (pen->Color == Color::Purple)
					{
						audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\ThunderNRain.wav");
					}
				}
			}
			if (comboBoxInstruments->Text != "None")
				audio_feedback->PlaySync();
		}
	}

	else {
		if (radioButtonDraw->Checked == true || radioButtonErase->Checked == true)
		{
			if (points->Count > 1)
			{
				canvas->DrawLines(pen, points->ToArray());
			}
		}
		if (radioButtonSquare->Checked == true)
		{
			if (X != -1 && Y != -1)
			{
				canvas->DrawRectangle(pen, X, Y, Convert::ToInt32(numericUpDownLength->Value), Convert::ToInt32(numericUpDownWidth->Value));
			}
		}
		if (radioButtonCircle->Checked == true)
		{
			if (X != -1 && Y != -1)
			{
				canvas->DrawEllipse(pen, X, Y, Convert::ToInt32(numericUpDownLength->Value), Convert::ToInt32(numericUpDownWidth->Value));
			}
		}
	}

	return System::Void();
}