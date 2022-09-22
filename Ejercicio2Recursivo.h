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
	/// Summary for Ejercicio2Recursivo
	/// </summary>
	public ref class Ejercicio2Recursivo : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2Recursivo(void)
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
		~Ejercicio2Recursivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ TxbPalabras;
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
			this->TxbPalabras = (gcnew System::Windows::Forms::TextBox());
			this->BtnCalcular = (gcnew System::Windows::Forms::Button());
			this->LblRespuesta = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese una palabra:";
			// 
			// TxbPalabras
			// 
			this->TxbPalabras->Location = System::Drawing::Point(140, 62);
			this->TxbPalabras->Name = L"TxbPalabras";
			this->TxbPalabras->Size = System::Drawing::Size(187, 20);
			this->TxbPalabras->TabIndex = 1;
			// 
			// BtnCalcular
			// 
			this->BtnCalcular->Location = System::Drawing::Point(130, 121);
			this->BtnCalcular->Name = L"BtnCalcular";
			this->BtnCalcular->Size = System::Drawing::Size(76, 25);
			this->BtnCalcular->TabIndex = 2;
			this->BtnCalcular->Text = L"CALCULAR";
			this->BtnCalcular->UseVisualStyleBackColor = true;
			this->BtnCalcular->Click += gcnew System::EventHandler(this, &Ejercicio2Recursivo::BtnCalcular_Click);
			// 
			// LblRespuesta
			// 
			this->LblRespuesta->AutoSize = true;
			this->LblRespuesta->Location = System::Drawing::Point(30, 183);
			this->LblRespuesta->Name = L"LblRespuesta";
			this->LblRespuesta->Size = System::Drawing::Size(0, 13);
			this->LblRespuesta->TabIndex = 3;
			// 
			// Ejercicio2Recursivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 311);
			this->Controls->Add(this->LblRespuesta);
			this->Controls->Add(this->BtnCalcular);
			this->Controls->Add(this->TxbPalabras);
			this->Controls->Add(this->label1);
			this->Name = L"Ejercicio2Recursivo";
			this->Text = L"Ejercicio2Recursivo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		 bool esPalindroma(String cadena) {
			if (cadena.Length < 2) return true;

			if (cadena[0] == cadena[cadena.Length - 1]) return esPalindroma(cadena.Substring(1, cadena.Length - 2));

			return false;
		}

	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ texto = TxbPalabras->Text;

		if (esPalindroma(texto)) LblRespuesta->Text = "Es palindroma";
		else LblRespuesta->Text = "No es palindroma";


	}
	};
}
