#pragma once
#include "RDEReg.h"
#include "RDEMasterMenu.h"
#include "UsuarioAdmin.h"

namespace RDEView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RDELog
	/// </summary>
	public ref class RDELog : public System::Windows::Forms::Form
	{
	public:
		RDELog(void)
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
		~RDELog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_codemail;
	private: System::Windows::Forms::TextBox^ txt_password;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->txt_codemail = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MENÚ DE INICIO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI / Código / Correo :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña :";
			// 
			// txt_codemail
			// 
			this->txt_codemail->Location = System::Drawing::Point(174, 39);
			this->txt_codemail->Name = L"txt_codemail";
			this->txt_codemail->Size = System::Drawing::Size(159, 20);
			this->txt_codemail->TabIndex = 3;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(174, 85);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(159, 20);
			this->txt_password->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RDELog::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(105, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Registrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RDELog::button2_Click);
			// 
			// RDELog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 171);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_codemail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RDELog";
			this->Text = L"Registro de entrada: Menú de inicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//CODIGO DE EVALUCIAN DE USUARIO/ADMINISTRADOR, EN COMENTARIOS POR EL MOMENTO
	/*	bool found = false;

	String^ txt = this->txt_codemail->Text;
	String^ password = this->txt_password->Text;

	UserCtrl^ objUserCtrl = gcnew UserCtrl();
	AdminCtrl^ objAdminCtrl = gcnew AdminCtrl();
	PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();

	List<person^>^ listaPerson = objPersonCtrl->buscarPersonAll();

	if ((txt == "")||(password=="")) {
		MessageBox::Show("No se han ingresado todos los datos");
	}
	else {
		for (int i = 0; i < listaPerson->Count; i++) {


			bool DNIMatch = Convert::ToString(listaPerson[i]->getDNI()) == txt;
			bool mailMatch = listaPerson[i]->getMail() == txt;
			bool codeMatch = Convert::ToString(listaPerson[i]->getCode()) == txt;
			bool passwordMatch = listaPerson[i]->getPassword() == password;

			if ((DNIMatch || mailMatch || codeMatch) && passwordMatch) {
				found = true;
				break;
			}
		}
		if (found) {
			person^ objPerson = objPersonCtrl->buscarPersonxPassword(password);
			user^ UserLog = objUserCtrl->buscarUserxPersonDNI(objPerson->getDNI());
			admin^ AdminLog = objAdminCtrl->BuscarAdminxPersonDNI(objPerson->getDNI());
			if ((UserLog != nullptr)&&(AdminLog == nullptr)) {
				MessageBox::Show("Bienvenido "+objPerson->getName());
			}
			else if ((UserLog == nullptr)&&(AdminLog != nullptr)) {
				MessageBox::Show("Modo administrador");
				RDEMasterMenu^ logform = gcnew RDEMasterMenu();
				logform->Show();
			}
			else if ((UserLog != nullptr)&&(AdminLog != nullptr)) {
				UsuarioAdmin^ formUserAdmin = gcnew UsuarioAdmin();
				formUserAdmin->ShowDialog();
				this->Close();
			}


		}
		else {
			txt_codemail->Clear();
			txt_password->Clear();
			MessageBox::Show("Datos incorrectos");
		}
	}*/

	RDEMasterMenu^ logform = gcnew RDEMasterMenu();
	logform->Show();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	RDEReg^ regform = gcnew RDEReg();
	regform->ShowDialog();
}
};
}
