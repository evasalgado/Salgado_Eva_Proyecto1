#pragma once
#include "mensajes.h"
#include "Contacto.h"
#include "Form1.h";
#include "Registro.h"
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
			fstream usuarios("contactos.amp",ios::in);
			if (!usuarios.is_open()){
				MessageBox::Show("No se puede abrir el Archivo");
				return;
			}
			string linea;
			while (std::getline(usuarios, linea)) {
				System::String^ users = gcnew System::String(linea.c_str());
				lb_open->Items->Add(users);
			}
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tb_mensaje;
	private: System::Windows::Forms::ListBox^ lb_mensajes;



	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créditosToolStripMenuItem;
	private: System::Windows::Forms::Button^ bt_enviar;
	private: System::Windows::Forms::ListBox^ lb_open;
	private: System::Windows::Forms::ListBox^ lb_closed;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarToolStripMenuItem;
	private: System::Windows::Forms::Button^ bt_sticker;

	private: System::Windows::Forms::Button^ bt_multimedia;
	private: System::Windows::Forms::ToolStripMenuItem^ chatsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenarAlfabéticamenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeChatsToolStripMenuItem;




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
			this->tb_chats = (gcnew System::Windows::Forms::TabControl());
			this->tb_open = (gcnew System::Windows::Forms::TabPage());
			this->lb_open = (gcnew System::Windows::Forms::ListBox());
			this->tb_Closed = (gcnew System::Windows::Forms::TabPage());
			this->lb_closed = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ajustesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarPerfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAlfabéticamenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeChatsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créditosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bt_sticker = (gcnew System::Windows::Forms::Button());
			this->bt_multimedia = (gcnew System::Windows::Forms::Button());
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
			this->menuStrip1->Size = System::Drawing::Size(919, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ajustesToolStripMenuItem
			// 
			this->ajustesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->agregarToolStripMenuItem,
					this->cuentaToolStripMenuItem, this->acercaDeToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->ajustesToolStripMenuItem->Name = L"ajustesToolStripMenuItem";
			this->ajustesToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->ajustesToolStripMenuItem->Text = L"Ajustes";
			// 
			// agregarToolStripMenuItem
			// 
			this->agregarToolStripMenuItem->Name = L"agregarToolStripMenuItem";
			this->agregarToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->agregarToolStripMenuItem->Text = L"Agregar";
			// 
			// cuentaToolStripMenuItem
			// 
			this->cuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->editarPerfilToolStripMenuItem,
					this->chatsToolStripMenuItem
			});
			this->cuentaToolStripMenuItem->Name = L"cuentaToolStripMenuItem";
			this->cuentaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cuentaToolStripMenuItem->Text = L"Cuenta";
			// 
			// editarPerfilToolStripMenuItem
			// 
			this->editarPerfilToolStripMenuItem->Name = L"editarPerfilToolStripMenuItem";
			this->editarPerfilToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->editarPerfilToolStripMenuItem->Text = L"Editar perfil";
			// 
			// chatsToolStripMenuItem
			// 
			this->chatsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ordenarAlfabéticamenteToolStripMenuItem,
					this->historialDeChatsToolStripMenuItem
			});
			this->chatsToolStripMenuItem->Name = L"chatsToolStripMenuItem";
			this->chatsToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->chatsToolStripMenuItem->Text = L"Chats";
			// 
			// ordenarAlfabéticamenteToolStripMenuItem
			// 
			this->ordenarAlfabéticamenteToolStripMenuItem->Name = L"ordenarAlfabéticamenteToolStripMenuItem";
			this->ordenarAlfabéticamenteToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->ordenarAlfabéticamenteToolStripMenuItem->Text = L"Ordenar Alfabéticamente";
			// 
			// historialDeChatsToolStripMenuItem
			// 
			this->historialDeChatsToolStripMenuItem->Name = L"historialDeChatsToolStripMenuItem";
			this->historialDeChatsToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->historialDeChatsToolStripMenuItem->Text = L"Historial de chats";
			this->historialDeChatsToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::historialDeChatsToolStripMenuItem_Click);
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->créditosToolStripMenuItem });
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// créditosToolStripMenuItem
			// 
			this->créditosToolStripMenuItem->Name = L"créditosToolStripMenuItem";
			this->créditosToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->créditosToolStripMenuItem->Text = L"Créditos";
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::cerrarSesiónToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->bt_sticker);
			this->panel1->Controls->Add(this->bt_multimedia);
			this->panel1->Controls->Add(this->bt_enviar);
			this->panel1->Controls->Add(this->tb_mensaje);
			this->panel1->Controls->Add(this->lb_mensajes);
			this->panel1->Location = System::Drawing::Point(237, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(678, 569);
			this->panel1->TabIndex = 9;
			// 
			// bt_sticker
			// 
			this->bt_sticker->Location = System::Drawing::Point(69, 500);
			this->bt_sticker->Name = L"bt_sticker";
			this->bt_sticker->Size = System::Drawing::Size(59, 49);
			this->bt_sticker->TabIndex = 15;
			this->bt_sticker->Text = L"stickers";
			this->bt_sticker->UseVisualStyleBackColor = true;
			// 
			// bt_multimedia
			// 
			this->bt_multimedia->Location = System::Drawing::Point(4, 500);
			this->bt_multimedia->Name = L"bt_multimedia";
			this->bt_multimedia->Size = System::Drawing::Size(59, 49);
			this->bt_multimedia->TabIndex = 14;
			this->bt_multimedia->Text = L"Multimedia";
			this->bt_multimedia->UseVisualStyleBackColor = true;
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
			this->bt_enviar->Click += gcnew System::EventHandler(this, &main_app::bt_enviar_Click);
			// 
			// tb_mensaje
			// 
			this->tb_mensaje->BackColor = System::Drawing::Color::Linen;
			this->tb_mensaje->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_mensaje->Location = System::Drawing::Point(125, 500);
			this->tb_mensaje->Multiline = true;
			this->tb_mensaje->Name = L"tb_mensaje";
			this->tb_mensaje->Size = System::Drawing::Size(472, 49);
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
			this->lb_mensajes->Location = System::Drawing::Point(4, 36);
			this->lb_mensajes->Name = L"lb_mensajes";
			this->lb_mensajes->Size = System::Drawing::Size(678, 400);
			this->lb_mensajes->TabIndex = 10;
			// 
			// main_app
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->ClientSize = System::Drawing::Size(919, 802);
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
		string sacarTexto(System::Windows::Forms::TextBox^ tb) {
			System::String^ textBox = tb->Text;
			string contenidoSTD;
			for (int i = 0; i < textBox->Length; i++) {
				contenidoSTD += (char)textBox[i];
			}
			return contenidoSTD;
		}
		string volverString(System::String^ convertir) {
			if (convertir == nullptr)
				return string();
			const wchar_t* wchars =
				(const wchar_t*)(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(convertir)).ToPointer();
			wstring ws(wchars);
			System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr((void*)wchars));        std::string str(ws.begin(), ws.end());
			return str;
		}
