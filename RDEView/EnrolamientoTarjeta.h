#pragma once
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include "BuscarUser.h"


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
	/// Summary for EnrolamientoTarjeta
	/// </summary>
	public ref class EnrolamientoTarjeta : public System::Windows::Forms::Form
	{
	public:
		EnrolamientoTarjeta(void)
		{
			InitializeComponent();
			this->objUser = gcnew user();
			bool user_ready = true;
			bool flag_code = true;
			//
			//TODO: Add the constructor code here
			//
		}

		EnrolamientoTarjeta(request^ objRequest) {
			InitializeComponent(); 
			this->objRequest = objRequest;
			bool user_ready = true;
			bool flag_code = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnrolamientoTarjeta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ combox_permType;
	private: System::Windows::Forms::TextBox^ txt_DNI;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox_confirm;

	private: user^ objUser;
	private: request^ objRequest;
	private: bool user_ready;
	private: bool flag_code;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ combox_occupation;
	private: System::IO::Ports::SerialPort^ port1;
	private: System::Windows::Forms::RichTextBox^ richtxt_code;
	private: System::Windows::Forms::CheckBox^ checkBox_codeconfirm;

	private: System::Windows::Forms::RichTextBox^ richtxt_confirmcode;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->combox_permType = (gcnew System::Windows::Forms::ComboBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox_confirm = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->combox_occupation = (gcnew System::Windows::Forms::ComboBox());
			this->port1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->richtxt_code = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox_codeconfirm = (gcnew System::Windows::Forms::CheckBox());
			this->richtxt_confirmcode = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// combox_permType
			// 
			this->combox_permType->FormattingEnabled = true;
			this->combox_permType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"General", L"Excepcional", L"Mantenimiento",
					L"Administrador"
			});
			this->combox_permType->Location = System::Drawing::Point(181, 374);
			this->combox_permType->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->combox_permType->Name = L"combox_permType";
			this->combox_permType->Size = System::Drawing::Size(231, 24);
			this->combox_permType->TabIndex = 0;
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(180, 62);
			this->txt_DNI->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(231, 22);
			this->txt_DNI->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 65);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 97);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Cargo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 380);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de Permiso";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 201);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(407, 28);
			this->progressBar1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(16, 23);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 29);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(16, 233);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Tarjeta";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 276);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 16);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Código";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(127, 439);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 39);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Enlazar Tarjeta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnrolamientoTarjeta::button1_Click);
			// 
			// checkBox_confirm
			// 
			this->checkBox_confirm->AutoSize = true;
			this->checkBox_confirm->Location = System::Drawing::Point(27, 412);
			this->checkBox_confirm->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_confirm->Name = L"checkBox_confirm";
			this->checkBox_confirm->Size = System::Drawing::Size(86, 20);
			this->checkBox_confirm->TabIndex = 18;
			this->checkBox_confirm->Text = L"Confirmar";
			this->checkBox_confirm->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(127, 142);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 39);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Buscar Usuario";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EnrolamientoTarjeta::button2_Click);
			// 
			// combox_occupation
			// 
			this->combox_occupation->FormattingEnabled = true;
			this->combox_occupation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Estudiante", L"Jefe de Práctica", L"Docente",
					L"Personal Académico", L"Personal Administrativo", L"Personal de Mantenimiento", L"Administrador"
			});
			this->combox_occupation->Location = System::Drawing::Point(180, 94);
			this->combox_occupation->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->combox_occupation->Name = L"combox_occupation";
			this->combox_occupation->Size = System::Drawing::Size(231, 24);
			this->combox_occupation->TabIndex = 21;
			// 
			// port1
			// 
			this->port1->PortName = L"COM3";
			this->port1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &EnrolamientoTarjeta::port1_DataReceived);
			// 
			// richtxt_code
			// 
			this->richtxt_code->Location = System::Drawing::Point(180, 267);
			this->richtxt_code->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richtxt_code->Name = L"richtxt_code";
			this->richtxt_code->Size = System::Drawing::Size(231, 25);
			this->richtxt_code->TabIndex = 22;
			this->richtxt_code->Text = L"";
			// 
			// checkBox_codeconfirm
			// 
			this->checkBox_codeconfirm->AutoSize = true;
			this->checkBox_codeconfirm->Location = System::Drawing::Point(25, 345);
			this->checkBox_codeconfirm->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox_codeconfirm->Name = L"checkBox_codeconfirm";
			this->checkBox_codeconfirm->Size = System::Drawing::Size(202, 20);
			this->checkBox_codeconfirm->TabIndex = 23;
			this->checkBox_codeconfirm->Text = L"Código de tarjeta confirmado";
			this->checkBox_codeconfirm->UseVisualStyleBackColor = true;
			// 
			// richtxt_confirmcode
			// 
			this->richtxt_confirmcode->Location = System::Drawing::Point(180, 302);
			this->richtxt_confirmcode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richtxt_confirmcode->Name = L"richtxt_confirmcode";
			this->richtxt_confirmcode->Size = System::Drawing::Size(231, 25);
			this->richtxt_confirmcode->TabIndex = 25;
			this->richtxt_confirmcode->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 311);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Confirmar código";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(291, 335);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 31);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Reiniciar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EnrolamientoTarjeta::button3_Click);
			// 
			// EnrolamientoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 485);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richtxt_confirmcode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox_codeconfirm);
			this->Controls->Add(this->richtxt_code);
			this->Controls->Add(this->combox_occupation);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox_confirm);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->combox_permType);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"EnrolamientoTarjeta";
			this->Text = L"EnrolamientoTarjeta";
			this->Load += gcnew System::EventHandler(this, &EnrolamientoTarjeta::EnrolamientoTarjeta_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	CardCtrl^ objCardCtrl = gcnew CardCtrl();
	DateTimeHelper^ objDateTimeHelper = gcnew DateTimeHelper();

	String^ codeNew = this->richtxt_code->Text;
	
	//VERIFICAMOS QUE LA TARJETA NO ESTÉ ENLAZADA A UN USUARIO

	card^ objCardRepeated = objCardCtrl->buscarCardxCode(codeNew);
	bool cardRepeated = (objCardRepeated != nullptr);

	if (!cardRepeated) {
		if ((this->richtxt_code->Text) == (this->richtxt_confirmcode->Text)) {
			if (this->checkBox_confirm->Checked) {

				int DNI = Convert::ToInt32(this->txt_DNI->Text);
				user^ objUser = objUserCtrl->buscarUserxPersonDNI(DNI);

				//Llamamos todas las tarjetas del usuario
				List<card^>^ listaCard = objCardCtrl->buscarCardxUserID(objUser->getUserID());

				//Se desactiva la anterior tarjeta del usuario.
				int i = (listaCard->Count);
				if (i > 0) {
					objCardCtrl->actualizarCard(listaCard[i - 1]->getCode(), listaCard[i - 1]->getExpirationDate(), listaCard[i - 1]->getPermissionType(), listaCard[i - 1]->getID(),
						false, listaCard[i - 1]->getEmissionDate(), listaCard[i - 1]->getRegistrationDate(), false, objUser);
				}

				String^ emissionDateNew = objDateTimeHelper->fechaActual();
				String^ registrationDateNew = objDateTimeHelper->fechaActual();

				String^ separador_regDate = "/";

				array<String^>^ array_regDate = registrationDateNew->Split(separador_regDate->ToCharArray());

				int int_yyExpirationDate = Convert::ToInt32(array_regDate[2]) + 1;

				String^ expirationDateNew = array_regDate[0] + "/" + array_regDate[1] + "/" + Convert::ToString(int_yyExpirationDate);
				String^ permissionTypeNew = this->combox_permType->Text;
				bool permissionNew = true;
				bool activeNew = true;

				List<card^>^ listaCardTotal = objCardCtrl->buscarCardAll();

				int IDnew = 1, val = 1;
				while (val) {
					val = 0;
					for (int i = 0; i < listaCardTotal->Count; i++) {
						if (listaCardTotal[i]->getID() == IDnew) {
							val = 1;
							break;
						}
					}
					if (!val) {
						break;
					}
					IDnew++;
				}


				objCardCtrl->agregarNewCard(codeNew, expirationDateNew, permissionTypeNew, IDnew, permissionNew, emissionDateNew, registrationDateNew, activeNew, objUser);
				MessageBox::Show("Tarjeta enlazada correctamente");

				//Si la ventana EnrolamientoTarjeta fue creada mediante la Interfaz de Administración de Solicitudes,
				//se actualiza la solicitud a aceptada
				if (this->objRequest != nullptr) {
					this->objRequest->setAccepted(true);
				}

				this->Close();
			}
			else {
				MessageBox::Show("Confirme el enlazamiento de tarjeta");
			}
		}
		else {
			MessageBox::Show("Confirme el código de la tarjeta ingresado");
			this->richtxt_code->Clear();
			this->richtxt_confirmcode->Clear();
		}
	}
	else {
		MessageBox::Show("Esta tarjeta ya está enlazada");
		this->richtxt_code->Clear();
		this->richtxt_confirmcode->Clear();	
	}
	
}
private: System::Void EnrolamientoTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
	this->port1->Open();
	if (this->objRequest != nullptr) {
		if (this->objRequest->getType() == "Nuevo Cargo") {

			this->txt_DNI->Enabled = false;
			this->combox_occupation->Enabled = false;

			this->combox_occupation->Text = this->objRequest->getNewOccupation();
		}
		else if (this->objRequest->getType() == "Nueva Tarjeta") {

			this->txt_DNI->Enabled = false;
			this->combox_occupation->Enabled = false;
			

			this->combox_occupation->Text = this->objRequest->getUser()->getPerson()->getOccupation();

			CardCtrl^ objCardCtrl = gcnew CardCtrl();
			List<card^>^ listaCard = objCardCtrl->buscarCardxUserID(this->objRequest->getUser()->getUserID());

			int i = (listaCard->Count);
			if (i > 0) {
				card^ objCard = listaCard[(listaCard->Count) - 1];

				this->combox_permType->Enabled = false;
				this->combox_permType->Text = objCard->getPermissionType();
			}

		}
		this->txt_DNI->Text = Convert::ToString(this->objRequest->getUser()->getPerson()->getDNI());
	}
	else {
		this->txt_DNI->Enabled = false;
		this->combox_occupation->Enabled = false;
		this->richtxt_code->Enabled = false;
		this->richtxt_confirmcode->Enabled = false;
		this->combox_permType->Enabled = false;
		this->checkBox_confirm->Enabled = false;
		this->button1->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//BUSCAR USER
	BuscarUser^ mantBuscarUser = gcnew BuscarUser(this->objUser);
	mantBuscarUser->ShowDialog();

	if (this->objUser != nullptr) {
		this->richtxt_code->Enabled = true;
		this->richtxt_confirmcode->Enabled = true;
		this->combox_permType->Enabled = true;
		this->checkBox_confirm->Enabled = true;
		this->button1->Enabled = true;
		this->txt_DNI->Text = Convert::ToString(this->objUser->getPerson()->getDNI());
		this->combox_occupation->Text = Convert::ToString(this->objUser->getPerson()->getOccupation());
		user_ready = true;
	}
}
private: System::Void port1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {//SERIAL RECIBE DATA
	String^ data = port1->ReadLine();

	UPDATE_SERIAL_DATA^ cb = gcnew  UPDATE_SERIAL_DATA(this, &EnrolamientoTarjeta::UpdateRxData);
	Control::Invoke(cb, data);
}
#pragma region Delegates
private: delegate void UPDATE_SERIAL_DATA(String^ data);
private: void UpdateRxData(String^ data) {

	/*
	PROTOCOLO DE CARD READER:    name    +    cardID    +    stopper
	Ejemplo:  "ID:123456:12312371823;\r"
	array_dataA = {"ID","123456","12312371823;\r"}
	array_dataB = {"12312371823","\r"};
	*/
	if (user_ready) {

		String^ separadorA = ":";
		String^ separadorB = ";";

		array<String^>^ array_dataA = data->Split(separadorA->ToCharArray());
		if (array_dataA->Length > 2) {
			array<String^>^ array_dataB = array_dataA[2]->Split(separadorB->ToCharArray());

			if (array_dataA[0] == "ID") {
				if (!flag_code) {
					this->richtxt_code->Text = array_dataB[0];
				}
				else {
					this->richtxt_confirmcode->Text = array_dataB[0];
				}
				flag_code = !flag_code;
			}
		}

	}

	this->richtxt_code->ScrollToCaret();

	if ((this->richtxt_code->Text) == (this->richtxt_confirmcode->Text)) {
		this->checkBox_codeconfirm->Checked = true;
	}
	else {
		this->checkBox_codeconfirm->Checked = false;
	}
}
#pragma endregion
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	richtxt_code->Clear();
	richtxt_confirmcode->Clear();
}
};
}
