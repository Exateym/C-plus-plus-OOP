#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(groupBoxCreateProject->Visible)
	{
		groupBoxCreateProject->Visible = false;
	}

	filename = "openFileDialog1";
	return System::Void();
}