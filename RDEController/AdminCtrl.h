#pragma once

namespace RDEController {

using namespace System::Collections::Generic;
using namespace RDEModel;
using namespace System;
using namespace System::Data::SqlClient;

public ref class AdminCtrl {
	private:
		SqlConnection^ objConexion;
	public:
		AdminCtrl();
		void abrirConexion();
		void cerrarConexion();

		admin^ BuscarAdminxID(int IDbuscar);
		admin^ BuscarAdminxPersonDNI(int DNIbuscar);
		List <admin^>^ AllAdministradores();

		void agregarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson);
		void actualizarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson);
		void eliminarAdmin(int adminID);
};
}
