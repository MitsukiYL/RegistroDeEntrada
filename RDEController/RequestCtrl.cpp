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
		String^ emissionDate = datos[1];
		String^ responseDate =datos[2];
		String^ type = datos[3];
		String^ newOccupation = datos[4];
		String^ comment = datos[5];
		bool active = Convert::ToBoolean(datos[6]);
		bool accepted = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		request^ ObjRequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
		listaRequest->Add(ObjRequest);
	}
	return listaRequest;
}

List<request^>^ RequestCtrl::buscarRequestxActive() {
	List<request^>^ listaRequest = gcnew List<request^>();
	array<String^>^ lineas = File::ReadAllLines("Request.txt");
	String^ separadores = ";";
	for each (String ^ lineaReq in lineas) {

		array<String^>^ datos = lineaReq->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ emissionDate = datos[1];
		String^ responseDate = datos[2];
		String^ type = datos[3];
		String^ newOccupation = datos[4];
		String^ comment = datos[5];
		bool active = Convert::ToBoolean(datos[6]);
		bool accepted = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (active) {
			request^ ObjRequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
			listaRequest->Add(ObjRequest);
		}

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
		String^ emissionDate = datos[1];
		String^ responseDate = datos[2];
		String^ type = datos[3];
		String^ newOccupation = datos[4];
		String^ comment = datos[5];
		bool active = Convert::ToBoolean(datos[6]);
		bool accepted = Convert::ToBoolean(datos[7]);
		int userID = Convert::ToInt32(datos[8]);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		if (ID == IDsearch) {
			objRequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
			break;
		}
	}
	return objRequest;
}
void RequestCtrl::escribirArchivo(List<request^>^ listaRequest) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRequest->Count);
	for (int i = 0; i < listaRequest->Count; i++) {
		request^ objRequest = listaRequest[i];
		lineasArchivo[i] = Convert::ToString(objRequest->getID()) + ";" + objRequest->getEmissionDate() + ";" + objRequest->getResponseDate()
			+ ";" + objRequest->getType() + ";" + objRequest->getNewOccupation() + ";" + objRequest->getComment() + ";" + Convert::ToString(objRequest->getActive())
			+ ";" + Convert::ToString(objRequest->getAccepted()) + ";" + Convert::ToString(objRequest->getUser()->getUserID());
	}
	File::WriteAllLines("Request.txt", lineasArchivo);
}
void RequestCtrl::agregarNewRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser) {
	List<request^>^ listaRequest = buscarRequestAll();
	request^ objRequest = gcnew request(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
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
void RequestCtrl::actualizarRequest(int ID, String^ emissionDate, String^ responseDate, String^ type, String^ newOccupation, String^ comment, bool active, bool accepted, user^ objUser) {
	List<request^>^ listaRequest = buscarRequestAll();
	for (int i = 0; i < listaRequest->Count; i++) {
		if (listaRequest[i]->getID() == ID) {
			listaRequest[i]->setEmissionDate(emissionDate);
			listaRequest[i]->setResponseDate(responseDate);
			listaRequest[i]->setType(type);
			listaRequest[i]->setNewOccupation(newOccupation);
			listaRequest[i]->setComment(comment);
			listaRequest[i]->setActive(active);
			listaRequest[i]->setAccepted(accepted);
			listaRequest[i]->setUser(objUser);
			break;
		}
	}
	escribirArchivo(listaRequest);
}