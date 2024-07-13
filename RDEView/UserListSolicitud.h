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
	/// Resumen de UserListSolicitud
	/// </summary>
	public ref class UserListSolicitud : public System::Windows::Forms::Form
	{
	public:
		UserListSolicitud(user^ objUser)
		{
			InitializeComponent();
			this->objUser = objUser;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserListSolicitud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ userRequest_DGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ rtxt_comment;
	private: user^ objUser;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_type;
	private: System::Windows::Forms::TextBox^ txt_emissionDate;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_responseDate;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::CheckBox^ check_accepted;







	protected:

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
			this->userRequest_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rtxt_comment = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_type = (gcnew System::Windows::Forms::TextBox());
			this->txt_emissionDate = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_responseDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->check_accepted = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userRequest_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// userRequest_DGV
			// 
			this->userRequest_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->userRequest_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column6, this->Column4, this->Column5
			});
			this->userRequest_DGV->Location = System::Drawing::Point(12, 46);
			this->userRequest_DGV->Name = L"userRequest_DGV";
			this->userRequest_DGV->RowHeadersWidth = 51;
			this->userRequest_DGV->RowTemplate->Height = 24;
			this->userRequest_DGV->Size = System::Drawing::Size(519, 364);
			this->userRequest_DGV->TabIndex = 0;
			this->userRequest_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserListSolicitud::userRequest_DGV_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Asunto";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha de Emisión";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Fecha de Respuesta";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Activo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Aceptado";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tus solicitudes :";
			// 
			// rtxt_comment
			// 
			this->rtxt_comment->Location = System::Drawing::Point(548, 276);
			this->rtxt_comment->Name = L"rtxt_comment";
			this->rtxt_comment->Size = System::Drawing::Size(252, 134);
			this->rtxt_comment->TabIndex = 2;
			this->rtxt_comment->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(544, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Comentario :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(545, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Asunto :";
			// 
			// txt_type
			// 
			this->txt_type->Location = System::Drawing::Point(637, 117);
			this->txt_type->Name = L"txt_type";
			this->txt_type->Size = System::Drawing::Size(163, 22);
			this->txt_type->TabIndex = 7;
			// 
			// txt_emissionDate
			// 
			this->txt_emissionDate->Location = System::Drawing::Point(637, 145);
			this->txt_emissionDate->Name = L"txt_emissionDate";
			this->txt_emissionDate->Size = System::Drawing::Size(163, 22);
			this->txt_emissionDate->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(545, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Emisión :";
			// 
			// txt_responseDate
			// 
			this->txt_responseDate->Location = System::Drawing::Point(637, 173);
			this->txt_responseDate->Name = L"txt_responseDate";
			this->txt_responseDate->Size = System::Drawing::Size(163, 22);
			this->txt_responseDate->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(545, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Respuesta :";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Location = System::Drawing::Point(548, 219);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(66, 20);
			this->check_active->TabIndex = 12;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// check_accepted
			// 
			this->check_accepted->AutoSize = true;
			this->check_accepted->Location = System::Drawing::Point(705, 219);
			this->check_accepted->Name = L"check_accepted";
			this->check_accepted->Size = System::Drawing::Size(88, 20);
			this->check_accepted->TabIndex = 13;
			this->check_accepted->Text = L"Aceptado";
			this->check_accepted->UseVisualStyleBackColor = true;
			// 
			// UserListSolicitud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 422);
			this->Controls->Add(this->check_accepted);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->txt_responseDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_emissionDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_type);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->rtxt_comment);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userRequest_DGV);
			this->Name = L"UserListSolicitud";
			this->Text = L"UserListSolicitud";
			this->Load += gcnew System::EventHandler(this, &UserListSolicitud::UserListSolicitud_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userRequest_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void UserListSolicitud_Load(System::Object^ sender, System::EventArgs^ e) {//EVENTO LOAD
	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	List<request^>^ listaRequest = objRequestCtrl->buscarRequestxUser(this->objUser->getUserID());
	mostrarGrilla(listaRequest);
}
private: void mostrarGrilla(List<request^>^ listaRequest) {
	this->userRequest_DGV->Rows->Clear();

	for (int i = 0; i < listaRequest->Count; i++) {
		request^ objReq = listaRequest[i];
		array<String^>^ filaGrilla = gcnew array<String^>(9);

		filaGrilla[0] = Convert::ToString(objReq->getID());
		filaGrilla[1] = objReq->getType();
		filaGrilla[2] = Convert::ToString(objReq->getEmissionDate());
		filaGrilla[3] = Convert::ToString(objReq->getResponseDate());
		filaGrilla[4] = Convert::ToString(objReq->getActive());
		filaGrilla[5] = Convert::ToString(objReq->getAccepted());
		this->userRequest_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {//ELECCIÓN DE COMBOBOX
}
private: System::Void userRequest_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {//SELECCIONAR CELDA DE LA GRILLA
	int ID = Int32::Parse(userRequest_DGV->Rows[userRequest_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	RequestCtrl^ objRequestCtrl = gcnew RequestCtrl();
	request^ objReq = objRequestCtrl->buscarRequestxID(ID);

	if (objReq != nullptr) {
		this->txt_emissionDate->Text = Convert::ToString(objReq->getEmissionDate());
		this->txt_responseDate->Text = Convert::ToString(objReq->getResponseDate());
		this->txt_type->Text = objReq->getType();
		this->rtxt_comment->Text = objReq->getComment();
		this->check_active->Checked = objReq->getActive();
		this->check_accepted->Checked = objReq->getAccepted();
	}
}
};
}
