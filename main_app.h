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
			string user1_std;
			getline(usuarios, user1_std);
			System::String^ userRn = gcnew System::String(user1_std.c_str());
			string linea;
			while (getline(usuarios, linea)) {
				System::String^ users = gcnew System::String(linea.c_str());
				lv_open->Items->Add(users);
				size_t sep = linea.find(';');
				if (sep != string::npos) {
					string nombre = linea.substr(0, sep);
					string rutaAvatar = linea.substr(sep + 1);
					System::String^ usuario = gcnew System::String(nombre.c_str());
					lv_open->Items->Add(usuario);
					cargarContactosEnListView(lv_open);

					if (usuario == userRn) { 
						System::String^ rutaImg = gcnew System::String(rutaAvatar.c_str());
						if (System::IO::File::Exists(rutaImg)) {
							tsm_ajustes->Image = System::Drawing::Image::FromFile(rutaImg);
						}
					}
				}
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






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tb_mensaje;






	private: System::Windows::Forms::Button^ bt_enviar;





	private: System::Windows::Forms::Button^ bt_multimedia;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pb_sticker6;

	private: System::Windows::Forms::PictureBox^ pb_sticker5;

	private: System::Windows::Forms::PictureBox^ pb_sticker4;

	private: System::Windows::Forms::PictureBox^ pb_sticker3;

	private: System::Windows::Forms::PictureBox^ pb_sticker2;

	private: System::Windows::Forms::PictureBox^ pb_sticker1;
	private: System::Windows::Forms::ToolStripMenuItem^ tsm_ajustes;



	private: System::Windows::Forms::ToolStripMenuItem^ cuentaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ chatsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ordenarAlfabéticamenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historialDeChatsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créditosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ImageList^ imgL_imagenes;

	private: System::Windows::Forms::ListView^ lv_stickerMultimedia;
	private: System::Windows::Forms::ListBox^ lb_mensajes;
	private: System::Windows::Forms::OpenFileDialog^ opF_imagen;
private: System::Windows::Forms::ListView^ lv_open;
private: System::Windows::Forms::ToolStripMenuItem^ ordenarAlfabéticamenteToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ordenarPorRecientesToolStripMenuItem;
private: System::Windows::Forms::ListView^ lv_closed;
private: System::Windows::Forms::ImageList^ imgL_avatar;

	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_app::typeid));
			this->tb_chats = (gcnew System::Windows::Forms::TabControl());
			this->tb_open = (gcnew System::Windows::Forms::TabPage());
			this->lv_open = (gcnew System::Windows::Forms::ListView());
			this->tb_Closed = (gcnew System::Windows::Forms::TabPage());
			this->lv_closed = (gcnew System::Windows::Forms::ListView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lv_stickerMultimedia = (gcnew System::Windows::Forms::ListView());
			this->imgL_imagenes = (gcnew System::Windows::Forms::ImageList(this->components));
			this->bt_multimedia = (gcnew System::Windows::Forms::Button());
			this->bt_enviar = (gcnew System::Windows::Forms::Button());
			this->tb_mensaje = (gcnew System::Windows::Forms::TextBox());
			this->lb_mensajes = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pb_sticker6 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_sticker5 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_sticker4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_sticker3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_sticker2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_sticker1 = (gcnew System::Windows::Forms::PictureBox());
			this->tsm_ajustes = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAlfabéticamenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAlfabéticamenteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarPorRecientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historialDeChatsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créditosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opF_imagen = (gcnew System::Windows::Forms::OpenFileDialog());
			this->imgL_avatar = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tb_chats->SuspendLayout();
			this->tb_open->SuspendLayout();
			this->tb_Closed->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker1))->BeginInit();
			this->menuStrip1->SuspendLayout();
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
			this->tb_chats->Size = System::Drawing::Size(200, 599);
			this->tb_chats->TabIndex = 7;
			// 
			// tb_open
			// 
			this->tb_open->BackColor = System::Drawing::Color::LightBlue;
			this->tb_open->Controls->Add(this->lv_open);
			this->tb_open->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_open->Location = System::Drawing::Point(4, 30);
			this->tb_open->Name = L"tb_open";
			this->tb_open->Padding = System::Windows::Forms::Padding(3);
			this->tb_open->Size = System::Drawing::Size(192, 565);
			this->tb_open->TabIndex = 0;
			this->tb_open->Text = L"Open";
			this->tb_open->Click += gcnew System::EventHandler(this, &main_app::tb_open_Click);
			// 
			// lv_open
			// 
			this->lv_open->BackColor = System::Drawing::Color::Azure;
			this->lv_open->HideSelection = false;
			this->lv_open->Location = System::Drawing::Point(0, 0);
			this->lv_open->Name = L"lv_open";
			this->lv_open->Size = System::Drawing::Size(196, 569);
			this->lv_open->TabIndex = 0;
			this->lv_open->UseCompatibleStateImageBehavior = false;
			// 
			// tb_Closed
			// 
			this->tb_Closed->BackColor = System::Drawing::Color::LightBlue;
			this->tb_Closed->Controls->Add(this->lv_closed);
			this->tb_Closed->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Closed->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tb_Closed->Location = System::Drawing::Point(4, 30);
			this->tb_Closed->Name = L"tb_Closed";
			this->tb_Closed->Padding = System::Windows::Forms::Padding(3);
			this->tb_Closed->Size = System::Drawing::Size(192, 565);
			this->tb_Closed->TabIndex = 1;
			this->tb_Closed->Text = L"Closed";
			// 
			// lv_closed
			// 
			this->lv_closed->BackColor = System::Drawing::Color::Azure;
			this->lv_closed->HideSelection = false;
			this->lv_closed->Location = System::Drawing::Point(0, 0);
			this->lv_closed->Name = L"lv_closed";
			this->lv_closed->Size = System::Drawing::Size(192, 569);
			this->lv_closed->TabIndex = 0;
			this->lv_closed->UseCompatibleStateImageBehavior = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->lv_stickerMultimedia);
			this->panel1->Controls->Add(this->bt_multimedia);
			this->panel1->Controls->Add(this->bt_enviar);
			this->panel1->Controls->Add(this->tb_mensaje);
			this->panel1->Controls->Add(this->lb_mensajes);
			this->panel1->Location = System::Drawing::Point(237, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(678, 522);
			this->panel1->TabIndex = 9;
			// 
			// lv_stickerMultimedia
			// 
			this->lv_stickerMultimedia->BackColor = System::Drawing::Color::Beige;
			this->lv_stickerMultimedia->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lv_stickerMultimedia->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lv_stickerMultimedia->FullRowSelect = true;
			this->lv_stickerMultimedia->HideSelection = false;
			this->lv_stickerMultimedia->Location = System::Drawing::Point(332, 36);
			this->lv_stickerMultimedia->Name = L"lv_stickerMultimedia";
			this->lv_stickerMultimedia->Size = System::Drawing::Size(338, 400);
			this->lv_stickerMultimedia->SmallImageList = this->imgL_imagenes;
			this->lv_stickerMultimedia->TabIndex = 15;
			this->lv_stickerMultimedia->UseCompatibleStateImageBehavior = false;
			this->lv_stickerMultimedia->View = System::Windows::Forms::View::Details;
			// 
			// imgL_imagenes
			// 
			this->imgL_imagenes->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imgL_imagenes->ImageSize = System::Drawing::Size(16, 16);
			this->imgL_imagenes->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// bt_multimedia
			// 
			this->bt_multimedia->Location = System::Drawing::Point(4, 458);
			this->bt_multimedia->Name = L"bt_multimedia";
			this->bt_multimedia->Size = System::Drawing::Size(59, 49);
			this->bt_multimedia->TabIndex = 14;
			this->bt_multimedia->Text = L"Multimedia";
			this->bt_multimedia->UseVisualStyleBackColor = true;
			this->bt_multimedia->Click += gcnew System::EventHandler(this, &main_app::bt_multimedia_Click);
			// 
			// bt_enviar
			// 
			this->bt_enviar->BackColor = System::Drawing::Color::Cornsilk;
			this->bt_enviar->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_enviar->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->bt_enviar->Location = System::Drawing::Point(599, 458);
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
			this->tb_mensaje->Location = System::Drawing::Point(69, 458);
			this->tb_mensaje->Multiline = true;
			this->tb_mensaje->Name = L"tb_mensaje";
			this->tb_mensaje->Size = System::Drawing::Size(529, 49);
			this->tb_mensaje->TabIndex = 11;
			// 
			// lb_mensajes
			// 
			this->lb_mensajes->BackColor = System::Drawing::Color::Beige;
			this->lb_mensajes->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_mensajes->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lb_mensajes->FormattingEnabled = true;
			this->lb_mensajes->ItemHeight = 36;
			this->lb_mensajes->Location = System::Drawing::Point(4, 36);
			this->lb_mensajes->Name = L"lb_mensajes";
			this->lb_mensajes->Size = System::Drawing::Size(330, 400);
			this->lb_mensajes->TabIndex = 10;
			this->lb_mensajes->SelectedIndexChanged += gcnew System::EventHandler(this, &main_app::lb_mensajes_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::OliveDrab;
			this->panel2->Controls->Add(this->pb_sticker6);
			this->panel2->Controls->Add(this->pb_sticker5);
			this->panel2->Controls->Add(this->pb_sticker4);
			this->panel2->Controls->Add(this->pb_sticker3);
			this->panel2->Controls->Add(this->pb_sticker2);
			this->panel2->Controls->Add(this->pb_sticker1);
			this->panel2->Location = System::Drawing::Point(237, 568);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(678, 100);
			this->panel2->TabIndex = 10;
			// 
			// pb_sticker6
			// 
			this->pb_sticker6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker6.Image")));
			this->pb_sticker6->Location = System::Drawing::Point(556, 16);
			this->pb_sticker6->Name = L"pb_sticker6";
			this->pb_sticker6->Size = System::Drawing::Size(78, 61);
			this->pb_sticker6->TabIndex = 5;
			this->pb_sticker6->TabStop = false;
			// 
			// pb_sticker5
			// 
			this->pb_sticker5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker5.Image")));
			this->pb_sticker5->Location = System::Drawing::Point(455, 16);
			this->pb_sticker5->Name = L"pb_sticker5";
			this->pb_sticker5->Size = System::Drawing::Size(78, 61);
			this->pb_sticker5->TabIndex = 4;
			this->pb_sticker5->TabStop = false;
			// 
			// pb_sticker4
			// 
			this->pb_sticker4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker4.Image")));
			this->pb_sticker4->Location = System::Drawing::Point(344, 16);
			this->pb_sticker4->Name = L"pb_sticker4";
			this->pb_sticker4->Size = System::Drawing::Size(78, 61);
			this->pb_sticker4->TabIndex = 3;
			this->pb_sticker4->TabStop = false;
			// 
			// pb_sticker3
			// 
			this->pb_sticker3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker3.Image")));
			this->pb_sticker3->Location = System::Drawing::Point(234, 16);
			this->pb_sticker3->Name = L"pb_sticker3";
			this->pb_sticker3->Size = System::Drawing::Size(78, 61);
			this->pb_sticker3->TabIndex = 2;
			this->pb_sticker3->TabStop = false;
			// 
			// pb_sticker2
			// 
			this->pb_sticker2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker2.Image")));
			this->pb_sticker2->Location = System::Drawing::Point(126, 16);
			this->pb_sticker2->Name = L"pb_sticker2";
			this->pb_sticker2->Size = System::Drawing::Size(78, 61);
			this->pb_sticker2->TabIndex = 1;
			this->pb_sticker2->TabStop = false;
			// 
			// pb_sticker1
			// 
			this->pb_sticker1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_sticker1.Image")));
			this->pb_sticker1->Location = System::Drawing::Point(17, 16);
			this->pb_sticker1->Name = L"pb_sticker1";
			this->pb_sticker1->Size = System::Drawing::Size(78, 61);
			this->pb_sticker1->TabIndex = 0;
			this->pb_sticker1->TabStop = false;
			this->pb_sticker1->Click += gcnew System::EventHandler(this, &main_app::pictureBox1_Click);
			// 
			// tsm_ajustes
			// 
			this->tsm_ajustes->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->cuentaToolStripMenuItem,
					this->acercaDeToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->tsm_ajustes->Name = L"tsm_ajustes";
			this->tsm_ajustes->Size = System::Drawing::Size(70, 24);
			this->tsm_ajustes->Text = L"Ajustes";
			// 
			// cuentaToolStripMenuItem
			// 
			this->cuentaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatsToolStripMenuItem });
			this->cuentaToolStripMenuItem->Name = L"cuentaToolStripMenuItem";
			this->cuentaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cuentaToolStripMenuItem->Text = L"Cuenta";
			// 
			// chatsToolStripMenuItem
			// 
			this->chatsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ordenarAlfabéticamenteToolStripMenuItem,
					this->historialDeChatsToolStripMenuItem
			});
			this->chatsToolStripMenuItem->Name = L"chatsToolStripMenuItem";
			this->chatsToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->chatsToolStripMenuItem->Text = L"Chats";
			// 
			// ordenarAlfabéticamenteToolStripMenuItem
			// 
			this->ordenarAlfabéticamenteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ordenarAlfabéticamenteToolStripMenuItem1,
					this->ordenarPorRecientesToolStripMenuItem
			});
			this->ordenarAlfabéticamenteToolStripMenuItem->Name = L"ordenarAlfabéticamenteToolStripMenuItem";
			this->ordenarAlfabéticamenteToolStripMenuItem->Size = System::Drawing::Size(207, 26);
			this->ordenarAlfabéticamenteToolStripMenuItem->Text = L"Orden";
			this->ordenarAlfabéticamenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::ordenarAlfabéticamenteToolStripMenuItem_Click);
			// 
			// ordenarAlfabéticamenteToolStripMenuItem1
			// 
			this->ordenarAlfabéticamenteToolStripMenuItem1->Name = L"ordenarAlfabéticamenteToolStripMenuItem1";
			this->ordenarAlfabéticamenteToolStripMenuItem1->Size = System::Drawing::Size(260, 26);
			this->ordenarAlfabéticamenteToolStripMenuItem1->Text = L"Ordenar Alfabéticamente";
			// 
			// ordenarPorRecientesToolStripMenuItem
			// 
			this->ordenarPorRecientesToolStripMenuItem->Name = L"ordenarPorRecientesToolStripMenuItem";
			this->ordenarPorRecientesToolStripMenuItem->Size = System::Drawing::Size(260, 26);
			this->ordenarPorRecientesToolStripMenuItem->Text = L"Ordenar por Recientes";
			this->ordenarPorRecientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::ordenarPorRecientesToolStripMenuItem_Click);
			// 
			// historialDeChatsToolStripMenuItem
			// 
			this->historialDeChatsToolStripMenuItem->Name = L"historialDeChatsToolStripMenuItem";
			this->historialDeChatsToolStripMenuItem->Size = System::Drawing::Size(207, 26);
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
			this->créditosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->créditosToolStripMenuItem->Text = L"Créditos";
			this->créditosToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::créditosToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_app::cerrarSesiónToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsm_ajustes });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(919, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &main_app::menuStrip1_ItemClicked);
			// 
			// opF_imagen
			// 
			this->opF_imagen->FileName = L"openFileDialog1";
			// 
			// imgL_avatar
			// 
			this->imgL_avatar->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imgL_avatar->ImageSize = System::Drawing::Size(16, 16);
			this->imgL_avatar->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// main_app
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->ClientSize = System::Drawing::Size(919, 802);
			this->Controls->Add(this->panel2);
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_sticker1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void cargarContactosEnListView(System::Windows::Forms::ListView^ lv) {
			imgL_avatar->ImageSize = System::Drawing::Size(32, 32);
			imgL_avatar->Images->Clear();
			lv_open->Items->Clear();

			fstream archivo("contactos.amp", ios::in);
			if (!archivo.is_open()) {
				MessageBox::Show("No se pudo abrir el archivo de contactos.");
				return;
			}

			while (!archivo.eof()) {
				Contacto c;
				c.CargarContacto(archivo);

				if (archivo.eof()) break; 

				String^ nombre = gcnew String(c.getNombre_User().c_str());
				String^ estado = "Conectado"; 
				String^ rutaImagen = gcnew String(c.getImagen().c_str());

				try {
					Image^ img = Image::FromFile(rutaImagen);
					imgL_avatar->Images->Add(nombre, img);

					ListViewItem^ item = gcnew ListViewItem(nombre, nombre);
					item->SubItems->Add(estado);
					lv_open->Items->Add(item);
				}
				catch (...) {
					ListViewItem^ item = gcnew ListViewItem(nombre);
					item->SubItems->Add(estado);
					lv_open->Items->Add(item);
				}
			}

			archivo.close();
		}
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
		void Salgado_Eva_Proyecto1::main_app::sacarImagen(OpenFileDialog^ opF, PictureBox^ pb, ListView^ lv, mensajes& msm, String^ rutaArchivo) {
			if (opF->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ nuevoFile = opF->FileName;
				pb->Image = System::Drawing::Image::FromFile(nuevoFile);

				lv->Items->Add("[Imagen enviada: " + nuevoFile + "]");
				string rutaImagen = volverString(nuevoFile);
				string mensaje = "[Imagen enviada: " + rutaImagen + "]";
				msm.insertarMensaje(mensaje);
				string archivoStd = volverString(rutaArchivo);
				fstream archivo(archivoStd, ios::out);
				msm.GuardarMensajes(archivo);
			}
		}
