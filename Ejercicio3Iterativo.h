#pragma once

namespace Tarea1AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio3Iterativo
	/// </summary>
	public ref class Ejercicio3Iterativo : public System::Windows::Forms::Form
	{
	public:
		Ejercicio3Iterativo(void)
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
		~Ejercicio3Iterativo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ GbxOrigen;
	private: System::Windows::Forms::TextBox^ TxbNumeroOrigen;
	protected:

	private: System::Windows::Forms::TextBox^ TxbBaseOrigen;
	private: System::Windows::Forms::Label^ LblNumeroOrigen;
	private: System::Windows::Forms::Label^ LblBaseOrigen;
	private: System::Windows::Forms::Label^ LblDatosOrigen;
	private: System::Windows::Forms::GroupBox^ GbxDestino;
	private: System::Windows::Forms::TextBox^ TxbNumeroDestino;

	private: System::Windows::Forms::TextBox^ TxbBaseDestino;

	private: System::Windows::Forms::Label^ LblNumeroDestino;
	private: System::Windows::Forms::Label^ LblBaseDestino;
	private: System::Windows::Forms::Label^ LblDatosDestino;
	private: System::Windows::Forms::Label^ LblResultado;
	private: System::Windows::Forms::Label^ LblRespuesta;
	private: System::Windows::Forms::Button^ BtnConvertir;

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
			this->GbxOrigen = (gcnew System::Windows::Forms::GroupBox());
			this->TxbNumeroOrigen = (gcnew System::Windows::Forms::TextBox());
			this->TxbBaseOrigen = (gcnew System::Windows::Forms::TextBox());
			this->LblNumeroOrigen = (gcnew System::Windows::Forms::Label());
			this->LblBaseOrigen = (gcnew System::Windows::Forms::Label());
			this->LblDatosOrigen = (gcnew System::Windows::Forms::Label());
			this->GbxDestino = (gcnew System::Windows::Forms::GroupBox());
			this->TxbNumeroDestino = (gcnew System::Windows::Forms::TextBox());
			this->TxbBaseDestino = (gcnew System::Windows::Forms::TextBox());
			this->LblNumeroDestino = (gcnew System::Windows::Forms::Label());
			this->LblBaseDestino = (gcnew System::Windows::Forms::Label());
			this->LblDatosDestino = (gcnew System::Windows::Forms::Label());
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->LblRespuesta = (gcnew System::Windows::Forms::Label());
			this->BtnConvertir = (gcnew System::Windows::Forms::Button());
			this->GbxOrigen->SuspendLayout();
			this->GbxDestino->SuspendLayout();
			this->SuspendLayout();
			// 
			// GbxOrigen
			// 
			this->GbxOrigen->Controls->Add(this->TxbNumeroOrigen);
			this->GbxOrigen->Controls->Add(this->TxbBaseOrigen);
			this->GbxOrigen->Controls->Add(this->LblNumeroOrigen);
			this->GbxOrigen->Controls->Add(this->LblBaseOrigen);
			this->GbxOrigen->Controls->Add(this->LblDatosOrigen);
			this->GbxOrigen->Location = System::Drawing::Point(17, 19);
			this->GbxOrigen->Margin = System::Windows::Forms::Padding(4);
			this->GbxOrigen->Name = L"GbxOrigen";
			this->GbxOrigen->Padding = System::Windows::Forms::Padding(4);
			this->GbxOrigen->Size = System::Drawing::Size(629, 146);
			this->GbxOrigen->TabIndex = 0;
			this->GbxOrigen->TabStop = false;
			this->GbxOrigen->Text = L"ORIGEN";
			// 
			// TxbNumeroOrigen
			// 
			this->TxbNumeroOrigen->Location = System::Drawing::Point(422, 64);
			this->TxbNumeroOrigen->Name = L"TxbNumeroOrigen";
			this->TxbNumeroOrigen->Size = System::Drawing::Size(191, 25);
			this->TxbNumeroOrigen->TabIndex = 4;
			// 
			// TxbBaseOrigen
			// 
			this->TxbBaseOrigen->Location = System::Drawing::Point(215, 67);
			this->TxbBaseOrigen->Name = L"TxbBaseOrigen";
			this->TxbBaseOrigen->Size = System::Drawing::Size(167, 25);
			this->TxbBaseOrigen->TabIndex = 3;
			// 
			// LblNumeroOrigen
			// 
			this->LblNumeroOrigen->AutoSize = true;
			this->LblNumeroOrigen->Location = System::Drawing::Point(489, 32);
			this->LblNumeroOrigen->Name = L"LblNumeroOrigen";
			this->LblNumeroOrigen->Size = System::Drawing::Size(60, 19);
			this->LblNumeroOrigen->TabIndex = 2;
			this->LblNumeroOrigen->Text = L"Número";
			// 
			// LblBaseOrigen
			// 
			this->LblBaseOrigen->AutoSize = true;
			this->LblBaseOrigen->Location = System::Drawing::Point(269, 32);
			this->LblBaseOrigen->Name = L"LblBaseOrigen";
			this->LblBaseOrigen->Size = System::Drawing::Size(37, 19);
			this->LblBaseOrigen->TabIndex = 1;
			this->LblBaseOrigen->Text = L"Base";
			// 
			// LblDatosOrigen
			// 
			this->LblDatosOrigen->AutoSize = true;
			this->LblDatosOrigen->Location = System::Drawing::Point(19, 70);
			this->LblDatosOrigen->Name = L"LblDatosOrigen";
			this->LblDatosOrigen->Size = System::Drawing::Size(181, 19);
			this->LblDatosOrigen->TabIndex = 0;
			this->LblDatosOrigen->Text = L"Ingresa los siguientes datos:";
			// 
			// GbxDestino
			// 
			this->GbxDestino->Controls->Add(this->TxbNumeroDestino);
			this->GbxDestino->Controls->Add(this->TxbBaseDestino);
			this->GbxDestino->Controls->Add(this->LblNumeroDestino);
			this->GbxDestino->Controls->Add(this->LblBaseDestino);
			this->GbxDestino->Controls->Add(this->LblDatosDestino);
			this->GbxDestino->Location = System::Drawing::Point(17, 184);
			this->GbxDestino->Name = L"GbxDestino";
			this->GbxDestino->Size = System::Drawing::Size(629, 110);
			this->GbxDestino->TabIndex = 1;
			this->GbxDestino->TabStop = false;
			this->GbxDestino->Text = L"DESTINO";
			// 
			// TxbNumeroDestino
			// 
			this->TxbNumeroDestino->Location = System::Drawing::Point(422, 56);
			this->TxbNumeroDestino->Name = L"TxbNumeroDestino";
			this->TxbNumeroDestino->Size = System::Drawing::Size(191, 25);
			this->TxbNumeroDestino->TabIndex = 4;
			// 
			// TxbBaseDestino
			// 
			this->TxbBaseDestino->Location = System::Drawing::Point(206, 56);
			this->TxbBaseDestino->Name = L"TxbBaseDestino";
			this->TxbBaseDestino->Size = System::Drawing::Size(176, 25);
			this->TxbBaseDestino->TabIndex = 3;
			// 
			// LblNumeroDestino
			// 
			this->LblNumeroDestino->AutoSize = true;
			this->LblNumeroDestino->Location = System::Drawing::Point(505, 34);
			this->LblNumeroDestino->Name = L"LblNumeroDestino";
			this->LblNumeroDestino->Size = System::Drawing::Size(60, 19);
			this->LblNumeroDestino->TabIndex = 2;
			this->LblNumeroDestino->Text = L"Número";
			// 
			// LblBaseDestino
			// 
			this->LblBaseDestino->AutoSize = true;
			this->LblBaseDestino->Location = System::Drawing::Point(269, 34);
			this->LblBaseDestino->Name = L"LblBaseDestino";
			this->LblBaseDestino->Size = System::Drawing::Size(37, 19);
			this->LblBaseDestino->TabIndex = 1;
			this->LblBaseDestino->Text = L"Base";
			// 
			// LblDatosDestino
			// 
			this->LblDatosDestino->AutoSize = true;
			this->LblDatosDestino->Location = System::Drawing::Point(19, 56);
			this->LblDatosDestino->Name = L"LblDatosDestino";
			this->LblDatosDestino->Size = System::Drawing::Size(181, 19);
			this->LblDatosDestino->TabIndex = 0;
			this->LblDatosDestino->Text = L"Ingresa los siguientes datos:";
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(186, 325);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(95, 19);
			this->LblResultado->TabIndex = 2;
			this->LblResultado->Text = L"El número es: ";
			// 
			// LblRespuesta
			// 
			this->LblRespuesta->AutoSize = true;
			this->LblRespuesta->Location = System::Drawing::Point(339, 325);
			this->LblRespuesta->Name = L"LblRespuesta";
			this->LblRespuesta->Size = System::Drawing::Size(0, 19);
			this->LblRespuesta->TabIndex = 3;
			// 
			// BtnConvertir
			// 
			this->BtnConvertir->Location = System::Drawing::Point(281, 367);
			this->BtnConvertir->Name = L"BtnConvertir";
			this->BtnConvertir->Size = System::Drawing::Size(118, 34);
			this->BtnConvertir->TabIndex = 4;
			this->BtnConvertir->Text = L"CONVERTIR";
			this->BtnConvertir->UseVisualStyleBackColor = true;
			this->BtnConvertir->Click += gcnew System::EventHandler(this, &Ejercicio3Iterativo::BtnConvertir_Click);
			// 
			// Ejercicio3Iterativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 462);
			this->Controls->Add(this->BtnConvertir);
			this->Controls->Add(this->LblRespuesta);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->GbxDestino);
			this->Controls->Add(this->GbxOrigen);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Ejercicio3Iterativo";
			this->Text = L"Ejercicio3Iterativo";
			this->GbxOrigen->ResumeLayout(false);
			this->GbxOrigen->PerformLayout();
			this->GbxDestino->ResumeLayout(false);
			this->GbxDestino->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnConvertir_Click(System::Object^ sender, System::EventArgs^ e) {
		int baseorigen, basedestino, numerorigen, numerodestino;

		baseorigen = Convert::ToInt32(TxbBaseOrigen->Text);
		basedestino = Convert::ToInt32(TxbBaseDestino->Text);
		numerorigen = Convert::ToInt32(TxbNumeroOrigen->Text);
		numerodestino = Convert::ToInt32(TxbNumeroDestino->Text);

		if (baseorigen == 8 || basedestino == 8)
		{
			int res = octalabinario(numerorigen);
			int res2 = octalabinario(numerodestino);

			LblResultado->Text = " " + res2;

		}
		else if (baseorigen == 16 || basedestino == 16)
		{
			int res3 = hexadecimalabinario(numerorigen);
			int res4 = hexadecimalabinario(numerodestino);

			LblResultado->Text = " " + res4;


		}
		else if (baseorigen == 10 || basedestino == 10)
		{
			int res5 = decimalabinario(numerorigen);
			int res6 = decimalabinario(numerodestino);

			LblResultado->Text = " " + res6;


		}


		LimpiarCajas();
	}

		   void LimpiarCajas() {
			   TxbBaseDestino->Clear();
			   TxbBaseOrigen->Clear();
			   TxbNumeroDestino->Clear();
			   TxbNumeroOrigen->Clear();
			   TxbBaseOrigen->Focus();
		   }

		   //MÉTODO PARA REALIZAR LA CONVERSIÓN DE OCTAL A BINARIO
		   static int octalabinario(int octal)
		   {
			   int i = 0;
			   int binario = 0;
			   while (i < octal)
			   {
				   switch (octal)
				   {
				   case '0':
					   binario = 000;
					   break;
				   case '1':
					   binario = 001;
					   break;
				   case '2':
					   binario = 010;
					   break;
				   case '3':
					   binario = 011;
					   break;
				   case '4':
					   binario = 100;
					   break;
				   case '5':
					   binario = 101;
					   break;
				   case '6':
					   binario = 110;
					   break;
				   case '7':
					   binario = 111;
					   break;
				   }
				   i++;
			   }

			   return binario;

		   }

		   //MÉTODO PARA CONVERTIR DE HEXADECIAMAL A BINARIO
		   static int hexadecimalabinario(int hexa)
		   {
			   int i = 0;
			   int binario = 0;
			   while (i < hexa)
			   {
				   switch (hexa)
				   {
				   case '0':
					   binario = 0000;
					   break;
				   case '1':
					   binario = 0001;
					   break;
				   case '2':
					   binario = 0010;
					   break;
				   case '3':
					   binario = 0011;
					   break;
				   case '4':
					   binario = 0100;
					   break;
				   case '5':
					   binario = 0101;
					   break;
				   case '6':
					   binario = 0110;
					   break;
				   case '7':
					   binario = 0111;
					   break;
				   case '8':
					   binario = 1000;
					   break;
				   case '9':
					   binario = 1001;
					   break;
				   case 'A':
					   binario = 1010;
					   break;
				   case 'B':
					   binario = 1011;
					   break;
				   case 'C':
					   binario = 1100;
					   break;
				   case 'D':
					   binario = 1101;
					   break;
				   case 'E':
					   binario = 1110;
					   break;
				   case 'F':
					   binario = 1111;
					   break;
				   }
				   i++;
			   }
			   return binario;
		   }

		   //MÉTODO PARA CONVERTIR DECIMAL A BINARIO
		   static int decimalabinario(int decimall)
		   {
			   int i = 0;
			   int binario = 0;
			   while (i < decimall)
			   {
				   switch (decimall)
				   {
				   case '0':
					   binario = 000;
					   break;
				   case '1':
					   binario += 001;
					   break;
				   case '2':
					   binario += 010;
					   break;
				   case '3':
					   binario += 011;
					   break;
				   case '4':
					   binario += 100;
					   break;
				   case '5':
					   binario += 101;
					   break;
				   case '6':
					   binario += 110;
					   break;
				   case '7':
					   binario += 111;
					   break;
				   case '8':
					   binario += 1000;
					   break;
				   case '9':
					   binario += 1001;
					   break;
				   }
				   i++;
			   }

			   return binario;

		   }

	};
}

