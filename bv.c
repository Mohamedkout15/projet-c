#include<stdio.h>
#include "bv.h"
listebv chercher (char *l_bv, int id)
{
	int trouver=0;
	listebv bv;
	FILE * f=fopen(l_bv, "r");
	if(f!=NULL)
	{
		while(trouver==0 && fscanf(f,"%d %d %d %d %d \n",&bv.idbv,&bv.cebv,&bv.cobv,&bv.sabv,&bv.idagbv)!=EOF)
		{
			if(bv.idbv==id)
				trouver=1;
		}
	}
	fclose(f);
	if (trouver==0)
		bv.idbv=-1;
	return bv;
}
int ajout_listebv(char *l_bv ,listebv bv) 
{
	FILE * f=fopen(l_bv, "a");
	if (f!=NULL)
	{

		fprintf(f,"%d %d %d %d %d\n",bv.idbv,bv.cebv,bv.cobv,bv.sabv,bv.idagbv);
		fclose(f);
		return 1;
	}
	else 
		return 0;
}
int modifier_listebv(char *l_bv, listebv nv, int id)
{
	int trouver=0;
	listebv bv;
	FILE * f=fopen(l_bv, "r");
	FILE * f2=fopen("nv.txt", "w");
	if(f!=NULL && f2!=NULL)
	{
		while(fscanf(f,"%d %d %d %d %d\n",&bv.idbv,&bv.cebv,&bv.cobv,&bv.sabv,&bv.idagbv)!=EOF)
		{
			if(bv.idbv==id)
			{
				fprintf(f2,"%d %d %d %d %d\n",nv.idbv,nv.cebv,nv.cobv,nv.sabv,nv.idagbv);
				trouver=1;
			}
			else 
				fprintf(f2,"%d %d %d %d %d\n",bv.idbv,bv.cebv,bv.cobv,bv.sabv,bv.idagbv);
		}
	}
	fclose(f);
	fclose(f2);
	remove(l_bv);
	rename("nv.txt", l_bv);
	return(trouver);
}
int supprimer_listebv(char *l_bv, int id)
{
	int trouver=0;
	listebv bv;
	FILE * f=fopen(l_bv, "r");
	FILE * f2=fopen("nv.txt", "w");
	if(f!=NULL && f2!=NULL)
	{
		while (fscanf(f,"%d %d %d %d %d\n",&bv.idbv,&bv.cebv,&bv.cobv,&bv.sabv,&bv.idagbv)!=EOF)
		{
			if(bv.idbv==id)
				trouver=1;
			else 
				fprintf(f2,"%d %d %d %d %d\n",bv.idbv,bv.cebv,bv.cobv,bv.sabv,bv.idagbv);
		}
	}
	fclose(f);
	fclose(f2);
	remove(l_bv);
	rename("nv.txt",l_bv);
	return trouver;
	
}

