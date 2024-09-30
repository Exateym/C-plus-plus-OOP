#include "../../MyForm.h"

System::Void  Risovalka::PaintForm::russianToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	localization_identifier = "Russian";
	//Главное окно
	//Верхнее меню
	//1
	canvasToolStripMenuItem->Text = "Холст";
	createToolStripMenuItem->Text = "Создать холст";
	saveAsToolStripMenuItem->Text = "Сохранить как";
	openFileToolStripMenuItem->Text = "Открыть файл";
	clearCanvasToolStripMenuItem->Text = "Очистить холст";
	//1.1
	groupBoxCreateCanvas->Text = "Создать холст";
	labelCreateCanvasWidth->Text = "Ширина";
	labelCreateCanvasHeight->Text = "Высота";
	buttonCreate->Text = "Создать";
	//2
	soundModeToolStripMenuItem->Text = "Визуализация";
	freeToolStripMenuItem->Text = "Звуковая диаграмма";
	//2.2
	groupBoxSoundDiagram->Text = "Звуковая диаграмма";
	labelSoundDiagramMusicalInstrument->Text = "Муз.инструмент";
	labelOctaveWhat->Text = "Контроктава";
	labelSoundDiagramOctave->Text = "Октава";
	buttonShowVisualisation->Text = "Вывести визуализацию";
	labelSoundDiagramOctaveSheet->Text = "Октавный лист";
	labelCurrentNodePlaying->Text = "Играет нота:#";
	comboBoxSoundDiagramInstrument->Items->Clear();
	comboBoxSoundDiagramInstrument->Items->Add("None");
	comboBoxSoundDiagramInstrument->Items->Add("Маримба");
	comboBoxSoundDiagramInstrument->Items->Add("Флейта");
	comboBoxSoundDiagramInstrument->Items->Add("Пианино");
	//3
	exerciseToolStripMenuItem->Text = "Тестирование";
	testToolStripMenuItem->Text = "Угадайка";
	//3.3
	groupBoxExerciseKnowledge->Text = "Угадайка";
	buttonStartGame->Text = "Начать игру";
	groupBoxInputAnswer->Text = "Ввести ответ";

	comboBoxInstrumentChoise->Text = "Выбрать инструмент";
	comboBoxInstrumentChoise->Items->Clear();
	comboBoxInstrumentChoise->Items->Add("Маримба");
	comboBoxInstrumentChoise->Items->Add("Флейта");
	comboBoxInstrumentChoise->Items->Add("Пианино");

	comboBoxChoiseOctave->Text = "Выбрать октаву";
	comboBoxChoiseOctave->Items->Clear();
	comboBoxChoiseOctave->Items->Add("None");
	comboBoxChoiseOctave->Items->Add("Контроктава");
	comboBoxChoiseOctave->Items->Add("Большая октава");
	comboBoxChoiseOctave->Items->Add("Малая октава");
	comboBoxChoiseOctave->Items->Add("Первая октава");
	comboBoxChoiseOctave->Items->Add("Вторая октава");
	comboBoxChoiseOctave->Items->Add("Третья октава");
	comboBoxChoiseOctave->Items->Add("Четвертая октава");

	buttonCheckResult->Text = "Проверить результат";
	labelJudgmentAnswer->Text = "Неверно. Попробуйте снова";
	labelWaitingNotification->Text = "Прослушайте отрывок...";
	labelRightOctave->Text = "Правильная октава:";
	//4
	localizationToolStripMenuItem->Text = "Язык";
	englishToolStripMenuItem->Text = "Английский";
	russianToolStripMenuItem->Text = "Русский";
	//Основной контейнер
	//Боксы верхнего бокса
	InnerLeftGroupBox->Text = "Музыкальный инструмент";
	InnerCentralGroupBox->Text = "Кисть / Фигуры";
	InnerRightGroupBox->Text = "Нотная палитра";
	//Настройка левого бокса
	comboBoxInstruments->Items->Clear();
	comboBoxInstruments->Items->Add("None");
	comboBoxInstruments->Items->Add("Маримба");
	comboBoxInstruments->Items->Add("Пианино");
	comboBoxInstruments->Items->Add("Струны");
	comboBoxInstruments->Items->Add("Флейта");
	comboBoxInstruments->Items->Add("Природа");
	//Настройка центрального бокса
	labelBrushSize->Text = "Размер кисти";
	labelMode->Text = "Режим";
	radioButtonDraw->Text = "Кисть";
	radioButtonErase->Text = "Резинка";
	radioButtonLine->Text = "Линия";
	radioButtonCircle->Text = "Эллипс";
	radioButtonSquare->Text = "Прямоугольник";
	Pipette->Text = "Пипетка";
	labelShape->Text = "Габариты";
	labelLength->Text = "Ширина";
	labelWidth->Text = "Высота";
}