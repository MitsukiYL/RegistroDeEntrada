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
	/// Summary for BuscarPerson
	/// </summary>
	public ref class BuscarPerson : public System::Windows::Forms::Form
	{
	public:
		BuscarPerson(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BuscarPerson(person^ objPerson)
		{
			InitializeComponent();
			this->objPerson = objPerson;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuscarPerson()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_DNI;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: person^ objPerson;
	private: System::Windows::Forms::DataGridView^ Person_DGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::Button^ button2;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Person_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_DNI);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(111, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(464, 89);
			this->groupBox1->TabIndex = 4;
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
			this->button1->Click += gcnew System::EventHandler(this, &BuscarPerson::button1_Click);
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
			// Person_DGV
			// 
			this->Person_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Person_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11
			});
			this->Person_DGV->Location = System::Drawing::Point(12, 99);
			this->Person_DGV->Name = L"Person_DGV";
			this->Person_DGV->Size = System::Drawing::Size(644, 189);
			this->Person_DGV->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"DNI";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Código";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Correo";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Contacto";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Contraseña";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Permiso";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Cargo";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Género";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Edad";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Está adentro";
			this->Column11->Name = L"Column11";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(273, 298);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BuscarPerson::button2_Click);
			// 
			// BuscarPerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 340);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Person_DGV);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BuscarPerson";
			this->Text = L"BuscarPerson";
			this->Load += gcnew System::EventHandler(this, &BuscarPerson::BuscarPerson_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Buscar Person
		List<person^>^ listaPerson = gcnew List<person^>();

		int DNI = Convert::ToInt32(this->txt_DNI->Text);
		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);
		listaPerson->Add(objPerson);

		mostrarGrilla(listaPerson);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->Person_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int DNIselected = Convert::ToInt32(this->Person_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNIselected);

	this->objPerson->setDNI(objPerson->getDNI());
	this->objPerson->setName(objPerson->getName());
	this->objPerson->setCode(objPerson->getCode());
	this->objPerson->setMail(objPerson->getMail());
	this->objPerson->setPhone(objPerson->getPhone());
	this->objPerson->setPassword(objPerson->getPassword());
	this->objPerson->setPermission(objPerson->getPermission());
	this->objPerson->setOccupation(objPerson->getOccupation());
	this->objPerson->setGender(objPerson->getGender());
	this->objPerson->setAge(objPerson->getAge());
	this->objPerson->setIsInside(objPerson->getIsInside());

	this->Close();
}

private: void mostrarGrilla(List<person^>^ listPerson) {
	String^ txt_permission = "";
	String^ txt_isInside = "";
	this->Person_DGV->Rows->Clear();

	for (int i = 0; i < listPerson->Count; i++) {
			person^ objPerson = listPerson[i];
			array<String^>^ filaGrilla = gcnew array<String^>(11);
			filaGrilla[0] = Convert::ToString(objPerson->getDNI());
			filaGrilla[1] = objPerson->getName();
			filaGrilla[2] = Convert::ToString(objPerson->getCode());
			filaGrilla[3] = objPerson->getMail();
			filaGrilla[4] = objPerson->getPhone();
			filaGrilla[5] = objPerson->getPassword();
			if (objPerson->getPermission()) {
				txt_permission = "Si";
			}
			else {
				txt_permission = "No";
			}
			filaGrilla[6] = txt_permission;
			filaGrilla[7] = objPerson->getOccupation();
			filaGrilla[8] = objPerson->getGender();
			filaGrilla[9] = Convert::ToString(objPerson->getAge());
			if (objPerson->getIsInside()) {
				txt_isInside = "Si";
			}
			else {
				txt_isInside = "No";
			}
			filaGrilla[10] = txt_isInside;
			this->Person_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void BuscarPerson_Load(System::Object^ sender, System::EventArgs^ e) {

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	List<person^>^ listPerson = objPersonCtrl->buscarPersonAll();
	mostrarGrilla(listPerson);

}
};
}
