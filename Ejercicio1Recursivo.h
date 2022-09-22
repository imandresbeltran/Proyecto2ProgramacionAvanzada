#pragma once



namespace Tarea1AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio1Recursivo
	/// </summary>
	public ref class Ejercicio1Recursivo : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1Recursivo(void)
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
		~Ejercicio1Recursivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblNumero1;
	protected:
	private: System::Windows::Forms::Label^ LblNumero2;
	private: System::Windows::Forms::TextBox^ TxbNumero1;
	private: System::Windows::Forms::TextBox^ TxbNumero2;
	private: System::Windows::Forms::Button^ BtnCalcular;
	private: System::Windows::Forms::Label^ LblResultado;

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
			this->LblNumero1 = (gcnew System::Windows::Forms::Label());
			this->LblNumero2 = (gcnew System::Windows::Forms::Label());
			this->TxbNumero1 = (gcnew System::Windows::Forms::TextBox());
			this->TxbNumero2 = (gcnew System::Windows::Forms::TextBox());
			this->BtnCalcular = (gcnew System::Windows::Forms::Button());
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LblNumero1
			// 
			this->LblNumero1->AutoSize = true;
			this->LblNumero1->Location = System::Drawing::Point(66, 75);
			this->LblNumero1->Name = L"LblNumero1";
			this->LblNumero1->Size = System::Drawing::Size(59, 13);
			this->LblNumero1->TabIndex = 0;
			this->LblNumero1->Text = L"Número 1: ";
			// 
			// LblNumero2
			// 
			this->LblNumero2->AutoSize = true;
			this->LblNumero2->Location = System::Drawing::Point(66, 111);
			this->LblNumero2->Name = L"LblNumero2";
			this->LblNumero2->Size = System::Drawing::Size(56, 13);
			this->LblNumero2->TabIndex = 1;
			this->LblNumero2->Text = L"Número 2:";
			// 
			// TxbNumero1
			// 
			this->TxbNumero1->Location = System::Drawing::Point(158, 75);
			this->TxbNumero1->Name = L"TxbNumero1";
			this->TxbNumero1->Size = System::Drawing::Size(129, 20);
			this->TxbNumero1->TabIndex = 2;
			// 
			// TxbNumero2
			// 
			this->TxbNumero2->Location = System::Drawing::Point(158, 111);
			this->TxbNumero2->Name = L"TxbNumero2";
			this->TxbNumero2->Size = System::Drawing::Size(129, 20);
			this->TxbNumero2->TabIndex = 3;
			// 
			// BtnCalcular
			// 
			this->BtnCalcular->Location = System::Drawing::Point(137, 166);
			this->BtnCalcular->Name = L"BtnCalcular";
			this->BtnCalcular->Size = System::Drawing::Size(75, 23);
			this->BtnCalcular->TabIndex = 4;
			this->BtnCalcular->Text = L"CALCULAR";
			this->BtnCalcular->UseVisualStyleBackColor = true;
			this->BtnCalcular->Click += gcnew System::EventHandler(this, &Ejercicio1Recursivo::BtnCalcular_Click);
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(69, 228);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(0, 13);
			this->LblResultado->TabIndex = 5;
			// 
			// Ejercicio1Recursivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 327);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->BtnCalcular);
			this->Controls->Add(this->TxbNumero2);
			this->Controls->Add(this->TxbNumero1);
			this->Controls->Add(this->LblNumero2);
			this->Controls->Add(this->LblNumero1);
			this->Name = L"Ejercicio1Recursivo";
			this->Text = L"Ejercicio1Recursivo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Método para calcular la multiplicación por medio de sumas sucesivas
		int SumaMultiplicacion(int n1, int n2) {
			int multiplicacion;
			if (n1 == 0 || n2 == 0) return 0;
			else if (n1 != 0 && n2 != 0) {
				multiplicacion = n1 + SumaMultiplicacion(n1, n2 - 1);
				return multiplicacion;
			}
		}


	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		int numero1 = Convert::ToInt32(TxbNumero1->Text);
		int numero2 = Convert::ToInt32(TxbNumero2->Text);

		LblResultado->Text = "La multiplicación es: " + SumaMultiplicacion(numero1, numero2);
	}
};
}
