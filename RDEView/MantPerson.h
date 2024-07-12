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
	/// Summary for MantPerson
	/// </summary>
	public ref class MantPerson : public System::Windows::Forms::Form
	{
	public:
		MantPerson(void)
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
		~MantPerson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_code;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_dni;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_mail;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ Person_DGV;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_age;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ check_permission;
	private: System::Windows::Forms::ComboBox^ combox_occupation;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_dni = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Person_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->check_permission = (gcnew System::Windows::Forms::CheckBox());
			this->combox_occupation = (gcnew System::Windows::Forms::ComboBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(68, 48);
			this->txt_name->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(223, 22);
			this->txt_name->TabIndex = 1;
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(68, 80);
			this->txt_code->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(223, 22);
			this->txt_code->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 84);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Código";
			// 
			// txt_dni
			// 
			this->txt_dni->Location = System::Drawing::Point(68, 12);
			this->txt_dni->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_dni->Name = L"txt_dni";
			this->txt_dni->Size = System::Drawing::Size(223, 22);
			this->txt_dni->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 16);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DNI";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(391, 76);
			this->txt_password->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(223, 22);
			this->txt_password->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(313, 80);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Contraseña";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(391, 44);
			this->txt_phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(223, 22);
			this->txt_phone->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(320, 48);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Contacto";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(391, 12);
			this->txt_mail->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(223, 22);
			this->txt_mail->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(336, 16);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Correo";
			// 
			// Person_DGV
			// 
			this->Person_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Person_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->Person_DGV->Location = System::Drawing::Point(20, 167);
			this->Person_DGV->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Person_DGV->Name = L"Person_DGV";
			this->Person_DGV->RowHeadersWidth = 51;
			this->Person_DGV->Size = System::Drawing::Size(1064, 356);
			this->Person_DGV->TabIndex = 12;
			this->Person_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantPerson::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 116);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantPerson::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(153, 116);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantPerson::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(296, 116);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantPerson::button3_Click);
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(752, 76);
			this->txt_age->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(223, 22);
			this->txt_age->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(697, 80);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Edad";
			// 
			// txt_gender
			// 
			this->txt_gender->Location = System::Drawing::Point(752, 44);
			this->txt_gender->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->Size = System::Drawing::Size(223, 22);
			this->txt_gender->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(688, 48);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Género";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(697, 16);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Cargo";
			// 
			// check_permission
			// 
			this->check_permission->AutoSize = true;
			this->check_permission->Location = System::Drawing::Point(752, 123);
			this->check_permission->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->check_permission->Name = L"check_permission";
			this->check_permission->Size = System::Drawing::Size(79, 20);
			this->check_permission->TabIndex = 23;
			this->check_permission->Text = L"Permiso";
			this->check_permission->UseVisualStyleBackColor = true;
			// 
			// combox_occupation
			// 
			this->combox_occupation->FormattingEnabled = true;
			this->combox_occupation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Estudiante", L"Jefe de Práctica", L"Docente",
					L"Personal Académico", L"Personal Administrativo", L"Personal de Mantenimiento", L"Administrador"
			});
			this->combox_occupation->Location = System::Drawing::Point(752, 12);
			this->combox_occupation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->combox_occupation->Name = L"combox_occupation";
			this->combox_occupation->Size = System::Drawing::Size(223, 24);
			this->combox_occupation->TabIndex = 25;
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
			this->Column3->HeaderText = L"Código";
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
			this->Column6->HeaderText = L"Contraseña";
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
			this->Column9->HeaderText = L"Género";
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
			// MantPerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 538);
			this->Controls->Add(this->combox_occupation);
			this->Controls->Add(this->check_permission);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Person_DGV);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_dni);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MantPerson";
			this->Text = L"MantPerson";
			this->Load += gcnew System::EventHandler(this, &MantPerson::MantPerson_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Person_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

void ShowPerson() {
		
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int DNIx = Convert::ToInt32(this->txt_dni->Text);
		String^ name = this->txt_name->Text;
		int code = Convert::ToInt32(this->txt_code->Text);
		String^ mail = this->txt_mail->Text;
		String^ phone = this->txt_phone->Text;
		String^ password = this->txt_password->Text;
		String^ occupation = this->combox_occupation->Text;
		String^ gender = this->txt_gender->Text;
		int age = Convert::ToInt32(this->txt_age->Text);
		bool permission = this->check_permission->Checked;

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();

		objPersonCtrl->agregarNewPerson(DNIx, name, code, mail, phone, password, permission, occupation, gender, age);
		MessageBox::Show("La persona ha sido agregada con éxito");

		List<person^>^ listPerson = objPersonCtrl->buscarPersonAll();
		mostrarGrilla(listPerson);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->Person_DGV->SelectedRows[0]->Index;
	int DNIEditar = Convert::ToInt32(this->Person_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNIEditar);

	int DNI = Convert::ToInt32(this->txt_dni->Text);
	String^ name = this->txt_name->Text;
	int code = Convert::ToInt32(this->txt_code->Text);

	String^ mail = this->txt_mail->Text;
	String^ phone = this->txt_phone->Text;
	String^ password = this->txt_password->Text;

	String^ occupation = this->combox_occupation->Text;
	String^ gender = this->txt_gender->Text;
	int age = Convert::ToInt32(this->txt_age->Text);

	bool permission = this->check_permission->Checked;

	objPersonCtrl->actualizarPerson(DNI, name, code, mail, phone, password, permission, occupation, gender, age);
	MessageBox::Show("La persona ha sido actualizada con éxito");

	List<person^>^ listPerson = objPersonCtrl->buscarPersonAll();
	mostrarGrilla(listPerson);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->Person_DGV->SelectedRows[0]->Index; 
	int DNI = Convert::ToInt32(this->Person_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	objPersonCtrl->eliminarPerson(DNI);
	MessageBox::Show("La persona seleccionada ha sido eliminado correctamente");
	this->Person_DGV->Rows->Clear();

	List<person^>^ listPerson = objPersonCtrl->buscarPersonAll();
	mostrarGrilla(listPerson);
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

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int DNI = Int32::Parse(Person_DGV->Rows[Person_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ Person = objPersonCtrl->buscarPersonxDNI(DNI);;
	if (Person != nullptr) {
		this->txt_dni->Text = Convert::ToString(Person->getDNI());
		this->txt_code->Text = Convert::ToString(Person->getCode());
		this->txt_name->Text = Person->getName();
		this->txt_password->Text = Person->getPassword();
		this->txt_mail->Text = Person->getMail();
		this->txt_phone->Text = Person->getPhone();
		this->combox_occupation->Text = Convert::ToString(Person->getOccupation());
		this->txt_gender->Text = Person->getGender();
		this->txt_age->Text = Convert::ToString(Person->getAge());
		this->check_permission->Checked = Convert::ToBoolean(Person->getPermission());
	}
}
private: System::Void MantPerson_Load(System::Object^ sender, System::EventArgs^ e) {
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	List<person^>^ listPerson = objPersonCtrl->buscarPersonAll();
	
	mostrarGrilla(listPerson);
}

};
}

