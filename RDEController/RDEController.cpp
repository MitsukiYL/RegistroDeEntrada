#include "pch.h"

#include "RDEController.h"

using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

//METODOS PERSONAS

int RDEController::Controller::AddPerson(person^ person)
{
	PersonList->Add(person);
	PersistXMLFile("Person.xml", PersonList);
	return 1;
}

List<person^>^ RDEController::Controller::GetPerson()
{
	List<person^>^ personList = gcnew List<person^>();
	LoadPerson();
	personList = PersonList;
	return personList;
}

Object^ RDEController::Controller::LoadPerson()
{
	FileStream^ file;
	Object^ result;
	BinaryFormatter^ formatter;

	try {
		XmlSerializer^ reader = gcnew XmlSerializer(PersonList->GetType());
		StreamReader^ sr = gcnew StreamReader("Person.xml");
		PersonList = (List<person^>^)reader->Deserialize(sr);
		sr->Close();

	}
	catch (Exception^ e) {

	}

	return result;
}

int RDEController::Controller::UpdatePerson(person^ person)
{
	for (int i = 0; i < PersonList->Count; i++) {
		if (PersonList[i]->DNI == person->DNI) {
			PersonList[i] = person;
			PersistXMLFile("Person.xml", PersonList);
			return person->DNI;
		}
	}
	return 0;
}

int RDEController::Controller::DeletePerson(int DNI)
{
	for (int i = 0; i < PersonList->Count; i++) {
		if (PersonList[i]->DNI == DNI) {
			PersonList->RemoveAt(i);

			PersistXMLFile("Person.xml", PersonList);
			return DNI;
		}
	}
	return 0;
}

List<person^>^ RDEController::Controller::QueryAllPerson()
{
	PersonList = (List<person^>^) LoadXMLFile("Person.xml");
	if (PersonList == nullptr)
		PersonList = gcnew List<person^>();
	return PersonList;
}

person^ RDEController::Controller::QueryPersonbyDNI(int DNI)
{
	PersonList = (List<person^>^)LoadXMLFile("Person.xml");

	for (int i = 0; i < PersonList->Count; i++) {
		if (PersonList[i]->DNI == DNI) {
			return PersonList[i];
		}
	}
	return nullptr;
}

//METODOS VEHICULOS

int RDEController::Controller::AddVehicle(vehicle^ vehicle)
{
	VehicleList->Add(vehicle);
	PersistXMLFile("Vehicle.xml", VehicleList);
	return 1;
}

List<vehicle^>^ RDEController::Controller::GetVehicle()
{
	List<vehicle^>^ vehicleList = gcnew List<vehicle^>();
	LoadVehicle();
	vehicleList = VehicleList;
	return vehicleList;
}

Object^ RDEController::Controller::LoadVehicle()
{
	FileStream^ file;
	Object^ result;
	BinaryFormatter^ formatter;

	try {
		XmlSerializer^ reader = gcnew XmlSerializer(VehicleList->GetType());
		StreamReader^ sr = gcnew StreamReader("Vehicle.xml");
		VehicleList = (List<vehicle^>^)reader->Deserialize(sr);
		sr->Close();

	}
	catch (Exception^ e) {

	}

	return result;
}

String^ RDEController::Controller::UpdateVehicle(vehicle^ vehicle)
{
	for (int i = 0; i < VehicleList->Count; i++) {
		if (VehicleList[i]->plate == vehicle->plate) {
			VehicleList[i] = vehicle;
			PersistXMLFile("Vehicle.xml", VehicleList);
			return vehicle->plate;
		}
	}
	return "0";
}

String^ RDEController::Controller::DeleteVehicle(String^ plate)
{
	for (int i = 0; i < VehicleList->Count; i++) {
		if (VehicleList[i]->plate == plate) {
			VehicleList->RemoveAt(i);

			PersistXMLFile("Vehicle.xml", VehicleList);
			return plate;
		}
	}
	return "0";
}

List<vehicle^>^ RDEController::Controller::QueryAllVehicle()
{
	VehicleList = (List<vehicle^>^) LoadXMLFile("Vehicle.xml");
	if (VehicleList == nullptr)
		VehicleList = gcnew List<vehicle^>();
	return VehicleList;
}

vehicle^ RDEController::Controller::QueryVehiclebyPlate(String^ plate)
{
	VehicleList = (List<vehicle^>^)LoadXMLFile("Vehicle.xml");

	for (int i = 0; i < VehicleList->Count; i++) {
		if (VehicleList[i]->plate == plate) {
			return VehicleList[i];
		}
	}
	return nullptr;
}

//METODOS PERSISTENCIA
void RDEController::Controller::PersistXMLFile(String^ fileName, Object^ persistObject)
{
	StreamWriter^ writer;
	try {
		writer = gcnew StreamWriter(fileName);
		if (persistObject->GetType() == List<person^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<person^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
		if (persistObject->GetType() == List<vehicle^>::typeid) {
			XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<vehicle^>::typeid);
			xmlSerializer->Serialize(writer, persistObject);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (writer != nullptr) writer->Close();
	}
}

Object^ RDEController::Controller::LoadXMLFile(String^ fileName)
{
	StreamReader^ reader;
	Object^ result;
	XmlSerializer^ xmlSerializer;
	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			if (fileName->Equals("Person.xml")) {
				xmlSerializer = gcnew XmlSerializer(List<person^>::typeid);
				result = xmlSerializer->Deserialize(reader);
			}
			if (fileName->Equals("Vehicle.xml")) {
				xmlSerializer = gcnew XmlSerializer(List<vehicle^>::typeid);
				result = xmlSerializer->Deserialize(reader);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
	}

	return result;
}
