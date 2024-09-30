#include "../../MyForm.h"
System::Void Risovalka::PaintForm::buttonCheckResult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bool flag = false;
	if (localization_identifier == "English")
	{
		if (comboBoxInstrumentChoise->Text != "Choose instrument" &&
			comboBoxInstrumentChoise->Text != "None" &&
			comboBoxChoiseOctave->Text != "Choose octave" &&
			comboBoxChoiseOctave->Text != "None") {
			if (instrument_identifier == 0 && comboBoxInstrumentChoise->Text == L"Marimba" && (
				octave_identifier == 0 && comboBoxChoiseOctave->Text == "Contra octave" ||
				octave_identifier == 1 && comboBoxChoiseOctave->Text == "Great octave" ||
				octave_identifier == 2 && comboBoxChoiseOctave->Text == "Small octave"))
			{
				labelJudgmentAnswer->Text = "Your answer is correct. Well done!";
				flag = true;
			}
			if (instrument_identifier == 1 && comboBoxInstrumentChoise->Text == L"WoodWind" && (
				octave_identifier == 3 && comboBoxChoiseOctave->Text == "One-line octave" ||
				octave_identifier == 4 && comboBoxChoiseOctave->Text == "Two-line octave"))
			{
				labelJudgmentAnswer->Text = "Your answer is correct. Well done!";
				flag = true;
			}
			if (instrument_identifier == 2 && comboBoxInstrumentChoise->Text == L"Piano" && (
				octave_identifier == 5 && comboBoxChoiseOctave->Text == "Three-line octave" ||
				octave_identifier == 6 && comboBoxChoiseOctave->Text == "Four-line octave"))
			{
				labelJudgmentAnswer->Text = "Your answer is correct. Well done!";
				flag = true;
			}
			if (flag)
			{
				labelJudgmentAnswer->Visible = true;
				labelRightOctave->Visible = true;
				labelJudgmentAnswer->Refresh();
				if (instrument_identifier == 0) {
					Bitmap^ marimba_image = gcnew Bitmap("..\\ColorMain\\Marimba.png");
					pictureBoxRightInstrument->Image = marimba_image;
				}
				else if (instrument_identifier == 1) {
					Bitmap^ woodwind_image = gcnew Bitmap("..\\ColorMain\\WoodWind.png");
					pictureBoxRightInstrument->Image = woodwind_image;
				}
				else if (instrument_identifier == 2) {
					Bitmap^ piano_image = gcnew Bitmap("..\\ColorMain\\Piano.png");
					pictureBoxRightInstrument->Image = piano_image;
				}
				pictureBoxRightInstrument->Visible = true;
				pictureBoxRightInstrument->Refresh();
				switch (octave_identifier) {
				case 0:
					labelRightOctave->Text = "Right octave: Contra octave";
					break;
				case 1:
					labelRightOctave->Text = "Right octave: Great octave";
					break;
				case 2:
					labelRightOctave->Text = "Right octave: Small octave";
					break;
				case 3:
					labelRightOctave->Text = "Right octave: One-line octave";
					break;
				case 4:
					labelRightOctave->Text = "Right octave: Two-line octave";
					break;
				case 5:
					labelRightOctave->Text = "Right octave: Three-line octave";
					break;
				default:
					labelRightOctave->Text = "Right octave: Four-line octave";
					break;
				}
				labelRightOctave->Visible = true;
			}
			else
			{
				labelJudgmentAnswer->Visible = true;
				labelJudgmentAnswer->Text = "Your answer is incorrect. Try again...";
			}
		}
		else
		{
			labelJudgmentAnswer->Text = "Write down your answer";
			labelJudgmentAnswer->Visible = true;
			labelJudgmentAnswer->Refresh();
		}
	}
	if(localization_identifier == "Russian")
	{
		if (comboBoxInstrumentChoise->Text != "Выбрать инструмент" &&
			comboBoxInstrumentChoise->Text != "None" &&
			comboBoxChoiseOctave->Text != "Выбрать октаву" &&
			comboBoxChoiseOctave->Text != "None") {
			if (instrument_identifier == 0 && comboBoxInstrumentChoise->Text == L"Маримба" && (
				octave_identifier == 0 && comboBoxChoiseOctave->Text == "Контроктава" ||
				octave_identifier == 1 && comboBoxChoiseOctave->Text == "Большая октава" ||
				octave_identifier == 2 && comboBoxChoiseOctave->Text == "Малая октава"))
			{
				labelJudgmentAnswer->Text = "Правильный ответ. Ты молодец!";
				flag = true;
			}
			if (instrument_identifier == 1 && comboBoxInstrumentChoise->Text == L"Флейта" && (
				octave_identifier == 3 && comboBoxChoiseOctave->Text == "Первая октава" ||
				octave_identifier == 4 && comboBoxChoiseOctave->Text == "Вторая октава"))
			{
				labelJudgmentAnswer->Text = "Правильный ответ. Ты молодец!";
				flag = true;
			}
			if (instrument_identifier == 2 && comboBoxInstrumentChoise->Text == L"Пианино" && (
				octave_identifier == 5 && comboBoxChoiseOctave->Text == "Третья октава" ||
				octave_identifier == 6 && comboBoxChoiseOctave->Text == "Четвертая октава"))
			{
				labelJudgmentAnswer->Text = "Правильный ответ. Ты молодец!";
				flag = true;
			}
			if (flag)
			{
				labelJudgmentAnswer->Visible = true;
				labelRightOctave->Visible = true;
				labelJudgmentAnswer->Refresh();
				if (instrument_identifier == 0) {
					Bitmap^ marimba_image = gcnew Bitmap("..\\ColorMain\\Marimba.png");
					pictureBoxRightInstrument->Image = marimba_image;
				}
				else if (instrument_identifier == 1) {
					Bitmap^ woodwind_image = gcnew Bitmap("..\\ColorMain\\WoodWind.png");
					pictureBoxRightInstrument->Image = woodwind_image;
				}
				else if (instrument_identifier == 2) {
					Bitmap^ piano_image = gcnew Bitmap("..\\ColorMain\\Piano.png");
					pictureBoxRightInstrument->Image = piano_image;
				}
				pictureBoxRightInstrument->Visible = true;
				pictureBoxRightInstrument->Refresh();
				switch (octave_identifier) {
				case 0:
					labelRightOctave->Text = "Правильная октава: Контроктава";
					break;
				case 1:
					labelRightOctave->Text = "Правильная октава: Большая октава";
					break;
				case 2:
					labelRightOctave->Text = "Правильная октава: Малая октава";
					break;
				case 3:
					labelRightOctave->Text = "Правильная октава: Первая октава";
					break;
				case 4:
					labelRightOctave->Text = "Правильная октава: Вторая октава";
					break;
				case 5:
					labelRightOctave->Text = "Правильная октава: Третья октава";
					break;
				default:
					labelRightOctave->Text = "Правильная октава: Четвертая октава";
					break;
				}
				labelRightOctave->Visible = true;
			}
			else
			{
				labelJudgmentAnswer->Visible = true;
				labelJudgmentAnswer->Text = "Ответ неверный. Попробуйте снова...";
			}
		}
		else
		{
			labelJudgmentAnswer->Text = "Введите ваш ответ";
			labelJudgmentAnswer->Visible = true;
			labelJudgmentAnswer->Refresh();
		}
	}
}