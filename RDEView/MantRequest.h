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
	/// Summary for MantRequest
	/// </summary>
	public ref class MantRequest : public System::Windows::Forms::Form
	{
	public:
		MantRequest(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MantRequest()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ Request_DGV;

	private: System::Windows::Forms::TextBox^ txt_ID;









	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;






	private: System::Windows::Forms::TextBox^ txt_responseDate;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_emisionDate;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ rtxt_comment;








	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::ComboBox^ combtext_type;








	private: System::Windows::Forms::ComboBox^ combox_newoccupation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::CheckBox^ check_accepted;











	protected:




























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
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Request_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_responseDate = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_emisionDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->rtxt_comment = (gcnew System::Windows::Forms::RichTextBox());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->combtext_type = (gcnew System::Windows::Forms::ComboBox());
			this->combox_newoccupation = (gcnew System::Windows::Forms::ComboBox());
			this->check_accepted = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Request_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(533, 82);
			this->txt_user->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(223, 22);
			this->txt_user->TabIndex = 114;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(395, 86);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 16);
			this->label9->TabIndex = 113;
			this->label9->Text = L"Usuario";
			// 
			// Request_DGV
			// 
			this->Request_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Request_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column2,
					this->Column5, this->Column6, this->Column4, this->Column8, this->Column3, this->Column7, this->Column9, this->Column1
			});
			this->Request_DGV->Location = System::Drawing::Point(20, 224);
			this->Request_DGV->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Request_DGV->Name = L"Request_DGV";
			this->Request_DGV->RowHeadersWidth = 62;
			this->Request_DGV->RowTemplate->Height = 28;
			this->Request_DGV->Size = System::Drawing::Size(1076, 262);
			this->Request_DGV->TabIndex = 112;
			this->Request_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantRequest::Request_DGV_CellClick);
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
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Activo";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Aceptado";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Usuario";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// txt_ID
			// 
			this->txt_ID->Enabled = false;
			this->txt_ID->Location = System::Drawing::Point(163, 17);
			this->txt_ID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(223, 22);
			this->txt_ID->TabIndex = 111;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 21);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 16);
			this->label8->TabIndex = 110;
			this->label8->Text = L"ID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(299, 171);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 109;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantRequest::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(155, 171);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 108;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantRequest::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 171);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 107;
			this->button1->Text = L"A�adir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantRequest::button1_Click);
			// 
			// txt_responseDate
			// 
			this->txt_responseDate->Location = System::Drawing::Point(163, 79);
			this->txt_responseDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_responseDate->Name = L"txt_responseDate";
			this->txt_responseDate->Size = System::Drawing::Size(223, 22);
			this->txt_responseDate->TabIndex = 100;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(395, 21);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Tipo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(395, 53);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 16);
			this->label1->TabIndex = 118;
			this->label1->Text = L"Nuevo Cargo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 50);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 16);
			this->label3->TabIndex = 120;
			this->label3->Text = L"Fecha de Emision";
			// 
			// txt_emisionDate
			// 
			this->txt_emisionDate->Location = System::Drawing::Point(163, 47);
			this->txt_emisionDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_emisionDate->Name = L"txt_emisionDate";
			this->txt_emisionDate->Size = System::Drawing::Size(223, 22);
			this->txt_emisionDate->TabIndex = 119;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 82);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 16);
			this->label4->TabIndex = 121;
			this->label4->Text = L"Fecha de Respuesta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(776, 17);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 16);
			this->label5->TabIndex = 123;
			this->label5->Text = L"Comentario";
			// 
			// rtxt_comment
			// 
			this->rtxt_comment->Location = System::Drawing::Point(864, 14);
			this->rtxt_comment->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rtxt_comment->Name = L"rtxt_comment";
			this->rtxt_comment->Size = System::Drawing::Size(231, 117);
			this->rtxt_comment->TabIndex = 124;
			this->rtxt_comment->Text = L"";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_active->Location = System::Drawing::Point(20, 126);
			this->check_active->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(66, 20);
			this->check_active->TabIndex = 125;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// combtext_type
			// 
			this->combtext_type->FormattingEnabled = true;
			this->combtext_type->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Nuevo Cargo", L"Nueva Tarjeta", L"Otro" });
			this->combtext_type->Location = System::Drawing::Point(533, 15);
			this->combtext_type->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->combtext_type->Name = L"combtext_type";
			this->combtext_type->Size = System::Drawing::Size(223, 24);
			this->combtext_type->TabIndex = 126;
			// 
			// combox_newoccupation
			// 
			this->combox_newoccupation->FormattingEnabled = true;
			this->combox_newoccupation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Estudiante", L"Jefe de Pr�ctica",
					L"Docente", L"Personal Acad�mico", L"Personal Administrativo", L"Personal de Mantenimiento", L"Administrador"
			});
			this->combox_newoccupation->Location = System::Drawing::Point(533, 48);
			this->combox_newoccupation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->combox_newoccupation->Name = L"combox_newoccupation";
			this->combox_newoccupation->Size = System::Drawing::Size(223, 24);
			this->combox_newoccupation->TabIndex = 127;
			// 
			// check_accepted
			// 
			this->check_accepted->AutoSize = true;
			this->check_accepted->ForeColor = System::Drawing::SystemColors::ControlText;
			this->check_accepted->Location = System::Drawing::Point(399, 126);
			this->check_accepted->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->check_accepted->Name = L"check_accepted";
			this->check_accepted->Size = System::Drawing::Size(88, 20);
			this->check_accepted->TabIndex = 128;
			this->check_accepted->Text = L"Aceptado";
			this->check_accepted->UseVisualStyleBackColor = true;
			// 
			// MantRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1124, 505);
			this->Controls->Add(this->check_accepted);
			this->Controls->Add(this->combox_newoccupation);
			this->Controls->Add(this->combtext_type);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->rtxt_comment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_emisionDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Request_DGV);
			this->Controls->Add(this->txt_ID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_responseDate);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MantRequest";
			this->Text = L"MantRequest";
			this->Load += gcnew System::EventHandler(this, &MantRequest::MantRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Request_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//A�ADIR

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

	int ID = 0;
	String^ emissionDate = this->txt_emisionDate->Text;
	String^ responseDate = this->txt_responseDate->Text;
	String^ type = this->combtext_type->Text;
	String^ newOccupation = this->combox_newoccupation->Text;
	String^ comment = this->rtxt_comment->Text;
	bool active = this->check_active->Checked;
	bool accepted = this->check_accepted->Checked;
	int userID = Convert::ToInt32(this->txt_user->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	if (objUser != nullptr) {
		objRequestCtrl->agregarNewRequest(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
		MessageBox::Show("La solicitud se agreg� con �xito.");
		txt_ID->Clear();
	}
	else {
		MessageBox::Show("Datos ingresados son incorrectos.");
	}


	List<request^>^ listaRequest = objRequestCtrl->buscarRequestAll();
	mostrarGrilla(listaRequest);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

	int ID = Convert::ToInt32(this->txt_ID->Text);
	String^ emissionDate = this->txt_emisionDate->Text;
	String^ responseDate = this->txt_responseDate->Text;
	String^ type = this->combtext_type->Text;
	String^ newOccupation = this->combox_newoccupation->Text;
	String^ comment = this->rtxt_comment->Text;
	bool active = this->check_active->Checked;
	bool accepted = this->check_accepted->Checked;
	int userID = Convert::ToInt32(this->txt_user->Text);

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(userID);

	if (objUser != nullptr) {
		objRequestCtrl->actualizarRequest(ID, emissionDate, responseDate, type, newOccupation, comment, active, accepted, objUser);
		txt_ID->Clear();
		MessageBox::Show("La solicitud se actualiz� con �xito.");
	}
	else {
		MessageBox::Show("Datos ingresados son incorrectos.");
	}

	List<request^>^ listaRequest = objRequestCtrl->buscarRequestAll();
	mostrarGrilla(listaRequest);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->Request_DGV->SelectedRows[0]->Index; 
	int IDeliminar = Convert::ToInt32(this->Request_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();

	request^ objRequest = objRequestCtrl->buscarRequestxID(IDeliminar);
	
	if (objRequest != nullptr) {
		objRequestCtrl->eliminarRequest(IDeliminar);
		MessageBox::Show("La solicitud seleccionada ha sido eliminado correctamente");
		this->Request_DGV->Rows->Clear();
	}
	else {
		MessageBox::Show("Error al seleccionar solicitud");
	}

	List<request^>^ listaRequest = objRequestCtrl->buscarRequestAll();
	mostrarGrilla(listaRequest);
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
private: System::Void Request_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int ID = Int32::Parse(Request_DGV->Rows[Request_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	request^ objReq = objRequestCtrl->buscarRequestxID(ID);

	if (objReq != nullptr) {
		this->txt_ID->Text = Convert::ToString(objReq->getID());
		this->txt_emisionDate->Text = Convert::ToString(objReq->getEmissionDate());
		this->txt_responseDate->Text = Convert::ToString(objReq->getResponseDate());
		this->combtext_type->Text = objReq->getType();
		this->combox_newoccupation->Text = objReq->getNewOccupation();
		this->rtxt_comment->Text = objReq->getComment();
		this->check_active->Checked = objReq->getActive();
		this->check_accepted->Checked = objReq->getAccepted();
		this->txt_user->Text = Convert::ToString(objReq->getUser()->getUserID());
	}
}
private: System::Void MantRequest_Load(System::Object^ sender, System::EventArgs^ e) {
	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	List<request^>^ listaRequest = objRequestCtrl->buscarRequestAll();
	mostrarGrilla(listaRequest);
}
};
}
