#include "pch.h"
#include "mensajes.h"
#include <string>

void mensajes::CargarMensajes(fstream& archivo){
	bool valid;
	for (int i = 0; i < msm.size(); i++) {
		valid = false;
		for (int j = i; j < tamanio; j++) {
			if (msm[j] > msm[j + 1]) {
				string temp = msm[j];
				msm[j] = msm[j + 1];
				msm[j + 1] = temp;
				valid = true;
			}
		}
		if (valid) {
			break;
		}
	}
	for (const string& historial : msm) {
		archivo << historial << endl;
	}
}

void mensajes::GuardarMensajes(fstream& archivo){
	bool valid;
	string linea;
	msm.clear();
	while (getline(archivo, linea)) {
		msm.push_back(linea);
	}
	for (int i = 0; i < msm.size(); i++) {
		valid = false;
		for (int j = i; j < tamanio; j++) {
			if (msm[j] > msm[j + 1]) {
				string temp = msm[j];
				msm[j] = msm[j + 1];
				msm[j + 1] = temp;
				valid = true;
			}
		}
		if (valid) {
			break;
		}
	}
}

