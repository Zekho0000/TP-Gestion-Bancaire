#include "Client.h"
#ifndef Admin_H
#define Admin_H

using namespace std;

class Admin : public Client // Classe Admin hérite des attributs proteger de la classe Client
{
	private:
		string Username;
		string MDP;

	public:
		Admin();	//Constructeur 

		void creationCompte();	//Creation d'un compte pour le client
		void Modification();	//Modification d'un compte client

		void affiche();
};


#endif // !Admin_H

