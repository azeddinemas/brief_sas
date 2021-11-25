#include <stdlib.h>
#include <stdio.h>
FILE *fp;
FILE *fg;
char introduire_compte()
{
    char CIN[20] , Nom[50] , Prenom[50] ;
    int Montant;

    printf("\nEntrer Votre CIN : ");
    scanf("%s",&CIN);

    printf("\nEntrer Votre Nom : ");
    scanf("%s",&Nom);

    printf("\nEntrer Votre Prenom : ");
    scanf("%s",&Prenom);

    printf("\nEntrer Votre Montant : ");
     scanf("%d",&Montant);

     fp = fopen(Nom, "a");
     fg = fopen("tout les compte", "a");

     fprintf(fp,"CIN     : %s \nNOM     : %s \nPrenom  : %s \nMontant : %d \n" ,CIN ,Nom ,Prenom ,Montant);
     fprintf(fg,"CIN     : %s \nNOM     : %s \nPrenom  : %s \nMontant : %d \n" ,CIN ,Nom ,Prenom ,Montant);

     fclose(fp);
     fclose(fg);
    return opperations(Montant,Nom);
}
