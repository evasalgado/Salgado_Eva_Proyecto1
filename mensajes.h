#pragma once
#include "Contacto.h"
#include <vector>
class mensajes{
	vector<string> msm;
	int tamanio;
public: 
	mensajes()  {}
	string CargarMensajes(fstream& archivo);
	void GuardarMensajes(fstream& archivo);
};

