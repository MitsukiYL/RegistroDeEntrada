#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class PersonCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		PersonCtrl();
		void abrirConexion();
		void cerrarConexion();

		List<person^>^ buscarPersonAll();
		person^ buscarPersonxDNI(int DNIb);
		person^ buscarPersonxPassword(String^ passwordSearch);

		void agregarNewPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age);
		void eliminarPerson(int DNI);
		void actualizarPerson(int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age);
	};
}