#include <string>
#include "Client.h"
#include <iomanip>
#include <iostream>

using namespace std;

void Client::connexionCompte()
{
	int verifNumCIN;	//Créations des variables de vérification
	int verifMDP;
	int tentative = 3;

	cout << "" << endl;
	cout << "		[**********Connexion**********]" << endl;

	cout << "Numero CIN: " << endl;
	cin >> verifNumCIN;

	cout << "Mot de Passe: " << endl;
	cin >> verifMDP;

	while (verifNumCIN != numCIN) //Tant que le numéro CIN ne correspond pas à celle des données inscrit
	{
		while (verifMDP != MotdePasse)	//Tant que le mot de passe ne correspond pas à celle des données inscrit
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

			if (tentative == -1) //Chaque connexion incorrect décremente de 1 la variable tentative
			{
				cout << "Trop de tentative incorrect.Fermeture de l'application." << endl; //Message d'erreur quand les nombre de tentatives est atteinte
				return;
			}
		}
	}
	cout << "Vous etes connecte a votre connecte." << endl; //Message de connexion réussite
}

void Client::affiche()
{
		cout << Nom << endl;
		cout << Prenom << endl;
		cout << numCIN << endl;
		cout << MotdePasse << endl;
		cout << numTel << endl;
	
}
