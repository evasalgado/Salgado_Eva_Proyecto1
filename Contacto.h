#pragma once
#include <iostream>
#include <fstream>
using namespace std;
 class Contacto{
	 string nombre_user,
		 nombre,
		 correo,
		 contrase�a,
		 preguntas;
	 int edad;
	 fstream image;
 public: 
	 void GuardarDatos(fstream& archivo) const;
	 void CargarDatos(fstream& archivo);
};

