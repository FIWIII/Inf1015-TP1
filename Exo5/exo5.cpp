#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

const int MAX = 10;

struct Inventaire {
    string nom;
    string type;
    int quantite;
    double prix;
};

// Fontion afin de lire l'inventaire et trouver item plus cher 
int lireInventaire(string filename) {
    ifstream filestream;
    filestream.open(filename.c_str());

    Inventaire inventaire[MAX];
    int n = 0;

    
    string nomCher;
    string typeCher;
    int quantiteCher = 0;
    double prixCher = 0.0;

    string readline;
    while (getline(filestream, readline)) {
        stringstream ss(readline);

        getline(ss, inventaire[n].nom, '\t');
        getline(ss, inventaire[n].type, '\t');
        ss >> inventaire[n].quantite;
        ss.ignore();
        ss >> inventaire[n].prix;

      
        if (inventaire[n].prix > prixCher) {
            nomCher = inventaire[n].nom;
            typeCher = inventaire[n].type;
            quantiteCher = inventaire[n].quantite;
            prixCher = inventaire[n].prix;
        }

        n++;
    }

    filestream.close();

    // Affichage de l'item le plus cher 
    cout << quantiteCher << " " << nomCher << " (" << typeCher << ") a " << prixCher << "$ chacun" << endl;

    return 0;
}

int main() {
    string file = "inventaire.txt";
    int result = lireInventaire(file);

    return 0;
}

