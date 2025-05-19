#pragma once
#include "Registro.h"
#include "Contacto.h"
#include "main_app.h"
#include "Form1.h"
namespace Salgado_Eva_Proyecto1{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de Inicio_Sesion
	/// </summary>
	public ref class Inicio_Sesion : public System::Windows::Forms::Form
	{
	public:
		Inicio_Sesion(void)
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
		~Inicio_Sesion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ps_contraseña;

	private: System::Windows::Forms::Label^ lb_cambioregistro;
	private: System::Windows::Forms::Button^ bt_iniciarSesion;
	private: System::Windows::Forms::TextBox^ tb_userOrMail;


	private: System::Windows::Forms::Label^ label2;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ps_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->lb_cambioregistro = (gcnew System::Windows::Forms::Label());
			this->bt_iniciarSesion = (gcnew System::Windows::Forms::Button());
			this->tb_userOrMail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(171, 352);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 22);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Contraseña:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(167, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(330, 22);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Nombre de usuario o correo electrónico:";
			// 
			// ps_contraseña
			// 
			this->ps_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps_contraseña->Location = System::Drawing::Point(170, 377);
			this->ps_contraseña->Name = L"ps_contraseña";
			this->ps_contraseña->PasswordChar = '*';
			this->ps_contraseña->Size = System::Drawing::Size(331, 41);
			this->ps_contraseña->TabIndex = 30;
			this->ps_contraseña->UseSystemPasswordChar = true;
			// 
			// lb_cambioregistro
			// 
			this->lb_cambioregistro->AutoSize = true;
			this->lb_cambioregistro->Location = System::Drawing::Point(210, 456);
			this->lb_cambioregistro->Name = L"lb_cambioregistro";
			this->lb_cambioregistro->Size = System::Drawing::Size(240, 16);
			this->lb_cambioregistro->TabIndex = 29;
			this->lb_cambioregistro->Text = L"¿No tienes una cuenta\? Regístrate aquí";
			this->lb_cambioregistro->Click += gcnew System::EventHandler(this, &Inicio_Sesion::lb_cambioregistro_Click);
			// 
			// bt_iniciarSesion
			// 
			this->bt_iniciarSesion->Location = System::Drawing::Point(242, 494);
			this->bt_iniciarSesion->Name = L"bt_iniciarSesion";
			this->bt_iniciarSesion->Size = System::Drawing::Size(175, 48);
			this->bt_iniciarSesion->TabIndex = 28;
			this->bt_iniciarSesion->Text = L"Iniciar sesión";
			this->bt_iniciarSesion->UseVisualStyleBackColor = true;
			this->bt_iniciarSesion->Click += gcnew System::EventHandler(this, &Inicio_Sesion::button1_Click);
			// 
			// tb_userOrMail
			// 
			this->tb_userOrMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_userOrMail->Location = System::Drawing::Point(175, 269);
			this->tb_userOrMail->Name = L"tb_userOrMail";
			this->tb_userOrMail->Size = System::Drawing::Size(331, 41);
			this->tb_userOrMail->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label2->Location = System::Drawing::Point(204, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 53);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Inicia Sesión";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Inicio_Sesion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ClientSize = System::Drawing::Size(672, 666);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ps_contraseña);
			this->Controls->Add(this->lb_cambioregistro);
			this->Controls->Add(this->bt_iniciarSesion);
			this->Controls->Add(this->tb_userOrMail);
			this->Controls->Add(this->label2);
			this->Name = L"Inicio_Sesion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio_Sesion";
			this->Load += gcnew System::EventHandler(this, &Inicio_Sesion::Inicio_Sesion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		string sacarTexto(System::Windows::Forms::TextBox^ tb) {
			System::String^ textBox = tb->Text;
			string contenidoSTD;
			for (int i = 0; i < textBox->Length; i++) {
				contenidoSTD += (char)textBox[i];
			}
			return contenidoSTD;
		}
		bool existeTexto(fstream& texto, const string& buscar) {
			string linea;
			while (getline(texto, linea)) {
				if (linea == buscar){
					return true;
				}
			}
			return false;
		}
	private: System::Void Inicio_Sesion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lb_cambioregistro_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Contacto c;
	fstream getUsuario("contactos.amp", std::ios::out | std::ios::binary | std::ios::app);
	string usuario = sacarTexto(tb_userOrMail),
		contraseña = sacarTexto(ps_contraseña);
	if (existeTexto(getUsuario, usuario) && existeTexto(getUsuario, contraseña)) {
		c.CargarDatos(getUsuario);
		//(gcnew Salgado_Eva_Proyecto1::main_app())->Show();
		this->Hide();
	}
		cerr << "User, correo o contraseña incorrectos";
	{

	}

}
};
}
