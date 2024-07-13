#pragma once

namespace RDEController {

	using namespace System::Collections::Generic;
	using namespace RDEModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class InterfaceCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		InterfaceCtrl();
		void abrirConexion();
		void cerrarConexion();

		interface^ buscarInterfacexID(int IDb);

		void agregarNewInterface(int pin, String^ protocol, String^ producer, bool active, String^ registrationDate, int ID);
		void actualizarMotorActive(int ID, bool active);
		void eliminarInterface(int IDb);
	};
}