#include "pch.h"
#include "mensajes.h"
#include <string>

void mensajes::CargarMensajes(fstream& archivo){
	getline(archivo, mensaje, '\0');
}

void mensajes::GuardarMensajes(fstream& archivo){
	getline(archivo, mensaje, '\0');
}

