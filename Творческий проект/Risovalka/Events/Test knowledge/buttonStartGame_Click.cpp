#include "../../MyForm.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
System::Void Risovalka::PaintForm::buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e) 
{
	groupBoxInputAnswer->Visible = false;
	buttonCheckResult->Visible = false;
	buttonStartGame->BackColor = Color::Red;
	buttonStartGame->Cursor = System::Windows::Forms::Cursors::No;
	labelWaitingNotification->Visible = true;
	labelJudgmentAnswer->Visible = false;
	labelRightOctave->Visible = false;
	groupBoxExerciseKnowledge->Refresh();
	srand(time(0));
	// 0 Кселофон, 1 Духовое, 2 Пианино
	instrument_identifier = rand() % 3;
	/* 0 Контроктава, 1 Большая октава, 2 Малая октава,
	3 Первая октава, 4 Вторая октава, 5 Третья октава, 6 Четвёртая октава */
	switch (instrument_identifier) {
		case 0:
			octave_identifier = rand() % 3;
			break;
		case 1:
			octave_identifier = rand() % 2 + 3;
			break;
		default:
			octave_identifier = rand() % 2 + 5;
	}
	if (instrument_identifier == 0) {
		if (octave_identifier == 0) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1G.wav");
			audio_feedback->PlaySync();
		}
		else if (octave_identifier == 1) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2G.wav");
			audio_feedback->PlaySync();
		}
		else if (octave_identifier == 2) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3G.wav");
			audio_feedback->PlaySync();
		}
	}
	else if (instrument_identifier == 1) {
		if (octave_identifier == 3) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4G.wav");
			audio_feedback->PlaySync();
		}
		else if (octave_identifier == 4) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5G.wav");
			audio_feedback->PlaySync();
		}
	}
	else if (instrument_identifier == 2) {
		if (octave_identifier == 5) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6G.wav");
			audio_feedback->PlaySync();
		}
		else if (octave_identifier == 6) {
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7E.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7D.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7G.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
			audio_feedback->PlaySync();
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7G.wav");
			audio_feedback->PlaySync();
		}
	}
	buttonStartGame->BackColor = Color::Green;
	buttonStartGame->Cursor = System::Windows::Forms::Cursors::Hand;
	labelWaitingNotification->Visible = false;
	groupBoxExerciseKnowledge->Refresh();
	groupBoxInputAnswer->Visible = true;
	buttonCheckResult->Visible = true;
	groupBoxExerciseKnowledge->Refresh();
	return System::Void();
}