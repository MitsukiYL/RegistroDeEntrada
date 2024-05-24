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
	void agregarAdmin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID);
	void escribirArchivo(List <admin^>^ listaEstac);
	void actualizarAdmin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID);
	void eliminarAdmin(String^ ID);
};
}
