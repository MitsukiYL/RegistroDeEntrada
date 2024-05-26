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
	/// Resumen de MantCard
	/// </summary>
	public ref class MantCard : public System::Windows::Forms::Form
	{
	public:
		MantCard(void)
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
		~MantCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Card_DGV;
	private: System::Windows::Forms::TextBox^ txt_cardID;
	protected:

	protected:











	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_expDate;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_regDate;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_emmDate;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_permType;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_code;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_user;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ txt_expirationDate;
	private: System::Windows::Forms::TextBox^ txt_permissionType;
	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::TextBox^ txt_permission;
	private: System::Windows::Forms::TextBox^ txt_emissionDate;
	private: System::Windows::Forms::TextBox^ txt_registrationDate;
	private: System::Windows::Forms::TextBox^ txt_active;
	private: System::Windows::Forms::TextBox^ txt_userID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::CheckBox^ check_active;

	private: System::Windows::Forms::CheckBox^ check_perm;


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
			this->Card_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_cardID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_expDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_regDate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_emmDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_permType = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_expirationDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_permissionType = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->txt_permission = (gcnew System::Windows::Forms::TextBox());
			this->txt_emissionDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_active = (gcnew System::Windows::Forms::TextBox());
			this->txt_userID = (gcnew System::Windows::Forms::TextBox());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->check_perm = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// Card_DGV
			// 
			this->Card_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Card_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->Card_DGV->Location = System::Drawing::Point(8, 172);
			this->Card_DGV->Margin = System::Windows::Forms::Padding(2);
			this->Card_DGV->Name = L"Card_DGV";
			this->Card_DGV->RowHeadersWidth = 62;
			this->Card_DGV->RowTemplate->Height = 28;
			this->Card_DGV->Size = System::Drawing::Size(807, 213);
			this->Card_DGV->TabIndex = 92;
			this->Card_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantCard::Card_DGV_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Permiso";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de Permiso";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Emision";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Fecha de Registro";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
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
			this->Column8->HeaderText = L"Estado";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// txt_cardID
			// 
			this->txt_cardID->Location = System::Drawing::Point(90, 27);
			this->txt_cardID->Name = L"txt_cardID";
			this->txt_cardID->Size = System::Drawing::Size(168, 20);
			this->txt_cardID->TabIndex = 89;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(5, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 88;
			this->label8->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 129);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 87;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantCard::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 86;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantCard::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 85;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantCard::button1_Click_1);
			// 
			// txt_expDate
			// 
			this->txt_expDate->Location = System::Drawing::Point(380, 53);
			this->txt_expDate->Name = L"txt_expDate";
			this->txt_expDate->Size = System::Drawing::Size(168, 20);
			this->txt_expDate->TabIndex = 84;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(276, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 83;
			this->label4->Text = L"Fecha de Expiracion";
			// 
			// txt_regDate
			// 
			this->txt_regDate->Location = System::Drawing::Point(380, 27);
			this->txt_regDate->Name = L"txt_regDate";
			this->txt_regDate->Size = System::Drawing::Size(168, 20);
			this->txt_regDate->TabIndex = 82;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(276, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 13);
			this->label5->TabIndex = 81;
			this->label5->Text = L"Fecha de Emision";
			// 
			// txt_emmDate
			// 
			this->txt_emmDate->Location = System::Drawing::Point(380, 1);
			this->txt_emmDate->Name = L"txt_emmDate";
			this->txt_emmDate->Size = System::Drawing::Size(168, 20);
			this->txt_emmDate->TabIndex = 80;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(276, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 79;
			this->label6->Text = L"Fecha de Registro";
			// 
			// txt_permType
			// 
			this->txt_permType->Location = System::Drawing::Point(90, 54);
			this->txt_permType->Name = L"txt_permType";
			this->txt_permType->Size = System::Drawing::Size(168, 20);
			this->txt_permType->TabIndex = 76;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Tipo de Permiso";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(90, 2);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(168, 20);
			this->txt_code->TabIndex = 74;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 73;
			this->label1->Text = L"Codigo";
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(632, 28);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(168, 20);
			this->txt_user->TabIndex = 94;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(567, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 93;
			this->label9->Text = L"Usuario";
			// 
			// txt_expirationDate
			// 
			this->txt_expirationDate->Location = System::Drawing::Point(0, 0);
			this->txt_expirationDate->Name = L"txt_expirationDate";
			this->txt_expirationDate->Size = System::Drawing::Size(100, 20);
			this->txt_expirationDate->TabIndex = 0;
			// 
			// txt_permissionType
			// 
			this->txt_permissionType->Location = System::Drawing::Point(0, 0);
			this->txt_permissionType->Name = L"txt_permissionType";
			this->txt_permissionType->Size = System::Drawing::Size(100, 20);
			this->txt_permissionType->TabIndex = 0;
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(0, 0);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(100, 20);
			this->txt_ID->TabIndex = 0;
			// 
			// txt_permission
			// 
			this->txt_permission->Location = System::Drawing::Point(0, 0);
			this->txt_permission->Name = L"txt_permission";
			this->txt_permission->Size = System::Drawing::Size(100, 20);
			this->txt_permission->TabIndex = 0;
			// 
			// txt_emissionDate
			// 
			this->txt_emissionDate->Location = System::Drawing::Point(0, 0);
			this->txt_emissionDate->Name = L"txt_emissionDate";
			this->txt_emissionDate->Size = System::Drawing::Size(100, 20);
			this->txt_emissionDate->TabIndex = 0;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(0, 0);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(100, 20);
			this->txt_registrationDate->TabIndex = 0;
			// 
			// txt_active
			// 
			this->txt_active->Location = System::Drawing::Point(0, 0);
			this->txt_active->Name = L"txt_active";
			this->txt_active->Size = System::Drawing::Size(100, 20);
			this->txt_active->TabIndex = 0;
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(0, 0);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(100, 20);
			this->txt_userID->TabIndex = 0;
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_active->Location = System::Drawing::Point(279, 82);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(56, 17);
			this->check_active->TabIndex = 95;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// check_perm
			// 
			this->check_perm->AutoSize = true;
			this->check_perm->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_perm->Location = System::Drawing::Point(8, 82);
			this->check_perm->Name = L"check_perm";
			this->check_perm->Size = System::Drawing::Size(63, 17);
			this->check_perm->TabIndex = 96;
			this->check_perm->Text = L"Permiso";
			this->check_perm->UseVisualStyleBackColor = true;
			// 
			// MantCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 396);
			this->Controls->Add(this->check_perm);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Card_DGV);
			this->Controls->Add(this->txt_cardID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_expDate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_regDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_emmDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_permType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantCard";
			this->Text = L"MantCard";
			this->Load += gcnew System::EventHandler(this, &MantCard::MantCard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Card_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
		int code = Convert::ToInt32(this->txt_code->Text);
		int expirationDate = Convert::ToInt32(this->txt_expDate->Text);
		String^ permissionType = this->txt_permType->Text;
		int ID = Convert::ToInt32(this->txt_cardID->Text);
		bool permission = this->check_perm->Checked;
		int emissionDate = Convert::ToInt32(this->txt_emmDate->Text);
		int registrationDate = Convert::ToInt32(this->txt_regDate->Text);
		bool active = this->check_active->Checked;
		int userID = Convert::ToInt32(this->txt_user->Text);

		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		user^ objUser = objUserCtrl->buscarUserxUserID(userID);

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		objCardCtrl->agregarNewCard(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
		txt_code->Clear();

		List<card^>^ listaCard = objCardCtrl->buscarCardAll();
		mostrarGrilla(listaCard);
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR

	int code = Convert::ToInt32(this->txt_code->Text);
	int expirationDate = Convert::ToInt32(this->txt_expDate->Text);
	String^ permissionType = this->txt_permType->Text;
	int ID = Convert::ToInt32(this->txt_cardID->Text);
	bool permission = this->check_perm->Checked;
	int emissionDate = Convert::ToInt32(this->txt_emmDate->Text);
	int registrationDate = Convert::ToInt32(this->txt_regDate->Text);
	bool active = this->check_active->Checked;
	int userID = Convert::ToInt32(this->txt_user->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	objCardCtrl->actualizarCard(code, expirationDate, permissionType, ID, permission, emissionDate, registrationDate, active, objUser);
	txt_code->Clear();

	MessageBox::Show("La tarjeta se actualizo con exito.");

	List<card^>^ listaCard = objCardCtrl->buscarCardAll();
	mostrarGrilla(listaCard);
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->Card_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEliminar = Convert::ToInt32(this->Card_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	objCardCtrl->eliminarCard(codigoEliminar);
	MessageBox::Show("La tarjeta seleccionada ha sido eliminado correctamente");
	this->Card_DGV->Rows->Clear();

	List<card^>^ listaCard = objCardCtrl->buscarCardAll();
	mostrarGrilla(listaCard);
}
private: System::Void Card_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int cardCode = Int32::Parse(Card_DGV->Rows[Card_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	card^ objCard = objCardCtrl->buscarCardxCode(cardCode);

	if (objCard != nullptr) {
		this->txt_code->Text = Convert::ToString(objCard->getCode());
		this->txt_permType->Text = objCard->getPermissionType();
		this->txt_cardID->Text = Convert::ToString(objCard->getID());
		this->check_perm->Checked = objCard->getPermission();
		this->txt_emmDate->Text = Convert::ToString(objCard->getEmissionDate());
		this->txt_regDate->Text = Convert::ToString(objCard->getRegistrationDate());
		this->txt_expDate->Text = Convert::ToString(objCard->getExpirationDate());
		this->check_active->Checked = objCard->getActive();
		this->txt_user->Text = Convert::ToString(objCard->getObjUser()->getUserID());
	}
}
private: System::Void MantCard_Load(System::Object^ sender, System::EventArgs^ e) {
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	List<card^>^ listaCard = objCardCtrl->buscarCardAll();
	mostrarGrilla(listaCard);
}
private: void mostrarGrilla(List<card^>^ listCard) {
	this->Card_DGV->Rows->Clear();

	for (int i = 0; i < listCard->Count; i++) {
		card^ objCard = listCard[i];
		array<String^>^ filaGrilla = gcnew array<String^>(8);
		filaGrilla[0] = Convert::ToString(objCard->getCode());
		filaGrilla[1] = Convert::ToString(objCard->getID());
		filaGrilla[2] = Convert::ToString(objCard->getPermission());
		filaGrilla[3] = objCard->getPermissionType();
		filaGrilla[4] = Convert::ToString(objCard->getEmissionDate());
		filaGrilla[5] = Convert::ToString(objCard->getRegistrationDate());
		filaGrilla[6] = Convert::ToString(objCard->getExpirationDate());
		filaGrilla[6] = Convert::ToString(objCard->getObjUser()->getUserID());
		this->Card_DGV->Rows->Add(filaGrilla);
	}
}
};
}

