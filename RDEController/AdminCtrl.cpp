#include "AdminCtrl.h"

using namespace RDEController;
using namespace System::IO;

AdminCtrl::AdminCtrl() {

}

admin^ AdminCtrl::BuscarAdminxID(int IDbuscar){
	admin^ objAdmin;
	array<String^>^ lineas = File::ReadAllLines("Administradores.txt");
	String^ separadores = ";"; 
	for each (String ^ lineaPeluche in lineas) {
		
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());

		int adminID = Convert::ToInt32(datos[0]);
		String^ area = datos[1];
		String ^ adminType = datos[2];
		String ^ name = datos[3];
		String ^ password = datos[4];
		int registrationDate = Convert::ToInt32(datos[5]);
		int expirationDate = Convert::ToInt32(datos[6]);
		int contractID = Convert::ToInt32(datos[7]);

		if (adminID==IDbuscar) {
			objAdmin = gcnew admin(adminID,area,adminType,name,password,registrationDate,expirationDate,contractID);
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
		String^ name = datos[3];
		String^ password = datos[4];
		int registrationDate = Convert::ToInt32(datos[5]);
		int expirationDate = Convert::ToInt32(datos[6]);
		int contractID = Convert::ToInt32(datos[7]);
			admin^ objestac = gcnew admin(adminID, area, adminType, name, password, registrationDate, expirationDate, contractID);
			listaadmin->Add(objestac);
	}
	return listaadmin;
	}
	

void AdminCtrl::agregarAdmin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID) {
	List<admin^>^ listaadmin = AllAdministradores();
	admin^ adminNuevo = gcnew admin(adminID,area,adminType,name,password,registrationDate,expirationDate,contractID);
	listaadmin->Add(adminNuevo);
	escribirArchivo(listaadmin);
}


void AdminCtrl::escribirArchivo(List <admin^>^ listaadmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaadmin->Count);
	for (int i = 0; i < listaadmin->Count; i++) {
		admin^ objAdmin = listaadmin[i];
		lineasArchivo[i] =Convert::ToString(objAdmin->getadminID()) + ";" + Convert::ToString(objAdmin->getarea()) + ";" + Convert::ToString(objAdmin->getadminType()) + ";" + Convert::ToString(objAdmin->getname()) + ";" + Convert::ToString(objAdmin->getpassword()) + ";" + Convert::ToString(objAdmin->getregistrationDate()) + ";" + Convert::ToString(objAdmin->getexpirationDate()) + ";" + Convert::ToString(objAdmin->getcontractID());
	}
	File::WriteAllLines("Administradores.txt", lineasArchivo);
}

void AdminCtrl::actualizarAdmin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getadminID() == adminID) {
			listaadmin[i]->setarea(area);
			listaadmin[i]->setadminType(adminType);
			listaadmin[i]->setname(name);
			listaadmin[i]->setpassword(password);
			listaadmin[i]->setregistrationDate(registrationDate);
			listaadmin[i]->setexpirationDate(expirationDate);
			listaadmin[i]->setcontractID(contractID);
			break;
		}
	}
	escribirArchivo(listaadmin);

}

void AdminCtrl::eliminarAdmin(String^ ID) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getadminID()) {
			listaadmin->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaadmin);
}