private: System::Void main_app_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	//(gcnew Salgado_Eva_Proyecto1::Form())->Show();
}
private: System::Void tb_open_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usuario;
	tb_mensaje->Text = lb_open->Text+": ";
}
private: System::Void lb_closed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	std::fstream archivo("contactos.amp", std::ios::in);
	if (!archivo.is_open()) {
		MessageBox::Show("No se puede abrir archivo");
		return;
	}
	std::string linea;
	if (std::getline(archivo, linea)) {
		System::String^ user = gcnew System::String(linea.c_str());
		tb_mensaje->Text=user+": "; 
	}
}
private: System::Void bt_enviar_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream archivo("contactos.amp", ios::in);
	string user1_std;
	getline(archivo, user1_std);
	System::String^ user2 = lb_open->SelectedItem->ToString();
	System::String^ user1 = gcnew System::String(user1_std.c_str());; //se supone ser el usuario que inició sesión en el programa
	string mensaje = sacarTexto(tb_mensaje);
	System::String^ displayText = tb_mensaje->Text;
	lb_mensajes->Items->Add(displayText);
	tb_mensaje->Text = " ";
	
	string nuevoFile = volverString(user1 + user2 + ".msm");
	std::fstream historial(nuevoFile, std::ios::in | std::ios::out | std::ios::app);
	mensajes msm;
	msm.GuardarMensajes(historial);
}
private: System::Void historialDeChatsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
