#include <string>
#ifndef Client_H
#define Client_H

using namespace std;

class Compte;	//Indication pour le pointeur Compte *compte
class Client
{
	protected:
		int numCIN;
		string Nom;
		string Prenom;
		int numTel;
		int MotdePasse;

	private:
		Compte *compte;	//Pointeur vers la classe Compte (agr�gation biderectionnelle)

	public:
		void affiche();
		void connexionCompte();	//Connexion � un compte LCL
};


#endif // !Client_H

