#pragma once

namespace Tarea1AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ejercicio1Iterativo
	/// </summary>
	public ref class Ejercicio1Iterativo : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1Iterativo(void)
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
		~Ejercicio1Iterativo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxbNumero1 = (gcnew System::Windows::Forms::TextBox());
			this->TxbNumero2 = (gcnew System::Windows::Forms::TextBox());
			this->BtnCalcular = (gcnew System::Windows::Forms::Button());
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar número 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingresar número 2:";
			// 
			// TxbNumero1
			// 
			this->TxbNumero1->Location = System::Drawing::Point(180, 103);
			this->TxbNumero1->Name = L"TxbNumero1";
			this->TxbNumero1->Size = System::Drawing::Size(144, 20);
			this->TxbNumero1->TabIndex = 2;
			// 
			// TxbNumero2
			// 
			this->TxbNumero2->Location = System::Drawing::Point(180, 145);
			this->TxbNumero2->Name = L"TxbNumero2";
			this->TxbNumero2->Size = System::Drawing::Size(144, 20);
			this->TxbNumero2->TabIndex = 3;
			// 
			// BtnCalcular
			// 
			this->BtnCalcular->Location = System::Drawing::Point(149, 205);
			this->BtnCalcular->Name = L"BtnCalcular";
			this->BtnCalcular->Size = System::Drawing::Size(75, 23);
			this->BtnCalcular->TabIndex = 4;
			this->BtnCalcular->Text = L"CALCULAR";
			this->BtnCalcular->UseVisualStyleBackColor = true;
			this->BtnCalcular->Click += gcnew System::EventHandler(this, &Ejercicio1Iterativo::BtnCalcular_Click);
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(80, 255);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(0, 13);
			this->LblResultado->TabIndex = 5;
			// 
			// Ejercicio1Iterativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 335);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->BtnCalcular);
			this->Controls->Add(this->TxbNumero2);
			this->Controls->Add(this->TxbNumero1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Ejercicio1Iterativo";
			this->Text = L"Ejercicio1Iterativo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void BtnCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = Convert::ToInt32(TxbNumero1->Text);
		int n2 = Convert::ToInt32(TxbNumero2->Text);
		int auxiliar = 0;

		if (n1 == 0 || n2 == 0) {
			LblResultado->Text = "0";
		}

		else if (n1 != 0 && n2 != 0) {
			for (int i = 1; i <= n2; i++) {
				auxiliar += n1;
			}
		}

		LblResultado->Text = "La multiplicación es: " + auxiliar;
	}
};
}
