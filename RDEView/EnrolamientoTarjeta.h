#pragma once
#include <cstdlib> 
#include <ctime> 
#include <iostream>


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
			//
			//TODO: Add the constructor code here
			//
		}

		EnrolamientoTarjeta(request^ objRequest) {
			InitializeComponent(); 
			this->objRequest = objRequest;
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
	private: System::Windows::Forms::TextBox^ txt_code;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: request^ objRequest;
	private: System::Windows::Forms::TextBox^ txt_newOccupation;
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
			this->combox_permType = (gcnew System::Windows::Forms::ComboBox());
			this->txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_code = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->txt_newOccupation = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// combox_permType
			// 
			this->combox_permType->FormattingEnabled = true;
			this->combox_permType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"General", L"Excepcional", L"Mantenimiento",
					L"Administrador"
			});
			this->combox_permType->Location = System::Drawing::Point(135, 237);
			this->combox_permType->Name = L"combox_permType";
			this->combox_permType->Size = System::Drawing::Size(174, 21);
			this->combox_permType->TabIndex = 0;
			// 
			// txt_DNI
			// 
			this->txt_DNI->Location = System::Drawing::Point(135, 50);
			this->txt_DNI->Name = L"txt_DNI";
			this->txt_DNI->Size = System::Drawing::Size(174, 20);
			this->txt_DNI->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Cargo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Tipo de Permiso";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 126);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(305, 23);
			this->progressBar1->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(15, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Usuario";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(21, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Tarjeta";
			// 
			// txt_code
			// 
			this->txt_code->Location = System::Drawing::Point(135, 211);
			this->txt_code->Name = L"txt_code";
			this->txt_code->Size = System::Drawing::Size(174, 20);
			this->txt_code->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Código";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 32);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Enlazar Tarjeta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnrolamientoTarjeta::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(19, 268);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 17);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Confirmar";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// txt_newOccupation
			// 
			this->txt_newOccupation->Location = System::Drawing::Point(135, 76);
			this->txt_newOccupation->Name = L"txt_newOccupation";
			this->txt_newOccupation->Size = System::Drawing::Size(174, 20);
			this->txt_newOccupation->TabIndex = 19;
			// 
			// EnrolamientoTarjeta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 352);
			this->Controls->Add(this->txt_newOccupation);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_code);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_DNI);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->combox_permType);
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

		if (this->checkBox1->Checked) {

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

			//AQUI IRIA LA RECEPCIÓN DEL CÓDIGO DE LA TARJETA FÍSICA PARA DEFINIRLO COMO ATRIBUTO
			int codeNew = Convert::ToInt32(this->txt_code->Text);
			///////

			int emissionDateNew = Convert::ToInt32(objDateTimeHelper->fechaActual());
			int registrationDateNew = Convert::ToInt32(objDateTimeHelper->fechaActual());
			int expirationDateNew = Convert::ToInt32(objDateTimeHelper->fechaActual())+1;
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
			this->Close();
		}
		else {
			MessageBox::Show("Confirme el enlazamiento de tarjeta");
		}
	}
private: System::Void EnrolamientoTarjeta_Load(System::Object^ sender, System::EventArgs^ e) {
	if (this->objRequest != nullptr) {
		if (this->objRequest->getType() == "Nuevo Cargo") {

			this->txt_DNI->Enabled = false;
			this->txt_newOccupation->Enabled = false;

			this->txt_newOccupation->Text = this->objRequest->getNewOccupation();
		}
		else if (this->objRequest->getType() == "Nueva Tarjeta") {

			this->txt_DNI->Enabled = false;
			this->txt_newOccupation->Enabled = false;
			

			this->txt_newOccupation->Text = this->objRequest->getUser()->getPerson()->getOccupation();

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
}
};
}
