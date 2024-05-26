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
		int registrationDate = Convert::ToInt32(datos[3]);
		int expirationDate = Convert::ToInt32(datos[4]);
		int contractID = Convert::ToInt32(datos[5]);
		int personDNI = Convert::ToInt32(datos[6]);
		String^ name = datos[7];
		int code = Convert::ToInt32(datos[8]);
		String^ mail = datos[9];
		String^ phone = datos[10];
		String^ password = datos[11];
		bool permission = Convert::ToBoolean(Convert::ToInt32(datos[12]));
		String^ occupation = datos[13];
		String^ gender = datos[14];
		int age = Convert::ToInt32(datos[15]);
		bool isInside = Convert::ToBoolean(Convert::ToInt32(datos[16]));

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();


		if (adminID==IDbuscar) {
			objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, 
				personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
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
		int registrationDate = Convert::ToInt32(datos[3]);
		int expirationDate = Convert::ToInt32(datos[4]);
		int contractID = Convert::ToInt32(datos[5]);

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		int personDNI = Convert::ToInt32(datos[6]);
		String^ name = datos[7];
		int code = Convert::ToInt32(datos[8]);
		String^ mail = datos[9];
		String^ phone = datos[10];
		String^ password = datos[11];
		bool permission = Convert::ToBoolean(Convert::ToInt32(datos[12]));
		String^ occupation = datos[13];
		String^ gender = datos[14];
		int age = Convert::ToInt32(datos[15]);
		bool isInside = Convert::ToBoolean(Convert::ToInt32(datos[16]));

		

			admin^ objestac = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			listaadmin->Add(objestac);
	}
	return listaadmin;
	}
	

void AdminCtrl::agregarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) {

	List<admin^>^ listaadmin = AllAdministradores();
	admin^ adminNuevo = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	listaadmin->Add(adminNuevo);
	escribirArchivo(listaadmin);
}


void AdminCtrl::escribirArchivo(List <admin^>^ listaadmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaadmin->Count);
	for (int i = 0; i < listaadmin->Count; i++) {
		admin^ objAdmin = listaadmin[i];
		lineasArchivo[i] =Convert::ToString(objAdmin->getAdminID()) + ";" + Convert::ToString(objAdmin->getArea()) + ";" + Convert::ToString(objAdmin->getAdminType()) + ";" + Convert::ToString(objAdmin->getName()) + ";" + Convert::ToString(objAdmin->getPassword()) + ";" + Convert::ToString(objAdmin->getRegistrationDate()) + ";" + Convert::ToString(objAdmin->getExpirationDate()) + ";" + Convert::ToString(objAdmin->getContractID())
			+ ";" + objAdmin->getName() + ";" + objAdmin->getPassword() + ";" + Convert::ToString(objAdmin->getCode())
			+ ";" + Convert::ToString(objAdmin->getDNI()) + ";" + objAdmin->getMail() + ";" + Convert::ToString(objAdmin->getPermission())
			+ ";" + Convert::ToString(objAdmin->getOccupation()) + ";" + objAdmin->getGender() + ";" + objAdmin->getPhone()
			+ ";" + Convert::ToString(objAdmin->getAge()) + ";" + Convert::ToString(objAdmin->getIsInside());
	}
	File::WriteAllLines("Administradores.txt", lineasArchivo);
}

void AdminCtrl::actualizarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getAdminID() == adminID) {
			listaadmin[i]->setArea(area);
			listaadmin[i]->setAdminType(adminType);
			listaadmin[i]->setRegistrationDate(registrationDate);
			listaadmin[i]->setExpirationDate(expirationDate);
			listaadmin[i]->setContractID(contractID);
			listaadmin[i]->setDNI(DNI);
			listaadmin[i]->setName(name);
			listaadmin[i]->setCode(code);
			listaadmin[i]->setMail(mail);
			listaadmin[i]->setPhone(phone);
			listaadmin[i]->setPassword(password);
			listaadmin[i]->setPermission(permission);
			listaadmin[i]->setOccupation(occupation);
			listaadmin[i]->setGender(gender);
			listaadmin[i]->setAge(age);
			listaadmin[i]->setIsInside(isInside);
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


