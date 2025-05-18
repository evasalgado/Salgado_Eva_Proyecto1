#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "Registro.h"
#include "Inicio_Sesion.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::Panel^ panel1;
  private: System::Windows::Forms::Button^ bt_iniciosesion;
  protected:

  private: System::Windows::Forms::PictureBox^ pictureBox2;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ bt_registrar;






  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->bt_registrar = (gcnew System::Windows::Forms::Button());
        this->bt_iniciosesion = (gcnew System::Windows::Forms::Button());
        this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->panel1->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
        this->SuspendLayout();
        // 
        // panel1
        // 
        this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(203)),
            static_cast<System::Int32>(static_cast<System::Byte>(54)));
        this->panel1->Controls->Add(this->bt_registrar);
        this->panel1->Controls->Add(this->bt_iniciosesion);
        this->panel1->Controls->Add(this->pictureBox2);
        this->panel1->Controls->Add(this->label15);
        this->panel1->Controls->Add(this->label1);
        this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
        this->panel1->Location = System::Drawing::Point(0, 0);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(1083, 711);
        this->panel1->TabIndex = 2;
        // 
        // bt_registrar
        // 
        this->bt_registrar->Location = System::Drawing::Point(403, 604);
        this->bt_registrar->Name = L"bt_registrar";
        this->bt_registrar->Size = System::Drawing::Size(210, 77);
        this->bt_registrar->TabIndex = 7;
        this->bt_registrar->Text = L"Registrarse";
        this->bt_registrar->UseVisualStyleBackColor = true;
        this->bt_registrar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // bt_iniciosesion
        // 
        this->bt_iniciosesion->Location = System::Drawing::Point(403, 512);
        this->bt_iniciosesion->Name = L"bt_iniciosesion";
        this->bt_iniciosesion->Size = System::Drawing::Size(210, 77);
        this->bt_iniciosesion->TabIndex = 6;
        this->bt_iniciosesion->Text = L"Iniciar Sesión";
        this->bt_iniciosesion->UseVisualStyleBackColor = true;
        this->bt_iniciosesion->Click += gcnew System::EventHandler(this, &Form1::bt_comenzar_Click);
        // 
        // pictureBox2
        // 
        this->pictureBox2->Location = System::Drawing::Point(448, 394);
        this->pictureBox2->Name = L"pictureBox2";
        this->pictureBox2->Size = System::Drawing::Size(114, 112);
        this->pictureBox2->TabIndex = 5;
        this->pictureBox2->TabStop = false;
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
        this->label15->Location = System::Drawing::Point(388, 307);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(246, 56);
        this->label15->TabIndex = 4;
        this->label15->Text = L"Su aplicación de chat \r\ncon temática de anfibios\r\n";
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Noto Sans HK", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::SystemColors::Info;
        this->label1->Location = System::Drawing::Point(354, 56);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(310, 207);
        this->label1->TabIndex = 3;
        this->label1->Text = L"Bienvenido\r\n a \r\nAmphy-chat";
        this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1068, 711);
        this->Controls->Add(this->panel1);
        this->Margin = System::Windows::Forms::Padding(4);
        this->Name = L"Form1";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Amphy chat";
        this->panel1->ResumeLayout(false);
        this->panel1->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
        this->ResumeLayout(false);

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.


  private: System::Void bt_comenzar_Click(System::Object^ sender, System::EventArgs^ e) {
      (gcnew Salgado_Eva_Proyecto1::Registro())->Hide();
      (gcnew Salgado_Eva_Proyecto1::Inicio_Sesion())->Show();

  }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    (gcnew Salgado_Eva_Proyecto1::Inicio_Sesion())->Hide();
    (gcnew Salgado_Eva_Proyecto1::Registro())->Show();
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

