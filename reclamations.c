#include "reclamations.h"
#include<stdio.h>
int ajouter(reclamations R , char rec [])
{
    FILE * f=fopen(rec, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d\n", R.trec, R.typerec, R.id.listeelectoral, R.numbv);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, reclamations nouv, char * rec)
{
reclamation R;
    FILE * f=fopen(rec, "r");
    FILE * f2 =fopen("rec1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d",&R.trec,R.typerec,&R.id.listeelectoral,&R.numbv)!=EOF)
{
if(R.id.listeelectoral!=id.listeelectoral)
        fprintf(f2,"%s %s %d %d\n",R.trec, R.typerec, R.id.listeelectoral, R.numbv);
else

  fprintf(f2,"%s %s %d %d\n",nouv.trec,nouv.typerec,nouv.id.listeelectoral,nouv.numbv);

}
        fclose(f);
        fclose(f2);
remove(rec);
rename("rec1.txt", rec);
        return 1;
    }
}

int supprimer(int id, char * rec)
{
reclamations R;
    FILE * f=fopen(rec, "r");
    FILE * f2 =fopen("rec1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d",&R.trec,R.typerec,&R.id.listeelectoral,&R.numbv)!=EOF)
{
if(R.id.listeelectoral!=id.listeelectoral)
        fprintf(f2,"%s %s %d %d\n",R.trec, R.typerec, R.id.listeelectoral, R.numbv);

}
        fclose(f);
        fclose(f2);
remove(rec);
rename("rec1.txt", rec);
        return 1;
    }
}


