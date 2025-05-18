#pragma once

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;


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
			this->tb_Closed = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ajustesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cuentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarPerfilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->tb_chats->SuspendLayout();
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
			this->tb_open->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tb_open->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_open->Location = System::Drawing::Point(4, 30);
			this->tb_open->Name = L"tb_open";
			this->tb_open->Padding = System::Windows::Forms::Padding(3);
			this->tb_open->Size = System::Drawing::Size(192, 535);
			this->tb_open->TabIndex = 0;
			this->tb_open->Text = L"Open";
			// 
			// tb_Closed
			// 
			this->tb_Closed->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Closed->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->tb_Closed->Location = System::Drawing::Point(4, 30);
			this->tb_Closed->Name = L"tb_Closed";
			this->tb_Closed->Padding = System::Windows::Forms::Padding(3);
			this->tb_Closed->Size = System::Drawing::Size(192, 535);
			this->tb_Closed->TabIndex = 1;
			this->tb_Closed->Text = L"Closed";
			this->tb_Closed->UseVisualStyleBackColor = true;
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
			this->ajustesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cuentaToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
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
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->menuStrip2);
			this->panel1->Location = System::Drawing::Point(237, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(678, 569);
			this->panel1->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MT Extra", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->textBox1->Location = System::Drawing::Point(4, 500);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(670, 22);
			this->textBox1->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(678, 452);
			this->listBox1->TabIndex = 10;
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(678, 24);
			this->menuStrip2->TabIndex = 12;
			this->menuStrip2->Text = L"menuStrip2";
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

};
}
