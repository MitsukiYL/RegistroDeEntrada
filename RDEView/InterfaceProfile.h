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
	/// Resumen de InterfaceProfile
	/// </summary>
	public ref class InterfaceProfile : public System::Windows::Forms::Form
	{
	public:
		InterfaceProfile(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		InterfaceProfile(user^ objUser)
		{
			InitializeComponent();
			this->objUser = objUser;
			change_state = true;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InterfaceProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: user^ objUser;
	private: bool change_state;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;










	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_code;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	private: System::Windows::Forms::TextBox^ txt_mail;
	private: System::Windows::Forms::TextBox^ txt_occ;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::TextBox^ txt_parksite;
	private: System::Windows::Forms::TextBox^ txt_password;









	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ Vehicle_DGV;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->txt_occ = (gcnew System::Windows::Forms::TextBox());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->txt_parksite = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Vehicle_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(17, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(18, 110);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(19, 138);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(19, 194);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ocupación:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(18, 82);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Código:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 249);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Actualizar datos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InterfaceProfile::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(19, 222);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Estacionamiento:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(19, 166);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Contacto:";
			// 
			// txt_name
			// 
			this->txt_name->Enabled = false;
			this->txt_name->Location = System::Drawing::Point(177, 52);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(222, 22);
			this->txt_name->TabIndex = 15;
			// 
			// txt_code
			// 
			this->txt_code->Enabled = false;
			this->txt_code->Location = System::Drawing::Point(177, 80);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(222, 22);
			this->txt_code->TabIndex = 16;
			// 
			// txt_DNI
			// 
			this->txt_DNI->Enabled = false;
			this->txt_DNI->Location = System::Drawing::Point(177, 108);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(222, 22);
			this->txt_DNI->TabIndex = 17;
			// 
			// txt_mail
			// 
			this->txt_mail->Enabled = false;
			this->txt_mail->Location = System::Drawing::Point(177, 136);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(222, 22);
			this->txt_mail->TabIndex = 18;
			// 
			// txt_occ
			// 
			this->txt_occ->Enabled = false;
			this->txt_occ->Location = System::Drawing::Point(177, 192);
			this->txt_occ->Name = L"txt_occ";
			this->txt_occ->Size = System::Drawing::Size(222, 22);
			this->txt_occ->TabIndex = 19;
			// 
			// txt_phone
			// 
			this->txt_phone->Enabled = false;
			this->txt_phone->Location = System::Drawing::Point(177, 164);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(222, 22);
			this->txt_phone->TabIndex = 20;
			// 
			// txt_parksite
			// 
			this->txt_parksite->Enabled = false;
			this->txt_parksite->Location = System::Drawing::Point(177, 220);
			this->txt_parksite->Name = L"txt_parksite";
			this->txt_parksite->Size = System::Drawing::Size(222, 22);
			this->txt_parksite->TabIndex = 21;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(177, 285);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(222, 22);
			this->txt_password->TabIndex = 23;
			this->txt_password->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label9->Location = System::Drawing::Point(19, 287);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Contraseña:";
			this->label9->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(177, 314);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 31);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Confirmar cambios";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &InterfaceProfile::button2_Click);
			// 
			// Vehicle_DGV
			// 
			this->Vehicle_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Vehicle_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column3, this->Column2
			});
			this->Vehicle_DGV->Location = System::Drawing::Point(440, 82);
			this->Vehicle_DGV->Name = L"Vehicle_DGV";
			this->Vehicle_DGV->RowHeadersWidth = 51;
			this->Vehicle_DGV->RowTemplate->Height = 24;
			this->Vehicle_DGV->Size = System::Drawing::Size(386, 147);
			this->Vehicle_DGV->TabIndex = 25;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Placa";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Marca";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Modelo";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(436, 54);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(206, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Tus vehículos registrados:";
			// 
			// InterfaceProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 415);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Vehicle_DGV);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_parksite);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->txt_occ);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"InterfaceProfile";
			this->Text = L"Perfil de usuario";
			this->Load += gcnew System::EventHandler(this, &InterfaceProfile::InterfaceProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Vehicle_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: void mostrarGrillaVehicle(List<vehicle^>^ listVehicle) {
	this->Vehicle_DGV->Rows->Clear();
	for (int i = 0; i < listVehicle->Count; i++) {
		vehicle^ objVehicle = listVehicle[i];
		array<String^>^ filaGrilla = gcnew array<String^>(3);
		if (objVehicle != nullptr) {
			filaGrilla[0] = objVehicle->getPlate();
			filaGrilla[1] = objVehicle->getBrand();
			filaGrilla[2] = objVehicle->getModel();
		}
		this->Vehicle_DGV->Rows->Add(filaGrilla);
	}
}
private: System::Void InterfaceProfile_Load(System::Object^ sender, System::EventArgs^ e) {
	if (this->objUser != nullptr) {

		VehicleCtrl^ objVehicleCtrl = gcnew VehicleCtrl();

		this->txt_name->Text = this->objUser->getPerson()->getName();
		this->txt_code->Text = Convert::ToString(this->objUser->getPerson()->getCode());
		this->txt_DNI->Text = Convert::ToString(this->objUser->getPerson()->getDNI());
		this->txt_occ->Text = this->objUser->getPerson()->getOccupation();
		this->txt_mail->Text = this->objUser->getPerson()->getMail();
		this->txt_phone->Text = this->objUser->getPerson()->getPhone();

		if (this->objUser->getParkingSite()->getID() == "PLACEHOLDER") {//SI EL USUARIO NO TIENE NINGUN PARKING SITE RELACIONADO
			this->txt_parksite->Text = "Sin estacionamiento reservado";
		}
		else {
			this->txt_parksite->Text = this->objUser->getParkingSite()->getID();
		}
			
		List<vehicle^>^ listVehicles = objVehicleCtrl->buscarVehiclexUser(this->objUser->getUserID());
		mostrarGrillaVehicle(listVehicles);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (change_state) {
		this->txt_mail->Enabled = true;
		this->txt_phone->Enabled = true;

		this->label9->Visible = true;
		this->txt_password->Visible = true;
		this->button2->Visible = true;

		this->button1->Text = "Cancelar cambios";
	}
	else {
		this->txt_mail->Enabled = false;
		this->txt_phone->Enabled = false;

		this->label9->Visible = false;
		this->txt_password->Visible = false;
		this->button2->Visible = false;

		MessageBox::Show("Cambios cancelados");
	}
	change_state = !change_state;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
	person^ objPerson = this->objUser->getPerson();

	if ((this->txt_password->Text) == (this->objUser->getPerson()->getPassword())) {
		objPerson->setMail(this->txt_mail->Text);
		objPerson->setPhone(this->txt_phone->Text);

		objPersonCtrl->actualizarPerson(objPerson->getDNI(), objPerson->getName(), objPerson->getCode(), objPerson->getMail(), objPerson->getPhone(), objPerson->getPassword(), objPerson->getPermission(), objPerson->getOccupation(), objPerson->getGender(), objPerson->getAge());

		this->txt_mail->Enabled = false;
		this->txt_phone->Enabled = false;

		this->label9->Visible = false;
		this->txt_password->Visible = false;
		this->button2->Visible = false;

		change_state = true;

		MessageBox::Show("Cambios realizados");
	}
}
};
}
