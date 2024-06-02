#include "EntryReportCtrl.h"
#include "CardCtrl.h"
#include "DoorRegisterCtrl.h"

using namespace RDEController;
using namespace System::IO;

EntryReportCtrl::EntryReportCtrl() {

}

List<doorRegisterxCard^>^ EntryReportCtrl::generarReporte() {

	List<doorRegisterxCard^>^ listaDoorRegisterxCard = gcnew List<doorRegisterxCard^>();
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();
	List<card^>^ listaCard = objCardCtrl->buscarCardAll();

	for (int i = 0; i < listaCard->Count; i++) {

		int code = listaCard[i]->getCode();
		int ID = listaCard[i]->getID();

		List<doorRegister^>^ listDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxCard(code);
		int cantDoorRegister = listDoorRegister->Count;
		doorRegisterxCard^ objDoorRegisterxCard = gcnew doorRegisterxCard(ID, cantDoorRegister);
		listaDoorRegisterxCard->Add(objDoorRegisterxCard);
	}

	return listaDoorRegisterxCard;
}

