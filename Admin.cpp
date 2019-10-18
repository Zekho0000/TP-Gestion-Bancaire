#include "Admin.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <mysql.h>



Admin::Admin()	//Déclaration du constructeur Admin pour initialisé les valeur Username = root et MDP = admin
{
	Username = "root";
	MDP = "admin";
}

void Admin::creationCompte()	//Creation d'un compte client
{
	cout << "" << endl;
	cout << "		[**********Creation du Compte LCL**********]" << endl;

	cout << "Veuillez saisir votre nom." << endl;
	cin >> Nom;

	cout << "Veuillez saisir votre prenom." << endl;
	cin >> Prenom;

	cout << "Veuillez saisir votre mot de passe.(4 chiffre minimum)." << endl;
	cin >> MotdePasse;

	cout << "Veuillez saisir votre numero CIN." << endl;
	cin >> numCIN; 

	cout << "Veuillez saisir votre numero de telephone." << endl;
	cin >> numTel; 

	cout << "Votre compte LCL a ete creee." << endl;


	MYSQL* conn;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", "root", "root", "Banque_LCL", 5506, NULL, 0);	//Connexion à la BDD MySQL localhost

	if (conn == NULL)	//Verification de la connexion à MySQL
	{
		cout << mysql_error(conn) << endl;
	}
	else
	{
		//conn = mysql_query(conn, "INSERT INTO client ( Nom, Prenom, Numero_Telephone, Numero_CIN) VALUES ('" + Nom + "','" + Prenom + "','" + numTel + "','" + numCIN + "')");
		cout << "Connected" << endl;

	}
}



void Admin::Modification()
{
	string Modif_Nom, Modif_Prenom;
	int Modif_numCIN, Modif_MotdePasse, Modif_numTel;

	cout << "nom" << endl;
	cin >> Modif_Nom;
	Nom = Modif_Nom;
		
	cout << "prenom" << endl;
	cin >> Modif_Prenom;
	Prenom = Modif_Prenom;

	cout << "mot de passe" << endl;
	cin >> Modif_MotdePasse;
	MotdePasse = Modif_MotdePasse;

	cout << "numero cin" << endl;
	cin >> Modif_numCIN;
	numCIN = Modif_numCIN;

	cout << "numero tel" << endl;
	cin >> Modif_numTel;
	numTel = Modif_numTel;
}	

/*string Admin::getNom()
{
	return Nom;
}	

string Admin::getPrenom()
{
	return Prenom;
}

int Admin::getnumCIN()
{
	return numCIN;
}

int Admin::getMotdePasse()
{
	return MotdePasse;
}

int Admin::getnumTel()
{
	return numTel;
}

void Admin::setNom(string Nom)
{
	Nom = Nom;
}

void Admin::setPrenom(string Prenom)
{
	Prenom = Prenom;
}

void Admin::setnumCIN(int numCIN)
{
	numCIN = numCIN;
}

void Admin::setMotdePasse(int MotdePasse)
{
	MotdePasse = MotdePasse;
}

void Admin::setnumTel(int numTel)
{
	numTel = numTel;
}*/

void Admin::affiche()
{
	cout << Nom << endl;
	cout << Prenom << endl;
	cout << numCIN << endl;
	cout << MotdePasse << endl;
	cout << numTel << endl;
}

