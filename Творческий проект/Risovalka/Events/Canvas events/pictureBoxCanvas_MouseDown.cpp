#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	mouse_pressed = true;
	bool startCheck = true;
	if (Pipette->Checked != true) {
		if (localization_identifier == "English")
		{
			if (comboBoxInstruments->Text == "Marimba" || comboBoxInstruments->Text == "Маримба")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaC.wav");
				}
				else if (pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaD.wav");
				}
				else if (pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaE.wav");
				}
				else if (pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaF.wav");
				}
				else if (pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaG.wav");
				}
				else if (pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Piano" || comboBoxInstruments->Text == "Пианино")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoC.wav");
				}
				else if (pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoD.wav");
				}
				else if (pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoE.wav");
				}
				else if (pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoF.wav");
				}
				else if (pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoG.wav");
				}
				else if (pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "String" || comboBoxInstruments->Text == "Струны")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringC.wav");
				}
				else if (pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringD.wav");
				}
				else if (pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringE.wav");
				}
				else if (pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringF.wav");
				}
				else if (pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringG.wav");
				}
				else if (pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "WoodWind" || comboBoxInstruments->Text == "Флейта")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindC.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindD.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindE.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindF.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindG.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Nature" || comboBoxInstruments->Text == "Природа")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lava.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Campfire.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lightning.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Leaves.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\SnowStep.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Water.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\ThunderNRain.wav");
				}
				else
				{
					startCheck = false;
				}
			}
		}
		if (localization_identifier == "Russian")
		{
			if (comboBoxInstruments->Text == "Маримба" || comboBoxInstruments->Text == "Marimba")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaC.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaD.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaE.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaF.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaG.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Пианино" || comboBoxInstruments->Text == "Piano")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoC.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoD.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoE.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoF.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoG.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Струны" || comboBoxInstruments->Text == "String")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringC.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringD.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringE.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringF.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringG.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Флейта" || comboBoxInstruments->Text == "WoodWind")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindC.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindD.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindE.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindF.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindG.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindA.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindB.wav");
				}
				else
				{
					startCheck = false;
				}
			}
			if (comboBoxInstruments->Text == "Природа" || comboBoxInstruments->Text == "Nature")
			{
				if (pen->Color == Color::Red)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lava.wav");
				}
				else if(pen->Color == Color::Orange)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Campfire.wav");
				}
				else if(pen->Color == Color::Yellow)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lightning.wav");
				}
				else if(pen->Color == Color::Green)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Leaves.wav");
				}
				else if(pen->Color == Color::Cyan)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\SnowStep.wav");
				}
				else if(pen->Color == Color::Blue)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Water.wav");
				}
				else if (pen->Color == Color::Purple)
				{
					audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\ThunderNRain.wav");
				}
				else
				{
					startCheck = false;
				}
			}
		}
	}
	if (comboBoxInstruments->Text != "None" && radioButtonErase->Checked != true && Pipette->Checked != true && startCheck == true)
	{
		audio_feedback->Play();
	}
	if(radioButtonDraw->Checked == true || radioButtonErase->Checked == true)
	{
		points->Clear();
		points->Add(e->Location);
	}
	else
	{
		X = e->Location.X;
		Y = e->Location.Y;
	}
	pictureBoxCanvas->Invalidate();
	return System::Void();
}