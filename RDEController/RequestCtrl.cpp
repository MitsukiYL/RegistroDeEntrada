#include "RequestCtrl.h"
#include "UserCtrl.h"

using namespace RDEController;
using namespace System::IO;

RequestCtrl::RequestCtrl() {

}
List<request^>^ RequestCtrl::buscarRequestAll() {
	List<request^>^ listaRequest = gcnew List<request^>();
	array<String^>^ lineas = File::ReadAllLines("Request.txt");
	String^ separadores = ";";
	for each (String ^ lineaReq in lineas) {

		array<String^>^ datos = lineaReq->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		int date = Convert::ToInt32(datos[1]);
		String^ type = datos[2];
		String^ newOccupation = datos[3];
		String^ comment = datos[4];
		int userID = Convert::ToInt32(datos[5]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		request^ ObjRequest = gcnew request(ID, date, type, newOccupation, comment, objUser);
		listaRequest->Add(ObjRequest);
	}
	return listaRequest;
}
request^ RequestCtrl::buscarRequestxID(int IDsearch) {
	request^ objRequest;
	array<String^>^ lineas = File::ReadAllLines("Request.txt");
	String^ separadores = ";";
	for each (String ^ lineaReq in lineas) {
		array<String^>^ datos = lineaReq->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		int date = Convert::ToInt32(datos[1]);
		String^ type = datos[2];
		String^ newOccupation = datos[3];
		String^ comment = datos[4];
		int userID = Convert::ToInt32(datos[5]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (ID == IDsearch) {
			request^ objRequest = gcnew request(ID, date, type, newOccupation, comment, objUser);
			break;
		}
	}
	return objRequest;
}
void RequestCtrl::escribirArchivo(List<request^>^ listaRequest) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRequest->Count);
	for (int i = 0; i < listaRequest->Count; i++) {
		request^ objRequest = listaRequest[i];
		lineasArchivo[i] = Convert::ToString(objRequest->getID()) + ";" + Convert::ToString(objRequest->getDate()) + ";" + objRequest->getType()
			+ ";" + objRequest->getNewOccupation() + ";" + objRequest->getComment() + ";" + Convert::ToString(objRequest->getUser()->getUserID());
	}
	File::WriteAllLines("Request.txt", lineasArchivo);
}
void RequestCtrl::agregarNewRequest(int ID, int date, String^ type, String^ newOccupation, String^ comment, user^ objUser) {
	List<request^>^ listaRequest = buscarRequestAll();
	request^ objRequest = gcnew request(ID, date, type, newOccupation, comment, objUser);
	listaRequest->Add(objRequest);
	escribirArchivo(listaRequest);
}
void RequestCtrl::eliminarRequest(int ID) {
	List<request^>^ listaRequest = buscarRequestAll();
	for (int i = 0; i < listaRequest->Count; i++) {
		if (listaRequest[i]->getID() == ID) {
			listaRequest->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaRequest);
}
void RequestCtrl::actualizarRequest(int ID, int date, String^ type, String^ newOccupation, String^ comment, user^ objUser) {
	List<request^>^ listaRequest = buscarRequestAll();
	for (int i = 0; i < listaRequest->Count; i++) {
		if (listaRequest[i]->getID() == ID) {
			listaRequest[i]->setDate(date);
			listaRequest[i]->setType(type);
			listaRequest[i]->setNewOccupation(newOccupation);
			listaRequest[i]->setComment(comment);
			listaRequest[i]->setUser(objUser);
			break;
		}
	}
	escribirArchivo(listaRequest);
}