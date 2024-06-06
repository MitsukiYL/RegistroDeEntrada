#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;

	public ref class PersonCtrl {
	public:
		PersonCtrl();
		List<person^>^ buscarPersonAll();
		person^ buscarPersonxDNI(int DNIb);
		person^ buscarPersonxPassword(String^ passwordSearch);
		void escribirArchivo(List<person^>^ listaPerson);
		void agregarNewPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
		void eliminarPerson(int codigo);
		void actualizarPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
		void actualizarPersonIsInside(int DNI, bool isInside);
	};
}