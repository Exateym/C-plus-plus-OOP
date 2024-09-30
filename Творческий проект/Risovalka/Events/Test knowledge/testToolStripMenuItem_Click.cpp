#include "../../MyForm.h"

System::Void Risovalka::PaintForm::testToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBoxExerciseKnowledge->Visible = true;
	groupBoxExerciseKnowledge->Location.X = 6;
	groupBoxExerciseKnowledge->Location.Y = 151;
	groupBoxExerciseKnowledge->Refresh();
	if (groupBoxCreateCanvas->Visible == true)
	{
		groupBoxCreateCanvas->Visible = false;
	}
	if (groupBoxSoundDiagram->Visible == true)
	{
		groupBoxSoundDiagram->Visible = false;
	}
}