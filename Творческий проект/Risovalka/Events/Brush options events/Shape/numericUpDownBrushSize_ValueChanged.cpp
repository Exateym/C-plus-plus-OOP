#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	pen->Width = Convert::ToInt32( numericUpDownBrushSize->Value);
	size = Convert::ToInt32(numericUpDownBrushSize->Value);
	return System::Void();
}