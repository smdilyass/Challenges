#include <stdio.h>
#include <stdlib.h>

int main()
{

        int choix;


        char t[100][20];
        char a[100][20];
        float prix[100];
        int quantite[100];

        char nom[50];
        int newq;
        int found = 0;

        char sup[50];
        int x = 0;
        int f=0;
        int i;

        char Rech_a[50];
        char Rech_t[50];

        while(choix <= 7 || choix >= 7){
        printf(" \n\n\t*************MENUE************\n\n");
        printf("1. Ajoutez un livre.\n");
        printf("2. Afficher tous les livres.\n");
        printf("3. Mettre a jour la quantite d'un livre.\n");
        printf("4. Supprimer un livre du Stock\n");
        printf("5. Rechercher un livre.\n");
        printf("6. Afficher le nombre total de livres.\n");
        printf("7. quitter le programm.\n");

        printf("entrez un choix 1 OU 2 OU 3 OU 4 OU 5 OU 6 OU 7 :\n");
        scanf("%d", &choix);



    switch (choix){
case 1:
        printf("entrez le titre du livre %d :\n* ", x + 1);
        scanf("%s", &t[x]);
        printf("entrez l'auteur :\n* ");
        scanf("%s", &a[x]);
        printf("entrez le prix :\n* ");
        scanf("%f", &prix[x]);
        printf("entrez quantite : \n*");
        scanf("%d", &quantite[x]);
        printf("\n\n\t\t\t\t\t****************livre ajoute avec succes !****************\n\n");
        x++;
    break;

case 2:

    for(int i = 0; i < x; i++){
         printf("\n********************\n");
         printf("\n********************\n");
         printf("\t*** %s ***\n", t[i]);
         printf("\t*** %s ***\n", a[i]);
         printf("\t*** %.2f ***\n", prix[i]);
         printf("\t*** %d ***", quantite[i]);
    }

    break;

case 3:

         printf("\n\tentrez le nom de livre a mise ajour:\n");
         scanf("%s", &nom);

    for(int i=0 ; i < x ; i++){
        if(strcmp(nom, t[i]) == 0){
        printf("\t\t***entrez le stock a ajouter*** :\n");
        scanf("%d", &quantite[i]);
        printf("\t\t***stock est mis a jour***");
        found++;
            break;
        }
    }
    if(found == 0) printf("\n\tlivre non trouve\n");

    break;


case 4:


        printf("\n\t***entrez le titre que vous voulez supprimer: \n");
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
    return 0;
}
