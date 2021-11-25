void chose(choix){

      switch (choix)
    {

    case 1 :
        {
            printf("\n===================================================\n");
            printf("=======    INTRODUIRE UN COMPTE BANCAIRE    =======\n");
            printf("===================================================\n");
            introduire_compte();
            break;
        }

    case 2 :
        {
            printf("\n=============================================================\n");
            printf("=======    INTRODUIRE UN PLUSIEURS COMPTE BANCAIRE    =======\n");
            printf("=============================================================\n");
            introduire_plisieur_compte();
            break;
        }

    case 3 :
        {
            break;
        }

    default:
        {
            break;
        }
    }
}
