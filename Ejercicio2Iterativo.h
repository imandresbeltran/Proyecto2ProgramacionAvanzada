#pragma once
#include <iostream>
#include <string>

using namespace System;

namespace Tarea1AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio2Iterativo
	/// </summary>
	public ref class Ejercicio2Iterativo : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2Iterativo(void)
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
		~Ejercicio2Iterativo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ TxbTexto;
	private: System::Windows::Forms::Button^ BtnCalcular;
	private: System::Windows::Forms::Label^ LblRespuesta;

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
			this->TxbTexto = (gcnew System::Windows::Forms::TextBox());
			this->BtnCalcular = (gcnew System::Windows::Forms::Button());
			this->LblRespuesta = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese texto:";
			// 
			// TxbTexto
			// 
			this->TxbTexto->Location = System::Drawing::Point(120, 67);
			this->TxbTexto->Name = L"TxbTexto";
			this->TxbTexto->Size = System::Drawing::Size(128, 20);
			this->TxbTexto->TabIndex = 1;
			// 
			// BtnCalcular
			// 
			this->BtnCalcular->Location = System::Drawing::Point(110, 122);
			this->BtnCalcular->Name = L"BtnCalcular";
			this->BtnCalcular->Size = System::Drawing::Size(75, 23);
			this->BtnCalcular->TabIndex = 2;
			this->BtnCalcular->Text = L"CALCULAR";
			this->BtnCalcular->UseVisualStyleBackColor = true;
			this->BtnCalcular->Click += gcnew System::EventHandler(this, &Ejercicio2Iterativo::BtnCalcular_Click);
			// 
			// LblRespuesta
			// 
			this->LblRespuesta->AutoSize = true;
			this->LblRespuesta->Location = System::Drawing::Point(46, 187);
			this->LblRespuesta->Name = L"LblRespuesta";
			this->LblRespuesta->Size = System::Drawing::Size(0, 13);
			this->LblRespuesta->TabIndex = 3;
			// 
			// Ejercicio2Iterativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 292);
			this->Controls->Add(this->LblRespuesta);
			this->Controls->Add(this->BtnCalcular);
			this->Controls->Add(this->TxbTexto);
			this->Controls->Add(this->label1);
			this->Name = L"Ejercicio2Iterativo";
			this->Text = L"Ejercicio2Iterativo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void LimpiarCajas() {
			TxbTexto->Clear();
			TxbTexto->Focus();
		}

	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto = TxbTexto->Text;

		int auxiliar = 0, igual = 0;

		for (int i = texto->Length - 1; i >= 0; i--) {
			if (texto[i] == texto[auxiliar]) {
				igual++;
			}

			auxiliar++;
		}

		if (texto->Length == igual) {
			LblRespuesta->Text = "La palabra es palindroma";
		}
		else {
			LblRespuesta->Text = "La palabra no es palindroma";
		}
		
		LimpiarCajas();
	}
	};
}
