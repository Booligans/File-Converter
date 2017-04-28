#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
	ifstream archivoLectura;
	ofstream archivoEscritura;
	string nombreCompleto, nombreNuevo, linea;
	cout << "Dame un archivo a convertir (con terminacion): ";
	cin >> nombreCompleto;
	cout << "Dame el nombre del nuevo archivo (con terminacion): ";
	cin >> nombreNuevo;
	archivoLectura.open(nombreCompleto);

	if (!archivoLectura.is_open()) {
		cout << "No se pudo abrir el archivo \n";
			system("pause");
	}
	else {
		archivoEscritura.open(nombreNuevo);
		while (!archivoLectura.eof()) {
			getline(archivoLectura, linea);
			archivoEscritura << linea;
		}
		archivoEscritura.close();
	}
	archivoLectura.close();
	return 0;
}