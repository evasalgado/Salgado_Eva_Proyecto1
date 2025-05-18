#include "pch.h"
#include "Contacto.h"
#include <string>

void Contacto::GuardarDatos(fstream& archivo){
	getline(archivo, nombre_user, '\0');
	getline(archivo, nombre_user, '\0');
}
