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
			//TODO: agregar c�digo de constructor aqu�
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











	private: System::Windows::Forms::Button^ button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txt_DNI);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(148, 6);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(619, 110);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(216, 47);
			this->txt_DNI->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(173, 22);
			this->txt_DNI->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(444, 47);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BuscarPerson::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"DNI:";
			// 
			// Person_DGV
			// 
			this->Person_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Person_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->Person_DGV->Location = System::Drawing::Point(16, 122);
			this->Person_DGV->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Person_DGV->Name = L"Person_DGV";
			this->Person_DGV->RowHeadersWidth = 51;
			this->Person_DGV->Size = System::Drawing::Size(859, 233);
			this->Person_DGV->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(364, 367);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 41);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BuscarPerson::button2_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"DNI";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"C�digo";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Correo";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Contacto";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Contrase�a";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Permiso";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Cargo";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"G�nero";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Edad";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// BuscarPerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 418);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Person_DGV);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	int filaSeleccionada = this->Person_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
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
