#include "../../MyForm.h"
//Кнопочка открывает окно для создания холста 
System::Void Risovalka::PaintForm::createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBoxCreateCanvas->Location.X = 400;
	groupBoxCreateCanvas->Location.Y = 151;
	groupBoxCreateCanvas->Refresh();
	groupBoxCreateCanvas->Visible = true;
	if (groupBoxExerciseKnowledge->Visible == true)
	{
		groupBoxExerciseKnowledge->Visible = false;
		groupBoxExerciseKnowledge->Refresh();
	}
	if (groupBoxSoundDiagram->Visible == true)
	{
		groupBoxSoundDiagram->Visible = false;
		groupBoxSoundDiagram->Refresh();
	}
	return System::Void();
}