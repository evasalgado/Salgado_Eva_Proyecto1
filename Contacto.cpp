#include "pch.h"
#include "Contacto.h"
#include <string>
void Contacto::GuardarDatos(fstream& archivo){
	archivo.write(nombre_user.c_str(), nombre_user.size() + 1);
	archivo.write(nombre.c_str(), nombre.size() + 1);
	archivo.write(correo.c_str(), correo.size() + 1);
	archivo.write(contrase�a.c_str(), contrase�a.size() + 1);
	archivo.write(preguntas.c_str(),preguntas.size() + 1);
	archivo.write(edad.c_str(), edad.size() + 1);
	archivo.write(image.c_str(),image.size() + 1);
}

void Contacto::CargarDatos(fstream& archivo){
	getline(archivo, nombre_user, '\0');
	getline(archivo, nombre, '\0');
	getline(archivo, correo, '\0');
	getline(archivo, contrase�a, '\0');
	getline(archivo, preguntas, '\0');
	getline(archivo, edad, '\0');
	getline(archivo, image, '\0');
}

void Contacto::CargarContacto(fstream& archivo){
	getline(archivo, nombre_user, '\0');
	getline(archivo, nombre, '\0');
	getline(archivo, correo, '\0');
}

Contacto::Contacto()
{
}

string Contacto::getNombre_User() const{
	return nombre_user;
}

void Contacto::setNombre_User(const string nombre_user){
	this->nombre_user = nombre_user;
}

string Contacto::getNombre() const{
	return nombre;
}

void Contacto::setNombre(const string nombre){
	this->nombre = nombre;
}

string Contacto::getCorreo() const{
	return correo;
}

void Contacto::setCorreo(const string correo){
	if (correo.find("@")){
		this->correo = correo;
	}
	else {
		cerr << "Correo Inv�lido, debe de tener el formato 'nombredecorreo@pagina.com'"
			<<endl;
	}
}

string Contacto::getContrase�a() const{
	return contrase�a;
}

void Contacto::setContrase�a(const string contrase�a){
	if (contrase�a.size()>=6){
		this->contrase�a=contrase�a;
	}
	else {
		cerr << "Contrase�a debe de ser m�nimo de 6 caracteres" << endl;
	}
}

string Contacto::getPreguntas() const{
	return preguntas;
}
void Contacto::setPreguntas(const string preguntas){
	this->preguntas = preguntas;
}
string Contacto::getEdad() const{
	return edad;
}
void Contacto::setEdad(const string Edad){
	this->edad = edad;
}
string Contacto::getImagen() const
{
	return image;
}
void Contacto::setImagen(const string imagen){
	image = imagen;
}
Contacto::~Contacto(){
}