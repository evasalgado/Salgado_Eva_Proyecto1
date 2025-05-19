#include "pch.h"
#include "mensajes.h"
#include <string>

string mensajes::CargarMensajes(fstream& archivo){
	msm.clear();
	string linea;
	while (getline(archivo, linea)) {
		msm.push_back(linea);
	}
	bool valid;
	for (int i = 0; i < (int)msm.size() - 1; i++) {
		valid = false;
		for (int j = 0; j < (int)msm.size() - i - 1; j++) {
			if (msm[j] > msm[j + 1]) {
				std::swap(msm[j], msm[j + 1]);
				valid = true;
			}
		}
		if (!valid) break;
	}
	string resultado;
	for (const auto& msg : msm) {
		resultado += msg + "\n";
	}

	return resultado;
}

void mensajes::GuardarMensajes(fstream& archivo){
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

