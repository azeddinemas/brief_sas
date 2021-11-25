#include <stdlib.h>
#include <stdio.h>
FILE *fp;
FILE *fg;
void mon_compte(Nom,Montant){
    FILE *fr;
    fr = fopen(Nom, "r");
    char c;
    do{
        c= fgetc(fr);
        printf("%c", c);
    }while(c !=EOF);
     opperations();
}
