#include "DoorRegisterxCardCtrl.h"
#include "CardCtrl.h"
#include "DoorRegisterCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorRegisterxCardCtrl::DoorRegisterxCardCtrl() {

}

List<doorRegisterxCard^>^ DoorRegisterxCardCtrl::generarReporte() {

	List<doorRegisterxCard^>^ listaDoorRegisterxCard = gcnew List<doorRegisterxCard^>();
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();
	List<card^>^ listaCard = objCardCtrl->buscarCardAll();

	for (int i = 0; i < listaCard->Count; i++) {

		String^ code = listaCard[i]->getCode();
		int ID = listaCard[i]->getID();

		

		List<doorRegister^>^ listDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxCard(code);
		//int cantDoorRegister = listDoorRegister->Count;

		int cantEntradas = 0;
		int cantSalidas = 0;
		for (int h = 0; h < listDoorRegister->Count; h++) {
			if ((listDoorRegister[h]->getEntryTime()) != "00000000" ) { cantEntradas++; }//string vacio
			if ((listDoorRegister[h]->getExitTime()) != "00000000") { cantSalidas++; }//string vacio
		}

		doorRegisterxCard^ objDoorRegisterxCard = gcnew doorRegisterxCard(ID, cantEntradas, cantSalidas);
		listaDoorRegisterxCard->Add(objDoorRegisterxCard);
	}

	return listaDoorRegisterxCard;
}

