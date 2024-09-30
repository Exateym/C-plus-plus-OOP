#include "../../MyForm.h"

System::Void  Risovalka::PaintForm::englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	localization_identifier = "English";
	//Главное окно
	//Верхнее меню
	//1
	canvasToolStripMenuItem->Text = "Canvas";
	createToolStripMenuItem->Text = "Create canvas";
	saveAsToolStripMenuItem->Text = "Save as";
	openFileToolStripMenuItem->Text = "Open file";
	clearCanvasToolStripMenuItem->Text = "Clear canvas";
	//1.1
	groupBoxCreateCanvas->Text = "Create canvas";
	labelCreateCanvasWidth->Text = "Width";
	labelCreateCanvasHeight->Text = "Height";
	buttonCreate->Text = "Create";
	//2
	soundModeToolStripMenuItem->Text = "Visualization";
	freeToolStripMenuItem->Text = "Sound diagram";
	//2.2
	groupBoxSoundDiagram->Text = "Sound diagram";
	labelSoundDiagramMusicalInstrument->Text = "Musical instrument";
	labelOctaveWhat->Text = "Contre octave";
	labelSoundDiagramOctave->Text = "Octave";
	buttonShowVisualisation->Text = "Show visualization";
	labelSoundDiagramOctaveSheet->Text = "Octave sheet";
	labelCurrentNodePlaying->Text = "Current node playing:#";
	comboBoxSoundDiagramInstrument->Items->Clear();
	comboBoxSoundDiagramInstrument->Items->Add("None");
	comboBoxSoundDiagramInstrument->Items->Add("Marimba");
	comboBoxSoundDiagramInstrument->Items->Add("WoodWind");
	comboBoxSoundDiagramInstrument->Items->Add("Piano");
	//3
	exerciseToolStripMenuItem->Text = "Test";
	testToolStripMenuItem->Text = "Music Guesser";
	//3.3
	groupBoxExerciseKnowledge->Text = "Music Guesser";
	buttonStartGame->Text = "Start game";
	groupBoxInputAnswer->Text = "Make a guess";

	comboBoxInstrumentChoise->Text = "Choose instrument";
	comboBoxInstrumentChoise->Items->Clear();
	comboBoxInstrumentChoise->Items->Add("Marimba");
	comboBoxInstrumentChoise->Items->Add("WoodWind");
	comboBoxInstrumentChoise->Items->Add("Piano");

	comboBoxChoiseOctave->Text = "Choose octave";
	comboBoxChoiseOctave->Items->Clear();
	comboBoxChoiseOctave->Items->Add("None");
	comboBoxChoiseOctave->Items->Add("Contra octave");
	comboBoxChoiseOctave->Items->Add("Great octave");
	comboBoxChoiseOctave->Items->Add("Small octave");
	comboBoxChoiseOctave->Items->Add("One-line octave");
	comboBoxChoiseOctave->Items->Add("Two-line octave");
	comboBoxChoiseOctave->Items->Add("Three-line octave");
	comboBoxChoiseOctave->Items->Add("Four-line octave");

	buttonCheckResult->Text = "Check result";
	labelJudgmentAnswer->Text = "Your answer is incorrect. Try again";
	labelWaitingNotification->Text = "Listen to the melody...";
	labelRightOctave->Text = "Right octave:";
	//4
	localizationToolStripMenuItem->Text = "Language";
	englishToolStripMenuItem->Text = "English";
	russianToolStripMenuItem->Text = "Russian";
	//Основной контейнер
	//Боксы верхнего бокса
	InnerLeftGroupBox->Text = "Musical instrument";
	InnerCentralGroupBox->Text = "Brush / shapes";
	InnerRightGroupBox->Text = "Note palette";
	//Настройка левого бокса
	comboBoxInstruments->Items->Clear();
	comboBoxInstruments->Items->Add("None");
	comboBoxInstruments->Items->Add("Marimba");
	comboBoxInstruments->Items->Add("Piano");
	comboBoxInstruments->Items->Add("String");
	comboBoxInstruments->Items->Add("WoodWind");
	comboBoxInstruments->Items->Add("Nature");
	//Настройка центрального бокса
	labelBrushSize->Text = "Brush size";
	labelMode->Text = "Mode";
	radioButtonDraw->Text = "Brush";
	radioButtonErase->Text = "Erase";
	radioButtonLine->Text = "Line";
	radioButtonCircle->Text = "Ellipse";
	radioButtonSquare->Text = "Rectangle";
	Pipette->Text = "Pipette";
	labelShape->Text = "Shape";
	labelLength->Text = "Width";
	labelWidth->Text = "Height";
}