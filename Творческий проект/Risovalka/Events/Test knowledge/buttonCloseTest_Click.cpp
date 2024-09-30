#include "../../MyForm.h"

System::Void Risovalka::PaintForm::buttonCloseTest_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxExerciseKnowledge->Visible == true)
	{
		groupBoxExerciseKnowledge->Visible = false;
	}
}