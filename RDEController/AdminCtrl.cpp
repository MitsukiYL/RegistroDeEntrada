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
	for each (String ^ lineaPeluche in lineas) {
		
		array<String^>^ datos = lineaPeluche->Split(separadores->ToCharArray());

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
			objAdmin = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
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

			admin^ objestac = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			listaadmin->Add(objestac);
	}
	return listaadmin;
	}
	

void AdminCtrl::agregarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, int personDNI) {
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

	List<workHours^>^ listWorkHours = gcnew List<workHours^>();
	String^ name = objPerson->getName();
	int code = objPerson->getCode();
	String^ mail = objPerson->getMail();
	String^ phone = objPerson->getPhone();
	String^ password = objPerson->getPassword();
	bool permission = objPerson->getPermission();
	String^ occupation = objPerson->getOccupation();
	String^ gender = objPerson->getGender();
	int age = objPerson->getAge();
	bool isInside = objPerson->getIsInside();

	List<admin^>^ listaadmin = AllAdministradores();
	admin^ adminNuevo = gcnew admin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	listaadmin->Add(adminNuevo);
	escribirArchivo(listaadmin);
}


void AdminCtrl::escribirArchivo(List <admin^>^ listaadmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaadmin->Count);
	for (int i = 0; i < listaadmin->Count; i++) {
		admin^ objAdmin = listaadmin[i];
		lineasArchivo[i] =Convert::ToString(objAdmin->getAdminID()) + ";" + Convert::ToString(objAdmin->getArea()) + ";" + Convert::ToString(objAdmin->getAdminType()) + ";" + Convert::ToString(objAdmin->getName()) + ";" + Convert::ToString(objAdmin->getPassword()) + ";" + Convert::ToString(objAdmin->getRegistrationDate()) + ";" + Convert::ToString(objAdmin->getExpirationDate()) + ";" + Convert::ToString(objAdmin->getContractID());
	}
	File::WriteAllLines("Administradores.txt", lineasArchivo);
}

void AdminCtrl::actualizarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, int personDNI) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getAdminID() == adminID) {
			listaadmin[i]->setArea(area);
			listaadmin[i]->setAdminType(adminType);
			listaadmin[i]->setRegistrationDate(registrationDate);
			listaadmin[i]->setExpirationDate(expirationDate);
			listaadmin[i]->setContractID(contractID);

			PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
			person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

			listaadmin[i]->setDNI(objPerson->getDNI());
			listaadmin[i]->setName(objPerson->getName());
			listaadmin[i]->setCode(objPerson->getCode());
			listaadmin[i]->setMail(objPerson->getMail());
			listaadmin[i]->setPhone(objPerson->getPhone());
			listaadmin[i]->setPassword(objPerson->getPassword());
			listaadmin[i]->setPermission(objPerson->getPermission());
			listaadmin[i]->setOccupation(objPerson->getOccupation());
			listaadmin[i]->setGender(objPerson->getGender());
			listaadmin[i]->setAge(objPerson->getAge());
			listaadmin[i]->setIsInside(objPerson->getIsInside());
			break;
		}
	}
	escribirArchivo(listaadmin);

}

void AdminCtrl::eliminarAdmin(String^ ID) {
	List<admin^>^ listaadmin = AllAdministradores();
	for (int i = 0; i < listaadmin->Count; i++) {
		if (listaadmin[i]->getAdminID()) {
			listaadmin->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaadmin);
}


