#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int status() {
    int stat;
    printf("\t\t***entrez le statut *** :\n");
    printf("\t\t***pour valide entrez 1 *** :\n");
    printf("\t\t***pour reporte entrez 2 *** :\n");
    printf("\t\t***pour annule entrez 3 *** :\n");
    printf("\t\t***pour traite entrez 4 *** :\n");
    scanf("%d", &stat);
    switch (stat) {
        case 1:
            printf("valide\n");
            break;
        case 2:
            printf("reporte\n");
            break;
        case 3:
            printf("annule\n");
            break;
        case 4:
            printf("traite\n");
            break;
        default:
            printf("\nnumber incorrect. entrez un autre choix\n");
    }
    return stat;  // Return the status
}



int main() {
    int choix, modif, x = 10, num;
    char nom[100][20];
    char prenom[100][20];
    char telephone[100][20];
    int age[100];
    int statut[100];
    int reff[100];
    char date[100][15];

    strcpy(nom[0], "Ben hammo");
    strcpy(prenom[0], "Omar");
    strcpy(telephone[0], "0651234567");
    age[0] = 28;
    reff[0] = 10001;
    strcpy(date[0], "01/01/2024");
    statut[0] = 1;

    strcpy(nom[1], "Bennani");
    strcpy(prenom[1], "Kabour");
    strcpy(telephone[1], "0652345678");
    age[1] = 55;
    reff[1] = 10002;
    strcpy(date[1], "02/01/2024");
    statut[1] = 2;

    strcpy(nom[2], "Otizal");
    strcpy(prenom[2], "Youssef");
    strcpy(telephone[2], "0653456789");
    age[2] = 19;
    reff[2] = 10003;
    strcpy(date[2], "03/01/2024");
    statut[2] = 3;

    strcpy(nom[3], "Ben ladn");
    strcpy(prenom[3], "Ossama");
    strcpy(telephone[3], "0654567890");
    age[3] = 60;
    reff[3] = 10004;
    strcpy(date[3], "11/09/2009");
    statut[3] = 4;

    strcpy(nom[4], "Abou");
    strcpy(prenom[4], "Obaida");
    strcpy(telephone[4], "0655678901");
    age[4] = 40;
    reff[4] = 10005;
    strcpy(date[4], "07/10/2023");
    statut[4] = 1;

    strcpy(nom[5], "Arafat");
    strcpy(prenom[5], "Yassir");
    strcpy(telephone[5], "0656789012");
    age[5] = 80;
    reff[5] = 10006;
    strcpy(date[5], "28/05/1964");
    statut[5] = 2;

    strcpy(nom[6], "Hassan");
    strcpy(prenom[6], "Mohammed");
    strcpy(telephone[6], "0657890123");
    age[6] = 34;
    reff[6] = 10007;
    strcpy(date[6], "07/01/2024");
    statut[6] = 3;

    strcpy(nom[7], "Al ayoubi");
    strcpy(prenom[7], "Salah eddin");
    strcpy(telephone[7], "0658901234");
    age[7] = 60;
    reff[7] = 10008;
    strcpy(date[7], "08/01/2024");
    statut[7] = 4;

    strcpy(nom[8], "Ben ziad");
    strcpy(prenom[8], "Tariq");
    strcpy(telephone[8], "0659012345");
    age[8] = 45;
    reff[8] = 10009;
    strcpy(date[8], "09/01/2024");
    statut[8] = 1;

    strcpy(nom[9], "El khattabi");
    strcpy(prenom[9], "Abdelkrim");
    strcpy(telephone[9], "0650123456");
    age[9] = 70;
    reff[9] = 10010;
    strcpy(date[9], "02/03/1956");
    statut[9] = 2;

    do {
        printf(" \n\n\t*************MENU************\n\n");
        printf("1. Ajouter une reservation :\n");
        printf("2. Modifier une reservation :\n");
        printf("3. Supprimer une reservation :\n");
        printf("4. Afficher les details d'une reservation :\n");
        printf("5. Tri des réservations :\n");
        printf("6. Recherche des reservations :\n");
        printf("7. Statistiques :\n");
        printf("8. Quitter le programme.\n");
        printf("entrez un choix 1 OU 2 OU 3 OU 4 OU 5 OU 6 OU 7 :\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("entrez la reservation :\n");
                printf("entrez le nom :\n");
                scanf("%s", nom[x]);
                printf("entrez le prenom :\n");
                scanf("%s", prenom[x]);
                printf("entrez le telephone :\n");
                scanf("%s", telephone[x]);
                printf("entrez l age : \n");
                scanf("%d", &age[x]);
                statut[x] = status();
                printf("la reference est : %d\n", x + 10001);
                printf("entrez la date (jj/mm/aaaa):\n");
                scanf("%s", date[x]);
                printf("\n\n\t\t**La reservation a été ajoutée avec succès**\n\n");
                reff[x] = x + 10001;
                x++;
                break;
            case 2: {
                int ref;
                printf("\n\tentrez la reference unique de reservation pour modifier:\n");
                scanf("%d", &ref);
                int found = 0;
                for (int i = 0; i < x; i++) {
                    if (reff[i] == ref) {
                        found = 1;
                        printf("\t\t***vous modifiez la reservation de reference %d*** :\n", ref);
                        printf("\t\t***1. Modifier le nom ***\n");
                        printf("\t\t***2. Modifier le prenom ***\n");
                        printf("\t\t***3. Modifier le telephone ***\n");
                        printf("\t\t***4. Modifier l'age ***\n");
                        printf("\t\t***5. Modifier la date ***\n");
                        scanf("%d", &modif);
                        switch (modif) {
                            case 1:
                                printf("Ancien nom : %s\n", nom[i]);
                                printf("Entrez le nouveau nom:\n");
                                scanf("%s", nom[i]);
                                break;
                            case 2:
                                printf("Ancien prenom : %s\n", prenom[i]);
                                printf("Entrez le nouveau prenom:\n");
                                scanf("%s", prenom[i]);
                                break;
                            case 3:
                                printf("Ancien telephone : %s\n", telephone[i]);
                                printf("Entrez le nouveau telephone:\n");
                                scanf("%s", telephone[i]);
                                break;
                            case 4:
                                printf("Ancien age : %d\n", age[i]);
                                printf("Entrez le nouvel age:\n");
                                scanf("%d", &age[i]);
                                break;
                            case 5:
                                printf("Ancienne date : %s\n", date[i]);
                                printf("Entrez la nouvelle date:\n");
                                scanf("%s", date[i]);
                                break;
                            default:
                                printf("Choix invalide.\n");
                                break;
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("Reference non trouvee.\n");
                }
                break;
            }
            case 3: {
                int sup;
                printf("\nEntrez la reference unique de la reservation a supprimer:\n");
                scanf("%d", &sup);
                int found = 0;
                for (int i = 0; i < x; i++) {
                    if (reff[i] == sup) {
                        for (int j = i; j < x - 1; j++) {
                            strcpy(nom[j], nom[j + 1]);
                            strcpy(prenom[j], prenom[j + 1]);
                            strcpy(telephone[j], telephone[j + 1]);
                            age[j] = age[j + 1];
                            strcpy(date[j], date[j + 1]);
                            reff[j] = reff[j + 1];
                        }
                        x--;
                        found = 1; //true
                        printf("\nReservation supprime avec succes.\n");
                        break;
                    }
                }

                if (!found)//false
                    {
                    printf("Reference non trouvee.\n");
                }
                break;
            }

            case 4:
                for (int i = 0; i < x; i++) {
                    printf("****************\n");
                    printf("Nom : %s\n", nom[i]);
                    printf("Prenom : %s\n", prenom[i]);
                    printf("Telephone : %s\n", telephone[i]);
                    printf("Age : %d\n", age[i]);
                    printf("Date : %s\n", date[i]);
                    printf("Reference : %d\n", reff[i]);
                    switch (statut[i]) {
            case 1:
                printf("Statut : valide\n");
                break;
            case 2:
                printf("Statut : reporte\n");
                break;
            case 3:
                printf("Statut : annule\n");
                break;
            case 4:
                printf("Statut : traite\n");
                break;
            default:
                printf(" ce ne pas un choix\n");
        }
                }
                break;

            default:
                printf("Choix invalide.\n");
                break;

        case 5: {
    printf("\n\t*** Choisissez  ***\n");
    printf("\t1. Tri par nom!!!!!!\n");
    printf("\t2. Tri par reference\n");
    printf("\t3. Tri par age\n");

    int tri;
    scanf("%d", &tri);

    switch (tri) {
        case 1: {
        printf("solition pas trouver");
        break;
        }
        case 2: {
            for (int i = 0; i < x - 1; i++) {
                for (int j = i + 1; j < x; j++) {
                    if (reff[i] > reff[j]) {
                        char swap;
                        int swapp;

                        for (int k = 0; nom[i][k] != '\0' || nom[j][k] != '\0'; k++) {
                            swap = nom[i][k];
                            nom[i][k] = nom[j][k];
                            nom[j][k] = swap;
                        }

                        for (int k = 0; prenom[i][k] != '\0' || prenom[j][k] != '\0'; k++) {
                            swap = prenom[i][k];
                            prenom[i][k] = prenom[j][k];
                            prenom[j][k] = swap;
                        }

                        for (int k = 0; telephone[i][k] != '\0' || telephone[j][k] != '\0'; k++) {
                            swap = telephone[i][k];
                            telephone[i][k] = telephone[j][k];
                            telephone[j][k] = swap;
                        }

                        swapp = age[i];
                        age[i] = age[j];
                        age[j] = swapp;

                        swapp = reff[i];
                        reff[i] = reff[j];
                        reff[j] = swapp;

                        for (int k = 0; date[i][k] != '\0' || date[j][k] != '\0'; k++) {
                            swap = date[i][k];
                            date[i][k] = date[j][k];
                            date[j][k] = swap;
                        }
                    }
                }
            }
            break;
        }
        case 3: { // Sort by age
            for (int i = 0; i < x - 1; i++) {
                for (int j = i + 1; j < x; j++) {
                    if (age[i] > age[j]) {
                        char swap;
                        int swapp;
                        // Swap names
                        for (int k = 0; nom[i][k] != '\0' || nom[j][k] != '\0'; k++) {
                            swap = nom[i][k];
                            nom[i][k] = nom[j][k];
                            nom[j][k] = swap;
                        }

                        for (int k = 0; prenom[i][k] != '\0' || prenom[j][k] != '\0'; k++) {
                            swap = prenom[i][k];
                            prenom[i][k] = prenom[j][k];
                            prenom[j][k] = swap;
                        }

                        for (int k = 0; telephone[i][k] != '\0' || telephone[j][k] != '\0'; k++) {
                            swap = telephone[i][k];
                            telephone[i][k] = telephone[j][k];
                            telephone[j][k] = swap;
                        }

                        swapp = age[i];
                        age[i] = age[j];
                        age[j] = swapp;

                        swapp = reff[i];
                        reff[i] = reff[j];
                        reff[j] = swapp;

                        for (int k = 0; date[i][k] != '\0' || date[j][k] != '\0'; k++) {
                            swap = date[i][k];
                            date[i][k] = date[j][k];
                            date[j][k] = swap;
                        }
                    }
                }
            }

            break;
        }
        default:
            printf("Choix incorrect.\n");
            break;
    }
    for (int i = 0; i < x; i++) {
            printf("****************\n");
            printf("Nom : %s\n", nom[i]);
            printf("Prenom : %s\n", prenom[i]);
            printf("Telephone : %s\n", telephone[i]);
            printf("Age : %d\n", age[i]);
            printf("Date : %s\n", date[i]);
            printf("Reference : %d\n", reff[i]);
           }
            break;
          }
                  case 6: {
            printf("\n\t*** Rechercher une réservation ***\n");
            printf("\t1. Rechercher par nom\n");
            printf("\t2. Rechercher par référence!!!!!\n");
            printf("\t3. Rechercher par téléphone!!!!!\n");

            int rech;
            scanf("%d", &rech);

            switch (rech) {
                case 1: {
                    char recherche[100];
                    printf("\nEntrez le nom à rechercher:\n");
                    scanf("%s", recherche);
                    int found = 0;
                    for (int i = 0; i < x; i++) {
                        if (strcmp(nom[i], recherche) == 0) {
                            printf("\nReservation trouvee :\n");
                            printf("Nom : %s\nPrenom : %s\nTelephone : %s\nege : %d\nDate : %s\nReference : %d\n", nom[i], prenom[i], telephone[i], age[i], date[i], reff[i]);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Aucune reservation trouvee pour ce nom.\n");
                    }
                    break;
                }
                case 2:{
                printf("Aucune resulte .\n");
                break;
                }
                case 3:{
                printf("Aucune resulte .\n");
                break;
                }
                default:
                    printf("Choix invalide.\n");
                    break;
            }
            break;
        }
        case 7: {
            printf("\n\t*** Statistiques ***\n");
            printf("Nombre total de réservations : %d\n", x);
            if (x > 0) {
                float s = 0;
                for (int i = 0; i < x; i++) {
                    s += age[i];
                }
                float m = s / x;
                printf("Âge moyen des personnes : %.2f\n", m);
            } else {
                printf("Aucune reservation disponible pour calculer les statistiques.\n");
            }
            break;
        }

        case 8:
            printf("\nProgramme termine.\n");
            break;


        }
    }while (choix != 8);

    printf("Programme terminé.\n");
    return 0;
}
