#pragma once
#include "Contacto.h"
class mensajes{
	string mensaje;
	Contacto userA, userB;
public: 
	mensajes(string mensaje, Contacto userA, Contacto userB) :
		mensaje(mensaje), userA(userA), userB(userB) {
	}
	void CargarMensajes(fstream& archivo);
	void GuardarMensajes(fstream& archivo);
};

