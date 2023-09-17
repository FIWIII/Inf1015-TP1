// Exercice 3 : Collision
#include <iostream>
#include <cmath>
using namespace std;


int lireValeurIntervalle(string& message, double min, double max) {
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
	double posTrainUn; // vitesse est est pos entre -100 et 100
	double vitTrainUn;
	double posTrainDeux;
	double vitTrainDeux;
	double pos1;
	double pos2;
	string messageTemps = "Entrez le temps total : ";
	string messagePosTrain1 = "Entrez la position initiale du premier train : ";
	string messageVitTrain1 = "Entrez la vitesse du premier train : ";
	string messagePosTrain2 = "Entrez la position initiale du second train : ";
	string messageVitTrain2 = "Entrez la vitesse du second train : ";

	tempsTotal= lireValeurIntervalle(messageTemps,minTemps,maxTemps);
	posTrainUn = lireValeurIntervalle(messagePosTrain1, min, max);
	vitTrainUn = lireValeurIntervalle(messageVitTrain1, min, max);
	posTrainDeux = lireValeurIntervalle(messagePosTrain2, min, max);
	vitTrainDeux = lireValeurIntervalle(messageVitTrain2, min, max);
	




	collision = static_cast<int>(ceil((posTrainDeux - posTrainUn) / (vitTrainUn - vitTrainDeux)));

	// x= x0+vt  x1=x2  temps =(x2-x1)/(v1-v2)
	
	if (tempsTotal >= collision && collision > 0) {
		for (int i = 1; i <= collision; i++) {
			cout << "Apres " << i << "seconde(s)"<< endl;
			pos1 = posTrainUn + vitTrainUn * i;
			pos2 = posTrainDeux + vitTrainDeux * i;
			cout << "Train 1 :" << pos1 << endl;
			cout << "Train 2 :" << pos2 << endl;
			

		}
		cout << "Il y a eu une collision pendant la " << static_cast<int>(ceil(collision)) << "e seconde !";

	}
	else {
		cout << "Il n'y a pas eu de colision dans les " << tempsTotal << " premiere secondes.";
	}
	

}