// Exercice 1 : Nombre premier
#include <iostream>
#include <cmath>
using namespace std;

bool estPremier(int n) {
  
    for (int i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int trouverPremier(int n) {
    while (true) {
        n= n+1; 
        if (estPremier(n)) {
            return n; 
        }
    }
}

int main() {
    int n;
    cout << "Entrez un nombre entier : ";
    cin >> n;

    while (n != -1) {
        if (estPremier(n)) {
            cout << "Le prochain nombre premier est " << n << endl;
        }
        else {
            int nombre = trouverPremier(n);
            cout << "Le prochain nombre premier est " << nombre << endl;
        }

        cout << "Entrez un nombre entier : ";
        cin >> n;
    }
    return 0;
}
