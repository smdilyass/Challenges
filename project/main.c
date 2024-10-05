#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choix,modif,x=0,reff=0,found=0;
        char nom[100][20];
        char prenom[100][20];
        char telephone[100];
        char statut[100][10];
        int age[100];
        int ref[100];
        char date[100][15];
        int joure[100];
        int mois[100];
        int anne[100];

        do{
        printf(" \n\n\t*************MENUE************\n\n");
        printf("1. Ajouter une reservation :\n");
        printf("2. Modifier ou supprimer une reservation :\n");
        printf("3. Afficher les details d'une reservation :\n");
        printf("4. Tri des réservations :\n");
        printf("5. Recherche des reservations :\n");
        printf("6. Statistiques :\n");
        printf("7. quitter le programm.\n");
        printf("entrez un choix 1 OU 2 OU 3 OU 4 OU 5 OU 6 OU 7 :\n");
        scanf("%d", &choix);



    switch (choix){
case 1:
        printf("entrez la reservation :\n* ");
        printf("entrez le nom :\n* ");
        scanf("%s", nom[x]);
        printf("entrez le prenom :\n* ");
        scanf("%s", &prenom[x]);
        printf("entrez le telephone :\n* ");
        scanf("%s", &telephone[x]);
        printf("entrez l age : \n*");
        scanf("%d", &age[x]);
        printf("entrez le statut: \n*");
        scanf("%s", &statut[x]);
        printf("la reference est : \n*%d\n", x+10001);
        printf("entrez la date :\n");
        printf("entrez le joure :\n*");
        scanf("%d", &joure[x]);
        printf("entrez le mois :\n*");
        scanf("%d", &mois[x]);
        printf("entrez l'annee :\n*");
        scanf("%d", &anne[x]);
        printf("la date est:\n*%d/%d/%d",joure[x],mois[x],anne[x]);
        printf("\n\n\t\t\t\t\t****************la reservation est ajoute avec succes !****************\n\n");
        x++;
    break;
case 2:

         printf("\ntentrez la reference unique de resevation pour modifie:\n*");
         scanf("%d", &ref);

    for(int i=0 ; i < x ; i++){
        if(ref[x]==reff){
        reff++;}

            {
            printf("\t\t***entrez le choix qui vous peveur  *** :\n");
            printf("\t\t***pour modifie le nom entrez 1  *** :\n");
            printf("\t\t***pour modifie le prenom entrez 2  *** :\n");
            printf("\t\t***pour modifie le telephone entrez 3  *** :\n");
            printf("\t\t***pour modifie l'age entrez 4  *** :\n");
            printf("\t\t***pour modifie le date entrez 5  *** :\n");

            scanf("%d",modif);

            switch(modif){
                case 1:
                    printf("vous changez ce nom :*%s*en:\n*",nom[i]);//j'afficher le nom qui est y modifie
                    scanf("%s",nom[i]);
                    break;
                case 2:
                    printf("vous changez ce prenom :*%s*en:\n*",prenom[i]);//j'afficher le prenomqui est y modifie
                    scanf("%s",prenom[i]);
                    break;
                case 3:
                    printf("vous changez cet age :*%d*en:\n*",age[i]);//j'afficher l'age qui est y modifie
                    scanf("%d",age[i]);
                    break;
                case 4:
                    printf("vous changez ce telephone :*%s*en:\n*",telephone[i]);
                    scanf("%s",&telephone[i]);
                    break;
                case 5:
                    printf("vous changez ce date  :*%s*en:\n*",date[i]);
                    scanf("%s",&date[i]);
                    found++;
                    break;
           }
           }else if ( found == 0) {
           printf("ce reference n existe pas"); }
           }

                case 3:
         printf("\n entrez la reference unique de resevation qui vous pouve supprime:\n*");
         scanf("%s", &sup]);
         for(i = 0; i < x;i++){
          if(sup == ref[i])==0){
            strcpy(ref[i],ref[x-1]);


            printf("\n\t\t**********la reserve est supprimer***************\n");
            break;

         }


           }
           }while(choix !=7) ;
}
