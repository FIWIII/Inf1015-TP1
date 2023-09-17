// Exercice 2 : Devinette , nombre aléatoire
#include <iostream>
#include <cstdlib>  // pour srand et rand
#include <ctime>  // pour time
using namespace std;

int lireValeurIntervalle(string& message, double min , double max) {
	cout << message;
	double n;
	cin >> n;

	while (n < min || n > max) {
		cout << message;
		cin >> n;
	}
	int integerValue = static_cast<int>(n);

	return integerValue ;
}

int main() {

	srand(unsigned(time(nullptr))); // initialisation

	int randomNum = rand() % 1001;
	int compteur = 1;
	int min = 0;
	int max = 1000;
	string message = "Entrez un nombre entier : ";


	cout << randomNum << endl;

	int value = lireValeurIntervalle(message, min, max);
	

	while (value != randomNum) {
		if (value < randomNum) {
			cout << "Trop bas. " << endl;
		}
		else {
			cout << " Trop haut." << endl;
		}
		compteur++;
		value = lireValeurIntervalle(message,min,max);


	}
	cout << "Bravo!Vous avez reussi en " << compteur << " tentatives! ";

}