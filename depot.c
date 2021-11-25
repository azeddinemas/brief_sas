
int depot(montant){
    int depotMon ,r;
    printf("\n please enter le montant que vou voulez depotMon: ");
    scanf("%d",&depotMon);
    r =montant + depotMon;
    printf("=====    Votre current montent is : %d  =====\n",r);
    opperations(r);
    return 0;
}
