#include <string>
#include "Client.h"
#include <iomanip>
#include <iostream>

using namespace std;

void Client::connexionCompte()
{
	int verifNumCIN;	//Cr�ations des variables de v�rification
	int verifMDP;
	int tentative = 3;

	cout << "" << endl;
	cout << "		[**********Connexion**********]" << endl;

	cout << "Numero CIN: " << endl;
	cin >> verifNumCIN;

	cout << "Mot de Passe: " << endl;
	cin >> verifMDP;

	while (verifNumCIN != numCIN) //Tant que le num�ro CIN ne correspond pas � celle des donn�es inscrit
	{
		while (verifMDP != MotdePasse)	//Tant que le mot de passe ne correspond pas � celle des donn�es inscrit
		{
			cout << "\n" << "Numero CIN ou mot de passe incorrect. Veuillez recommencer." << endl; //Message d'erreur
			cout << "" << endl;
			cout << "		[**********Connexion**********]" << endl;

			cout << "\n" << "		Tentative : " << tentative << endl; //Affiche les tentatives restants
			tentative--;

			cout << "Numero CIN: " << endl;
			cin >> verifNumCIN;

			cout << "Mot de Passe: " << endl;
			cin >> verifMDP;

			if (tentative == -1) //Chaque connexion incorrect d�cremente de 1 la variable tentative
			{
				cout << "Trop de tentative incorrect.Fermeture de l'application." << endl; //Message d'erreur quand les nombre de tentatives est atteinte
				return;
			}
		}
	}
	cout << "Vous etes connecte a votre connecte." << endl; //Message de connexion r�ussite
}

void Client::affiche()
{
		cout << Nom << endl;
		cout << Prenom << endl;
		cout << numCIN << endl;
		cout << MotdePasse << endl;
		cout << numTel << endl;
	
}
