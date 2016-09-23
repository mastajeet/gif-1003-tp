/**
 * \file programmePrincipal.cpp
 * \brief  Programme ...
 * A corriger
 * \author theud1
 * \version 0.1
 * \date 2016-09-01
 */
#include <iostream>
#include "fonctionsUtilitaires.h"
using namespace std;


int main()
{
	float variante;
	int tabValeurs[MAX_CAS][MAX_VALEURS];

	cout << "Saisissez des nombres séparés par des entrées " << endl;

	int valeurSaisie;
	for (int i = 0; i < MAX_CAS; ++i)
	{
		for (int j = 0; j < MAX_VALEURS; ++j)
		{
			cin >> valeurSaisie;
			tabValeurs[i][j] = valeurSaisie;
		}
		cout << endl;
	}

	cout << "nombres saisis :" << endl;
	afficherTableau(tabValeurs, MAX_CAS);
	tri2d(tabValeurs, MAX_CAS);
	cout << "nouveau contenu du tableau :" << endl;
	afficherTableau(tabValeurs, MAX_CAS);


	int seuil;
	cout << "saisir la valeur seuil :" << endl;
	cin >> seuil;

	float taux;
	int cardinalite = MAX_VALEURS * MAX_CAS;
	taux = (occurencesPlusGrand(tabValeurs, MAX_CAS, seuil) / cardinalite)
			* 100;

	cout << "il y a " << taux << " pourcent de nombres plus grands que "
				<< seuil << " dans le tableau de valeurs" << endl;

	//ceci est un test
//	seuil = seuil * taux;
//	cout << seuil << endl;

	return 0;
}

