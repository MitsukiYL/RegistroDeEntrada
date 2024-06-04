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

	/// <summary>
	/// Resumen de InterfaceRDE
	/// </summary>
	public ref class InterfaceRDE : public System::Windows::Forms::Form
	{
	public:
		InterfaceRDE(void)
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
		~InterfaceRDE()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¡Realice su registro de entrada!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha de registro:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hora de entrada:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hora de salida:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(149, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(155, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Codigo de tarjeta:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(149, 49);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 20);
			this->textBox4->TabIndex = 8;
			// 
			// InterfaceRDE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 247);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"InterfaceRDE";
			this->Text = L"Registro de entrada al Campus";
			this->Load += gcnew System::EventHandler(this, &InterfaceRDE::InterfaceRDE_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfaceRDE_Load(System::Object^ sender, System::EventArgs^ e) {
		DateTimeHelper^ datetime = gcnew DateTimeHelper();

		//datetime->horaActual();
		//datetime->fechaActual();
		
		int codeCard = Convert::ToInt32(this->textBox4->Text);
		int fechaActual = Convert::ToInt32(this->textBox2->Text);
		String^ horaEntrada = this->textBox1->Text;
		String^ horaSalida = this->textBox3->Text;

		int horaActual = Convert::ToInt32(datetime->horaActual());

		int orden = 1;//se actualizara el orden luego

		bool estaAdentro = false;

		int NhoraEntrada = Convert::ToInt32(horaEntrada);
		int NhoraSalida = Convert::ToInt32(horaSalida);
	
		if ((horaActual > NhoraEntrada) && (horaActual < NhoraSalida)) {

			bool estaAdentro = true;
		}

		CardCtrl^ objCardCtrl = gcnew CardCtrl();
		SensorCtrl^ obbjSensorCtrl = gcnew SensorCtrl();
		DoorRegisterCtrl^ objDoorRegisterCtrl = gcnew DoorRegisterCtrl();

		int sensorID = 87654;//este codigo es de prueba

		card^ objCard = objCardCtrl->buscarCardxCode(codeCard);
		sensor^ objSensor = obbjSensorCtrl->buscarSensorxID(sensorID);

		objDoorRegisterCtrl->agregarNewDoorRegister(horaEntrada, horaSalida, estaAdentro, orden, objCard, objSensor);

		MessageBox::Show("Registro de entrada realizado correctamente");
		this->Close();
	}
};
}
