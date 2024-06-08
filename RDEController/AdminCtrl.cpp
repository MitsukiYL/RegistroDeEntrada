#include "AdminCtrl.h"
#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

AdminCtrl::AdminCtrl() {

}

admin^ AdminCtrl::BuscarAdminxID(int IDbuscar){
	admin^ objAdmin;
	array<String^>^ lineas = File::ReadAllLines("Administradores.txt");
	String^ separadores = ";"; 
	for each (String ^ lineaAdmin in lineas) {
		
		array<String^>^ datos = lineaAdmin->Split(separadores->ToCharArray());

		int adminID = Convert::ToInt32(datos[0]);
		String^ area = datos[1];
		String^ adminType = datos[2];
		String^ registrationDate = datos[3];
		String^ expirationDate = datos[4];
		int contractID = Convert::ToInt32(datos[5]);
		int personDNI = Convert::ToInt32(datos[6]);

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		if (adminID==IDbuscar) {
			objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
		}
	}
	return objAdmin;
}

admin^ AdminCtrl::BuscarAdminxPersonDNI(int DNIbuscar) {
	admin^ objAdmin;
	array<String^>^ lineas = File::ReadAllLines("Administradores.txt");
	String^ separadores = ";";
	for each (String ^ lineaAdmin in lineas) {

		array<String^>^ datos = lineaAdmin->Split(separadores->ToCharArray());

		int adminID = Convert::ToInt32(datos[0]);
		String^ area = datos[1];
		String^ adminType = datos[2];
		String^ registrationDate = datos[3];
		String^ expirationDate = datos[4];
		int contractID = Convert::ToInt32(datos[5]);
		int personDNI = Convert::ToInt32(datos[6]);

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		if (personDNI == DNIbuscar) {
			objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
			break;
		}
	}
	return objAdmin;
}

List <admin^>^ AdminCtrl::AllAdministradores() {
	List<admin^>^ listaadmin = gcnew List<admin^>();
	array<String^>^ lineas = File::ReadAllLines("Administradores.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaPeluche in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());

		int adminID = Convert::ToInt32(datos[0]);
		String^ area = datos[1];
		String^ adminType = datos[2];
		String^ registrationDate = datos[3];
		String^ expirationDate = datos[4];
		int contractID = Convert::ToInt32(datos[5]);
		int personDNI = Convert::ToInt32(datos[6]);

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		admin^ objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
		listaadmin->Add(objAdmin);
	}
	return listaadmin;
	}
	

void AdminCtrl::agregarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, List<workHours^>^ listWorkHours, person^ objPerson) {

	List<admin^>^ listaadmin = AllAdministradores();
	admin^ adminNuevo = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
	listaadmin->Add(adminNuevo);
	escribirArchivo(listaadmin);
}


void AdminCtrl::escribirArchivo(List <admin^>^ listaadmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaadmin->Count);
	for (int i = 0; i < listaadmin->Count; i++) {
		admin^ objAdmin = listaadmin[i];
		lineasArchivo[i] = Convert::ToString(objAdmin->getAdminID()) + ";" + objAdmin->getArea() + ";" + objAdmin->getAdminType()
			+ ";" + objAdmin->getRegistrationDate() + ";" +objAdmin->getExpirationDate() + ";" + Convert::ToString(objAdmin->getContractID())
			+ ";" + Convert::ToString(objAdmin->getPerson()->getDNI());
	}
	File::WriteAllLines("Administradores.txt", lineasArchivo);
}

void AdminCtrl::actualizarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, List<workHours^>^ listWorkHours, person^ objPerson){
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getAdminID() == adminID) {
			listaadmin[i]->setArea(area);
			listaadmin[i]->setAdminType(adminType);
			listaadmin[i]->setRegistrationDate(registrationDate);
			listaadmin[i]->setExpirationDate(expirationDate);
			listaadmin[i]->setContractID(contractID);
			listaadmin[i]->setListWorkHours(listWorkHours);
			listaadmin[i]->setPerson(objPerson);
			break;
		}
	}
	escribirArchivo(listaadmin);

}

void AdminCtrl::eliminarAdmin(int ID) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getAdminID()==ID) {
			listaadmin->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaadmin);
}


