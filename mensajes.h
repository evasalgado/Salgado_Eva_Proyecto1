#pragma once
#include "Contacto.h"
#include <vector>
class mensajes{
	vector<string> msm;
	int tamanio;
public: 
	mensajes()  {}
	void CargarMensajes(fstream& archivo);
	void GuardarMensajes(fstream& archivo);
};

