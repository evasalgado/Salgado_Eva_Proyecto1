#pragma once

namespace Salgado_Eva_Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Creditos
	/// </summary>
	public ref class Creditos : public System::Windows::Forms::Form
	{
	public:
		Creditos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Creditos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lb_creditos;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb_creditos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lb_creditos
			// 
			this->lb_creditos->AutoSize = true;
			this->lb_creditos->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_creditos->ForeColor = System::Drawing::Color::DarkGreen;
			this->lb_creditos->Location = System::Drawing::Point(12, 22);
			this->lb_creditos->Name = L"lb_creditos";
			this->lb_creditos->Size = System::Drawing::Size(717, 333);
			this->lb_creditos->TabIndex = 0;
			this->lb_creditos->Text = L"Programa Hecho por: Eva Jazm�n Salgado Acosta\r\nEdici�n: 1ra edici�n\r\nVersi�n: V.1"
				L"\r\n\r\nRecursos:\r\nstackoverflow\r\nwindows\r\nchatgpt\r\nyoutube\r\n";
			this->lb_creditos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Creditos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PowderBlue;
			this->ClientSize = System::Drawing::Size(757, 460);
			this->Controls->Add(this->lb_creditos);
			this->Name = L"Creditos";
			this->Text = L"Cr�ditos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
