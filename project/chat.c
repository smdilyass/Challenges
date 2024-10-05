#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESERVATIONS 100

int main() {
    int choix, x = 0;
    char nom[MAX_RESERVATIONS][20];
    char prenom[MAX_RESERVATIONS][20];
    char telephone[MAX_RESERVATIONS][15];
    int age[MAX_RESERVATIONS];
    char statut[MAX_RESERVATIONS][10];
    int reference[MAX_RESERVATIONS];
    char date[MAX_RESERVATIONS][11]; // Format: JJ/MM/AAAA

    // Insertion par défaut de 10 réservations
    for (int i = 0; i < 10; i++) {
        // Remplissage des tableaux par des valeurs par défaut
        strcpy(nom[i], "Nom");
        nom[i][3] = '0' + (i + 1);  // Ajoute un numéro à la fin du nom
        nom[i][4] = '\0';  // Assurez-vous que c'est une chaîne valide

        strcpy(prenom[i], "Prenom");
        prenom[i][6] = '0' + (i + 1);  // Ajoute un numéro à la fin du prénom
        prenom[i][7] = '\0';  // Assurez-vous que c'est une chaîne valide

        // Remplissage direct des autres informations
        telephone[i][0] = '0';
        telephone[i][1] = '1';
        telephone[i][2] = '2';
        telephone[i][3] = '3';
        telephone[i][4] = '4';
        telephone[i][5] = '5';
        telephone[i][6] = '6';
        telephone[i][7] = '7';
        telephone[i][8] = '0' + (i % 10);  // Dernier chiffre aléatoire
        telephone[i][9] = '\0';  // Terminer la chaîne

        age[i] = 20 + i;
        strcpy(statut[i], "validé");
        reference[i] = 1000 + i; // Référence unique

        // Remplissage direct de la date
        date[i][0] = '0' + (1 + (i % 30) / 10); // Jour
        date[i][1] = '0' + (1 + (i % 30) % 10);
        date[i][2] = '/';
        date[i][3] = '0' + (1 + (i % 12) / 10); // Mois
        date[i][4] = '0' + (1 + (i % 12) % 10);
        date[i][5] = '/';
        date[i][6] = '2';
        date[i][7] = '0';
        date[i][8] = '2';
        date[i][9] = '3'; // Année
        date[i][10] = '\0'; // Terminer la chaîne

        x++;
    }

    do {
        printf("\n\n\t************* MENU ************\n\n");
        printf("1. Ajouter une réservation :\n");
        printf("2. Modifier ou supprimer une réservation :\n");
        printf("3. Afficher les détails d'une réservation :\n");
        printf("4. Tri des réservations :\n");
        printf("5. Recherche des réservations :\n");
        printf("6. Statistiques :\n");
        printf("7. Quitter le programme.\n");
        printf("Entrez un choix (1-7) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                if (x < MAX_RESERVATIONS) {
                    printf("Entrez le nom : ");
                    scanf("%s", nom[x]);
                    printf("Entrez le prénom : ");
                    scanf("%s", prenom[x]);
                    printf("Entrez le téléphone : ");
                    scanf("%s", telephone[x]);
                    printf("Entrez l'âge : ");
                    scanf("%d", &age[x]);
                    printf("Entrez le statut (validé, reporté, annulé, traité) : ");
                    scanf("%s", statut[x]);
                    reference[x] = 1000 + x; // Référence unique
                    printf("Entrez la date (JJ/MM/AAAA) : ");
                    scanf("%s", date[x]);
                    printf("Réservation ajoutée avec succès ! Référence : %d\n", reference[x]);
                    x++;
                } else {
                    printf("Capacité maximale de réservations atteinte.\n");
                }
                break;
            }
            case 2: {
                int ref, found = 0;
                printf("Entrez la référence de la réservation à modifier : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("Modification de la réservation avec référence %d\n", ref);
                        printf("Entrez le nouveau nom : ");
                        scanf("%s", nom[i]);
                        printf("Entrez le nouveau prénom : ");
                        scanf("%s", prenom[i]);
                        printf("Entrez le nouveau téléphone : ");
                        scanf("%s", telephone[i]);
                        printf("Entrez le nouvel âge : ");
                        scanf("%d", &age[i]);
                        printf("Entrez le nouveau statut : ");
                        scanf("%s", statut[i]);
                        printf("Entrez la nouvelle date (JJ/MM/AAAA) : ");
                        scanf("%s", date[i]);
                        printf("Réservation modifiée avec succès !\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Cette référence n'existe pas.\n");
                }
                break;
            }
            case 3: {
                int ref, found = 0;
                printf("Entrez la référence de la réservation à afficher : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("Détails de la réservation :\n");
                        printf("Nom : %s\n", nom[i]);
                        printf("Prénom : %s\n", prenom[i]);
                        printf("Téléphone : %s\n", telephone[i]);
                        printf("Âge : %d\n", age[i]);
                        printf("Statut : %s\n", statut[i]);
                        printf("Référence : %d\n", reference[i]);
                        printf("Date : %s\n", date[i]);
                        break;
                    }
                }
                if (!found) {
                    printf("Cette référence n'existe pas.\n");
                }
                break;
            }
            case 4: {
                // Tri des réservations par nom
                for (int i = 0; i < x - 1; i++) {
                    for (int j = i + 1; j < x; j++) {
                        if (strcmp(nom[i], nom[j]) > 0) {
                            // Échange des noms
                            char tempNom[20], tempPrenom[20], tempTelephone[15], tempStatut[10], tempDate[11];
                            int tempAge, tempRef;

                            strcpy(tempNom, nom[i]);
                            strcpy(nom[i], nom[j]);
                            strcpy(nom[j], tempNom);

                            strcpy(tempPrenom, prenom[i]);
                            strcpy(prenom[i], prenom[j]);
                            strcpy(prenom[j], tempPrenom);

                            strcpy(tempTelephone, telephone[i]);
                            strcpy(telephone[i], telephone[j]);
                            strcpy(telephone[j], tempTelephone);

                            tempAge = age[i];
                            age[i] = age[j];
                            age[j] = tempAge;

                            strcpy(tempStatut, statut[i]);
                            strcpy(statut[i], statut[j]);
                            strcpy(statut[j], tempStatut);

                            tempRef = reference[i];
                            reference[i] = reference[j];
                            reference[j] = tempRef;

                            strcpy(tempDate, date[i]);
                            strcpy(date[i], date[j]);
                            strcpy(date[j], tempDate);
                        }
                    }
                }
                printf("Réservations triées par nom.\n");
                break;
            }
            case 5: {
                int ref, found = 0;
                printf("Entrez la référence de la réservation à rechercher : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("Réservation trouvée : %s %s, téléphone : %s, âge : %d, statut : %s, date : %s\n",
                               nom[i], prenom[i], telephone[i], age[i], statut[i], date[i]);
                        break;
                    }
                }
                if (!found) {
                    printf("Cette référence n'existe pas.\n");
                }
                break;
            }
         }}
                while(choix !=7);

return 0;
}


