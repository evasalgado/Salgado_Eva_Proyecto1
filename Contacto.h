#pragma once
#include <iostream>
#include <fstream>
using namespace std;
 class Contacto{
	 string nombre_user,
		 nombre,
		 correo,
		 contraseña,
		 preguntas,
		 edad,
		 image;
 public: 
	 Contacto(string nombre_user, string nombre, string correo,
		 string contraseña, string preguntas, string edad, string imagen)
		 : nombre_user(nombre_user), nombre(nombre),correo(correo),
	 contraseña(contraseña),preguntas(preguntas), edad(edad), image(imagen){}
	 string getNombre_User() const;
	 void setNombre_User(const string nombre_user);
	 void GuardarDatos(fstream& archivo) ;
	 void CargarDatos(fstream& archivo);
	 ~Contacto();
};

