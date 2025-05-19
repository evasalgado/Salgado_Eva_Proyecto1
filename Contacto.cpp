#include "pch.h"
#include "Contacto.h"
#include <string>
#include <vector>
void Contacto::GuardarDatos(fstream& archivo){
	archivo.write(nombre_user.c_str(), nombre_user.size() + 1);
	archivo.write(nombre.c_str(), nombre.size() + 1);
	archivo.write(correo.c_str(), correo.size() + 1);
	archivo.write(contraseña.c_str(), contraseña.size() + 1);
	archivo.write(preguntas.c_str(),preguntas.size() + 1);
	archivo.write(edad.c_str(), edad.size() + 1);
	archivo.write(image.c_str(),image.size() + 1);
}

void Contacto::CargarDatos(fstream& archivo){
	getline(archivo, nombre_user, ';');
	getline(archivo, nombre, ';');
	getline(archivo, correo, ';');
	getline(archivo, contraseña, ';');
	getline(archivo, preguntas, ';');
	getline(archivo, edad, ';');
	getline(archivo, image, ';');
}

void Contacto::CargarContacto(fstream& archivo){
	getline(archivo, nombre_user, ';');
	getline(archivo, nombre, ';');
	getline(archivo, correo, ';');
}

void Contacto::OrdenarAlfabeto(fstream& archivo){//ordenar alfabéticamente usando listas enlazadas
	archivo.clear();
	archivo.seekg(0);

	vector<Contacto> contactos;
	while (getline(archivo, nombre_user) &&
		getline(archivo, nombre) &&
		getline(archivo, correo) &&
		getline(archivo, contraseña) &&
		getline(archivo, preguntas) &&
		getline(archivo, respuestas) &&
		getline(archivo, edad) &&
		getline(archivo, image)) {
		contactos.push_back(Contacto(nombre_user, nombre, correo, contraseña, preguntas, edad, image));
		contactos.back().setRespuestas(respuestas);
	}
	int n = contactos.size();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (contactos[j].getNombre_User() > contactos[j + 1].getNombre_User()) {
				Contacto temp = contactos[j];
				contactos[j] = contactos[j + 1];
				contactos[j + 1] = temp;
			}
		}
	}
	
	archivo.close(); 
	archivo.open("contactos.amp", ios::out | ios::trunc);
	for (const auto& c : contactos) {
		archivo << c.getNombre_User() << endl;
		archivo << c.getNombre() << endl;
		archivo << c.getCorreo() << endl;
		archivo << c.getContraseña() << endl;
		archivo << c.getPreguntas() << endl;
		archivo << c.getRespuestas() << endl;
		archivo << c.getEdad() << endl;
		archivo << c.getImagen() << endl;
	}

}

void Contacto::OrdenarReciente(fstream& archivo){
	archivo.clear();
	archivo.seekg(0);

	vector<Contacto> contactos;
	while (!archivo.eof()) {
		Contacto c;
		c.CargarContacto(archivo);
		if (!archivo.eof()) {
			contactos.push_back(c);
		}
	}
	reverse(contactos.begin(), contactos.end());
	archivo.close();
	archivo.open("contactos.amp", std::ios::out | std::ios::trunc);
	for (auto& c : contactos) {
		c.GuardarDatos(archivo);
	}
	archivo.flush();
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
		cerr << "Correo Inválido, debe de tener el formato 'nombredecorreo@pagina.com'"
			<<endl;
	}
}

string Contacto::getContraseña() const{
	return contraseña;
}

void Contacto::setContraseña(const string contraseña){
	if (contraseña.size()>=6){
		this->contraseña=contraseña;
	}
	else {
		cerr << "Contraseña debe de ser mínimo de 6 caracteres" << endl;
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
void Contacto::setRespuestas(const string respuestas){
	this->respuestas = respuestas;
}
string Contacto::getRespuestas() const{
	return respuestas;
}
void Contacto::setImagen(const string imagen){
	image = imagen;
}
Contacto::~Contacto(){
}