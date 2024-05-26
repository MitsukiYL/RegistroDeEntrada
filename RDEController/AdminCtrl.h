#pragma once

namespace RDEController {

using namespace System::Collections::Generic;
using namespace RDEModel;
using namespace System;

public ref class AdminCtrl {
public:
	AdminCtrl();
	admin^ BuscarAdminxID(int IDbuscar);
	List <admin^>^ AllAdministradores();
	void agregarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, int personDNI);
	void escribirArchivo(List <admin^>^ listaEstac);
	void actualizarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, int personDNI);
	void eliminarAdmin(String^ ID);
};
}
