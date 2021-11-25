
 void opperations(montant,Nom){
    int choix ;
    printf("\n===============================================\n");
    printf("======    LE MENU PRINCIPAL PERMET DE    ======\n");
    printf("===============================================\n");
    printf("== 1: RETIRE EN COMPTE BANCAIRE              ==\n");
    printf("== 2: DEPOT A VOTRE COMPTES BANCAIRES        ==\n");
    printf("== 3: AFFICHE  VOTRE COMPTES BANCAIRES       ==\n");
    printf("== 4: QUITTER L APPLICATION                  ==\n");
    printf("===============================================\n\n");
    printf("Entrer Votre Choix : ");
    scanf("%d",&choix);
          switch (choix)
    {

    case 1 :
        {
            printf("\n===============================================\n");
            printf("=====    RETIRE VOTRE ARGENT             =====\n");
            printf("===============================================\n");
            retire(montant);
            break;
        }

    case 2 :
        {
            printf("\n===============================================\n");
            printf("=====    DEPOT VOTRE ARGENT             =====\n");
            printf("===============================================\n");
            depot(montant);
            break;
        }
    case 3 :{
            printf("\n===============================================\n");
            printf("=====     VOIR VOTRE COMPTE             =====\n");
            printf("===============================================\n");
            mon_compte(Nom,montant);
            break;
        }
     }
}
