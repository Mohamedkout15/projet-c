#ifndef RECLAMATIONS_H_INCLUDED
#define RECLAMATIONS_H_INCLUDED
#include<stdio.h>
typedef struct 
{
char trec[1000];
char typerec[100];
int id.listeelectoral;  //appel de id
int numbv;
}reclamations;
int ajouter(reclamations R, char rec []);
int modifier(int id, reclamations nouv, char * rec );
int supprimer(int id, char * rec);
#endif 


