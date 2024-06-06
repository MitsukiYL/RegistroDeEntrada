#include "doorRegisterxDayCtrl.h"
#include "DoorRegisterCtrl.h"

using namespace RDEController;
using namespace System::IO;

doorRegisterxDayCtrl::doorRegisterxDayCtrl() {
}

List<doorRegisterxDay^>^ doorRegisterxDayCtrl::generarReporte() {

	List<doorRegisterxDay^>^ listaDoorRegisterxDay = gcnew List<doorRegisterxDay^>();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();

	List<String^>^ dias = gcnew List<String^>();

	dias->Add("Lunes"); dias->Add("Martes"); dias->Add("Miércoles");dias->Add("Jueves"); dias->Add("Viernes"); dias->Add("Sábado"); dias->Add("Domingo");

	for each (String ^ day in dias) {

		List<doorRegister^>^ listaDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxDay(day);
		int cantidad = listaDoorRegister->Count;

		doorRegisterxDay^ objDoorRegisterxDay = gcnew doorRegisterxDay(day, cantidad);
		listaDoorRegisterxDay->Add(objDoorRegisterxDay);
	}

	return listaDoorRegisterxDay;
}