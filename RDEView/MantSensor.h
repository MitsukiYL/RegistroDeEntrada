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
	/// Resumen de MantSensor
	/// </summary>
	public ref class MantSensor : public System::Windows::Forms::Form
	{
	public:
		MantSensor(void)
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
		~MantSensor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;





	protected:

	protected:

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 112);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Activo";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(254, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(254, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Protocolo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Fabricante";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(254, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Fecha de Registro";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Modelo";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(87, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(143, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(354, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(354, 36);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(147, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(354, 70);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(147, 20);
			this->textBox6->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantSensor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantSensor::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(240, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantSensor::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column6, this->Column7, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 192);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(509, 233);
			this->dataGridView1->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fabricante";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Modelo";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de registro";
			this->Column4->Name = L"Column4";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Pin";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Protocolo";
			this->Column7->Name = L"Column7";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Activo";
			this->Column5->Name = L"Column5";
			// 
			// MantSensor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 437);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"MantSensor";
			this->Text = L"MantSensor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void mostrarGrilla(List<sensor^>^ listSensor) {
			this->dataGridView1->Rows->Clear();

			for (int i = 0; i < listSensor->Count; i++) {
				sensor^ objSensor = listSensor[i];
				array<String^>^ filaGrilla = gcnew array<String^>(9);
				filaGrilla[0] = Convert::ToString(objSensor->getID());
				filaGrilla[1] = objSensor->getProducer();
				filaGrilla[2] = objSensor->getModel();
				filaGrilla[3] = objSensor->getRegistrationDate();
				filaGrilla[4] = Convert::ToString(objSensor->getPin());
				filaGrilla[5] = objSensor->getProtocole();
				filaGrilla[6] = Convert::ToString(objSensor->getActive());
				this->dataGridView1->Rows->Add(filaGrilla);
			}
		}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el índice de la única fila que he seleccionado*/
		int IDEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
		objSensorCtrl->eliminarSensor(IDEliminar);
		MessageBox::Show("El sensor seleccionado ha sido eliminado correctamente");
		this->dataGridView1->Rows->Clear();

		List<sensor^>^ listSensor = objSensorCtrl->buscarSensorAll();
		mostrarGrilla(listSensor);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int ID = Convert::ToInt32(this->textBox1->Text);
	String^ fabricante = this->textBox2->Text;
	String^ modelo = this->textBox3->Text;
	String^ fechaDeRegistro = this->textBox4->Text;
	int pin = Convert::ToInt32(this->textBox5->Text);
	String^ protocolo = this->textBox6->Text;
	bool activo = this->checkBox1->Checked;
	List<card^>^ listCard = gcnew List<card^>();

	SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
	objSensorCtrl->agregarNewSensor(pin, protocolo, fabricante, activo, fechaDeRegistro, ID, modelo, listCard);
	textBox1->Clear();

	List<sensor^>^ listSensor = objSensorCtrl->buscarSensorAll();
	mostrarGrilla(listSensor);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int ID = Convert::ToInt32(this->textBox1->Text);
	String^ fabricante = this->textBox2->Text;
	String^ modelo = this->textBox3->Text;
	String^ fechaDeRegistro = this->textBox4->Text;
	int pin = Convert::ToInt32(this->textBox5->Text);
	String^ protocolo = this->textBox6->Text;
	bool activo = this->checkBox1->Checked;
	List<card^>^ listCard = gcnew List<card^>();

	SensorCtrl^ objSensorCtrl = gcnew SensorCtrl();
	objSensorCtrl->actualizarSensor(pin, protocolo, fabricante, activo, fechaDeRegistro, ID, modelo, listCard);
	textBox1->Clear();

	List<sensor^>^ listSensor = objSensorCtrl->buscarSensorAll();
	mostrarGrilla(listSensor);
}
};
}
