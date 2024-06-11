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
		//int cantDoorRegister = listDoorRegister->Count;

		int cantEntradas = 0;
		int cantSalidas = 0;
		for (int h = 0; h < listDoorRegister->Count; h++) {
			if ((listDoorRegister[h]->getEntryTime()) != "00000000") { cantEntradas++; }//string vacio
			if ((listDoorRegister[h]->getExitTime()) != "00000000") { cantSalidas++; }//string vacio
		}

		doorRegisterxDoor^ objDoorRegisterxDoor = gcnew doorRegisterxDoor(name, cantEntradas, cantSalidas);
		listaDoorRegisterxDoor->Add(objDoorRegisterxDoor);
	}

	return listaDoorRegisterxDoor;
}

