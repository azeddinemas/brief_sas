

int retire(montant){
    int retireMon ,r;
    printf("\nplease enter le montant que vou voulez retire: ");
    scanf("%d",&retireMon);
    r =montant - retireMon;
    printf("=====    Votre solde est   : %d  =====\n",r);
    opperations(r);
    return 0;
}
