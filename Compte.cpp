#include <string>
#include "Client.h"
#include "Compte.h"
#include <iomanip>
#include <iostream>



using namespace std;

Compte::Compte()
{
	solde = 0;
	numUnique = 0;

	if (numUnique == numUnique)
	{
		numUnique = numUnique + 1;
	}

	this->client = NULL;
}

float Compte::crediter()
{
	float Depot;

	cout << "\n" << "	[**********Crediter*********]" << endl;

	cout << "Vous avez actuellement " << solde << " euros sur votre compte." << endl;

	cout << "Combien d'argent voulez-vous deposer?" << endl;
	cin >> Depot;

	solde = solde + Depot;

	cout <<"Vous avez actuellement " << solde << " euros sur votre compte." << endl;

	return solde;
}

float Compte::debiter()
{
	float Retrait;

	cout <<"\n" << "	[**********Debiter**********]" << endl;

	cout << "Vous avez actuellement " << solde << " euros sur votre compte." << endl;

	cout << "Combien d'argent voulez-vous retirer?" << endl;
	cin >> Retrait;

	if (solde > 0)
	{
		solde = solde - Retrait;

		cout << "Vous avez actuellement " << solde << " euros sur votre compte." << endl;

		if (solde < 0)
		{
			solde = solde - solde - solde;
			cout << "Vous avez une dette de " << solde << "euros." << endl;
		}
	}
	else
	{
		cout << "Retrait impossible car vous avez " << solde << " euros sur votre compte." << endl;
	}

	return solde;
}

void Compte::commander()
{
	int verif_numUnique, nb_chequier, disposition, livraison; 
	string format;

	cout << "\n\nVous souhaitez commander un ou des chequier(s).\n" << endl;	//Confirmation de l'operation "Commander"
	cout << "Veuillez d'abord saisir votre numero unique de votre compte." << endl;		//Saisir le numéro unique du compte pour verifier le compte
	cin >> verif_numUnique;	//L'utilisateur ecrit son numero

	while (verif_numUnique != numUnique)	//tant que verification et le numero unique sont differents 
	{
		cout << "Numero Unique inconnue, veuillez resaisir votre numero unique." << endl;	//message d'erreur et tentative de verifcation
		cin >> verif_numUnique;
	}
	
	cout << "Numero: " << numUnique << "\n" << endl;	//affiche le numero unique

	cout << "1)Choisissez le format de votre chequier (50 cheque) entre [Classique], [Portefeuille] ou [Correspondance]." << endl;	//Demande de choisir le format du chequier
	cin >> format;
	cout << "Format du chequier : " << format << endl;	//

	cout << "\n2)Selectionnez le nombre de chequier entre 1 a 3" << endl;
	cin >> nb_chequier;

	while (nb_chequier > 3 || nb_chequier < 1)
	{	
			cout << "Nombre de chequier impossible, veuillez resaisir le nombre." << endl;
			cin >> nb_chequier;
	}

	cout << "\n3)Choisissez le lieu de mise a disposition\n" << endl;
	cout << "[1]Mise a disposition a votre domicile." << endl;
	cout << "[2]Mise a disposition a votre agence." << endl;
	cout << "[3]Livraison dans une autre agence." << endl;
	cin >> disposition;

	switch (disposition)
	{
		case 1:
			cout << "\nRecapitulatif:" << endl;
			cout << "Format du chequier: " << format << endl;
			cout << "Nombre de chequier: " << nb_chequier << endl;
			cout << "Lieu de mise a dispositions : A domicile " << endl;
		break;

		case 2:
			cout << "\nRecapitulatif:" << endl;
			cout << "Format du chequier: " << format << endl;
			cout << "Nombre de chequier: " << nb_chequier << endl;
			cout << "Lieu de mise a dispositions : A votre agence" << endl;
			break;

		case 3:
			cout << "\nSaisir le code de guichet de l'agence " << endl;
			cin >> livraison;

			cout << "\nRecapitulatif:" << endl;
			cout << "Format du chequier: " << format << endl;
			cout << "Nombre de chequier: " << nb_chequier << endl;
			cout << "Lieu de la livraison: " << livraison << endl;
			break;
	}
	return;
}

void Compte::afficheInfos()
{
	int operation = 0;

	cout << "\n\n		[========== Operation ==========]\n" << endl;

	cout << "Numero : " << numUnique << "\n" << endl;;

	cout << "Votre solde actuellement : " << solde << "\n" << endl;
	cout << "Voulez-vous : [1]Crediter [2]Crediter un autre compte [3]Debiter [4]Consulter [5]Faire un virement [6]Commander un chequier [7]Deconnexion [8]Quitter" << endl;
	cin >> operation;

	switch (operation)
	{
		case 1:
			crediter();
			afficheInfos();
		break;

		case 2:
			cout << "En cours de developppement...." << endl;
			afficheInfos();
			break;

		case 3:
			debiter();
			afficheInfos();
			break;

		case 4:
			cout << "En cours de developppement...." << endl;
			afficheInfos();
			break;

		case 5:
			cout << "En cours de developppement...." << endl;
			afficheInfos();
			break;

		case 6:
			commander();
			afficheInfos();
			break;

		case 7:
			client->connexionCompte();
			break;

		case 8:
			return;
			break;
	}
}

