#include "PersonCtrl.h"

using namespace RDEController;
using namespace System::IO;

PersonCtrl::PersonCtrl() {

}

List<person^>^ PersonCtrl::buscarPersonAll() {
	List<person^>^ listaPerson = gcnew List<person^>();
	array<String^>^ lineas = File::ReadAllLines("Person.txt");
	String^ separadores = ";"; 
	for each (String ^ lineaPerson in lineas) {

		array<String^>^ datos = lineaPerson->Split(separadores->ToCharArray());

		/*****FORMATO*******
		INT ; STRING ; INT ; STRING ; STRING ; STRING ; BOOL ; STRING ; STRING ; INT ; BOOL
		*/

			int DNI = Convert::ToInt32(datos[0]);
			String^ name = datos[1];
			int code = Convert::ToInt32(datos[2]);
			String^ mail = datos[3];
			String^ phone = datos[4];
			String^ password = datos[5];
			bool permission = Convert::ToBoolean(datos[6]);
			String^ occupation = datos[7];
			String^ gender = datos[8];
			int age = Convert::ToInt32(datos[9]);
			bool isInside = Convert::ToBoolean(datos[10]);

			person^ objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			listaPerson->Add(objPerson);
		
	}
	return listaPerson;
}

person^ PersonCtrl::buscarPersonxDNI(int DNIb) {
	person^ objPerson;
	array<String^>^ lineas = File::ReadAllLines("Person.txt");
	String^ separadores = ";";
	for each (String ^ lineaPerson in lineas) {
		
		array<String^>^ datos = lineaPerson->Split(separadores->ToCharArray());

		int DNI = Convert::ToInt32(datos[0]);
		String^ name = datos[1];
		int code = Convert::ToInt32(datos[2]);
		String^ mail = datos[3];
		String^ phone = datos[4];
		String^ password = datos[5];
		bool permission = Convert::ToBoolean(datos[6]);
		String^ occupation = datos[7];
		String^ gender = datos[8];
		int age = Convert::ToInt32(datos[9]);
		bool isInside = Convert::ToBoolean(datos[10]);

		if (DNI == DNIb) {
			objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			break;
		}
	}
	return objPerson;
}

person^ PersonCtrl::buscarPersonxPassword(String^ passwordSearch) {
	person^ objPerson;
	array<String^>^ lineas = File::ReadAllLines("Person.txt");
	String^ separadores = ";";
	for each (String ^ lineaPerson in lineas) {

		array<String^>^ datos = lineaPerson->Split(separadores->ToCharArray());

		int DNI = Convert::ToInt32(datos[0]);
		String^ name = datos[1];
		int code = Convert::ToInt32(datos[2]);
		String^ mail = datos[3];
		String^ phone = datos[4];
		String^ password = datos[5];
		bool permission = Convert::ToBoolean(datos[6]);
		String^ occupation = datos[7];
		String^ gender = datos[8];
		int age = Convert::ToInt32(datos[9]);
		bool isInside = Convert::ToBoolean(datos[10]);

		if (password == passwordSearch) {
			objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
			break;
		}
	}
	return objPerson;
}

void PersonCtrl::escribirArchivo(List<person^>^ listaPerson) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPerson->Count);
	for (int i = 0; i < listaPerson->Count; i++) {
		person^ objPerson = listaPerson[i];
		lineasArchivo[i] = Convert::ToString(objPerson->getDNI()) + ";" + objPerson->getName()  + ";" + Convert::ToString(objPerson->getCode())
						+ ";" + objPerson->getMail() + ";" + objPerson->getPhone() + ";" + objPerson->getPassword() 
						+ ";" + Convert::ToString(objPerson->getPermission()) + ";" + objPerson->getOccupation() + ";" + objPerson->getGender()
						+ ";" + Convert::ToString(objPerson->getAge()) + ";" + Convert::ToString(objPerson->getIsInside());
	}
	File::WriteAllLines("Person.txt", lineasArchivo);
}

void PersonCtrl::agregarNewPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) {
	List<person^>^ listaPerson = buscarPersonAll();
	person^ objPerson = gcnew person(DNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	listaPerson->Add(objPerson);
	escribirArchivo(listaPerson);
}

void PersonCtrl::eliminarPerson(int DNI) {
	List<person^>^ listaPerson = buscarPersonAll();
	for (int i = 0; i < listaPerson->Count; i++) {
		if (listaPerson[i]->getDNI() == DNI) {
			listaPerson->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPerson);
}

void PersonCtrl::actualizarPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside) {
	List<person^>^ listaPerson = buscarPersonAll();
	for (int i = 0; i < listaPerson->Count; i++) {

		if (listaPerson[i]->getDNI() == DNI) {
			listaPerson[i]->setName(name);
			listaPerson[i]->setPassword(password);
			listaPerson[i]->setCode(code);
			listaPerson[i]->setMail(mail);
			listaPerson[i]->setPermission(permission);
			listaPerson[i]->setOccupation(occupation);
			listaPerson[i]->setGender(gender);
			listaPerson[i]->setPhone(phone);
			listaPerson[i]->setAge(age);
			listaPerson[i]->setIsInside(isInside);
			break;
		}
	}
	escribirArchivo(listaPerson);
}
void PersonCtrl::actualizarPersonIsInside(int DNI, bool isInside) {
	List<person^>^ listaPerson = buscarPersonAll();
	for (int i = 0; i < listaPerson->Count; i++) {

		if (listaPerson[i]->getDNI() == DNI) {
			listaPerson[i]->setIsInside(isInside);
			break;
		}
	}
	escribirArchivo(listaPerson);
}
