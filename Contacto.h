#pragma once
#include <iostream>
#include <fstream>
using namespace std;
 class Contacto{
	 string nombre_user,
		 nombre,
		 correo,
		 contrase�a,
		 preguntas,
		 respuestas, 
		 edad,
		 image;
 public: 
	 Contacto();
	 Contacto(string nombre_user, string nombre, string correo,
		 string contrase�a, string preguntas, string edad, string imagen)
		 : nombre_user(nombre_user), nombre(nombre), correo(correo),
		 contrase�a(contrase�a), preguntas(preguntas), respuestas(respuestas), edad(edad), image(imagen) {}
	 string getNombre_User() const;
	 void setNombre_User(const string nombre_user);
	 string getNombre() const;
	 void setNombre(const string nombre);
	 string getCorreo() const;
	 void setCorreo(const string correo);
	 string getContrase�a() const;
	 void setContrase�a(const string contrase�a);
	 string getPreguntas() const;
	 void setPreguntas(const string preguntas);
	 string getEdad() const;
	 void setEdad(const string Edad);
	 string getImagen() const;
	 void setRespuestas(const string respuestas);
	 string getRespuestas() const;
	 void setImagen(const string imagen);
	 void GuardarDatos(fstream& archivo);
	 void CargarDatos(fstream& archivo);
	 void CargarContacto(fstream& archivo);
	 void OrdenarAlfabeto(fstream& archivo);
	 void OrdenarReciente(fstream& archivo);
	 ~Contacto();
};

