#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
	ifstream readFile;
	ofstream writeFile;
	string filename, newName, line;
	cout << "Introduce file to convert (with filename extension): ";
	cin >> filename;
	cout << "Introduce the new name of the file (with filename extension): ";
	cin >> newName;
	readFile.open(filename);

	if (!readFile.is_open()) {
		cout << "The file could not be opened \n";
		system("pause");
	}
	else {
		writeFile.open(newName);
		while (!readFile.eof()) {
			getline(readFile, line);
			writeFile << line;
		}
		writeFile.close();
	}
	readFile.close();
	return 0;
}
