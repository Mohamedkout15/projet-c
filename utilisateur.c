#include "utilisateur.h"
#include<stdio.h>
int ajouter(utilisateur user , char userr [])
{
    FILE * f=fopen(userr, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(char login, utilisateur nw_user, char * userr)
{
utlilsateur user;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("user1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role)!=EOF)
{
if(user.login!=login)
        fprintf(f2,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role);
else

  fprintf(f2,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role);

}
        fclose(f);
        fclose(f2);
remove(user);
rename("user1.txt", user);
        return 1;
    }

}

int supprimer(char login, char * user)
{
utilisateur user;
    FILE * f=fopen(user, "r");
    FILE * f2 =fopen("user1.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role)!=EOF)
{
if(user.login!=login)
        fprintf(f2,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("user1.txt", user);
        return 1;
    }
}

utilisateur chercher(char login, char * user)
{
utlisateur user; int tr=0;
    FILE * f=fopen(user, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %d %d %d %d %s %s %s",user.nom,user.prenom,user.cin,user.ddn.jj,user.ddn.mm,user.dnn.aa,user.login,user.role)!=EOF && tr==0)
{if(login==user.login)
tr=1;
}
}
if(tr==0)
user.id=-1;
return user;

}
