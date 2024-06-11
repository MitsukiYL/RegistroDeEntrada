#include "DoorRegisterxDoorCtrl.h"
#include "SensorCtrl.h"
#include "DoorRegisterCtrl.h"
#include "DoorCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorRegisterxDoorCtrl::DoorRegisterxDoorCtrl() {

}

List<doorRegisterxDoor^>^ DoorRegisterxDoorCtrl::generarReporte() {

	List<doorRegisterxDoor^>^ listaDoorRegisterxDoor = gcnew List<doorRegisterxDoor^>();
	DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();
	List<door^>^ listaDoor = objDoorCtrl->buscarDoorAll();

	for (int i = 0; i < listaDoor->Count; i++) {

		String^ name = listaDoor[i]->getDoorName();

		List<doorRegister^>^ listDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxN(name);
		int cantDoorRegister = listDoorRegister->Count;

		doorRegisterxDoor^ objDoorRegisterxDoor = gcnew doorRegisterxDoor(name, cantDoorRegister);
		listaDoorRegisterxDoor->Add(objDoorRegisterxDoor);
	}

	return listaDoorRegisterxDoor;
}

