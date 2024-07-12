#pragma once
#include "BuscarPerson.h"

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
	/// Resumen de MantUser
	/// </summary>
	public ref class MantUser : public System::Windows::Forms::Form
	{
	public:
		MantUser(void)
		{
			InitializeComponent();
			this->objPerson = gcnew person();
			this->objVehicle = gcnew vehicle();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MantUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ User_DGV;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_userID;
	private: System::Windows::Forms::TextBox^ txt_registrationDate;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_userType;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_ParkLotID;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;






	private: person^ objPerson;
	private: vehicle^ objVehicle;
	private: System::Windows::Forms::DataGridView^ VehiclexUser_DGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::CheckBox^ check_inside;





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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->User_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_userID = (gcnew System::Windows::Forms::TextBox());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_userType = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_ParkLotID = (gcnew System::Windows::Forms::TextBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->VehiclexUser_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->check_inside = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VehiclexUser_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(289, 158);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantUser::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(147, 158);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantUser::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 158);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantUser::button1_Click);
			// 
			// User_DGV
			// 
			this->User_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->User_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column4,
					this->Column5, this->Column10, this->Column3, this->Column8, this->Column11
			});
			this->User_DGV->Location = System::Drawing::Point(16, 193);
			this->User_DGV->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->User_DGV->Name = L"User_DGV";
			this->User_DGV->RowHeadersWidth = 62;
			this->User_DGV->Size = System::Drawing::Size(1156, 356);
			this->User_DGV->TabIndex = 44;
			this->User_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantUser::Person_DGV_CellClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 20);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 36;
			this->label3->Text = L"ID de Usuario";
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(195, 10);
			this->txt_userID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(223, 22);
			this->txt_userID->TabIndex = 33;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(195, 85);
			this->txt_registrationDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(223, 22);
			this->txt_registrationDate->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 55);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Tipo de Usuario";
			// 
			// txt_userType
			// 
			this->txt_userType->Location = System::Drawing::Point(195, 46);
			this->txt_userType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_userType->Name = L"txt_userType";
			this->txt_userType->Size = System::Drawing::Size(223, 22);
			this->txt_userType->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 94);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Fecha de Registro";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Location = System::Drawing::Point(195, 130);
			this->check_active->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(66, 20);
			this->check_active->TabIndex = 108;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(432, 20);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 16);
			this->label2->TabIndex = 110;
			this->label2->Text = L"Lugar de Estacionamiento";
			// 
			// txt_ParkLotID
			// 
			this->txt_ParkLotID->Location = System::Drawing::Point(619, 11);
			this->txt_ParkLotID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_ParkLotID->Name = L"txt_ParkLotID";
			this->txt_ParkLotID->Size = System::Drawing::Size(223, 22);
			this->txt_ParkLotID->TabIndex = 109;
			// 
			// txt_DNI
			// 
			this->txt_DNI->Enabled = false;
			this->txt_DNI->Location = System::Drawing::Point(619, 47);
			this->txt_DNI->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(223, 22);
			this->txt_DNI->TabIndex = 130;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(432, 52);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 16);
			this->label9->TabIndex = 129;
			this->label9->Text = L"DNI";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(681, 82);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 131;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantUser::button4_Click);
			// 
			// VehiclexUser_DGV
			// 
			this->VehiclexUser_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->VehiclexUser_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column2,
					this->Column6, this->Column7
			});
			this->VehiclexUser_DGV->Location = System::Drawing::Point(851, 11);
			this->VehiclexUser_DGV->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->VehiclexUser_DGV->Name = L"VehiclexUser_DGV";
			this->VehiclexUser_DGV->RowHeadersWidth = 51;
			this->VehiclexUser_DGV->Size = System::Drawing::Size(321, 144);
			this->VehiclexUser_DGV->TabIndex = 132;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Placa";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Vehículo";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(941, 158);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 28);
			this->button5->TabIndex = 133;
			this->button5->Text = L"Agregar Vehículo";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MantUser::button5_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de Usuario";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Registro";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Lugar de Estacionamiento";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Estado";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Está adentro";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"DNI";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// check_inside
			// 
			this->check_inside->AutoSize = true;
			this->check_inside->Location = System::Drawing::Point(352, 130);
			this->check_inside->Margin = System::Windows::Forms::Padding(4);
			this->check_inside->Name = L"check_inside";
			this->check_inside->Size = System::Drawing::Size(105, 20);
			this->check_inside->TabIndex = 134;
			this->check_inside->Text = L"Está adentro";
			this->check_inside->UseVisualStyleBackColor = true;
			// 
			// MantUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 564);
			this->Controls->Add(this->check_inside);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->VehiclexUser_DGV);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_ParkLotID);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->User_DGV);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_userType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_registrationDate);
			this->Controls->Add(this->txt_userID);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MantUser";
			this->Text = L"MantUser";
			this->Load += gcnew System::EventHandler(this, &MantUser::MantUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VehiclexUser_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void mostrarGrillaUser(List<user^>^ listUser) {
	this->User_DGV->Rows->Clear();
	for (int i = 0; i < listUser->Count; i++) {
		user^ objUser = listUser[i];
		array<String^>^ filaGrilla = gcnew array<String^>(7);
		filaGrilla[0] = Convert::ToString(objUser->getUserID());
		filaGrilla[1] = objUser->getUserType();
		filaGrilla[2] = objUser->getRegistrationDate();
		filaGrilla[3] = Convert::ToString(objUser->getParkingSite()->getID());
		filaGrilla[4] = Convert::ToString(objUser->getActive());
		filaGrilla[5] = Convert::ToString(objUser->getInside());
		filaGrilla[6] = Convert::ToString(objUser->getPerson()->getDNI());
		this->User_DGV->Rows->Add(filaGrilla);
	}
}
private: void mostrarGrillaVehicle(List<vehicle^>^ listVehicle) {
	this->VehiclexUser_DGV->Rows->Clear();
	for (int i = 0; i < listVehicle->Count; i++) {
		vehicle^ objVehicle = listVehicle[i];
		array<String^>^ filaGrilla = gcnew array<String^>(3);
		if (objVehicle != nullptr) {
			filaGrilla[0] = Convert::ToString(objVehicle->getID());
			filaGrilla[1] = objVehicle->getPlate();
			filaGrilla[2] = objVehicle->getVehicleType();
		}
		this->VehiclexUser_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ userType = this->txt_userType->Text;
	String^ registrationDate = this->txt_registrationDate->Text;
	bool active = this->check_active->Checked;
	bool inside = this->check_inside->Checked;
	String^ parklotID = this->txt_ParkLotID->Text;
	int DNI = Convert::ToInt32(this->txt_DNI->Text);

	ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
	parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->agregarNewUser(userID, userType, active, inside, registrationDate, objParkingSite, objPerson);
	txt_userID->Clear();

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrillaUser(listaAdmin);

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ userType = this->txt_userType->Text;
	String^ registrationDate = this->txt_registrationDate->Text;
	bool active = this->check_active->Checked;
	bool inside = this->check_inside->Checked;
	String^ parklotID = this->txt_ParkLotID->Text;
	int DNI = Convert::ToInt32(this->txt_DNI->Text);

	ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
	parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->actualizarUser(userID, userType, active, inside, registrationDate, objParkingSite, objPerson);
	txt_userID->Clear();
	MessageBox::Show("El usuario seleccionada ha sido actualizado correctamente");

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrillaUser(listaAdmin);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->User_DGV->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->User_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->eliminarUser(codigoEliminar);

	MessageBox::Show("El usuario seleccionada ha sido eliminado correctamente");
	this->User_DGV->Rows->Clear();

	List<user^>^ listaUser = objUserCtrl->buscarUserAll();
	mostrarGrillaUser(listaUser);
}

private: System::Void Person_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int userID = Int32::Parse(User_DGV->Rows[User_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();

	user^ User = objUserCtrl->buscarUserxUserID(userID);
	if (User != nullptr) {
		this->txt_userID->Text = Convert::ToString(User->getUserID());
		this->txt_userType->Text = User->getUserType();
		this->txt_registrationDate->Text = User->getRegistrationDate();
		this->check_active->Checked = User->getActive();
		this->txt_ParkLotID->Text = User->getParkingSite()->getID();
		this->txt_DNI->Text = Convert::ToString(User->getPerson()->getDNI());
		
		List<vehicle^>^ listaVehicles = objVehicleCtrl->buscarVehiclexUser(User->getUserID());
		mostrarGrillaVehicle(listaVehicles);
	}
}
private: System::Void MantUser_Load(System::Object^ sender, System::EventArgs^ e) {
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	List<user^>^ listaUser = objUserCtrl->buscarUserAll();
	mostrarGrillaUser(listaUser);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//BUSCAR PERSON
	BuscarPerson^ mantBuscarPerson = gcnew BuscarPerson(this->objPerson);
	mantBuscarPerson->ShowDialog();

	this->txt_DNI->Text = Convert::ToString(this->objPerson->getDNI());
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//AGREGAR VEHÍCULO A USUARIO SELECCIONADO
	
}

};
}
