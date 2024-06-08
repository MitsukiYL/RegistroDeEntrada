#include "DoorRegisterCtrl.h"
#include "CardCtrl.h"
#include "SensorCtrl.h"

using namespace RDEController;
using namespace System::IO;

DoorRegisterCtrl::DoorRegisterCtrl() {

}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterAll() {
	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	array<String^>^ lineas = File::ReadAllLines("DoorRegister.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoorRegister in lineas) {

		array<String^>^ datos = lineaDoorRegister->Split(separadores->ToCharArray());

		int code = Convert::ToInt32(datos[0]);
		String^ entryTime = datos[1];
		String^ exitTime = datos[2];
		bool userIn = Convert::ToBoolean(datos[3]);
		int cardCode = Convert::ToInt32(datos[4]);
		int sensorID = Convert::ToInt32(datos[5]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);
		listaDoorRegister->Add(objDoorRegister);
	}
	return listaDoorRegister;
}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxCard(int codeCard) {

	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	array<String^>^ lineas = File::ReadAllLines("DoorRegister.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoorRegister in lineas) {

		array<String^>^ datos = lineaDoorRegister->Split(separadores->ToCharArray());

		int code = Convert::ToInt32(datos[0]);
		String^ entryTime = datos[1];
		String^ exitTime = datos[2];
		bool userIn = Convert::ToBoolean(datos[3]);
		int cardCode = Convert::ToInt32(datos[4]);
		int sensorID = Convert::ToInt32(datos[5]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);

		if (cardCode == codeCard) {
			listaDoorRegister->Add(objDoorRegister);
		}
	}
	return listaDoorRegister;
}

List<doorRegister^>^ DoorRegisterCtrl::buscarDoorRegisterxDay(String^ daysearch) {
	List<doorRegister^>^ listaDoorRegister = gcnew List<doorRegister^>();
	String^ daystring = "";
	array<String^>^ lineas = File::ReadAllLines("DoorRegister.txt");
	String^ separadores = ";";
	for each (String ^ lineaDoorRegister in lineas) {

		array<String^>^ datos = lineaDoorRegister->Split(separadores->ToCharArray());

		int code = Convert::ToInt32(datos[0]);
		String^ entryTime = datos[1];
		String^ exitTime = datos[2];
		bool userIn = Convert::ToBoolean(datos[3]);
		int cardCode = Convert::ToInt32(datos[4]);
		int sensorID = Convert::ToInt32(datos[5]);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);

		String^ separador_dates = "-";
		array<String^>^ dates = entryTime->Split(separador_dates->ToCharArray());

		String^ ddmmyy = dates[1];

		String^ separador_ddmmyy = "/";
		array<String^>^ array_ddmmyy = ddmmyy->Split(separador_ddmmyy->ToCharArray());

		int day = Convert::ToInt32(array_ddmmyy[0]);
		int month = Convert::ToInt32(array_ddmmyy[1]);
		int year = Convert::ToInt32(array_ddmmyy[2]);

		if (month == 1 || month == 2) {
			month += 12;
			year -= 1;
		}

		int j = year / 100;
		int k = year % 100;
		int h = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

		switch (h) {
		case 0:
			daystring = "Sábado";
			break;
		case 1:
			daystring = "Domingo";
			break;
		case 2:
			daystring = "Lunes";
			break;
		case 3:
			daystring = "Martes";
			break;
		case 4:
			daystring = "Miércoles";
			break;
		case 5:
			daystring = "Jueves";
			break;
		case 6:
			daystring = "Viernes";
			break;
		default:
			daystring = "";
			break;
		}

		doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);

		if (daystring == daysearch) {
			listaDoorRegister->Add(objDoorRegister);
		}
	}
	return listaDoorRegister;
;
}

void DoorRegisterCtrl::escribirArchivo(List<doorRegister^>^ listaDoorRegister) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaDoorRegister->Count);
	for (int i = 0; i < listaDoorRegister->Count; i++) {
		doorRegister^ objDoorRegister = listaDoorRegister[i];
		lineasArchivo[i] = Convert::ToString(objDoorRegister->getCode()) + ";" + objDoorRegister->getEntryTime() + ";" + objDoorRegister->getExitTime() + ";" + Convert::ToString(objDoorRegister->getUserIn())
			+ ";" + Convert::ToString(objDoorRegister->getObjCard()->getCode()) + ";" + Convert::ToString(objDoorRegister->getObjSensor()->getID());
	}
	File::WriteAllLines("DoorRegister.txt", lineasArchivo);
}

void DoorRegisterCtrl::agregarNewDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor) {
	List<doorRegister^>^ listaDoorRegister = buscarDoorRegisterAll();
	doorRegister^ objDoorRegister = gcnew doorRegister(entryTime, exitTime, userIn, code, objCard, objSensor);
	listaDoorRegister->Add(objDoorRegister);
	escribirArchivo(listaDoorRegister);
}

void  DoorRegisterCtrl::actualizarDoorRegister(String^ entryTime, String^ exitTime, bool userIn, int code, card^ objCard, sensor^ objSensor) {
	List<doorRegister^>^ lista = buscarDoorRegisterAll();
	for (int i = 0; i < lista->Count; i++) {
		if (lista[i]->getCode() == code) {
			lista[i]->setEntryTime(entryTime);
			lista[i]->setExitTime(exitTime);
			lista[i]->setUserIn(userIn);
			lista[i]->setObjCard(objCard);
			lista[i]->setObjSensor(objSensor);
			break;
		}
	}
	escribirArchivo(lista);
}
