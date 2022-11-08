#include<stdio.h>
#include "observateur.h"
int ajout_observateur(char *liste_observateur ,observateur o)
{
	FILE * f=fopen(liste_observateur, "a");
	if (f!=NULL)
	{

		fprintf(f,"%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob);
		fclose(f);
		return 1;
	}
	else 
		return 0;
}
int modifier_observateur(char *liste_observateur,observateur o, int *identob)
{
	int tr=0;
	observateur o;
	FILE * f=fopen(liste_observateur, "r");
	FILE * f2=fopen("nouv.txt", "w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,""%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob)!=EOF)
		{
			if(o.identob== id)
			{
				fprintf(f2,"%s %s %s %d %d%s%d %d %s %s %d % s",nouv.nomob,nouv.prenomob,nouv.adrob,nouv.numob,nouv.datob.jour,nouv.datob.mois,nouv.datob.annee,nouv.cinob,nouv.sexeob,nouv.adr_mailob,nouv.identob,nouv.mdpob);
				tr=1
			}
			else 
				fprintf(f2,"%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob);
		}
	}
	fclose(f);
	fclose(f2);
	remove(l_ob);
	rename("nouv.txt", liste_observateur);
	return(tr);
}
int supprimer_observateur(char *liste_observateur, int *identob)
{
	int tr=0;
	observateur.o;
	FILE * f=fopen(liste_observateur, "r");
	FILE * f2=fopen("nouv.txt", "w");
	(if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,""%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob)!=EOF)
		{
			if(o.identob==id)
				tr=1;
			else 
				fprintf(f2,"%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob);
		}
	}
	fclose(f);
	fclose(f2);
	remove(l_ob);
	rename("nouv.txt",liste_observateur);
	return tr;
	
}
observateur chercher (char *liste_observateur, int identob);
{
	int tr=0;
	observateur o;
	FILE * f=fopen(liste_observateur, "r");
	(if(f!=NULL)
	{
		while(tr==0 && fscanf(f,""%s %s %s %d %d%s%d %d %s %s %d % s",o.nomob,o.prenomob,o.adrob,o.numob,o.datob.jour,o.datob.mois,o.datob.annee,o.cinob,o.sexeob,o.adr_mailob,o.identob,o.mdpob)!=EOF)
		{
			if(o.identob==id)
				tr=1;
		}
	}
	fclose(f);
	if (tr==0)
		o.identob=-1;
	return o;
}
