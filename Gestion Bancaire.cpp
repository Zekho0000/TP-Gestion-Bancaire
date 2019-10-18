#include "Admin.h"
#include "Client.h"
#include "Compte.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Client client;
	Compte compte;
	Admin admin;

	int Choix = 0;

	cout << "***Bienvenue sur l'ecran d'accueil du distributeur de billet LCL ***" << endl;

	cout << "" << endl;
	cout << "" << endl;

	cout << "Voulez-vous: [1]Connecter a un compte LCL [2]Quitter" << endl;
	cin >> Choix;
	switch (Choix)
	{
	case 1:
		
		client.connexionCompte();
		break;

	case 2:
		return 0;
	case 4:
		compte.afficheInfos();
		break;
	}


}

/*#include <iomanip>
#include <iostream>
#include <mysql.h>
#include <sstream>

using namespace std;

int main()
{
	MYSQL* conn;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", "root", "root", "Banque_LCL", 5506, NULL, 0);

	if (conn)
	{
		cout << "Connected" << endl;
	}
	else
	{
		cout << "Not connected" << endl;
	}

	
	conn = mysql_real_query(conn, );

}*/

