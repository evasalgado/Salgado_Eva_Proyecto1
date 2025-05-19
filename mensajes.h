#pragma once //clase incluye pilas y colas 
#include "Contacto.h"
#include <vector>

class mensajes {
	static const int TAMPILA = 100;
	string listaPila[TAMPILA];
	vector<string> msm, pilaEliminados, colaNoLeidos;
	int tamanio, cima= -1, frente, final;
	void ordenarMensajes();
public:
	mensajes() {}
	void CargarMensajes(fstream& archivo);
	void GuardarMensajes(fstream& archivo);
	void insertarMensaje(const string& mensaje); //inserta los mensajes eliminados a la pila
	void insertarEliminado(const string& mensaje);
	string cimaMensajes();
	string cimaEliminados();
	string quitarEliminado();
	string quitarMensaje(int indice);
	void limpiarEliminados();
	void deshacerEliminar();
	void agregarNoLeido(const string& mensaje);
	vector<string> obtenerNoLeido();
	int cantidadNoLeido();
	const vector<string>& obtenerMensajes() const;
	bool pilaVacia();
	bool pilaLLena();
	~mensajes(){}
};

