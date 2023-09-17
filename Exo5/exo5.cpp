#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX = 10;

struct Inventaire {
	string nom;
	string type;
	int quantite;
	double prix;

};

int main() {

	Inventaire inventaire[MAX]; // Tableau de structures
	int nombreAliments = 0;

	ifstream file("inventaire.txt");

	if (file.is_open()) {
		string line;
		while (nombreAliments < MAX &&
			file >> inventaire[nombreAliments].nom >>
			inventaire[nombreAliments].type >>
			inventaire[nombreAliments].quantite >>
			inventaire[nombreAliments].prix) {
			nombreAliments++;
		}
		file.close();

	}

	double prixMax = 0.0;
	int indiceAlimentCher = -1;

	for (int i = 0; i < nombreAliments; i++) {
		if (inventaire[i].prix > prixMax) {
			prixMax = inventaire[i].prix;
			indiceAlimentCher = i;
		}
	}
}
