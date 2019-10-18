#ifndef COMPTE_H
#define COMPTE_H

class Client;	//Indication pour le pointeur Client *client
class Compte
{
	private:
		float solde;
		int numUnique;
		Client* client;	//Pointeur vers la classe Client (agrégation biderectionnelle)

	public:
		Compte();
		float crediter();	//Deposer de l'argent sur le compte
		float crediterAutre();	//Retirer de l'argent sur un autre compte pour ensuite deposer sur le compte
		float debiter();	//Retirer de l'argent sur le compte
		void consulter();	//Consulter le RIB
		float virement();	//Retirer de l'argent du compte pour deposer sur un autre compte
		void commander();	//Commande un chèquier
		void afficheInfos();	//Affiche les infos du compte et les informations

};
#endif 
