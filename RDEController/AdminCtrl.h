#pragma once

namespace RDEController {

using namespace System::Collections::Generic;
using namespace RDEModel;
using namespace System;

public ref class AdminCtrl {
public:
	AdminCtrl();
	admin^ BuscarAdminxID(int IDbuscar);
	admin^ BuscarAdminxPersonDNI(int DNIbuscar);
	List <admin^>^ AllAdministradores();
	void agregarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson);
	void escribirArchivo(List <admin^>^ listaEstac);
	void actualizarAdmin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson);
	void eliminarAdmin(int ID);
};
}
