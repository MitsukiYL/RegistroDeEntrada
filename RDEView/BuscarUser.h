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
	/// Summary for BuscarUser
	/// </summary>
	public ref class BuscarUser : public System::Windows::Forms::Form
	{
	public:
		BuscarUser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BuscarUser(user^ objUser)
		{
			InitializeComponent();
			this->objUser = objUser;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuscarUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: user^ objUser;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ User_DGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;



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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->User_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(283, 311);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 33);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BuscarUser::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_DNI);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(121, 11);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(464, 89);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(162, 38);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(131, 20);
			this->txt_DNI->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 38);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BuscarUser::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"DNI:";
			// 
			// User_DGV
			// 
			this->User_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->User_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column4,
					this->Column5, this->Column10, this->Column3, this->Column11
			});
			this->User_DGV->Location = System::Drawing::Point(12, 112);
			this->User_DGV->Name = L"User_DGV";
			this->User_DGV->RowHeadersWidth = 62;
			this->User_DGV->Size = System::Drawing::Size(663, 194);
			this->User_DGV->TabIndex = 45;
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
			// BuscarUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 355);
			this->Controls->Add(this->User_DGV);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BuscarUser";
			this->Text = L"BuscarUser";
			this->Load += gcnew System::EventHandler(this, &BuscarUser::BuscarUser_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//BUSCAR
	List<user^>^ listaUser = gcnew List<user^>();

	int DNI = Convert::ToInt32(this->txt_DNI->Text);
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxPersonDNI(DNI);
	
	listaUser->Add(objUser);

	mostrarGrilla(listaUser);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//SELECCIONAR
	int filaSeleccionada = this->User_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int IDSelected = Convert::ToInt32(this->User_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ objUser = objUserCtrl->buscarUserxUserID(IDSelected);

	this->objUser->setUserID(objUser->getUserID());
	this->objUser->setUserType(objUser->getUserType());
	this->objUser->setRegistrationDate(objUser->getRegistrationDate());
	this->objUser->setParkingSite(objUser->getParkingSite());
	this->objUser->setActive(objUser->getActive());
	this->objUser->setPerson(objUser->getPerson());

	this->Close();
}
private: System::Void BuscarUser_Load(System::Object^ sender, System::EventArgs^ e) {
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	List<user^>^ listaUser = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaUser);
}
private: void mostrarGrilla(List<user^>^ listUser) {
	this->User_DGV->Rows->Clear();
	for (int i = 0; i < listUser->Count; i++) {
		user^ objUser = listUser[i];
		if (objUser != nullptr) {
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
}
};
}
