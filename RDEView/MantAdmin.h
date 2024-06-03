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
	/// Resumen de MantAdmin
	/// </summary>
	public ref class MantAdmin : public System::Windows::Forms::Form
	{
	public:
		MantAdmin(void)
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
		~MantAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txt_ID;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ Admin_DGV;
	private: System::Windows::Forms::TextBox^ txt_expirationDate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_registrationDate;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_contractID;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_area;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_type;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	private: System::Windows::Forms::Label^ label9;
	private: person^ objPerson;

private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;




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
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Admin_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_expirationDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_contractID = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_area = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_type = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Admin_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(107, 8);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(168, 20);
			this->txt_ID->TabIndex = 69;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 68;
			this->label8->Text = L"ID de Admin";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(231, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 67;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantAdmin::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 66;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantAdmin::button1_Click);
			// 
			// Admin_DGV
			// 
			this->Admin_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Admin_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column3,
					this->Column4, this->Column5, this->Column7, this->Column8, this->Column9
			});
			this->Admin_DGV->Location = System::Drawing::Point(12, 177);
			this->Admin_DGV->Name = L"Admin_DGV";
			this->Admin_DGV->RowHeadersWidth = 62;
			this->Admin_DGV->Size = System::Drawing::Size(1065, 289);
			this->Admin_DGV->TabIndex = 64;
			this->Admin_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantAdmin::Admin_DGV_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Area";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
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
			// Column7
			// 
			this->Column7->HeaderText = L"Fecha de Expiracion";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nro de Contrato";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"DNI";
			this->Column9->Name = L"Column9";
			// 
			// txt_expirationDate
			// 
			this->txt_expirationDate->Location = System::Drawing::Point(517, 8);
			this->txt_expirationDate->Name = L"txt_expirationDate";
			this->txt_expirationDate->Size = System::Drawing::Size(168, 20);
			this->txt_expirationDate->TabIndex = 63;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(413, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Fecha de Expiracion";
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(107, 91);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(168, 20);
			this->txt_registrationDate->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Fecha de Registro";
			// 
			// txt_contractID
			// 
			this->txt_contractID->Location = System::Drawing::Point(517, 34);
			this->txt_contractID->Name = L"txt_contractID";
			this->txt_contractID->Size = System::Drawing::Size(168, 20);
			this->txt_contractID->TabIndex = 59;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(413, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 58;
			this->label6->Text = L"Nro de Contrato";
			// 
			// txt_area
			// 
			this->txt_area->Location = System::Drawing::Point(107, 34);
			this->txt_area->Name = L"txt_area";
			this->txt_area->Size = System::Drawing::Size(168, 20);
			this->txt_area->TabIndex = 57;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Area";
			// 
			// txt_type
			// 
			this->txt_type->Location = System::Drawing::Point(107, 60);
			this->txt_type->Name = L"txt_type";
			this->txt_type->Size = System::Drawing::Size(168, 20);
			this->txt_type->TabIndex = 55;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Tipo";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Enabled = false;
			this->txt_DNI->Location = System::Drawing::Point(517, 60);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(168, 20);
			this->txt_DNI->TabIndex = 75;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(413, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 74;
			this->label9->Text = L"DNI";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(716, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 23);
			this->button4->TabIndex = 76;
			this->button4->Text = L"Buscar ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantAdmin::button4_Click);
			// 
			// MantAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 478);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Admin_DGV);
			this->Controls->Add(this->txt_expirationDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_registrationDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_contractID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_area);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_type);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantAdmin";
			this->Text = L"MantAdmin";
			this->Load += gcnew System::EventHandler(this, &MantAdmin::MantAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Admin_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR

		int adminID = Convert::ToInt32(this->txt_ID->Text);
		String^ area = this->txt_area->Text;
		String^ adminType = this->txt_type->Text;
		int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
		int expirationDate = Convert::ToInt32(this->txt_expirationDate->Text);
		int contractID = Convert::ToInt32(this->txt_contractID->Text);
		int personDNI = Convert::ToInt32(this->txt_DNI->Text);

		List<workHours^>^ listWorkHours = gcnew List<workHours^>();

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

		AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
		objAdminCtrl->agregarAdmin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
		txt_ID->Clear();

		List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
		mostrarGrilla(listaAdmin);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int adminID = Convert::ToInt32(this->txt_ID->Text);
	String^ area = this->txt_area->Text;
	String^ adminType = this->txt_type->Text;
	int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
	int expirationDate = Convert::ToInt32(this->txt_expirationDate->Text);
	int contractID = Convert::ToInt32(this->txt_contractID->Text);
	int personDNI = Convert::ToInt32(this->txt_DNI->Text);

	List<workHours^>^ listWorkHours = gcnew List<workHours^>();

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(personDNI);

	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	objAdminCtrl->actualizarAdmin(adminID, area, adminType, registrationDate, expirationDate, contractID, listWorkHours, objPerson);
	txt_ID->Clear();

	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
	mostrarGrilla(listaAdmin);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->Admin_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEliminar = Convert::ToInt32(this->Admin_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	objAdminCtrl->eliminarAdmin(codigoEliminar);
	MessageBox::Show("El administrador seleccionada ha sido eliminado correctamente");
	this->Admin_DGV->Rows->Clear();

	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();
	mostrarGrilla(listaAdmin);
}
private: System::Void MantAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	List<admin^>^ listaAdmin = objAdminCtrl->AllAdministradores();

	mostrarGrilla(listaAdmin);
}
private: void mostrarGrilla(List<admin^>^ listAdm) {
	 this->Admin_DGV->Rows->Clear();
	for (int i = 0; i < listAdm->Count; i++) {
		admin^ objAdm = listAdm[i];
		array<String^>^ filaGrilla = gcnew array<String^>(17);
		filaGrilla[0] = Convert::ToString(objAdm->getAdminID());
		filaGrilla[1] = objAdm->getArea();
		filaGrilla[2] = objAdm->getAdminType();
		filaGrilla[3] = Convert::ToString(objAdm->getRegistrationDate());
		filaGrilla[4] = Convert::ToString(objAdm->getExpirationDate());
		filaGrilla[5] = Convert::ToString(objAdm->getContractID());
		filaGrilla[6] = Convert::ToString(objAdm->getPerson()->getDNI());
		this->Admin_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void Admin_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int AdminID = Int32::Parse(Admin_DGV->Rows[Admin_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	admin^ Admin = objAdminCtrl->BuscarAdminxID(AdminID);
	if (Admin != nullptr) {
		this->txt_ID->Text = Convert::ToString(Admin->getAdminID());
		this->txt_area->Text = Admin->getArea();
		this->txt_type->Text = Admin->getAdminType();
		this->txt_registrationDate->Text = Convert::ToString(Admin->getRegistrationDate());
		this->txt_expirationDate->Text = Convert::ToString(Admin->getExpirationDate());
		this->txt_contractID->Text = Convert::ToString(Admin->getContractID());
		this->txt_DNI->Text = Convert::ToString(Admin->getPerson()->getDNI());
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//BUSCAR PERSON
	BuscarPerson^ mantBuscarPerson = gcnew BuscarPerson(this->objPerson);
	mantBuscarPerson->ShowDialog();

	this->txt_DNI->Text = Convert::ToString(this->objPerson->getDNI());
}
};
}
