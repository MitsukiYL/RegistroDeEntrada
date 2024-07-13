#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RDEController;
	using namespace RDEModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de InterfaceRDE
	/// </summary>
	public ref class InterfaceRDE : public System::Windows::Forms::Form
	{
	public:
		InterfaceRDE(void)
		{
			InitializeComponent();
			String^ cardCode;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InterfaceRDE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: String^ cardCode;
	private: System::Windows::Forms::TextBox^ txt_reservedparksite;
	private: System::Windows::Forms::Label^ label_reservedparksite;
	private: System::Windows::Forms::Label^ label_availableparksites;



	private: System::Windows::Forms::TextBox^ txt_availableparksites;
	private: System::IO::Ports::SerialPort^ port;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_reservedparksite = (gcnew System::Windows::Forms::TextBox());
			this->label_reservedparksite = (gcnew System::Windows::Forms::Label());
			this->label_availableparksites = (gcnew System::Windows::Forms::Label());
			this->txt_availableparksites = (gcnew System::Windows::Forms::TextBox());
			this->port = (gcnew System::IO::Ports::SerialPort(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡Realice su registro de entrada!";
			// 
			// txt_reservedparksite
			// 
			this->txt_reservedparksite->Location = System::Drawing::Point(241, 44);
			this->txt_reservedparksite->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_reservedparksite->Name = L"txt_reservedparksite";
			this->txt_reservedparksite->Size = System::Drawing::Size(191, 22);
			this->txt_reservedparksite->TabIndex = 10;
			this->txt_reservedparksite->Visible = false;
			// 
			// label_reservedparksite
			// 
			this->label_reservedparksite->AutoSize = true;
			this->label_reservedparksite->Location = System::Drawing::Point(13, 47);
			this->label_reservedparksite->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_reservedparksite->Name = L"label_reservedparksite";
			this->label_reservedparksite->Size = System::Drawing::Size(193, 16);
			this->label_reservedparksite->TabIndex = 11;
			this->label_reservedparksite->Text = L"Su estacionamiento reservado:\r\n";
			this->label_reservedparksite->Visible = false;
			// 
			// label_availableparksites
			// 
			this->label_availableparksites->AutoSize = true;
			this->label_availableparksites->Location = System::Drawing::Point(16, 47);
			this->label_availableparksites->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_availableparksites->Name = L"label_availableparksites";
			this->label_availableparksites->Size = System::Drawing::Size(153, 16);
			this->label_availableparksites->TabIndex = 13;
			this->label_availableparksites->Text = L"Estacionamientos libres:";
			this->label_availableparksites->Visible = false;
			// 
			// txt_availableparksites
			// 
			this->txt_availableparksites->Location = System::Drawing::Point(243, 44);
			this->txt_availableparksites->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_availableparksites->Name = L"txt_availableparksites";
			this->txt_availableparksites->Size = System::Drawing::Size(191, 22);
			this->txt_availableparksites->TabIndex = 12;
			this->txt_availableparksites->Visible = false;
			// 
			// port
			// 
			this->port->PortName = L"COM3";
			this->port->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &InterfaceRDE::port_DataReceived);
			// 
			// InterfaceRDE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 85);
			this->Controls->Add(this->label_availableparksites);
			this->Controls->Add(this->txt_availableparksites);
			this->Controls->Add(this->label_reservedparksite);
			this->Controls->Add(this->txt_reservedparksite);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"InterfaceRDE";
			this->Text = L"Registro de entrada al Campus";
			this->Load += gcnew System::EventHandler(this, &InterfaceRDE::InterfaceRDE_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceRDE_Load(System::Object^ sender, System::EventArgs^ e) {
		port->Open();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: void GenerarDoorRegister(card^ objCard, int sensorID) {
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
	TARJETAS DE PRUEBA ----------- NO BORRAR ESTAS TARJETAS NI CREAR NUEVAS PARA ESTOS USUARIOS
	---------------------------------
	CardID: 43143143
	Usuario: usuario prueba
	Permiso: General
	---------------------------------
	CardID: 88887777
	Usuario: admin
	Permiso: Excepcional
	---------------------------------
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	CardCtrl^ objCardtrl = gcnew CardCtrl();
	SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
	DoorCtrl^ objDoorCtrl = gcnew DoorCtrl();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();

	sensor^ objSensor = objSensorCtrl->buscarSensorxID(sensorID);
	door^ objDoor = objDoorCtrl->buscarDoorxN("Principal");

	user^ objUser = objCard->getObjUser();
	
	if (objUser != nullptr) {
		
		bool isInside = objUser->getInside();
		int userID = objUser->getUserID();

		String^ cardPerm = objCard->getPermissionType();

		if (cardPerm == "General") {
			this->label_reservedparksite->Visible = false;
			this->txt_reservedparksite->Visible = false;
			this->label_availableparksites->Visible = true;
			this->txt_availableparksites->Visible = true;
		}
		else {
			this->label_availableparksites->Visible = false;
			this->txt_availableparksites->Visible = false;
			this->label_reservedparksite->Visible = true;
			this->txt_reservedparksite->Visible = true;
		}

		this->txt_reservedparksite->Text = objCard->getObjUser()->getParkingSite()->getID();

		DateTimeHelper^ objDateTimeHelper = gcnew DateTimeHelper();

		

		if (isInside) {
			objUserCtrl->actualizarUserInside(userID, !isInside);
			//Llamamos todas los doorRegister de la tarjeta
			List<doorRegister^>^ listaDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxCard(cardCode);

			//Declaro el último doorRegister de la tarjeta,
			//Si el usuario está saliendo del campus -> isInside pasa a ser false + userIn pasa a ser false

			int i = (listaDoorRegister->Count);

			if (i > 0) {
				doorRegister^ lastDoorRegister = listaDoorRegister[i - 1];

				String^ exitTime = (objDateTimeHelper->horaActual()) + "-" + (objDateTimeHelper->fechaActual());

				objDoorRegisterCtrl->actualizarDoorRegister(lastDoorRegister->getEntryTime(), exitTime, false, lastDoorRegister->getCode(),
					lastDoorRegister->getObjCard(), lastDoorRegister->getObjSensor(), lastDoorRegister->getObjDoor());
			}
			port->WriteLine("ON");
			MessageBox::Show("Saliendo al campus");
			port->WriteLine("OFF");
		}
		else {

			String^ entryTime = (objDateTimeHelper->horaActual()) + "-" + (objDateTimeHelper->fechaActual());

			List<doorRegister^>^ listaDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterAll();

			int drID = 1, val = 1;
			while (val) {
				val = 0;
				for (int i = 0; i < listaDoorRegister->Count; i++) {
					if (listaDoorRegister[i]->getCode() == drID) {
						val = 1;
						break;
					}
				}
				if (!val) { break; }
				drID++;
			}

			objDoorRegisterCtrl->agregarNewDoorRegister(entryTime, "0", true, drID, objCard, objSensor, objDoor);
			objUserCtrl->actualizarUserInside(userID, !isInside);

			port->WriteLine("ON");
			MessageBox::Show(objCard->getObjUser()->getPerson()->getName() + ", bienvenido al campus");
			port->WriteLine("OFF");
		}
	}
	else {
		MessageBox::Show("Persona no identificada, inténtelo de nuevo");
	}
}
#pragma region Delegates
private: delegate void UPDATE_SERIAL_DATA(String^ data);
private: void UpdateRxData(String^ data) {

	/*
	PROTOCOLO DE CARD READER:    name    +    cardID    +    stopper
	Ejemplo:  "ID:123456:12312371823;\r"
	array_dataA = {"ID","123456","12312371823;\r"}
	array_dataB = {"12312371823","\r"};
	*/
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	int sensorID = 0;

	String^ separadorA = ":";
	String^ separadorB = ";";

	array<String^>^ array_dataA = data->Split(separadorA->ToCharArray());

	if (array_dataA->Length > 2) {
		sensorID = Convert::ToInt32(array_dataA[1]);
		array<String^>^ array_dataB = array_dataA[2]->Split(separadorB->ToCharArray());
		if (array_dataA[0] == "ID") {
			cardCode = array_dataB[0];
		}
	}

	card^ objCard = objCardCtrl->buscarCardxCode(cardCode);
	if (objCard != nullptr) {
		GenerarDoorRegister(objCard, sensorID);
	}
	else {
		MessageBox::Show("Tarjeta no identificada, inténtelo de nuevo");
	}
}
#pragma endregion
private: System::Void port_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	String^ data = port->ReadLine();

	UPDATE_SERIAL_DATA^ cb = gcnew  UPDATE_SERIAL_DATA(this, &InterfaceRDE::UpdateRxData);
	Control::Invoke(cb, data);
}
};
}
