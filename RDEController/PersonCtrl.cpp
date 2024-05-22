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
		
		int DNI = Convert::ToInt32(datos[0]);
		String^ name = datos[1];
		int code = Convert::ToInt32(datos[2]);
		String^ mail = datos[3];
		String^ phone = datos[4];
		String^ password = datos[5];
		bool permission = Convert::ToBoolean(datos[6]);
		char occupation = Convert::ToChar(datos[7]);
		String^ gender = datos[8];
		int age = Convert::ToInt32(datos[9]);
		bool isInside = Convert::ToBoolean(datos[10]);

		person^ objPerson = gcnew person(name, password, code, DNI, mail, permission, occupation, gender, phone, age, isInside);
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
		char occupation = Convert::ToChar(datos[7]);
		String^ gender = datos[8];
		int age = Convert::ToInt32(datos[9]);
		bool isInside = Convert::ToBoolean(datos[10]);

		if (DNI == DNIb) {
			objPerson = gcnew person(name, password, code, DNI, mail, permission, occupation, gender, phone, age, isInside);
			break;
		}
	}
	return objPerson;
}

void PersonCtrl::escribirArchivo(List<person^>^ listaPerson) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPerson->Count);
	for (int i = 0; i < listaPerson->Count; i++) {
		person^ objPerson = listaPerson[i];
		lineasArchivo[i] = objPerson->getName() + ";" + objPerson->getPassword() + ";" + Convert::ToString(objPerson->getCode()) 
						+ ";" + Convert::ToString(objPerson->getDNI()) + ";" + objPerson->getMail() + ";" + Convert::ToString(objPerson->getPermission())
						+ ";" + Convert::ToString(objPerson->getOccupation()) + ";" + objPerson->getGender() + ";" + objPerson->getPhone()
						+ ";" + Convert::ToString(objPerson->getAge()) + ";" + Convert::ToString(objPerson->getisInside());
	}
	File::WriteAllLines("Person.txt", lineasArchivo);
}

void PersonCtrl::agregarNewPerson(String^ name, String^ password, int code, int DNI, String^ mail, bool permission, char occupation, String^ gender, String^ phone, int age, bool isInside) {
	List<person^>^ listaPerson = buscarPersonAll();
	person^ objPerson = gcnew person(name, password, code, DNI, mail, permission, occupation, gender, phone, age, isInside);
	listaPerson->Add(objPerson);
	escribirArchivo(listaPerson);
}

void PersonCtrl::eliminarPerson(int DNI) {
	List<person^>^ listaPerson = buscarPersonAll();
	for (int i = 0; i < listaPerson->Count; i++) {
		if (listaPerson[i]->getCode() == DNI) {
			listaPerson->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPerson);
}

void PersonCtrl::actualizarPerson(String^ name, String^ password, int code, int DNI, String^ mail, bool permission, char occupation, String^ gender, String^ phone, int age, bool isInside) {
	List<person^>^ listaPerson = buscarPersonAll();
	for (int i = 0; i < listaPerson->Count; i++) {
		if (listaPerson[i]->getCode() == DNI) {
			listaPerson[i]->setName(name);
			listaPerson[i]->setPassword(password);
			listaPerson[i]->setCode(code);
			listaPerson[i]->setMail(mail);
			listaPerson[i]->setPermission(permission);
			listaPerson[i]->setGender(gender);
			listaPerson[i]->setPhone(phone);
			listaPerson[i]->setAge(age);
			listaPerson[i]->setisInside(isInside);
			break;
		}
	}
	escribirArchivo(listaPerson);
}
