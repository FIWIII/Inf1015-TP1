// Exercice 4 : Tableau trié
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int taille = 10;
	int tableau[taille];
	cout << "Entrez 10 nombres entiers : "; 
	for (int i = 0; i < 10; i++) {
		cin >> tableau[i];
	}

	// Le trie à bulle ( bubble sort ): 

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {;
			if (tableau[j] > tableau[j + 1]) {
				int temp = tableau[j];
				tableau[j] = tableau[j + 1];
				tableau[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << tableau[i] << " ";
	}

}