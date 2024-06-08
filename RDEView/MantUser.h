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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: person^ objPerson;
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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantUser::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(110, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantUser::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantUser::button1_Click);
			// 
			// User_DGV
			// 
			this->User_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->User_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column4,
					this->Column5, this->Column10, this->Column3, this->Column11
			});
			this->User_DGV->Location = System::Drawing::Point(12, 157);
			this->User_DGV->Name = L"User_DGV";
			this->User_DGV->RowHeadersWidth = 62;
			this->User_DGV->Size = System::Drawing::Size(866, 289);
			this->User_DGV->TabIndex = 44;
			this->User_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantUser::Person_DGV_CellClick);
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
			this->Column10->Name = L"Column10";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Estado";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"DNI";
			this->Column11->Name = L"Column11";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"ID de Usuario";
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(146, 1);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(168, 20);
			this->txt_userID->TabIndex = 33;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(146, 62);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(168, 20);
			this->txt_registrationDate->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Tipo de Usuario";
			// 
			// txt_userType
			// 
			this->txt_userType->Location = System::Drawing::Point(146, 30);
			this->txt_userType->Name = L"txt_userType";
			this->txt_userType->Size = System::Drawing::Size(168, 20);
			this->txt_userType->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Fecha de Registro";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Location = System::Drawing::Point(464, 65);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(56, 17);
			this->check_active->TabIndex = 108;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(324, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 13);
			this->label2->TabIndex = 110;
			this->label2->Text = L"Lugar de Estacionamiento";
			// 
			// txt_ParkLotID
			// 
			this->txt_ParkLotID->Location = System::Drawing::Point(464, 2);
			this->txt_ParkLotID->Name = L"txt_ParkLotID";
			this->txt_ParkLotID->Size = System::Drawing::Size(168, 20);
			this->txt_ParkLotID->TabIndex = 109;
			// 
			// txt_DNI
			// 
			this->txt_DNI->Enabled = false;
			this->txt_DNI->Location = System::Drawing::Point(464, 31);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(168, 20);
			this->txt_DNI->TabIndex = 130;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(324, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 129;
			this->label9->Text = L"DNI";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(663, 30);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 131;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantUser::button4_Click);
			// 
			// MantUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 458);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantUser";
			this->Text = L"MantUser";
			this->Load += gcnew System::EventHandler(this, &MantUser::MantUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void mostrarGrilla(List<user^>^ listUser) {
	this->User_DGV->Rows->Clear();
	for (int i = 0; i < listUser->Count; i++) {
		user^ objUser = listUser[i];
		array<String^>^ filaGrilla = gcnew array<String^>(16);
		filaGrilla[0] = Convert::ToString(objUser->getUserID());
		filaGrilla[1] = objUser->getUserType();
		filaGrilla[2] = objUser->getRegistrationDate();
		filaGrilla[3] = Convert::ToString(objUser->getParkingSite()->getID());
		filaGrilla[4] = Convert::ToString(objUser->getActive());
		filaGrilla[5] = Convert::ToString(objUser->getPerson()->getDNI());
		this->User_DGV->Rows->Add(filaGrilla);
	}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
		int userID = Convert::ToInt32(this->txt_userID->Text);
		String^ userType = this->txt_userType->Text;
		String^ registrationDate = this->txt_registrationDate->Text;
		bool active = this->check_active->Checked;
		String^ parklotID = this->txt_ParkLotID->Text;
		int DNI = Convert::ToInt32(this->txt_DNI->Text);

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		objUserCtrl->agregarNewUser(userID, userType, active, registrationDate, objParkingSite, objPerson);
		txt_userID->Clear();

		List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
		mostrarGrilla(listaAdmin);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ userType = this->txt_userType->Text;
	String^ registrationDate = this->txt_registrationDate->Text;
	bool active = this->check_active->Checked;
	String^ parklotID = this->txt_ParkLotID->Text;
	int DNI = Convert::ToInt32(this->txt_DNI->Text);

	ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
	parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->actualizarUser(userID, userType, active, registrationDate, objParkingSite, objPerson);
	txt_userID->Clear();
	MessageBox::Show("El usuario seleccionada ha sido actualizado correctamente");

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaAdmin);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->User_DGV->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->User_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->eliminarUser(codigoEliminar);
	MessageBox::Show("El usuario seleccionada ha sido eliminado correctamente");
	this->User_DGV->Rows->Clear();

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaAdmin);
}
private: System::Void Person_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int userID = Int32::Parse(User_DGV->Rows[User_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ User = objUserCtrl->buscarUserxUserID(userID);
	if (User != nullptr) {
		this->txt_userID->Text = Convert::ToString(User->getUserID());
		this->txt_userType->Text = User->getUserType();
		this->txt_registrationDate->Text = User->getRegistrationDate();
		this->check_active->Checked = User->getActive();
		this->txt_ParkLotID->Text = User->getParkingSite()->getID();
		this->txt_DNI->Text = Convert::ToString(User->getPerson()->getDNI());
	}
}
private: System::Void MantUser_Load(System::Object^ sender, System::EventArgs^ e) {
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	List<user^>^ listaUser = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaUser);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//BUSCAR PERSON
	BuscarPerson^ mantBuscarPerson = gcnew BuscarPerson(this->objPerson);
	mantBuscarPerson->ShowDialog();

	this->txt_DNI->Text = Convert::ToString(this->objPerson->getDNI());
}
};
}
