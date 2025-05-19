#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "Registro.h"
#include "Inicio_Sesion.h"
#include "main_app.h"
#include "Contacto.h"
#include "mensajes.h"
#include <string>
#include <fstream>
#include <iostream> 

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
  private: System::Windows::Forms::Panel^ pn_inicio;
  protected:

  private: System::Windows::Forms::Button^ bt_iniciosesion;
  protected:


  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ bt_registrar;
  private: System::Windows::Forms::PictureBox^ pictureBox4;
  private: System::Windows::Forms::PictureBox^ pictureBox3;
  private: System::Windows::Forms::PictureBox^ pictureBox2;
  private: System::Windows::Forms::PictureBox^ pictureBox1;
  private: System::Windows::Forms::ImageList^ imageList1;
  private: System::ComponentModel::IContainer^ components;






  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>


#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->components = (gcnew System::ComponentModel::Container());
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
        this->pn_inicio = (gcnew System::Windows::Forms::Panel());
        this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        this->bt_registrar = (gcnew System::Windows::Forms::Button());
        this->bt_iniciosesion = (gcnew System::Windows::Forms::Button());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
        this->pn_inicio->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
        this->SuspendLayout();
        // 
        // pn_inicio
        // 
        this->pn_inicio->BackColor = System::Drawing::Color::CadetBlue;
        this->pn_inicio->Controls->Add(this->pictureBox4);
        this->pn_inicio->Controls->Add(this->pictureBox3);
        this->pn_inicio->Controls->Add(this->pictureBox2);
        this->pn_inicio->Controls->Add(this->pictureBox1);
        this->pn_inicio->Controls->Add(this->bt_registrar);
        this->pn_inicio->Controls->Add(this->bt_iniciosesion);
        this->pn_inicio->Controls->Add(this->label15);
        this->pn_inicio->Controls->Add(this->label1);
        this->pn_inicio->Dock = System::Windows::Forms::DockStyle::Left;
        this->pn_inicio->Location = System::Drawing::Point(0, 0);
        this->pn_inicio->Name = L"pn_inicio";
        this->pn_inicio->Size = System::Drawing::Size(1083, 711);
        this->pn_inicio->TabIndex = 2;
        // 
        // pictureBox4
        // 
        this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
        this->pictureBox4->Location = System::Drawing::Point(888, 508);
        this->pictureBox4->Name = L"pictureBox4";
        this->pictureBox4->Size = System::Drawing::Size(168, 162);
        this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox4->TabIndex = 11;
        this->pictureBox4->TabStop = false;
        // 
        // pictureBox3
        // 
        this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
        this->pictureBox3->Location = System::Drawing::Point(30, 525);
        this->pictureBox3->Name = L"pictureBox3";
        this->pictureBox3->Size = System::Drawing::Size(168, 162);
        this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox3->TabIndex = 10;
        this->pictureBox3->TabStop = false;
        // 
        // pictureBox2
        // 
        this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
        this->pictureBox2->Location = System::Drawing::Point(888, 12);
        this->pictureBox2->Name = L"pictureBox2";
        this->pictureBox2->Size = System::Drawing::Size(168, 162);
        this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox2->TabIndex = 9;
        this->pictureBox2->TabStop = false;
        // 
        // pictureBox1
        // 
        this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
        this->pictureBox1->Location = System::Drawing::Point(30, 23);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(168, 162);
        this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
        this->pictureBox1->TabIndex = 8;
        this->pictureBox1->TabStop = false;
        // 
        // bt_registrar
        // 
        this->bt_registrar->BackColor = System::Drawing::Color::AntiqueWhite;
        this->bt_registrar->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->bt_registrar->ForeColor = System::Drawing::Color::DarkBlue;
        this->bt_registrar->Location = System::Drawing::Point(403, 508);
        this->bt_registrar->Name = L"bt_registrar";
        this->bt_registrar->Size = System::Drawing::Size(210, 77);
        this->bt_registrar->TabIndex = 7;
        this->bt_registrar->Text = L"Registrarse";
        this->bt_registrar->UseVisualStyleBackColor = false;
        this->bt_registrar->Click += gcnew System::EventHandler(this, &Form1::bt_registro_Click);
        // 
        // bt_iniciosesion
        // 
        this->bt_iniciosesion->BackColor = System::Drawing::Color::AntiqueWhite;
        this->bt_iniciosesion->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->bt_iniciosesion->ForeColor = System::Drawing::Color::DarkBlue;
        this->bt_iniciosesion->Location = System::Drawing::Point(403, 398);
        this->bt_iniciosesion->Name = L"bt_iniciosesion";
        this->bt_iniciosesion->Size = System::Drawing::Size(210, 77);
        this->bt_iniciosesion->TabIndex = 6;
        this->bt_iniciosesion->Text = L"Iniciar Sesión";
        this->bt_iniciosesion->UseVisualStyleBackColor = false;
        this->bt_iniciosesion->Click += gcnew System::EventHandler(this, &Form1::bt_comenzar_Click);
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
        // imageList1
        // 
        this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
        this->imageList1->ImageSize = System::Drawing::Size(16, 16);
        this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1068, 711);
        this->Controls->Add(this->pn_inicio);
        this->Margin = System::Windows::Forms::Padding(4);
        this->Name = L"Form1";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Amphy chat";
        this->pn_inicio->ResumeLayout(false);
        this->pn_inicio->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
        this->ResumeLayout(false);

    }
#pragma endregion
   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.


  private: System::Void bt_comenzar_Click(System::Object^ sender, System::EventArgs^ e) {
      this->Hide();
      

  }
private: System::Void bt_registro_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("¡Registro exitoso!", "Registro", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

