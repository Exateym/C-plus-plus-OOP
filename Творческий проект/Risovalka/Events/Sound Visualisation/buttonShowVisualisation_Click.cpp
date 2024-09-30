#include "../../MyForm.h"

System::Void Risovalka::PaintForm::buttonShowVisualisation_Click(System::Object^ sender, System::EventArgs^ e)
{
	image_temp = gcnew Bitmap(pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	canvas_temp = Graphics::FromImage(image_temp);
	pictureBoxSoundDiagram->Image = image_temp;

	array<Color>^ first_octave = gcnew array<Color>{
		Color::FromArgb(255, 105, 0, 0),
			Color::FromArgb(255, 105, 75, 0),
			Color::FromArgb(255, 105, 105, 0),
			Color::FromArgb(255, 0, 105, 0),
			Color::FromArgb(255, 0, 105, 105),
			Color::FromArgb(255, 0, 0, 105),
			Color::FromArgb(255, 50, 0, 50)
	};
	array<Color>^ second_octave = gcnew array<Color>{
		Color::FromArgb(255, 130, 0, 0),
			Color::FromArgb(255, 130, 90, 0),
			Color::FromArgb(255, 130, 130, 0),
			Color::FromArgb(255, 0, 130, 0),
			Color::FromArgb(255, 0, 130, 130),
			Color::FromArgb(255, 0, 0, 130),
			Color::FromArgb(255, 63, 0, 63)
	};
	array<Color>^ third_octave = gcnew array<Color>{
		Color::FromArgb(255, 155, 0, 0),
			Color::FromArgb(255, 155, 105, 0),
			Color::FromArgb(255, 155, 155, 0),
			Color::FromArgb(255, 0, 155, 0),
			Color::FromArgb(255, 0, 155, 155),
			Color::FromArgb(255, 0, 0, 155),
			Color::FromArgb(255, 76, 0, 76)
	};
	array<Color>^ fourth_octave = gcnew array<Color>{
		Color::FromArgb(255, 180, 0, 0),
			Color::FromArgb(255, 205, 135, 0),
			Color::FromArgb(255, 205, 205, 0),
			Color::FromArgb(255, 0, 180, 0),
			Color::FromArgb(255, 0, 180, 180),
			Color::FromArgb(255, 0, 0, 180),
			Color::FromArgb(255, 89, 0, 89)
	};
	array<Color>^ fifth_octave = gcnew array<Color>{
		Color::FromArgb(255, 205, 0, 0),
			Color::FromArgb(255, 205, 135, 0),
			Color::FromArgb(255, 205, 205, 0),
			Color::FromArgb(255, 0, 205, 0),
			Color::FromArgb(255, 0, 205, 205),
			Color::FromArgb(255, 0, 0, 205),
			Color::FromArgb(255, 102, 0, 102)
	};
	array<Color>^ sixth_octave = gcnew array<Color>{
		Color::FromArgb(255, 230, 0, 0),
			Color::FromArgb(255, 230, 150, 0),
			Color::FromArgb(255, 230, 230, 0),
			Color::FromArgb(255, 0, 230, 0),
			Color::FromArgb(255, 0, 230, 230),
			Color::FromArgb(255, 0, 0, 230),
			Color::FromArgb(255, 115, 0, 115)
	};
	array<Color>^ seventh_octave = gcnew array<Color>{
		Color::FromArgb(255, 255, 0, 0),
			Color::FromArgb(255, 255, 165, 0),
			Color::FromArgb(255, 255, 255, 0),
			Color::FromArgb(255, 0, 255, 0),
			Color::FromArgb(255, 0, 255, 255),
			Color::FromArgb(255, 0, 0, 255),
			Color::FromArgb(255, 128, 0, 128)
	};
	if(numericUpDownSoundDiagramOctave->Value == 1)
	{
		Brush^ brush = gcnew SolidBrush(first_octave[0 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[5 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[5 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[4 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[5 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[3 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[0 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(first_octave[0 % first_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 2)
	{
		Brush^ brush = gcnew SolidBrush(second_octave[0 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[5 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[5 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[4 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[5 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[3 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[0 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(second_octave[0 % second_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 3)
	{
		Brush^ brush = gcnew SolidBrush(third_octave[0 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[5 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[5 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[4 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[5 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[3 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[0 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(third_octave[0 % third_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 4) 
	{
		Brush^ brush = gcnew SolidBrush(fourth_octave[0 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[5 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[5 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[4 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[5 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[3 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[0 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fourth_octave[0 % fourth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 5) 
	{
		Brush^ brush = gcnew SolidBrush(fifth_octave[0 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[5 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[5 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[4 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[5 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[3 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[0 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(fifth_octave[0 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 6) 
	{
		Brush^ brush = gcnew SolidBrush(sixth_octave[0 % fifth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[5 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[5 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[4 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[5 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[3 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[0 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(sixth_octave[0 % sixth_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	if (numericUpDownSoundDiagramOctave->Value == 7) 
	{
		Brush^ brush = gcnew SolidBrush(seventh_octave[0 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 0 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[5 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 1 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[5 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 2 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[4 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 3 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[5 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 4 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[3 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 5 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[0 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 6 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
		brush = gcnew SolidBrush(seventh_octave[0 % seventh_octave->Length]);
		canvas_temp->FillRectangle(brush, 0, 7 * pictureBoxSoundDiagram->Height / 8, pictureBoxSoundDiagram->Width, pictureBoxSoundDiagram->Height);
	}
	pictureBoxSoundDiagram->Refresh();
	pictureBoxSoundDiagram->Invalidate();
	if (localization_identifier == "English")
	{
		if (comboBoxSoundDiagramInstrument->Text == "None")
		{
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Marimba")
		{
			if (numericUpDownSoundDiagramOctave->Value == 1)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 2)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 3)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Piano")
		{
			if (numericUpDownSoundDiagramOctave->Value == 1)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 2)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 3)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 4)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();

			}
			if (numericUpDownSoundDiagramOctave->Value == 5)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 6)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 7)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "WoodWind")
		{
			if (numericUpDownSoundDiagramOctave->Value == 4)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 5)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5G.wav");
				labelCurrentNodePlaying->Text = "Current note playing:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Current note playing:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
				labelCurrentNodePlaying->Text = "Current note playing:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Current note playing:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
	}
	if (localization_identifier == "Russian")
	{
		if (comboBoxSoundDiagramInstrument->Text == "None")
		{
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Маримба")
		{
			if (numericUpDownSoundDiagramOctave->Value == 1)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba1C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 2)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba2C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 3)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\MarimbaAll\\Marimba3C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Флейта")
		{
			if (numericUpDownSoundDiagramOctave->Value == 4)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind4C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 5)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWindAll\\WoodWind5C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
		if (comboBoxSoundDiagramInstrument->Text == "Пианино")
		{
			if (numericUpDownSoundDiagramOctave->Value == 1)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano1C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 2)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano2C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 3)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano3C.wav");
				audio_feedback->PlaySync();
			}
			if (numericUpDownSoundDiagramOctave->Value == 4)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano4C.wav");
				audio_feedback->PlaySync();

			}
			if (numericUpDownSoundDiagramOctave->Value == 5)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5G.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5A.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5F.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano5C.wav");
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Current note playing:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 6)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano6C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			if (numericUpDownSoundDiagramOctave->Value == 7)
			{
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7G.wav");
				labelCurrentNodePlaying->Text = "Играет нота:G";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7A.wav");
				labelCurrentNodePlaying->Text = "Играет нота:A";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7F.wav");
				labelCurrentNodePlaying->Text = "Играет нота:F";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				audio_feedback = gcnew SoundPlayer("..\\ColorMain\\PianoAll\\Piano7C.wav");
				labelCurrentNodePlaying->Text = "Играет нота:C";
				labelCurrentNodePlaying->Refresh();
				audio_feedback->PlaySync();
				labelCurrentNodePlaying->Text = "Играет нота:#";
				labelCurrentNodePlaying->Refresh();
			}
			return;
		}
	}
	return System::Void();
}