#pragma once

using namespace System;
using namespace RDEModel;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace RDEController {
	public ref class Controller
	{
	private:
		static List<person^>^ PersonList = gcnew List<person^>();
		static List<vehicle^>^ VehicleList = gcnew List<vehicle^>();

		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);

	public:

		static int AddPerson(person^);
		static List<person^>^ GetPerson();
		static Object^ LoadPerson();
		static int UpdatePerson(person^ person);
		static int DeletePerson(int DNI);
		static List<person^>^ QueryAllPerson();
		static person^ QueryPersonbyDNI(int DNI);

		static int AddVehicle(vehicle^);
		static List<vehicle^>^ GetVehicle();
		static Object^ LoadVehicle();
		static String^ UpdateVehicle(vehicle^ vehicle);
		static String^ DeleteVehicle(String^ plate);
		static List<vehicle^>^ QueryAllVehicle();
		static vehicle^ QueryVehiclebyPlate(String^ plate);
	};
}