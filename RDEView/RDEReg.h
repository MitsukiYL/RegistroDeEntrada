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
	using namespace System::IO;

	/// <summary>
	/// Resumen de RDEReg
	/// </summary>
	public ref class RDEReg : public System::Windows::Forms::Form
	{
	public:
		RDEReg(void)
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
		~RDEReg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::TextBox^ txt_code;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_mail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_password;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_DNI;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_confirmPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_phone;
	private: System::Windows::Forms::Label^ label8;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_mail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_confirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_phone = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese sus datos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre Completo:";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(148, 51);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(156, 20);
			this->txt_name->TabIndex = 2;
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(148, 77);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(156, 20);
			this->txt_code->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Código PUCP:";
			// 
			// txt_mail
			// 
			this->txt_mail->Location = System::Drawing::Point(148, 129);
			this->txt_mail->Name = L"txt_mail";
			this->txt_mail->Size = System::Drawing::Size(156, 20);
			this->txt_mail->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Correo:";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(148, 181);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(156, 20);
			this->txt_password->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Contraseña:";
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(148, 103);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(156, 20);
			this->txt_DNI->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"DNI:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(103, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RDEReg::button1_Click);
			// 
			// txt_confirmPassword
			// 
			this->txt_confirmPassword->Location = System::Drawing::Point(148, 207);
			this->txt_confirmPassword->Name = L"txt_confirmPassword";
			this->txt_confirmPassword->PasswordChar = '*';
			this->txt_confirmPassword->Size = System::Drawing::Size(156, 20);
			this->txt_confirmPassword->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Confirmar contraseña:";
			// 
			// txt_phone
			// 
			this->txt_phone->Location = System::Drawing::Point(148, 155);
			this->txt_phone->Name = L"txt_phone";
			this->txt_phone->Size = System::Drawing::Size(156, 20);
			this->txt_phone->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Teléfono:";
			// 
			// RDEReg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 292);
			this->Controls->Add(this->txt_phone);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_confirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_mail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RDEReg";
			this->Text = L"RDEReg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		bool Person_Repeated = true;

		PersonCtrl^ objPersonCtrl = gcnew PersonCtrl();
		UserCtrl^ objUserCtrl = gcnew UserCtrl();

		//ATRIBUTOS FIJOS 
		
		String^ name = this->txt_name->Text;
		String^ mail = this->txt_mail->Text;
		String^ phone = this->txt_phone->Text;
		String^ password = this->txt_password->Text;
		String^ confirm_password = this->txt_confirmPassword->Text;

		//ATRIBUTOS VARIABLES - SOLO PLACEHOLDERS
		String^ occupation = "occupation";
		String^ gender = "gender";
		int age = 999;
		bool permission = false;

		if ((this->txt_DNI->Text=="") || (this->txt_code->Text =="") || (name=="") 
			|| (mail=="") || (phone=="") || (password=="") || (confirm_password=="")) {
			MessageBox::Show("No se han ingresado todos los datos");
		}
		else {

			//ATRIBUTOS FIJOS
			int DNI = Convert::ToInt32(this->txt_DNI->Text);
			int code = Convert::ToInt32(this->txt_code->Text);
			List<person^>^ listaPerson = objPersonCtrl->buscarPersonAll();

			for (int i = 0; i < listaPerson->Count; i++) {
				if ((listaPerson[i]->getDNI() == DNI) || (listaPerson[i]->getCode() == code) || (listaPerson[i]->getMail() == mail)) {
					Person_Repeated = false;
					break;
				}
			}

			if (!Person_Repeated) {
				MessageBox::Show("Datos incorrectos");
				txt_DNI->Clear();
				txt_code->Clear();
				txt_mail->Clear();
				txt_confirmPassword->Clear();
				txt_password->Clear();
			}
			else {
				if (confirm_password != password) {
					MessageBox::Show("Las contraseñas no coinciden");
					txt_confirmPassword->Clear();
					txt_password->Clear();
				}
				else {
					objPersonCtrl->agregarNewPerson(DNI, name, code, mail, phone, password, permission, occupation, gender, age);
					person^ objPerson = objPersonCtrl->buscarPersonxDNI(DNI);

					DateTimeHelper^ objDateTimeHelper = gcnew DateTimeHelper();
					ParkingSiteCtrl^ objParkingSiteCtrl = gcnew ParkingSiteCtrl();

					//ATRIBUTOS DE USUARIO

					List<user^>^ listaUser = objUserCtrl->buscarUserAll();

					int userID = 1, val = 1;
					while (val) {
						val = 0;
						for (int i = 0; i < listaUser->Count; i++) {
							if (listaUser[i]->getUserID() == userID) {
								val = 1;
								break;
							}
						}
						if (!val) { break; }
						userID++;
					}

					String^ userType = occupation;
					bool active = true;
					bool inside = false;
					String^ regDate = objDateTimeHelper->fechaActual();
					String^ parkSiteID = "PLACEHOLDER";
					parkingSite^ objParkingSite = objParkingSiteCtrl->BuscarSiteXID(parkSiteID);

					objUserCtrl->agregarNewUser(userID, userType, active, inside, regDate, objParkingSite, objPerson);

					MessageBox::Show("El usuario ha sido agregado con éxito");
					this->Close();
				}
			}
		}
		
	}
};
}
