#ifndef utilisateur_H_INCLUDED
#define utilisateur_H_INCLUDED
typedef struct
{
int jj;
int mm;
int aa;
}date;
typedef struct
{
char nom[50];
char prenom[50];
int  cin;
date ddn;
char login[50];
char mdp[50];
char role[50];
}utilisateur;

int ajouter(utilisateur user , char userr []);
int modifier(int id, utilisateur nw_user, char * userr);
int supprimer(int id, char * userr);
utilisateur chercher(int id, char * userr);
#endif // utilisateur_H_INCLUDED
