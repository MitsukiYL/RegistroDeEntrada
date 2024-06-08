#pragma once
#include "EnrolamientoTarjeta.h"

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
	/// Summary for InterfaceSolAdmin
	/// </summary>
	public ref class InterfaceSolAdmin : public System::Windows::Forms::Form
	{
	public:
		InterfaceSolAdmin(void)
		{
			InitializeComponent();
			this->objRequest = gcnew request();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InterfaceSolAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Request_DGV;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::ComboBox^ combtext_type;
	private: System::Windows::Forms::RichTextBox^ rtxt_comment;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_emisionDate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_newoccupation;
	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::Button^ button_nuevocargo;
	private: request^ objRequest;
	private: System::Windows::Forms::CheckBox^ check_confirm;
	private: System::Windows::Forms::Button^ button_nuevatarjeta;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button_otro;
	private: System::Windows::Forms::CheckBox^ check_accepted;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Request_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->combtext_type = (gcnew System::Windows::Forms::ComboBox());
			this->rtxt_comment = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_emisionDate = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_newoccupation = (gcnew System::Windows::Forms::TextBox());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->button_nuevocargo = (gcnew System::Windows::Forms::Button());
			this->check_confirm = (gcnew System::Windows::Forms::CheckBox());
			this->button_nuevatarjeta = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button_otro = (gcnew System::Windows::Forms::Button());
			this->check_accepted = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Request_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// Request_DGV
			// 
			this->Request_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Request_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column2,
					this->Column5, this->Column6, this->Column4, this->Column8, this->Column3, this->Column7, this->Column1
			});
			this->Request_DGV->Location = System::Drawing::Point(11, 101);
			this->Request_DGV->Margin = System::Windows::Forms::Padding(2);
			this->Request_DGV->Name = L"Request_DGV";
			this->Request_DGV->RowHeadersWidth = 62;
			this->Request_DGV->RowTemplate->Height = 28;
			this->Request_DGV->Size = System::Drawing::Size(799, 205);
			this->Request_DGV->TabIndex = 113;
			this->Request_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InterfaceSolAdmin::Request_DGV_CellClick);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
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
			this->Column6->HeaderText = L"Fecha de Respuesta";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Nuevo Cargo";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Comentario";
			this->Column3->Name = L"Column3";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Activo";
			this->Column7->Name = L"Column7";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Usuario";
			this->Column1->Name = L"Column1";
			// 
			// combtext_type
			// 
			this->combtext_type->Enabled = false;
			this->combtext_type->FormattingEnabled = true;
			this->combtext_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo Cargo", L"Nueva Tarjeta", L"Otro" });
			this->combtext_type->Location = System::Drawing::Point(122, 64);
			this->combtext_type->Name = L"combtext_type";
			this->combtext_type->Size = System::Drawing::Size(148, 21);
			this->combtext_type->TabIndex = 140;
			// 
			// rtxt_comment
			// 
			this->rtxt_comment->Enabled = false;
			this->rtxt_comment->Location = System::Drawing::Point(652, 6);
			this->rtxt_comment->Name = L"rtxt_comment";
			this->rtxt_comment->Size = System::Drawing::Size(157, 74);
			this->rtxt_comment->TabIndex = 139;
			this->rtxt_comment->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(586, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 138;
			this->label5->Text = L"Comentario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 136;
			this->label3->Text = L"Fecha de Emision";
			// 
			// txt_emisionDate
			// 
			this->txt_emisionDate->Enabled = false;
			this->txt_emisionDate->Location = System::Drawing::Point(122, 38);
			this->txt_emisionDate->Name = L"txt_emisionDate";
			this->txt_emisionDate->Size = System::Drawing::Size(148, 20);
			this->txt_emisionDate->TabIndex = 135;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(296, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 134;
			this->label1->Text = L"Nuevo Cargo";
			// 
			// txt_newoccupation
			// 
			this->txt_newoccupation->Enabled = false;
			this->txt_newoccupation->Location = System::Drawing::Point(400, 10);
			this->txt_newoccupation->Name = L"txt_newoccupation";
			this->txt_newoccupation->Size = System::Drawing::Size(153, 20);
			this->txt_newoccupation->TabIndex = 133;
			// 
			// txt_user
			// 
			this->txt_user->Enabled = false;
			this->txt_user->Location = System::Drawing::Point(400, 38);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(153, 20);
			this->txt_user->TabIndex = 132;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(296, 41);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 131;
			this->label9->Text = L"Usuario";
			// 
			// txt_ID
			// 
			this->txt_ID->Enabled = false;
			this->txt_ID->Location = System::Drawing::Point(122, 14);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(148, 20);
			this->txt_ID->TabIndex = 130;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 129;
			this->label8->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 127;
			this->label2->Text = L"Tipo";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Enabled = false;
			this->check_active->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_active->Location = System::Drawing::Point(400, 68);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(56, 17);
			this->check_active->TabIndex = 141;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// button_nuevocargo
			// 
			this->button_nuevocargo->Enabled = false;
			this->button_nuevocargo->Location = System::Drawing::Point(155, 318);
			this->button_nuevocargo->Name = L"button_nuevocargo";
			this->button_nuevocargo->Size = System::Drawing::Size(151, 23);
			this->button_nuevocargo->TabIndex = 142;
			this->button_nuevocargo->Text = L"Aceptar Nuevo Cargo";
			this->button_nuevocargo->UseVisualStyleBackColor = true;
			this->button_nuevocargo->Click += gcnew System::EventHandler(this, &InterfaceSolAdmin::button1_Click);
			// 
			// check_confirm
			// 
			this->check_confirm->AutoSize = true;
			this->check_confirm->Location = System::Drawing::Point(11, 322);
			this->check_confirm->Name = L"check_confirm";
			this->check_confirm->Size = System::Drawing::Size(111, 17);
			this->check_confirm->TabIndex = 143;
			this->check_confirm->Text = L"Confirmar solicitud";
			this->check_confirm->UseVisualStyleBackColor = true;
			// 
			// button_nuevatarjeta
			// 
			this->button_nuevatarjeta->Enabled = false;
			this->button_nuevatarjeta->Location = System::Drawing::Point(340, 318);
			this->button_nuevatarjeta->Name = L"button_nuevatarjeta";
			this->button_nuevatarjeta->Size = System::Drawing::Size(151, 23);
			this->button_nuevatarjeta->TabIndex = 144;
			this->button_nuevatarjeta->Text = L"Aceptar Nueva Tarjeta";
			this->button_nuevatarjeta->UseVisualStyleBackColor = true;
			this->button_nuevatarjeta->Click += gcnew System::EventHandler(this, &InterfaceSolAdmin::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(524, 347);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 23);
			this->button4->TabIndex = 146;
			this->button4->Text = L"Rechazar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InterfaceSolAdmin::button4_Click);
			// 
			// button_otro
			// 
			this->button_otro->Enabled = false;
			this->button_otro->Location = System::Drawing::Point(524, 318);
			this->button_otro->Name = L"button_otro";
			this->button_otro->Size = System::Drawing::Size(151, 23);
			this->button_otro->TabIndex = 145;
			this->button_otro->Text = L"Aceptar Otro";
			this->button_otro->UseVisualStyleBackColor = true;
			this->button_otro->Click += gcnew System::EventHandler(this, &InterfaceSolAdmin::button3_Click);
			// 
			// check_accepted
			// 
			this->check_accepted->AutoSize = true;
			this->check_accepted->Enabled = false;
			this->check_accepted->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_accepted->Location = System::Drawing::Point(481, 68);
			this->check_accepted->Name = L"check_accepted";
			this->check_accepted->Size = System::Drawing::Size(72, 17);
			this->check_accepted->TabIndex = 147;
			this->check_accepted->Text = L"Aceptado";
			this->check_accepted->UseVisualStyleBackColor = true;
			// 
			// InterfaceSolAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 382);
			this->Controls->Add(this->check_accepted);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button_otro);
			this->Controls->Add(this->button_nuevatarjeta);
			this->Controls->Add(this->check_confirm);
			this->Controls->Add(this->button_nuevocargo);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->combtext_type);
			this->Controls->Add(this->rtxt_comment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_emisionDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_newoccupation);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Request_DGV);
			this->Name = L"InterfaceSolAdmin";
			this->Text = L"InterfaceSolAdmin";
			this->Load += gcnew System::EventHandler(this, &InterfaceSolAdmin::InterfaceSolAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Request_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Request_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int ID = Int32::Parse(Request_DGV->Rows[Request_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objReq = objRequestCtrl->buscarRequestxID(ID);

		if (objReq != nullptr) {
			this->txt_ID->Text = Convert::ToString(objReq->getID());
			this->txt_emisionDate->Text = Convert::ToString(objReq->getEmissionDate());
			this->combtext_type->Text = objReq->getType();
			this->txt_newoccupation->Text = objReq->getNewOccupation();
			this->rtxt_comment->Text = objReq->getComment();
			this->check_active->Checked = objReq->getActive();
			this->check_accepted->Checked = objReq->getAccepted();
			this->txt_user->Text = Convert::ToString(objReq->getUser()->getUserID());
		}
		if (objReq->getType() == "Nuevo Cargo") {
			this->button_nuevocargo->Enabled = true;
			this->button_nuevatarjeta->Enabled = false;
			this->button_otro->Enabled = false;
		}
		else if (objReq->getType() == "Nueva Tarjeta") {
			this->button_nuevocargo->Enabled = false;
			this->button_nuevatarjeta->Enabled = true;
			this->button_otro->Enabled = false;
		}
		else if (objReq->getType() == "Otro") {
			this->button_nuevocargo->Enabled = false;
			this->button_nuevatarjeta->Enabled = false;
			this->button_otro->Enabled = true;
		}
	}
private: void mostrarGrilla(List<request^>^ listaRequest) {
	this->Request_DGV->Rows->Clear();

	for (int i = 0; i < listaRequest->Count; i++) {
		request^ objReq = listaRequest[i];
		array<String^>^ filaGrilla = gcnew array<String^>(9);

		filaGrilla[0] = Convert::ToString(objReq->getID());
		filaGrilla[1] = Convert::ToString(objReq->getEmissionDate());
		filaGrilla[2] = Convert::ToString(objReq->getResponseDate());
		filaGrilla[3] = objReq->getType();
		filaGrilla[4] = objReq->getNewOccupation();
		filaGrilla[5] = objReq->getComment();
		filaGrilla[6] = Convert::ToString(objReq->getActive());
		filaGrilla[7] = Convert::ToString(objReq->getAccepted());
		filaGrilla[8] = Convert::ToString(objReq->getUser()->getPerson()->getName());
		this->Request_DGV->Rows->Add(filaGrilla);
	}

}
private: System::Void InterfaceSolAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	List<request^>^ listaRequest = objRequestCtrl->buscarRequestxActive();
	mostrarGrilla(listaRequest);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//ACEPTAR NUEVO CARGO
	if (this->check_confirm->Checked) {

		int ID = Convert::ToInt32(this->txt_ID->Text);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(ID);

		EnrolamientoTarjeta^ mantBuscarPerson = gcnew EnrolamientoTarjeta(objRequest);
		mantBuscarPerson->ShowDialog();

		ActualizarFormRequest(true);

		MessageBox::Show("La solicitud de Nuevo Cargo se aceptó con éxito.");
		
		List<request^>^ listaRequest = objRequestCtrl->buscarRequestxActive();
		mostrarGrilla(listaRequest);

		this->check_confirm->Checked = false;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ACEPTAR OTRO
	if (this->check_confirm->Checked) {
		ActualizarFormRequest(true);

		MessageBox::Show("La solicitud se aceptó con éxito.");
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		List<request^>^ listaRequest = objRequestCtrl->buscarRequestxActive();
		mostrarGrilla(listaRequest);

		this->check_confirm->Checked = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACEPTAR NUEVA TARJETA
	if (this->check_confirm->Checked) {

		int ID = Convert::ToInt32(this->txt_ID->Text);

		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		request^ objRequest = objRequestCtrl->buscarRequestxID(ID);

		EnrolamientoTarjeta^ mantBuscarPerson = gcnew EnrolamientoTarjeta(objRequest);
		mantBuscarPerson->ShowDialog();

		ActualizarFormRequest(true);

		MessageBox::Show("La solicitud de Nueva Tarjeta se aceptó con éxito.");
		List<request^>^ listaRequest = objRequestCtrl->buscarRequestxActive();
		mostrarGrilla(listaRequest);

		this->check_confirm->Checked = false;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//RECHAZAR SOLICITUD
	if (this->check_confirm->Checked) {

		ActualizarFormRequest(false);

		MessageBox::Show("La solicitud se rechazó con éxito.");
		RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
		List<request^>^ listaRequest = objRequestCtrl->buscarRequestxActive();
		mostrarGrilla(listaRequest);

		this->check_confirm->Checked = false;
	}
}
private: void ActualizarFormRequest(bool acceptedForm) {
	int filaSeleccionada = this->Request_DGV->SelectedRows[0]->Index;

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	DateTimeHelper^ objDateTimeHelper = gcnew DateTimeHelper();

	int ID = Convert::ToInt32(this->txt_ID->Text);
	String^ emissionDate = this->txt_emisionDate->Text;
	String^ responseDate = objDateTimeHelper->fechaActual();
	String^ type = this->combtext_type->Text;
	String^ newOccupation = this->txt_newoccupation->Text;
	String^ comment = this->rtxt_comment->Text;
	bool active = false;
	bool accepted = acceptedForm;
	int userID = Convert::ToInt32(this->txt_user->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	objRequestCtrl->actualizarRequest(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
}
};
}
