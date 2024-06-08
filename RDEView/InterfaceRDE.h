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







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_code;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_reservedparksite;
	private: System::Windows::Forms::Label^ label_reservedparksite;
	private: System::Windows::Forms::Label^ label_availableparksites;



	private: System::Windows::Forms::TextBox^ txt_availableparksites;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_reservedparksite = (gcnew System::Windows::Forms::TextBox());
			this->label_reservedparksite = (gcnew System::Windows::Forms::Label());
			this->label_availableparksites = (gcnew System::Windows::Forms::Label());
			this->txt_availableparksites = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡Realice su registro de entrada!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Codigo de tarjeta:";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(183, 34);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(144, 20);
			this->txt_code->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 66);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 19);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Pasar tarjeta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceRDE::button1_Click);
			// 
			// txt_reservedparksite
			// 
			this->txt_reservedparksite->Location = System::Drawing::Point(183, 98);
			this->txt_reservedparksite->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_reservedparksite->Name = L"txt_reservedparksite";
			this->txt_reservedparksite->Size = System::Drawing::Size(144, 20);
			this->txt_reservedparksite->TabIndex = 10;
			this->txt_reservedparksite->Visible = false;
			// 
			// label_reservedparksite
			// 
			this->label_reservedparksite->AutoSize = true;
			this->label_reservedparksite->Location = System::Drawing::Point(10, 103);
			this->label_reservedparksite->Name = L"label_reservedparksite";
			this->label_reservedparksite->Size = System::Drawing::Size(153, 13);
			this->label_reservedparksite->TabIndex = 11;
			this->label_reservedparksite->Text = L"Su estacionamiento reservado:\r\n";
			this->label_reservedparksite->Visible = false;
			// 
			// label_availableparksites
			// 
			this->label_availableparksites->AutoSize = true;
			this->label_availableparksites->Location = System::Drawing::Point(12, 103);
			this->label_availableparksites->Name = L"label_availableparksites";
			this->label_availableparksites->Size = System::Drawing::Size(120, 13);
			this->label_availableparksites->TabIndex = 13;
			this->label_availableparksites->Text = L"Estacionamientos libres:";
			this->label_availableparksites->Visible = false;
			// 
			// txt_availableparksites
			// 
			this->txt_availableparksites->Location = System::Drawing::Point(183, 98);
			this->txt_availableparksites->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_availableparksites->Name = L"txt_availableparksites";
			this->txt_availableparksites->Size = System::Drawing::Size(144, 20);
			this->txt_availableparksites->TabIndex = 12;
			this->txt_availableparksites->Visible = false;
			// 
			// InterfaceRDE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(334, 140);
			this->Controls->Add(this->label_availableparksites);
			this->Controls->Add(this->txt_availableparksites);
			this->Controls->Add(this->label_reservedparksite);
			this->Controls->Add(this->txt_reservedparksite);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Name = L"InterfaceRDE";
			this->Text = L"Registro de entrada al Campus";
			this->Load += gcnew System::EventHandler(this, &InterfaceRDE::InterfaceRDE_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceRDE_Load(System::Object^ sender, System::EventArgs^ e) {
		/*DateTimeHelper^ datetime = gcnew DateTimeHelper();

		//datetime->horaActual();
		//datetime->fechaActual();
		
		String^ horaEntrada = this->textBox1->Text;
		this->textBox2->Text = datetime->fechaActual();
		String^ horaSalida = this->textBox3->Text;
		//int codeCard = 0000;
		int codeCard = Convert::ToInt32(this->textBox4->Text);
		
		int fechaActual = Convert::ToInt32(datetime->fechaActual());
		int horaActual = Convert::ToInt32(datetime->horaActual());

		int orden = 1;//se actualizara el orden luego

		bool estaAdentro = false;

		int NhoraEntrada = Convert::ToInt32(horaEntrada);
		int NhoraSalida = Convert::ToInt32(horaSalida);
	
		if ((horaActual > NhoraEntrada) && (horaActual < NhoraSalida)) {

			bool estaAdentro = true;
		}

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		SensorCtrl^ obbjSensorCtrl = gcnew SensorCtrl();
		DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();

		int sensorID = 87654;//este codigo es de prueba

		card^ objCard = objCardCtrl->buscarCardxCode(codeCard);
		sensor^ objSensor = obbjSensorCtrl->buscarSensorxID(sensorID);

		objDoorRegisterCtrl->agregarNewDoorRegister(horaEntrada, horaSalida, estaAdentro, orden, objCard, objSensor);

		MessageBox::Show("Registro de entrada realizado correctamente");
		this->Close();*/
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	CardCtrl^ objCardtrl = gcnew CardCtrl();
	SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
	DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();

	sensor^ objSensor = objSensorCtrl->buscarSensorxID(123456);

	int cardCode = Convert::ToInt32(this->txt_code->Text);
	
	card^ objCard = objCardtrl->buscarCardxCode(cardCode);
	person^ objPerson = objCard->getObjUser()->getPerson();
	bool isInside = objPerson->getIsInside();
	int DNI = objPerson->getDNI();
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
		//AVANZAR
		objPersonCtrl->actualizarPersonIsInside(DNI, !isInside);
		//Llamamos todas los doorRegister de la tarjeta
		List<doorRegister^>^ listaDoorRegister = objDoorRegisterCtrl->buscarDoorRegisterxCard(cardCode);

		//Declaro el último doorRegister de la tarjeta,
		//Si el usuario está saliendo del campus -> isInside pasa a ser false + userIn pasa a ser false
		int i = (listaDoorRegister->Count);
		doorRegister^ lastDoorRegister = listaDoorRegister[i - 1];


		if (i > 0) {
			String^ exitTime = (objDateTimeHelper->horaActual()) + ":" + (objDateTimeHelper->fechaActual());
			objDoorRegisterCtrl->actualizarDoorRegister(lastDoorRegister->getEntryTime(), exitTime, false, lastDoorRegister->getCode(),
				lastDoorRegister->getObjCard(), lastDoorRegister->getObjSensor());
		}


		MessageBox::Show("Saliendo al campus");
	}
	else {
		
		String^ entryTime = (objDateTimeHelper->horaActual()) + ":" + (objDateTimeHelper->fechaActual());

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

		objDoorRegisterCtrl->agregarNewDoorRegister(entryTime, "0", true, drID, objCard, objSensor);
		objPersonCtrl->actualizarPersonIsInside(DNI, !isInside);

		MessageBox::Show(objCard->getObjUser()->getPerson()->getName() + ", bienvenido al campus");
	}
}
};
}
