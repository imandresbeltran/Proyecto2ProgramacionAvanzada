#pragma once

#include "Ejercicio1Recursivo.h"
#include "Ejercicio1Iterativo.h"
#include "Ejercicio2Iterativo.h"
#include "Ejercicio3Iterativo.h"

namespace Tarea1AndresBeltran1001122 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:
	private: System::Windows::Forms::Button^ btnEjercicio3Iterativo;
	private: System::Windows::Forms::Button^ btnEjercicio3Recursivo;
	private: System::Windows::Forms::Button^ btnEjercicio2Iterativo;
	private: System::Windows::Forms::Button^ btnEjercicio2Recursivo;
	private: System::Windows::Forms::Button^ btnEjercicio1Iterativo;
	private: System::Windows::Forms::Button^ btnEjercicio1Recursivo;
	private: System::Windows::Forms::Panel^ margen;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	private: System::Windows::Forms::Label^ lblCatedratico;

	private: System::Windows::Forms::Label^ lblAsignatura;

	private: System::Windows::Forms::Label^ lblCarreraUniversitaria;

	private: System::Windows::Forms::Label^ lblFacultad;
	private: System::Windows::Forms::Label^ lblUniversidad;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblFecha;


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
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->btnEjercicio3Iterativo = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio3Recursivo = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio2Iterativo = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio2Recursivo = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio1Iterativo = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio1Recursivo = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblCatedratico = (gcnew System::Windows::Forms::Label());
			this->lblAsignatura = (gcnew System::Windows::Forms::Label());
			this->lblCarreraUniversitaria = (gcnew System::Windows::Forms::Label());
			this->lblFacultad = (gcnew System::Windows::Forms::Label());
			this->lblUniversidad = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->panel_lateral->SuspendLayout();
			this->panel_contenedor->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->panel_lateral->Controls->Add(this->btnEjercicio3Iterativo);
			this->panel_lateral->Controls->Add(this->btnEjercicio3Recursivo);
			this->panel_lateral->Controls->Add(this->btnEjercicio2Iterativo);
			this->panel_lateral->Controls->Add(this->btnEjercicio2Recursivo);
			this->panel_lateral->Controls->Add(this->btnEjercicio1Iterativo);
			this->panel_lateral->Controls->Add(this->btnEjercicio1Recursivo);
			this->panel_lateral->Controls->Add(this->margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(200, 455);
			this->panel_lateral->TabIndex = 0;
			// 
			// btnEjercicio3Iterativo
			// 
			this->btnEjercicio3Iterativo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio3Iterativo->Location = System::Drawing::Point(0, 291);
			this->btnEjercicio3Iterativo->Name = L"btnEjercicio3Iterativo";
			this->btnEjercicio3Iterativo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio3Iterativo->TabIndex = 6;
			this->btnEjercicio3Iterativo->Text = L"EJERCICIO 3 - ITERATIVO";
			this->btnEjercicio3Iterativo->UseVisualStyleBackColor = true;
			this->btnEjercicio3Iterativo->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEjercicio3Iterativo_Click);
			// 
			// btnEjercicio3Recursivo
			// 
			this->btnEjercicio3Recursivo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio3Recursivo->Location = System::Drawing::Point(0, 268);
			this->btnEjercicio3Recursivo->Name = L"btnEjercicio3Recursivo";
			this->btnEjercicio3Recursivo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio3Recursivo->TabIndex = 5;
			this->btnEjercicio3Recursivo->Text = L"EJERCICIO 3 - RECURSIVO";
			this->btnEjercicio3Recursivo->UseVisualStyleBackColor = true;
			this->btnEjercicio3Recursivo->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEjercicio3Recursivo_Click);
			// 
			// btnEjercicio2Iterativo
			// 
			this->btnEjercicio2Iterativo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio2Iterativo->Location = System::Drawing::Point(0, 245);
			this->btnEjercicio2Iterativo->Name = L"btnEjercicio2Iterativo";
			this->btnEjercicio2Iterativo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio2Iterativo->TabIndex = 4;
			this->btnEjercicio2Iterativo->Text = L"EJERCICIO 2 - ITERATIVO";
			this->btnEjercicio2Iterativo->UseVisualStyleBackColor = true;
			// 
			// btnEjercicio2Recursivo
			// 
			this->btnEjercicio2Recursivo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio2Recursivo->Location = System::Drawing::Point(0, 222);
			this->btnEjercicio2Recursivo->Name = L"btnEjercicio2Recursivo";
			this->btnEjercicio2Recursivo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio2Recursivo->TabIndex = 3;
			this->btnEjercicio2Recursivo->Text = L"EJERCICIO 2 - RECURSIVO";
			this->btnEjercicio2Recursivo->UseVisualStyleBackColor = true;
			this->btnEjercicio2Recursivo->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEjercicio2Recursivo_Click);
			// 
			// btnEjercicio1Iterativo
			// 
			this->btnEjercicio1Iterativo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio1Iterativo->Location = System::Drawing::Point(0, 199);
			this->btnEjercicio1Iterativo->Name = L"btnEjercicio1Iterativo";
			this->btnEjercicio1Iterativo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio1Iterativo->TabIndex = 2;
			this->btnEjercicio1Iterativo->Text = L"EJERCICIO 1 - ITERATIVO";
			this->btnEjercicio1Iterativo->UseVisualStyleBackColor = true;
			this->btnEjercicio1Iterativo->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEjercicio1Iterativo_Click);
			// 
			// btnEjercicio1Recursivo
			// 
			this->btnEjercicio1Recursivo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEjercicio1Recursivo->Location = System::Drawing::Point(0, 176);
			this->btnEjercicio1Recursivo->Name = L"btnEjercicio1Recursivo";
			this->btnEjercicio1Recursivo->Size = System::Drawing::Size(200, 23);
			this->btnEjercicio1Recursivo->TabIndex = 1;
			this->btnEjercicio1Recursivo->Text = L"EJERCICIO 1 - RECURSIVO";
			this->btnEjercicio1Recursivo->UseVisualStyleBackColor = true;
			this->btnEjercicio1Recursivo->Click += gcnew System::EventHandler(this, &MenuPrincipal::btnEjercicio1Recursivo_Click);
			// 
			// margen
			// 
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(200, 176);
			this->margen->TabIndex = 0;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Controls->Add(this->lblFecha);
			this->panel_contenedor->Controls->Add(this->lblCatedratico);
			this->panel_contenedor->Controls->Add(this->lblAsignatura);
			this->panel_contenedor->Controls->Add(this->lblCarreraUniversitaria);
			this->panel_contenedor->Controls->Add(this->lblFacultad);
			this->panel_contenedor->Controls->Add(this->lblUniversidad);
			this->panel_contenedor->Controls->Add(this->lblTitulo);
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(200, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(558, 455);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::panel_contenedor_Paint);
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(76, 427);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(432, 19);
			this->lblFecha->TabIndex = 6;
			this->lblFecha->Text = L"Nueva Guatemala de la Asunción, viernes 02 de septiembre del 2022";
			// 
			// lblCatedratico
			// 
			this->lblCatedratico->AutoSize = true;
			this->lblCatedratico->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCatedratico->Location = System::Drawing::Point(151, 284);
			this->lblCatedratico->Name = L"lblCatedratico";
			this->lblCatedratico->Size = System::Drawing::Size(250, 19);
			this->lblCatedratico->TabIndex = 5;
			this->lblCatedratico->Text = L"CATEDRÁTICO: ING. MOISES ALONSO";
			// 
			// lblAsignatura
			// 
			this->lblAsignatura->AutoSize = true;
			this->lblAsignatura->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAsignatura->Location = System::Drawing::Point(76, 261);
			this->lblAsignatura->Name = L"lblAsignatura";
			this->lblAsignatura->Size = System::Drawing::Size(397, 19);
			this->lblAsignatura->TabIndex = 4;
			this->lblAsignatura->Text = L"LABORATORIO DE PROGRAMACIÓN AVANZADA, SECCIÓN: 3";
			// 
			// lblCarreraUniversitaria
			// 
			this->lblCarreraUniversitaria->AutoSize = true;
			this->lblCarreraUniversitaria->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCarreraUniversitaria->Location = System::Drawing::Point(90, 238);
			this->lblCarreraUniversitaria->Name = L"lblCarreraUniversitaria";
			this->lblCarreraUniversitaria->Size = System::Drawing::Size(369, 19);
			this->lblCarreraUniversitaria->TabIndex = 3;
			this->lblCarreraUniversitaria->Text = L"INGENIERÍA EN ELECTRÓNICA Y TELECOMUNICACIONES";
			// 
			// lblFacultad
			// 
			this->lblFacultad->AutoSize = true;
			this->lblFacultad->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFacultad->Location = System::Drawing::Point(188, 215);
			this->lblFacultad->Name = L"lblFacultad";
			this->lblFacultad->Size = System::Drawing::Size(177, 19);
			this->lblFacultad->TabIndex = 2;
			this->lblFacultad->Text = L"FACULTAD DE INGENIERÍA";
			// 
			// lblUniversidad
			// 
			this->lblUniversidad->AutoSize = true;
			this->lblUniversidad->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUniversidad->Location = System::Drawing::Point(171, 196);
			this->lblUniversidad->Name = L"lblUniversidad";
			this->lblUniversidad->Size = System::Drawing::Size(221, 19);
			this->lblUniversidad->TabIndex = 1;
			this->lblUniversidad->Text = L"UNIVERSIDAD RAFAEL LANDÍVAR";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(12, 154);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(534, 22);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"PROYECTO NO. 2 - LABORATORIO PROGRAMACIÓN AVANZADA";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(758, 455);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panel_lateral);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MenuPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->panel_lateral->ResumeLayout(false);
			this->panel_contenedor->ResumeLayout(false);
			this->panel_contenedor->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btnEjercicio1Recursivo_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio1Recursivo^ ejercicio1 = gcnew Ejercicio1Recursivo();
	ejercicio1->Show();
}
private: System::Void btnEjercicio1Iterativo_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio1Iterativo^ iterativo1 = gcnew Ejercicio1Iterativo();
	iterativo1->Show();
}
private: System::Void btnEjercicio2Recursivo_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio2Iterativo^ iterativo2 = gcnew Ejercicio2Iterativo();
	iterativo2->Show();
}
private: System::Void btnEjercicio3Iterativo_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio3Iterativo^ iterativo3 = gcnew Ejercicio3Iterativo();
	iterativo3->Show();
}
private: System::Void btnEjercicio3Recursivo_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio3Iterativo^ recursivo3 = gcnew Ejercicio3Iterativo();
	recursivo3 -> Show();
}
};
}
