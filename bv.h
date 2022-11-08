#ifndef BUREAUDEVOTE_H_INCLUDED
#define BUREAUDEVOTE_H_INCLUDED
#include<stdio.h>

typedef struct 
{
	int idbv;
	int cebv;
	int cobv;
	int sabv ;
	int idagbv;
	
} listebv; 
listebv chercher (char *l_bv, int id);
int ajout_listebv(char *l_bv ,listebv bv); 
int modifier_listebv(char *l_bv,listebv bv, int id);
int affiche_utilisateur(char *l_bv);
int supprimer_listebv(char *l_bv, int id);
#endif
