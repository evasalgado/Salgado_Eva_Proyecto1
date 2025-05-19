#pragma once
#include "mensajes.h"
#include "Contacto.h"
#include "Form1.h";
namespace Salgado_Eva_Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de main_app
	/// </summary>
	public ref class main_app : public System::Windows::Forms::Form
	{
	public:
		main_app(void)
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
		~main_app()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TabControl^ tb_chats;
	private: System::Windows::Forms::TabPage^ tb_open;
	private: System::Windows::Forms::TabPage^ tb_Closed;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ ajustesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cuentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarPerfilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tb_mensaje;
	private: System::Windows::Forms::ListBox^ lb_mensajes;



	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cr�ditosToolStripMenuItem;
	private: System::Windows::Forms::Button^ bt_enviar;
	private: System::Windows::Forms::ListBox^ lb_open;
	private: System::Windows::Forms::ListBox^ lb_closed;



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
			this->tb_chats = (gcnew System::Windows::Forms::TabControl());
			this->tb_open = (gcnew System::Windows::Forms::TabPage());
			this->lb_open = (gcnew System::Windows::Forms::ListBox());
			this->tb_Closed = (gcnew System::Windows::Forms::TabPage());
			this->lb_closed = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ajustesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarPerfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cr�ditosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bt_enviar = (gcnew System::Windows::Forms::Button());
			this->tb_mensaje = (gcnew System::Windows::Forms::TextBox());
			this->lb_mensajes = (gcnew System::Windows::Forms::ListBox());
			this->tb_chats->SuspendLayout();
			this->tb_open->SuspendLayout();
			this->tb_Closed->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tb_chats
			// 
			this->tb_chats->Controls->Add(this->tb_open);
			this->tb_chats->Controls->Add(this->tb_Closed);
			this->tb_chats->Font = (gcnew System::Drawing::Font(L"Lucida Console", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_chats->Location = System::Drawing::Point(12, 39);
			this->tb_chats->Name = L"tb_chats";
			this->tb_chats->SelectedIndex = 0;
			this->tb_chats->Size = System::Drawing::Size(200, 569);
			this->tb_chats->TabIndex = 7;
			// 
			// tb_open
			// 
			this->tb_open->BackColor = System::Drawing::Color::LightBlue;
			this->tb_open->Controls->Add(this->lb_open);
			this->tb_open->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_open->Location = System::Drawing::Point(4, 30);
			this->tb_open->Name = L"tb_open";
			this->tb_open->Padding = System::Windows::Forms::Padding(3);
			this->tb_open->Size = System::Drawing::Size(192, 535);
			this->tb_open->TabIndex = 0;
			this->tb_open->Text = L"Open";
			this->tb_open->Click += gcnew System::EventHandler(this, &main_app::tb_open_Click);
			// 
			// lb_open
			// 
			this->lb_open->BackColor = System::Drawing::Color::Azure;
			this->lb_open->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_open->ForeColor = System::Drawing::Color::DarkGreen;
			this->lb_open->FormattingEnabled = true;
			this->lb_open->ItemHeight = 41;
			this->lb_open->Location = System::Drawing::Point(0, 0);
			this->lb_open->Name = L"lb_open";
			this->lb_open->Size = System::Drawing::Size(192, 537);
			this->lb_open->TabIndex = 0;
			this->lb_open->SelectedIndexChanged += gcnew System::EventHandler(this, &main_app::listBox1_SelectedIndexChanged);
			// 
			// tb_Closed
			// 
			this->tb_Closed->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Closed->Controls->Add(this->lb_closed);
			this->tb_Closed->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Closed->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tb_Closed->Location = System::Drawing::Point(4, 30);
			this->tb_Closed->Name = L"tb_Closed";
			this->tb_Closed->Padding = System::Windows::Forms::Padding(3);
			this->tb_Closed->Size = System::Drawing::Size(192, 535);
			this->tb_Closed->TabIndex = 1;
			this->tb_Closed->Text = L"Closed";
			// 
			// lb_closed
			// 
			this->lb_closed->BackColor = System::Drawing::Color::Azure;
			this->lb_closed->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_closed->ForeColor = System::Drawing::Color::DarkGreen;
			this->lb_closed->FormattingEnabled = true;
			this->lb_closed->ItemHeight = 41;
			this->lb_closed->Location = System::Drawing::Point(4, 4);
			this->lb_closed->Name = L"lb_closed";
			this->lb_closed->Size = System::Drawing::Size(185, 537);
			this->lb_closed->TabIndex = 0;
			this->lb_closed->SelectedIndexChanged += gcnew System::EventHandler(this, &main_app::lb_closed_SelectedIndexChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ajustesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(927, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ajustesToolStripMenuItem
			// 
			this->ajustesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cuentaToolStripMenuItem,
					this->cerrarSesi�nToolStripMenuItem, this->acercaDeToolStripMenuItem
			});
			this->ajustesToolStripMenuItem->Name = L"ajustesToolStripMenuItem";
			this->ajustesToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->ajustesToolStripMenuItem->Text = L"Ajustes";
			// 
			// cuentaToolStripMenuItem
			// 
			this->cuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editarPerfilToolStripMenuItem });
			this->cuentaToolStripMenuItem->Name = L"cuentaToolStripMenuItem";
			this->cuentaToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->cuentaToolStripMenuItem->Text = L"Cuenta";
			// 
			// editarPerfilToolStripMenuItem
			// 
			this->editarPerfilToolStripMenuItem->Name = L"editarPerfilToolStripMenuItem";
			this->editarPerfilToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->editarPerfilToolStripMenuItem->Text = L"Editar perfil";
			// 
			// cerrarSesi�nToolStripMenuItem
			// 
			this->cerrarSesi�nToolStripMenuItem->Name = L"cerrarSesi�nToolStripMenuItem";
			this->cerrarSesi�nToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->cerrarSesi�nToolStripMenuItem->Text = L"Cerrar Sesi�n";
			this->cerrarSesi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::cerrarSesi�nToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cr�ditosToolStripMenuItem });
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// cr�ditosToolStripMenuItem
			// 
			this->cr�ditosToolStripMenuItem->Name = L"cr�ditosToolStripMenuItem";
			this->cr�ditosToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->cr�ditosToolStripMenuItem->Text = L"Cr�ditos";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->bt_enviar);
			this->panel1->Controls->Add(this->tb_mensaje);
			this->panel1->Controls->Add(this->lb_mensajes);
			this->panel1->Location = System::Drawing::Point(237, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(678, 569);
			this->panel1->TabIndex = 9;
			// 
			// bt_enviar
			// 
			this->bt_enviar->BackColor = System::Drawing::Color::Cornsilk;
			this->bt_enviar->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_enviar->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->bt_enviar->Location = System::Drawing::Point(604, 500);
			this->bt_enviar->Name = L"bt_enviar";
			this->bt_enviar->Size = System::Drawing::Size(71, 49);
			this->bt_enviar->TabIndex = 13;
			this->bt_enviar->Text = L">";
			this->bt_enviar->UseVisualStyleBackColor = false;
			// 
			// tb_mensaje
			// 
			this->tb_mensaje->BackColor = System::Drawing::Color::Linen;
			this->tb_mensaje->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_mensaje->Location = System::Drawing::Point(4, 500);
			this->tb_mensaje->Multiline = true;
			this->tb_mensaje->Name = L"tb_mensaje";
			this->tb_mensaje->Size = System::Drawing::Size(593, 49);
			this->tb_mensaje->TabIndex = 11;
			// 
			// lb_mensajes
			// 
			this->lb_mensajes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->lb_mensajes->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_mensajes->FormattingEnabled = true;
			this->lb_mensajes->ItemHeight = 36;
			this->lb_mensajes->Location = System::Drawing::Point(0, 3);
			this->lb_mensajes->Name = L"lb_mensajes";
			this->lb_mensajes->Size = System::Drawing::Size(678, 436);
			this->lb_mensajes->TabIndex = 10;
			// 
			// main_app
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->ClientSize = System::Drawing::Size(927, 620);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tb_chats);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"main_app";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main_app";
			this->Load += gcnew System::EventHandler(this, &main_app::main_app_Load);
			this->tb_chats->ResumeLayout(false);
			this->tb_open->ResumeLayout(false);
			this->tb_Closed->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void main_app_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void cerrarSesi�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	//(gcnew Salgado_Eva_Proyecto1::Form())->Show();
}
private: System::Void tb_open_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usuario;
	tb_mensaje->Text = lb_open->SelectedItem->ToString();
}
private: System::Void lb_closed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usuario;
	tb_mensaje->Text = lb_open->SelectedItem->ToString();
}
};
}
