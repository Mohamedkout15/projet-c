#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include<stdio.h>
typedef struct
{ 
	int jj;
	char mm;
	int aa;
}date;
typedef struct 
{
	char nom_prenom_ob[40];
	char nati_ob[30];
	char appar_ob[20] ;
	
	char sexe_ob; //bouton radio homme femme 
} observateur; 
int ajout_observateur(char *liste_observateur ,observateur o); //o(observateur)
int modifier_observateur(char *liste_observateur,observateur o);
int supprimer_observateur(char *liste_observateur);

 chercher_observateur(char *liste_observateur);
#endif
