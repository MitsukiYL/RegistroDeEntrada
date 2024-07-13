#include "InterfaceCtrl.h"

using namespace RDEController;
using namespace System::IO;

InterfaceCtrl::InterfaceCtrl() {

}

List<interface^>^ InterfaceCtrl::buscarInterfaceAll() {
	List<interface^>^ listaInterface = gcnew List<interface^>();
	array<String^>^ lineas = File::ReadAllLines("Interface.txt");
	String^ separadores = ";";
	for each (String ^ lineaInterface in lineas) {

		array<String^>^ datos = lineaInterface->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		String^ protocol = datos[1];
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		String^ registrationDate = datos[4];
		int ID = Convert::ToInt32(datos[5]);

		interface^ objInterface = gcnew interface(ID, pin, protocol, producer, active, registrationDate);
		listaInterface->Add(objInterface);
	}
	return listaInterface;
}

interface^ InterfaceCtrl::buscarInterfacexID(int IDb) {
	interface^ objInterface;
	List<interface^>^ listaInterface = gcnew List<interface^>();
	array<String^>^ lineas = File::ReadAllLines("Interface.txt");
	String^ separadores = ";";
	for each (String ^ lineaCard in lineas) {

		array<String^>^ datos = lineaCard->Split(separadores->ToCharArray());

		int pin = Convert::ToInt32(datos[0]);
		String^ protocol = datos[1];
		String^ producer = datos[2];
		bool active = Convert::ToBoolean(datos[3]);
		String^ registrationDate = datos[4];
		int ID = Convert::ToInt32(datos[5]);

		if (ID == IDb) {

			interface^ objInterface = gcnew interface(ID, pin, protocol, producer, active, registrationDate);
			break;
		}

	}
	return objInterface;
}

void InterfaceCtrl::escribirArchivo(List<interface^>^ listaInterface) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaInterface->Count);
	for (int i = 0; i < listaInterface->Count; i++) {
		interface^ objInterface = listaInterface[i];
		lineasArchivo[i] = Convert::ToString(objInterface->getPin()) + ";" + objInterface->getProtocol() + ";" + objInterface->getProducer() + ";" + Convert::ToString(objInterface->getActive())
			+ ";" + objInterface->getRegistrationDate() + ";" + Convert::ToString(objInterface->getID());
	}
	File::WriteAllLines("Interface.txt", lineasArchivo);
}

void InterfaceCtrl::agregarNewInterface(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID){
	List<interface^>^ listaInterface = buscarInterfaceAll();
	interface^ objInterface = gcnew interface(ID, pin, protocol, producer, active, registrationDate);
	listaInterface->Add(objInterface);
	escribirArchivo(listaInterface);
}

void InterfaceCtrl::eliminarInterface(int IDb) {
	List<interface^>^ listaInterface = buscarInterfaceAll();
	for (int i = 0; i < listaInterface->Count; i++) {
		if (listaInterface[i]->getID() == IDb) {
			listaInterface->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaInterface);
}