private: System::Void main_app_Load(System::Object^ sender, System::EventArgs^ e) {
	cargarContactosEnListView(lv_open);
}

private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	//(gcnew Salgado_Eva_Proyecto1::Form())->Show();
}
private: System::Void tb_open_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	fstream archivo("contactos.amp", ios::in);
	string user1_std;//string para identificar el usuario que inició sesión
	getline(archivo, user1_std);

	System::String^ user = lv_open->SelectedItems->ToString();
	tb_mensaje->Text = user + ": ";
}
private: System::Void lb_closed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	fstream archivo("contactos.amp", std::ios::in);
	if (!archivo.is_open()) {
		MessageBox::Show("No se puede abrir archivo");
		return;
	}
	std::string linea;
	if (getline(archivo, linea)) {
		System::String^ user = gcnew System::String(linea.c_str());
		lb_mensajes->Text=user+": "; 
	}
}
private: System::Void bt_enviar_Click(System::Object^ sender, System::EventArgs^ e) { //todo lo del chat se debe actualizar cuando se envie nuevo mensaje
	fstream archivo("contactos.amp", ios::in);
	string user1_std;//string para identificar el usuario que inició sesión
	getline(archivo, user1_std);

	System::String^ user2 = lv_open->SelectedItems->ToString();
	System::String^ user1 = gcnew System::String(user1_std.c_str());; //se supone ser el usuario que inició sesión en el programa
	
	//obtener mensaje
	string mensaje = sacarTexto(tb_mensaje);
	System::String^ displayText = tb_mensaje->Text;

	//mostrar en la lista
	lb_mensajes->Items->Add(displayText);
	tb_mensaje->Text = " ";
	
	string nuevoFile = volverString(user1 + user2 + ".msm");
	//cargar historial
	fstream historial(nuevoFile, std::ios::in | std::ios::out | std::ios::app);
	mensajes msm;

	//cargar mensajes anteriores
	msm.CargarMensajes(historial);
	historial.close();

	msm.insertarMensaje(mensaje);

	//guardar todos los mensajes
	historial.open(nuevoFile, ios::out | ios::trunc);
	msm.GuardarMensajes(historial);
	historial.close();
}
private: System::Void historialDeChatsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {//mostrar el historial de chat cuando se seleccione
	lb_mensajes->Items->Clear();
	fstream archivo("contactos.amp", ios::in);
	string user1_std;
	getline(archivo, user1_std);

	System::String^ user2 = lv_open->SelectedItems->ToString();
	System::String^ user1 = gcnew System::String(user1_std.c_str());;

	string nuevoFile = volverString(user1 + user2 + ".msm");

	fstream historial(nuevoFile, std::ios::out);
	mensajes msm;
	msm.CargarMensajes(historial);
	const vector<string>& mensajesCargados = msm.obtenerMensajes();
	for (const string& linea : mensajesCargados) {
		lb_mensajes->Items->Add(gcnew System::String(linea.c_str()));
	}
	historial.close();
	
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	mensajes msm;
	fstream archivo("contactos.amp", ios::in);
	string user1_std;
	getline(archivo, user1_std);
	archivo.close();
	String^ user1 = gcnew String(user1_std.c_str());
	String^ user2 = lv_open->SelectedItems->ToString();
	String^ rutaHistorial = user1 + user2 + ".msm";

	sacarImagen(opF_imagen, pb_sticker1, lv_stickerMultimedia, msm, rutaHistorial);
}
private: System::Void bt_multimedia_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialogo = gcnew OpenFileDialog();
	dialogo->Title = "Selecciona un archivo multimedia";
	dialogo->Filter = "Archivos multimedia|*.jpg;*.jpeg;*.png;*.bmp;*.gif;*.mp4;*.avi;*.mov;*.mkv|Todos los archivos|*.*";
	if (dialogo->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ ruta = dialogo->FileName;

		if (System::IO::Path::GetExtension(ruta)->ToLower()->Contains(".jpg") ||
			System::IO::Path::GetExtension(ruta)->ToLower()->Contains(".png") ||
			System::IO::Path::GetExtension(ruta)->ToLower()->Contains(".bmp") ||
			System::IO::Path::GetExtension(ruta)->ToLower()->Contains(".gif")) {

			Image^ imagen = Image::FromFile(ruta);
			imgL_imagenes->Images->Add(ruta, imagen);

			ListViewItem^ objeto = gcnew ListViewItem();
			objeto->Text = System::IO::Path::GetFileName(ruta);
			objeto->ImageKey = ruta;
			objeto->ToolTipText = ruta;
			lv_stickerMultimedia->Items->Add(objeto);

		}
		else {
			ListViewItem^ objeto = gcnew ListViewItem("[Video]: " + System::IO::Path::GetFileName(ruta));
			objeto->ToolTipText = ruta;
			lv_stickerMultimedia->Items->Add(objeto);
		} 

		fstream archivo("contactos.amp", ios::in);
		string user1_std;
		getline(archivo, user1_std);
		archivo.close();

		String^ user1 = gcnew String(user1_std.c_str());
		String^ user2 = lv_open->SelectedItems->ToString();
		String^ rutaHistorial = user1 + user2 + ".msm";
		string mensaje = "[Multimedia enviada: " + volverString(ruta) + "]";
		string archivoHist = volverString(rutaHistorial);

		mensajes msm;
		fstream guardar(archivoHist, ios::out | ios::app);
		msm.insertarMensaje(mensaje);
		msm.GuardarMensajes(guardar);
		guardar.close();
	}
}
private: System::Void ordenarAlfabéticamenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream archivo("contactos.amp", ios::in);
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo.");
		return;
	}

	Contacto c;
	c.OrdenarAlfabeto(archivo);
	archivo.close();
	cargarContactosEnListView(lv_open);
	cargarContactosEnListView(lv_closed);
}
private: System::Void ordenarPorRecientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream archivo("contactos.amp", ios::in);
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo.");
		return;
	}

	Contacto c;
	c.OrdenarReciente(archivo);
	archivo.close();
	cargarContactosEnListView(lv_open);
	cargarContactosEnListView(lv_closed);
}
private: System::Void lb_mensajes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void lb_mensajes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	mensajes msm;
	int indice = lb_mensajes->SelectedIndex;
	if (indice >= 0) {
		try {
			msm.quitarMensaje(indice);
			lb_mensajes->Items->RemoveAt(indice);
		}
		catch (const std::exception& ex) {
			MessageBox::Show(gcnew System::String(ex.what()), "Error");
		}
	}
}
private: System::Void créditosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
