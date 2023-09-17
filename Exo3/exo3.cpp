#include <iostream>
#include <cmath>
using namespace std;


int valeurIntervalle(string& message, double min, double max) {
	cout << message;
	double n;
	cin >> n;

	while (n < min || n > max) {
		cout << message;
		cin >> n;
	}
	int integerValue = static_cast<int>(n);

	return integerValue;
}

 
int main() {
	double minTemps = 0;
	const double maxTemps = INFINITY;
	double min = -100;
	double max = 100;
	double collision;
	double tempsTotal; // plus grand que 0
	double x1; // vitesse est est pos entre -100 et 100
	double v1;
	double x2;
	double v2;
	double pos1;
	double pos2;
	string messageTemps = "Entrez le temps total : ";
	string messagePosTrain1 = "Entrez la position initiale du premier train : ";
	string messageVitTrain1 = "Entrez la vitesse du premier train : ";
	string messagePosTrain2 = "Entrez la position initiale du second train : ";
	string messageVitTrain2 = "Entrez la vitesse du second train : ";

	tempsTotal= valeurIntervalle(messageTemps,minTemps,maxTemps);
	x1 = valeurIntervalle(messagePosTrain1, min, max);
	v1 = valeurIntervalle(messageVitTrain1, min, max);
	x2 = valeurIntervalle(messagePosTrain2, min, max);
	v2 = valeurIntervalle(messageVitTrain2, min, max);
	




	collision = static_cast<int>(ceil((x2 - x1) / (v1 - v2)));

	// x= x0+vt  x1=x2  temps =(x2-x1)/(v1-v2)
	
	if (tempsTotal >= collision && collision > 0) {
		for (int i = 1; i <= collision; i++) {
			cout << "Apres " << i << "seconde(s)"<< endl;
			pos1 = x1 + v1 * i;
			pos2 = x2 + v2 * i;
			cout << "Train 1 :" << pos1 << endl;
			cout << "Train 2 :" << pos2 << endl;
			

		}
		cout << "Il y a eu une collision pendant la " << static_cast<int>(ceil(collision)) << "e seconde !";

	}
	else {
		cout << "Il n'y a pas eu de colision dans les " << tempsTotal << " premiere secondes.";
	}
	

}