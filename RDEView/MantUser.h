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
	/// Resumen de MantUser
	/// </summary>
	public ref class MantUser : public System::Windows::Forms::Form
	{
	public:
		MantUser(void)
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
		~MantUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ User_DGV;














	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::TextBox^ txt_userID;
	private: System::Windows::Forms::TextBox^ txt_registrationDate;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_userType;

	private: System::Windows::Forms::Label^ label5;






























	private: System::Windows::Forms::CheckBox^ check_active;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_ParkLotID;
	private: System::Windows::Forms::CheckBox^ check_perm;
	private: System::Windows::Forms::CheckBox^ check_IsInside;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_occupation;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_age;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_mail;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_code;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ txt_DNI;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ txt_name;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;



















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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->User_DGV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_userID = (gcnew System::Windows::Forms::TextBox());
			this->txt_registrationDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_userType = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->check_active = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_ParkLotID = (gcnew System::Windows::Forms::TextBox());
			this->check_perm = (gcnew System::Windows::Forms::CheckBox());
			this->check_IsInside = (gcnew System::Windows::Forms::CheckBox());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_occupation = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantUser::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(110, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantUser::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Añadir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantUser::button1_Click);
			// 
			// User_DGV
			// 
			this->User_DGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->User_DGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Column1, this->Column4,
					this->Column5, this->Column10, this->Column3, this->Column11, this->Column2, this->Column7, this->Column8, this->Column9, this->Column6,
					this->Column15, this->Column12, this->Column13, this->Column14, this->Column16
			});
			this->User_DGV->Location = System::Drawing::Point(12, 157);
			this->User_DGV->Name = L"User_DGV";
			this->User_DGV->RowHeadersWidth = 62;
			this->User_DGV->Size = System::Drawing::Size(1122, 289);
			this->User_DGV->TabIndex = 44;
			this->User_DGV->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MantUser::Person_DGV_CellClick);
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
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Código";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Correo";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Contacto";
			this->Column9->Name = L"Column9";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Contraseña";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Permiso";
			this->Column15->Name = L"Column15";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Cargo";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Género";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Edad";
			this->Column14->Name = L"Column14";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Está Adentro";
			this->Column16->Name = L"Column16";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"ID de Usuario";
			// 
			// txt_userID
			// 
			this->txt_userID->Location = System::Drawing::Point(146, 1);
			this->txt_userID->Name = L"txt_userID";
			this->txt_userID->Size = System::Drawing::Size(168, 20);
			this->txt_userID->TabIndex = 33;
			// 
			// txt_registrationDate
			// 
			this->txt_registrationDate->Location = System::Drawing::Point(146, 53);
			this->txt_registrationDate->Name = L"txt_registrationDate";
			this->txt_registrationDate->Size = System::Drawing::Size(168, 20);
			this->txt_registrationDate->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Tipo de Usuario";
			// 
			// txt_userType
			// 
			this->txt_userType->Location = System::Drawing::Point(146, 26);
			this->txt_userType->Name = L"txt_userType";
			this->txt_userType->Size = System::Drawing::Size(168, 20);
			this->txt_userType->TabIndex = 39;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Fecha de Registro";
			// 
			// check_active
			// 
			this->check_active->AutoSize = true;
			this->check_active->Location = System::Drawing::Point(249, 106);
			this->check_active->Name = L"check_active";
			this->check_active->Size = System::Drawing::Size(56, 17);
			this->check_active->TabIndex = 108;
			this->check_active->Text = L"Activo";
			this->check_active->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 13);
			this->label2->TabIndex = 110;
			this->label2->Text = L"Lugar de Estacionamiento";
			// 
			// txt_ParkLotID
			// 
			this->txt_ParkLotID->Location = System::Drawing::Point(146, 80);
			this->txt_ParkLotID->Name = L"txt_ParkLotID";
			this->txt_ParkLotID->Size = System::Drawing::Size(168, 20);
			this->txt_ParkLotID->TabIndex = 109;
			// 
			// check_perm
			// 
			this->check_perm->AutoSize = true;
			this->check_perm->Location = System::Drawing::Point(832, 53);
			this->check_perm->Name = L"check_perm";
			this->check_perm->Size = System::Drawing::Size(63, 17);
			this->check_perm->TabIndex = 126;
			this->check_perm->Text = L"Permiso";
			this->check_perm->UseVisualStyleBackColor = true;
			// 
			// check_IsInside
			// 
			this->check_IsInside->AutoSize = true;
			this->check_IsInside->Location = System::Drawing::Point(832, 79);
			this->check_IsInside->Name = L"check_IsInside";
			this->check_IsInside->Size = System::Drawing::Size(87, 17);
			this->check_IsInside->TabIndex = 125;
			this->check_IsInside->Text = L"Está Adentro";
			this->check_IsInside->UseVisualStyleBackColor = true;
			// 
			// txt_gender
			// 
			this->txt_gender->Location = System::Drawing::Point(645, 79);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->Size = System::Drawing::Size(168, 20);
			this->txt_gender->TabIndex = 124;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(587, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 123;
			this->label13->Text = L"Género";
			// 
			// txt_occupation
			// 
			this->txt_occupation->Location = System::Drawing::Point(645, 53);
			this->txt_occupation->Name = L"txt_occupation";
			this->txt_occupation->Size = System::Drawing::Size(168, 20);
			this->txt_occupation->TabIndex = 122;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(587, 58);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 121;
			this->label14->Text = L"Cargo";
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(869, 6);
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(168, 20);
			this->txt_age->TabIndex = 120;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(820, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 13);
			this->label15->TabIndex = 119;
			this->label15->Text = L"Edad";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(645, 2);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(168, 20);
			this->txt_phone->TabIndex = 118;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(587, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 117;
			this->label12->Text = L"Contacto";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(391, 79);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(168, 20);
			this->txt_mail->TabIndex = 116;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(330, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 115;
			this->label11->Text = L"Correo";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(645, 28);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(168, 20);
			this->txt_password->TabIndex = 114;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(587, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 113;
			this->label7->Text = L"Contraseña";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(391, 53);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(168, 20);
			this->txt_code->TabIndex = 112;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(330, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 111;
			this->label1->Text = L"Código";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(391, 2);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(168, 20);
			this->txt_DNI->TabIndex = 130;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(330, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 13);
			this->label9->TabIndex = 129;
			this->label9->Text = L"DNI";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(391, 28);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(168, 20);
			this->txt_name->TabIndex = 128;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(330, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 127;
			this->label10->Text = L"Nombre";
			// 
			// MantUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 458);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->check_perm);
			this->Controls->Add(this->check_IsInside);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_occupation);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_ParkLotID);
			this->Controls->Add(this->check_active);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->User_DGV);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_userType);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_registrationDate);
			this->Controls->Add(this->txt_userID);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MantUser";
			this->Text = L"MantUser";
			this->Load += gcnew System::EventHandler(this, &MantUser::MantUser_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->User_DGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void mostrarGrilla(List<user^>^ listUser) {
	this->User_DGV->Rows->Clear();
	for (int i = 0; i < listUser->Count; i++) {
		user^ objUser = listUser[i];
		array<String^>^ filaGrilla = gcnew array<String^>(16);
		filaGrilla[0] = Convert::ToString(objUser->getUserID());
		filaGrilla[1] = objUser->getUserType();
		filaGrilla[2] = Convert::ToString(objUser->getRegistrationDate());
		filaGrilla[3] = Convert::ToString(objUser->getParkingSite()->getID());
		filaGrilla[4] = Convert::ToString(objUser->getActive());
		filaGrilla[5] = Convert::ToString(objUser->getDNI());
		filaGrilla[6] = objUser->getName();
		filaGrilla[7] = Convert::ToString(objUser->getCode());
		filaGrilla[8] = objUser->getMail();
		filaGrilla[9] = objUser->getPhone();
		filaGrilla[10] = objUser->getPassword();
		filaGrilla[11] = Convert::ToString(objUser->getPermission());
		filaGrilla[12] = objUser->getOccupation();
		filaGrilla[13] = objUser->getGender();
		filaGrilla[14] = Convert::ToString(objUser->getAge());
		filaGrilla[15] = Convert::ToString(objUser->getIsInside());
		this->User_DGV->Rows->Add(filaGrilla);
	}
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//AÑADIR
		int userID = Convert::ToInt32(this->txt_userID->Text);
		String^ userType = this->txt_userType->Text;
		int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
		bool active = this->check_active->Checked;
		String^ parklotID = this->txt_ParkLotID->Text;

		ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
		parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

		int personDNI = Convert::ToInt32(this->txt_DNI->Text);
		String^ name = this->txt_name->Text;
		int code = Convert::ToInt32(this->txt_code->Text);
		String^ mail = this->txt_mail->Text;
		String^ phone = this->txt_phone->Text;
		String^ password = this->txt_password->Text;
		bool permission = this->check_perm->Checked;
		String^ occupation = this->txt_occupation->Text;
		String^ gender = this->txt_gender->Text;
		int age = Convert::ToInt32(this->txt_age->Text);
		bool isInside = this->check_IsInside->Checked;


		UserCtrl^ objUserCtrl = gcnew UserCtrl();
		objUserCtrl->agregarNewUser(userID, userType, active, registrationDate, objParkingSite, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
		txt_userID->Clear();

		List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
		mostrarGrilla(listaAdmin);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//ACTUALIZAR
	int userID = Convert::ToInt32(this->txt_userID->Text);
	String^ userType = this->txt_userType->Text;
	int registrationDate = Convert::ToInt32(this->txt_registrationDate->Text);
	bool active = this->check_active->Checked;
	String^ parklotID = this->txt_ParkLotID->Text;

	ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();
	parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parklotID);

	int personDNI = Convert::ToInt32(this->txt_DNI->Text);
	String^ name = this->txt_name->Text;
	int code = Convert::ToInt32(this->txt_code->Text);
	String^ mail = this->txt_mail->Text;
	String^ phone = this->txt_phone->Text;
	String^ password = this->txt_password->Text;
	bool permission = this->check_perm->Checked;
	String^ occupation = this->txt_occupation->Text;
	String^ gender = this->txt_gender->Text;
	int age = Convert::ToInt32(this->txt_age->Text);
	bool isInside = this->check_IsInside->Checked;


	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->actualizarUser(userID, userType, active, registrationDate, objParkingSite, personDNI, name, code, mail, phone, password, permission, occupation, gender, age, isInside);
	txt_userID->Clear();
	MessageBox::Show("El usuario seleccionada ha sido actualizado correctamente");

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaAdmin);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//ELIMINAR
	int filaSeleccionada = this->User_DGV->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
	int codigoEliminar = Convert::ToInt32(this->User_DGV->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	objUserCtrl->eliminarUser(codigoEliminar);
	MessageBox::Show("El usuario seleccionada ha sido eliminado correctamente");
	this->User_DGV->Rows->Clear();

	List<user^>^ listaAdmin = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaAdmin);
}
private: System::Void Person_DGV_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int userID = Int32::Parse(User_DGV->Rows[User_DGV->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	user^ User = objUserCtrl->buscarUserxUserID(userID);
	if (User != nullptr) {
		this->txt_userID->Text = Convert::ToString(User->getUserID());
		this->txt_userType->Text = User->getUserType();
		this->txt_registrationDate->Text = Convert::ToString(User->getRegistrationDate());
		this->check_active->Checked = User->getActive();
		this->txt_ParkLotID->Text = User->getParkingSite()->getID();
		this->txt_DNI->Text = Convert::ToString(User->getDNI());
		this->txt_name->Text = User->name;
		this->txt_code->Text = Convert::ToString(User->code);
		this->txt_mail->Text = User->mail;
		this->txt_phone->Text = User->phone;
		this->txt_password->Text = User->password;
		this->check_perm->Checked = User->permission;
		this->txt_occupation->Text = User->occupation;
		this->txt_gender->Text = User->gender;
		this->txt_age->Text = Convert::ToString(User->age);
		this->check_IsInside->Checked = User->isInside;
	}
}
private: System::Void MantUser_Load(System::Object^ sender, System::EventArgs^ e) {
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	List<user^>^ listaUser = objUserCtrl->buscarUserAll();
	mostrarGrilla(listaUser);
}
};
}
