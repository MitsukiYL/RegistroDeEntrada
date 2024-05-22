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
		void escribirArchivo(List<person^>^ listaPerson);
		void agregarNewPerson(String^ name, String^ password, int code, int DNI, String^ mail, bool permission, char occupation, String^ gender, String^ phone, int age, bool isInside);
		void eliminarPerson(int codigo);
		void actualizarPerson(String^ name, String^ password, int code, int DNI, String^ mail, bool permission, char occupation, String^ gender, String^ phone, int age, bool isInside);
	};
}