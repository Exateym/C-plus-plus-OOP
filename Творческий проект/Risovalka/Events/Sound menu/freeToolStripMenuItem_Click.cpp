#include "../../MyForm.h"
System::Void Risovalka::PaintForm::freeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBoxSoundDiagram->Location.X = 6;
	groupBoxSoundDiagram->Location.Y = 151;
	groupBoxSoundDiagram->Refresh();
	groupBoxSoundDiagram->Visible = true;
	if(groupBoxCreateCanvas->Visible == true)
	{
		groupBoxCreateCanvas->Visible = false;
	}
	if(groupBoxExerciseKnowledge->Visible == true)
	{
		groupBoxExerciseKnowledge->Visible = false;
	}
	return System::Void();
}