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
	/// Resumen de PruebaComSerial
	/// </summary>
	public ref class PruebaComSerial : public System::Windows::Forms::Form
	{
	public:
		PruebaComSerial(void)
		{
			InitializeComponent();
			String^ data;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PruebaComSerial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ port;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: String^ data;
	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->port = (gcnew System::IO::Ports::SerialPort(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// port
			// 
			this->port->PortName = L"COM4";
			this->port->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &PruebaComSerial::port_DataReceived);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 10);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(292, 96);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// PruebaComSerial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 115);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PruebaComSerial";
			this->Text = L"PruebaComSerial";
			this->Load += gcnew System::EventHandler(this, &PruebaComSerial::PruebaComSerial_Load);
			this->ResumeLayout(false);

		}

#pragma endregion
#pragma region Delegates
	private: delegate void UPDATE_SERIAL_DATA(String^ data);
	private: void UpdateRxData(String^ data) {
		this->richTextBox1->Text += data;
		this->richTextBox1->ScrollToCaret();
	}
#pragma endregion
	private: System::Void PruebaComSerial_Load(System::Object^ sender, System::EventArgs^ e) {
		this->port->Open();
		
	}
	private: System::Void port_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		String^ data = port->ReadExisting();

		UPDATE_SERIAL_DATA^ cb = gcnew  UPDATE_SERIAL_DATA(this, &PruebaComSerial::UpdateRxData);
		Control::Invoke(cb, data);
	}
	};
}
