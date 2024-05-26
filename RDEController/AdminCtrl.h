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
	void agregarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
	void escribirArchivo(List <admin^>^ listaEstac);
	void actualizarAdmin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);
	void eliminarAdmin(int ID);
};
}
