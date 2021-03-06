/**
 * \file fonctionsUtilitaires.h
 * \brief
 * \author theud1
 * \version 0.1
 * \date 2016-09-01
 */
#ifndef FONCTIONSUTILITAIRES_H_
#define FONCTIONSUTILITAIRES_H_

static const int MAX_CAS = 4;
static const int MAX_VALEURS = 4;

void triBulle(int p_tabDonnees[MAX_VALEURS]);
void tri2d(int p_tabDonnees[][MAX_VALEURS], int);
int reqOccurencesPlusGrandes(int tabDonnees[][MAX_VALEURS],int p_nombreLignes, int p_valeur);
void afficherTableau(int p_tabDonnees[][MAX_VALEURS], int p_nombreLignes);

#endif /* FONCTIONSUTILITAIRES_H_ */
