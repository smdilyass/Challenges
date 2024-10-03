#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

        int choix,modif,x=0;
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
        if(ref[x]==ref)
        ref++;

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
          if(strcmp(sup, ref[i])==0){
            strcpy(ref[i],ref[x-1]);


            printf("\n\t\t**********la reserve est supprimer***************\n");
            break;

         }


           }
           }while(choix !=7) ;
}




/*
        printf("\t\t***stock est mis a jour***");
        found++;
            break;
        }
    }
    if(found == 0) printf("\n\tlivre non trouve\n");

    break;

case 4:


        printf("\n\t***entrez le refer que vous voulez supprimer: \n");
        scanf("%s", &sup);

    for ( int i = 0; i < x; i++){

        if(strcmp(sup, t[i])==0){
            strcpy(t[i],t[x-1]);
            strcpy(a[i],a[x-1]);
            prix[i]=prix[x-1];
            quantite[i]=quantite[x-1];
            x--;
            found=1;
            printf("\n\t\t**********le livre est supprimer***************\n");
            break;
        }
    }
    break;

case 5:
            found=0;
            printf("\n\t\tentrez l'auteur : ");
            scanf("%s", &Rech_a);
            printf("\n\t\tentrez le titre : ");
            scanf("%s", &Rech_t);
            printf("%d :\n", x);

    for ( int i = 0; i < x; i++){
            printf("%s :  %s :\n", t[i], a[i]);
        if (strcmp(Rech_t, t[i])==0 && strcmp(Rech_a, a[i])==0){
            printf("%s\n", t[i]);
            printf("%s\n", a[i]);
            printf("%.2f\n", prix[i]);
            printf("%d\n", quantite[i]);
            found=1;
            break;
        }
    }
        if(found==0) printf("\n\t\tle livre n'est pas disponible\n");

    break;

case 6:
    for(i=0 ; i<x ; i++){
        f = f + quantite[i];
    }
        printf("\n\tle nombre de livres est: \n%d \n", f);
    break;

case 7:
        printf("\n\t\tvous avez quittez :\n");
    return 0;


    default :
        printf("\n\n\t number incorrect. entrez un autre livre");
}
}
    return 0;*/

