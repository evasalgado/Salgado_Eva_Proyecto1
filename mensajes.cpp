#include "pch.h"
#include "mensajes.h"
#include <string>
#include <stdio.h>
#include <stdexcept>
void mensajes::ordenarMensajes() {
	bool swapped;
	int n = (int)msm.size();
	for (int i = 0; i < n - 1; ++i) {
		swapped = false;
		for (int j = 0; j < n - i - 1; ++j) {
			if (msm[j] > msm[j + 1]) {
				std::string temp = msm[j];
				msm[j] = msm[j + 1];
				msm[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}
void mensajes::CargarMensajes(fstream& archivo){
	msm.clear();
	std::string linea;
	while (getline(archivo, linea)) {
		msm.push_back(linea);
	}
	tamanio = (int)msm.size();
	ordenarMensajes();
}

void mensajes::GuardarMensajes(fstream& archivo){
	ordenarMensajes();
	for (const auto& historial : msm) {
		archivo << historial << std::endl;
	}
}



void mensajes::insertarMensaje(const string& mensaje){
	msm.push_back(mensaje);
	tamanio = (int)msm.size();
	ordenarMensajes();
}

void mensajes::insertarEliminado(const string& mensaje) {
	pilaEliminados.push_back(mensaje);
	cima++;
}

string mensajes::cimaMensajes(){
	if (pilaVacia()) {
		throw underflow_error("La pila está vacía");
	}
	return listaPila[cima];
}

string mensajes::cimaEliminados(){
	if (pilaVacia()) {
		throw underflow_error("La pila está vacía");
	}
	return pilaEliminados[cima];
}

string mensajes::quitarEliminado(){
	if (pilaVacia()) {
		throw underflow_error("La pila está vacía");
	}
	string aux = pilaEliminados[cima];
	pilaEliminados.pop_back();
	cima--;
	return aux; //auxiliar 
}

string mensajes::quitarMensaje(int indice){
	if (indice < 0 || indice >= (int)msm.size())
		throw out_of_range("Índice fuera de rango");

	insertarEliminado(msm[indice]);
	msm.erase(msm.begin() + indice);
	tamanio = (int)msm.size();
}

void mensajes::limpiarEliminados(){
	if (cima >= 0) {
		cima--;
	}
}

void mensajes::deshacerEliminar(){
	if (pilaVacia()) {
		throw std::underflow_error("No hay mensajes para deshacer");
	}
	string msg = quitarEliminado();
	insertarMensaje(msg);
}

void mensajes::agregarNoLeido(const string& mensaje){

}

vector<string> mensajes::obtenerNoLeido(){
	vector<string> nuevos;
	for (int i = 0; i < (int)colaNoLeidos.size(); i++){
		nuevos.push_back(colaNoLeidos[i]);
	}
	colaNoLeidos.clear();
	frente = 0;
	return nuevos;
}

int mensajes::cantidadNoLeido(){
	return (int)colaNoLeidos.size() - frente;
}

const vector<string>& mensajes::obtenerMensajes() const{
	return msm;
}

bool mensajes::pilaVacia(){
	return cima =- 1;;
}

bool mensajes::pilaLLena(){
	return cima == TAMPILA - 1;
}

