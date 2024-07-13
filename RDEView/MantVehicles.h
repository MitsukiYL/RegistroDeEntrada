#pragma once

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RDEController;
	using namespace RDEModel;

	/// <summary>
	/// Resumen de MantVehicles
	/// </summary>
	public ref class MantVehicles : public System::Windows::Forms::Form
	{
	public:
		MantVehicles(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		MantVehicles(user^ objUser)
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
		~MantVehicles()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_plate;
	private: System::Windows::Forms::TextBox^ txt_vehicleType;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_brand;

	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::TextBox^ txt_model;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ Vehicle_DGV;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ check_insurance;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







	private: System::Windows::Forms::TextBox^ txt_registrationDate;
	private: System::Windows::Forms::TextBox^ txt_insurance;
	private: System::Windows::Forms::TextBox^ txt_regDate;


	private: System::Windows::Forms::Label^ label4;








	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_userID;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_plate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_vehicleType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_model;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_insurance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TextBox^ txt_request;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ check_active;








	protected:

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
			this->txt_plate = (gcnew System::Windows::Forms::TextBox());
			this->txt_vehicleType = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_brand = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_model = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Vehicle_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->check_insurance = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_insurance = (gcnew System::Windows::Forms::TextBox());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_regDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_userID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_plate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_vehicleType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_model = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_insurance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_request = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(281, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Placa";
			// 
			// txt_plate
			// 
			this->txt_plate->Location = System::Drawing::Point(339, 15);
			this->txt_plate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_plate->Name = L"txt_plate";
			this->txt_plate->Size = System::Drawing::Size(281, 22);
			this->txt_plate->TabIndex = 1;
			// 
			// txt_vehicleType
			// 
			this->txt_vehicleType->Location = System::Drawing::Point(339, 59);
			this->txt_vehicleType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_vehicleType->Name = L"txt_vehicleType";
			this->txt_vehicleType->Size = System::Drawing::Size(281, 22);
			this->txt_vehicleType->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(267, 63);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Vehiculo";
			// 
			// txt_brand
			// 
			this->txt_brand->Location = System::Drawing::Point(339, 106);
			this->txt_brand->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_brand->Name = L"txt_brand";
			this->txt_brand->Size = System::Drawing::Size(281, 22);
			this->txt_brand->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(281, 108);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Marca";
			// 
			// txt_model
			// 
			this->txt_model->Location = System::Drawing::Point(773, 15);
			this->txt_model->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_model->Name = L"txt_model";
			this->txt_model->Size = System::Drawing::Size(281, 22);
			this->txt_model->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(708, 18);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Modelo";
			// 
			// Vehicle_DGV
			// 
			this->Vehicle_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vehicle_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column2,
					this->Column_plate, this->Column_vehicleType, this->Column_brand, this->Column_model, this->Column1, this->Column_insurance,
					this->Column3, this->Column4
			});
			this->Vehicle_DGV->Location = System::Drawing::Point(16, 194);
			this->Vehicle_DGV->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Vehicle_DGV->Name = L"Vehicle_DGV";
			this->Vehicle_DGV->RowHeadersWidth = 51;
			this->Vehicle_DGV->Size = System::Drawing::Size(1116, 336);
			this->Vehicle_DGV->TabIndex = 12;
			this->Vehicle_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantVehicles::Vehicle_DGV_CellClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 159);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantVehicles::button1_Click);
			// 
			// check_insurance
			// 
			this->check_insurance->AutoSize = true;
			this->check_insurance->Location = System::Drawing::Point(692, 164);
			this->check_insurance->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->check_insurance->Name = L"check_insurance";
			this->check_insurance->Size = System::Drawing::Size(141, 20);
			this->check_insurance->TabIndex = 14;
			this->check_insurance->Text = L"Cuenta con seguro";
			this->check_insurance->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 159);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantVehicles::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(279, 159);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantVehicles::button3_Click);
			// 
			// txt_insurance
			// 
			this->txt_insurance->Location = System::Drawing::Point(0, 0);
			this->txt_insurance->Name = L"txt_insurance";
			this->txt_insurance->Size = System::Drawing::Size(100, 22);
			this->txt_insurance->TabIndex = 0;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(0, 0);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(100, 22);
			this->txt_registrationDate->TabIndex = 0;
			// 
			// txt_regDate
			// 
			this->txt_regDate->Location = System::Drawing::Point(773, 60);
			this->txt_regDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_regDate->Name = L"txt_regDate";
			this->txt_regDate->Size = System::Drawing::Size(281, 22);
			this->txt_regDate->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(640, 64);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Fecha de Registro";
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(95, 15);
			this->txt_ID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(131, 22);
			this->txt_ID->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 18);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"ID";
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(95, 63);
			this->txt_userID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(131, 22);
			this->txt_userID->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 66);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"ID Usuario";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column_plate
			// 
			this->Column_plate->HeaderText = L"Placa";
			this->Column_plate->MinimumWidth = 6;
			this->Column_plate->Name = L"Column_plate";
			this->Column_plate->Width = 125;
			// 
			// Column_vehicleType
			// 
			this->Column_vehicleType->HeaderText = L"Vehículo";
			this->Column_vehicleType->MinimumWidth = 6;
			this->Column_vehicleType->Name = L"Column_vehicleType";
			this->Column_vehicleType->Width = 125;
			// 
			// Column_brand
			// 
			this->Column_brand->HeaderText = L"Marca";
			this->Column_brand->MinimumWidth = 6;
			this->Column_brand->Name = L"Column_brand";
			this->Column_brand->Width = 125;
			// 
			// Column_model
			// 
			this->Column_model->HeaderText = L"Modelo";
			this->Column_model->MinimumWidth = 6;
			this->Column_model->Name = L"Column_model";
			this->Column_model->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Fecha de Registro";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column_insurance
			// 
			this->Column_insurance->HeaderText = L"Seguro";
			this->Column_insurance->MinimumWidth = 6;
			this->Column_insurance->Name = L"Column_insurance";
			this->Column_insurance->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Activo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Solicitud";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// txt_request
			// 
			this->txt_request->Location = System::Drawing::Point(773, 105);
			this->txt_request->Margin = System::Windows::Forms::Padding(4);
			this->txt_request->Name = L"txt_request";
			this->txt_request->Size = System::Drawing::Size(281, 22);
			this->txt_request->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(700, 109);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Solicitud";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Location = System::Drawing::Point(913, 164);
			this->check_active->Margin = System::Windows::Forms::Padding(4);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(66, 20);
			this->check_active->TabIndex = 25;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// MantVehicles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1155, 544);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->txt_request);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_userID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_regDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->check_insurance);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Vehicle_DGV);
			this->Controls->Add(this->txt_model);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_brand);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_vehicleType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_plate);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MantVehicles";
			this->Text = L"MantVehicles";
			this->Load += gcnew System::EventHandler(this, &MantVehicles::MantVehicles_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

private: System::Void MantVehicles_Load(System::Object^ sender, System::EventArgs^ e) {
	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);
}

