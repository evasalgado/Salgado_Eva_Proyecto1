#pragma once
#include "Inicio_Sesion.h"
#include "main_app.h"
#include <string>
#include "Contacto.h"
#include "Form1.h";
namespace Salgado_Eva_Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
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
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pB_avatar;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dtp_fecha;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tb_correo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tb_name;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ ps_contraseña;
	private: System::Windows::Forms::TextBox^ ps_confirmar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ bt_registrar;

	private: System::Windows::Forms::TextBox^ tb_usuario;
	private: System::Windows::Forms::Label^ label9;

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
			this->pB_avatar = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dtp_fecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tb_correo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_name = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ps_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->ps_confirmar = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->bt_registrar = (gcnew System::Windows::Forms::Button());
			this->tb_usuario = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_avatar))->BeginInit();
			this->SuspendLayout();
			// 
			// pB_avatar
			// 
			this->pB_avatar->BackColor = System::Drawing::SystemColors::Info;
			this->pB_avatar->Location = System::Drawing::Point(428, 512);
			this->pB_avatar->Name = L"pB_avatar";
			this->pB_avatar->Size = System::Drawing::Size(100, 99);
			this->pB_avatar->TabIndex = 60;
			this->pB_avatar->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label14->Location = System::Drawing::Point(424, 486);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 22);
			this->label14->TabIndex = 59;
			this->label14->Text = L"Avatar";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label13->Location = System::Drawing::Point(135, 461);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(181, 22);
			this->label13->TabIndex = 58;
			this->label13->Text = L"Fecha de nacimiento:";
			// 
			// dtp_fecha
			// 
			this->dtp_fecha->Location = System::Drawing::Point(139, 486);
			this->dtp_fecha->Name = L"dtp_fecha";
			this->dtp_fecha->Size = System::Drawing::Size(264, 22);
			this->dtp_fecha->TabIndex = 57;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label11->Location = System::Drawing::Point(135, 210);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 22);
			this->label11->TabIndex = 56;
			this->label11->Text = L"Correo Electrónico";
			// 
			// tb_correo
			// 
			this->tb_correo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_correo->Location = System::Drawing::Point(139, 239);
			this->tb_correo->Name = L"tb_correo";
			this->tb_correo->Size = System::Drawing::Size(331, 41);
			this->tb_correo->TabIndex = 55;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label10->Location = System::Drawing::Point(135, 137);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(159, 22);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Nombre Completo:";
			// 
			// tb_name
			// 
			this->tb_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_name->Location = System::Drawing::Point(139, 166);
			this->tb_name->Name = L"tb_name";
			this->tb_name->Size = System::Drawing::Size(331, 41);
			this->tb_name->TabIndex = 53;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label12->Location = System::Drawing::Point(135, 285);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 22);
			this->label12->TabIndex = 52;
			this->label12->Text = L"Contraseña:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(135, 373);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(218, 22);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Confirmación Contraseña:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label7->Location = System::Drawing::Point(135, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 22);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Nombre de usuario:";
			// 
			// ps_contraseña
			// 
			this->ps_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps_contraseña->Location = System::Drawing::Point(139, 329);
			this->ps_contraseña->Name = L"ps_contraseña";
			this->ps_contraseña->PasswordChar = '*';
			this->ps_contraseña->Size = System::Drawing::Size(331, 41);
			this->ps_contraseña->TabIndex = 49;
			// 
			// ps_confirmar
			// 
			this->ps_confirmar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps_confirmar->Location = System::Drawing::Point(139, 410);
			this->ps_confirmar->Name = L"ps_confirmar";
			this->ps_confirmar->PasswordChar = '*';
			this->ps_confirmar->Size = System::Drawing::Size(331, 41);
			this->ps_confirmar->TabIndex = 48;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(200, 595);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(215, 16);
			this->label8->TabIndex = 47;
			this->label8->Text = L"¿Ya tiene una cuenta\? inicia sesión";
			this->label8->Click += gcnew System::EventHandler(this, &Registro::label8_Click);
			// 
			// bt_registrar
			// 
			this->bt_registrar->Location = System::Drawing::Point(228, 614);
			this->bt_registrar->Name = L"bt_registrar";
			this->bt_registrar->Size = System::Drawing::Size(175, 48);
			this->bt_registrar->TabIndex = 46;
			this->bt_registrar->Text = L"Registrarse";
			this->bt_registrar->UseVisualStyleBackColor = true;
			this->bt_registrar->Click += gcnew System::EventHandler(this, &Registro::bt_registro_Click);
			// 
			// tb_usuario
			// 
			this->tb_usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_usuario->Location = System::Drawing::Point(139, 93);
			this->tb_usuario->Name = L"tb_usuario";
			this->tb_usuario->Size = System::Drawing::Size(331, 41);
			this->tb_usuario->TabIndex = 45;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Impact", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->label9->Location = System::Drawing::Point(199, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(216, 53);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Regístrate";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->ClientSize = System::Drawing::Size(632, 692);
			this->Controls->Add(this->pB_avatar);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dtp_fecha);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tb_correo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tb_name);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ps_contraseña);
			this->Controls->Add(this->ps_confirmar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->bt_registrar);
			this->Controls->Add(this->tb_usuario);
			this->Controls->Add(this->label9);
			this->Name = L"Registro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pB_avatar))->EndInit();
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
		string sacarFecha(System::Windows::Forms::DateTimePicker^ dt) {
			System::DateTime dateTime = dt->Value;
			System::String^ dateString = dateTime.ToString();
			string contenidoFecha;
			for (int i = 0; i < dateString->Length; i++) {
				contenidoFecha += (char)dateString[i];
			}
			return contenidoFecha;
		}
		string sacarAvatar(System::Windows::Forms::PictureBox^ pb) {
			System::String^ ubicacion = pb->ImageLocation;
			string rutaImagen;
			if (ubicacion != nullptr) {
				for (int i = 0; i < ubicacion->Length; i++) {
					rutaImagen += (char)ubicacion[i];
				}
			}return rutaImagen;
		}
	private: System::Void Registro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	//Inicio_Sesion^ login = gcnew Inicio_Sesion();
	
	//login->Show();
	this->Hide();
}
private: System::Void bt_registro_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream newUsuario("contactos.amp", std::ios::out | std::ios::binary | std::ios::app);
	string usuario = sacarTexto(tb_usuario),
		nombre = sacarTexto(tb_name),
		correo = sacarTexto(tb_correo),
		contraseña = sacarTexto(ps_contraseña),
		confirmar = sacarTexto(ps_confirmar),
		preguntas = "¿?",
		fecha = sacarFecha(dtp_fecha),
		imagen=sacarAvatar(pB_avatar);
	;
	Contacto c(usuario, nombre, correo, contraseña, preguntas, fecha, imagen);
	if (confirmar==contraseña){
		c.GuardarDatos(newUsuario);
		MessageBox::Show("guardado existosamente");
		//(gcnew Salgado_Eva_Proyecto1::main_app())->Show();
		this->Hide();
	}
	
}

};


}
