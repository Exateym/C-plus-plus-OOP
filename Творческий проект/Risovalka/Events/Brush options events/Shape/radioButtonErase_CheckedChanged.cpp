#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::radioButtonErase_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::White, size);
	return System::Void();
}