private: System::Void Vehicle_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int filaSeleccionada = this->Vehicle_DGV->SelectedRows[0]->Index;
	int codigoselec = Convert::ToInt32(this->Vehicle_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	
	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	vehicle^ Vehicle = objVehicleCtrl->buscarVehiclexID(codigoselec);

	if (Vehicle != nullptr) {
		this->txt_ID->Text = Convert::ToString(Vehicle->getID());
		this->txt_userID->Text = Convert::ToString(Vehicle->getUser()->getUserID());
		this->txt_vehicleType->Text = Vehicle->getVehicleType();
		this->txt_plate->Text = Vehicle->getPlate();
		this->txt_brand->Text = Vehicle->getBrand();
		this->txt_model->Text = Vehicle->getModel();
		this->check_insurance->Checked = Vehicle->getInsurance();
		this->txt_regDate->Text = Vehicle->getRegistrationDate();
		this->check_active->Checked = Vehicle->getActive();
		this->txt_request->Text = Convert::ToString(Vehicle->getRequest()->getID());
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR

	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();

	int ID = 0;
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ vehicleType = this->txt_vehicleType->Text;
	String^ plate = this->txt_plate->Text;
	String^ brand = this->txt_brand->Text;
	String^ model = this->txt_model->Text;
	bool insurance = this->check_insurance->Checked;
	String^ registrationDate = this->txt_regDate->Text;
	bool active = this->check_active->Checked;
	int requestID = Convert::ToInt32(this->txt_request->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

	if ((objUser != nullptr) && (objRequest != nullptr)) {
		objVehicleCtrl->agregarNewVehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
		MessageBox::Show("El vehiculo se añadió correctamente");
	}
	else {
		MessageBox::Show("Datos ingresados son incorrectos");
	}

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR

	int ID = Convert::ToInt32(this->txt_ID->Text);
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ vehicleType = this->txt_vehicleType->Text;
	String^ plate = this->txt_plate->Text;
	String^ brand = this->txt_brand->Text;
	String^ model = this->txt_model->Text;
	bool insurance = this->check_insurance->Checked;
	String^ registrationDate = this->txt_regDate->Text;
	bool active = this->check_active->Checked;
	int requestID = Convert::ToInt32(this->txt_request->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	request^ objRequest = objRequestCtrl->buscarRequestxID(requestID);

	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	objVehicleCtrl->actualizarVehicle(ID, vehicleType, registrationDate, plate, brand, model, insurance, objUser, active, objRequest);
	MessageBox::Show("El vehiculo seleccionado ha sido actualizado correctamente");
	txt_plate->Clear();

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR

	int filaSeleccionada = this->Vehicle_DGV->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->Vehicle_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();
	objVehicleCtrl->eliminarVehicle(codigoEliminar);
	MessageBox::Show("El vehiculo seleccionado ha sido eliminado correctamente");
	this->Vehicle_DGV->Rows->Clear();

	List<vehicle^>^ listVehicle = objVehicleCtrl->buscarVehicleAll();
	mostrarGrilla(listVehicle);
}

private: void mostrarGrilla(List<vehicle^>^ listVehicle) {
	this->Vehicle_DGV->Rows->Clear();
	for (int i = 0; i < listVehicle->Count; i++) {
		vehicle^ objVehicle = listVehicle[i];
		array<String^>^ filaGrilla = gcnew array<String^>(11);
		filaGrilla[0] = Convert::ToString(objVehicle->getID());
		filaGrilla[1] = objVehicle->getPlate();
		filaGrilla[2] = objVehicle->getVehicleType();
		filaGrilla[3] = objVehicle->getBrand();
		filaGrilla[4] = objVehicle->getModel();
		filaGrilla[6] = objVehicle->getRegistrationDate();
		filaGrilla[7] = Convert::ToString(objVehicle->getInsurance());
		filaGrilla[8] = Convert::ToString(objVehicle->getUser()->getUserID());
		filaGrilla[9] = Convert::ToString(objVehicle->getActive());
		filaGrilla[10] = Convert::ToString(objVehicle->getRequest()->getID());
		this->Vehicle_DGV->Rows->Add(filaGrilla);
	}
}
};
}
