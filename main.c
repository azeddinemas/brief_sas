#include <stdlib.h>
#include <stdio.h>

FILE *fp;
FILE *fg;

int main()
{

    int choix;
    menu();
    printf("Entrer Votre Choix Premier: ");
    scanf("%d",&choix);
    chose(choix);

    return 0;
}







