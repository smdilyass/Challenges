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

    // Insertion par d�faut de 10 r�servations
    for (int i = 0; i < 10; i++) {
        // Remplissage des tableaux par des valeurs par d�faut
        strcpy(nom[i], "Nom");
        nom[i][3] = '0' + (i + 1);  // Ajoute un num�ro � la fin du nom
        nom[i][4] = '\0';  // Assurez-vous que c'est une cha�ne valide

        strcpy(prenom[i], "Prenom");
        prenom[i][6] = '0' + (i + 1);  // Ajoute un num�ro � la fin du pr�nom
        prenom[i][7] = '\0';  // Assurez-vous que c'est une cha�ne valide

        // Remplissage direct des autres informations
        telephone[i][0] = '0';
        telephone[i][1] = '1';
        telephone[i][2] = '2';
        telephone[i][3] = '3';
        telephone[i][4] = '4';
        telephone[i][5] = '5';
        telephone[i][6] = '6';
        telephone[i][7] = '7';
        telephone[i][8] = '0' + (i % 10);  // Dernier chiffre al�atoire
        telephone[i][9] = '\0';  // Terminer la cha�ne

        age[i] = 20 + i;
        strcpy(statut[i], "valid�");
        reference[i] = 1000 + i; // R�f�rence unique

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
        date[i][9] = '3'; // Ann�e
        date[i][10] = '\0'; // Terminer la cha�ne

        x++;
    }

    do {
        printf("\n\n\t************* MENU ************\n\n");
        printf("1. Ajouter une r�servation :\n");
        printf("2. Modifier ou supprimer une r�servation :\n");
        printf("3. Afficher les d�tails d'une r�servation :\n");
        printf("4. Tri des r�servations :\n");
        printf("5. Recherche des r�servations :\n");
        printf("6. Statistiques :\n");
        printf("7. Quitter le programme.\n");
        printf("Entrez un choix (1-7) : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                if (x < MAX_RESERVATIONS) {
                    printf("Entrez le nom : ");
                    scanf("%s", nom[x]);
                    printf("Entrez le pr�nom : ");
                    scanf("%s", prenom[x]);
                    printf("Entrez le t�l�phone : ");
                    scanf("%s", telephone[x]);
                    printf("Entrez l'�ge : ");
                    scanf("%d", &age[x]);
                    printf("Entrez le statut (valid�, report�, annul�, trait�) : ");
                    scanf("%s", statut[x]);
                    reference[x] = 1000 + x; // R�f�rence unique
                    printf("Entrez la date (JJ/MM/AAAA) : ");
                    scanf("%s", date[x]);
                    printf("R�servation ajout�e avec succ�s ! R�f�rence : %d\n", reference[x]);
                    x++;
                } else {
                    printf("Capacit� maximale de r�servations atteinte.\n");
                }
                break;
            }
            case 2: {
                int ref, found = 0;
                printf("Entrez la r�f�rence de la r�servation � modifier : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("Modification de la r�servation avec r�f�rence %d\n", ref);
                        printf("Entrez le nouveau nom : ");
                        scanf("%s", nom[i]);
                        printf("Entrez le nouveau pr�nom : ");
                        scanf("%s", prenom[i]);
                        printf("Entrez le nouveau t�l�phone : ");
                        scanf("%s", telephone[i]);
                        printf("Entrez le nouvel �ge : ");
                        scanf("%d", &age[i]);
                        printf("Entrez le nouveau statut : ");
                        scanf("%s", statut[i]);
                        printf("Entrez la nouvelle date (JJ/MM/AAAA) : ");
                        scanf("%s", date[i]);
                        printf("R�servation modifi�e avec succ�s !\n");
                        break;
                    }
                }
                if (!found) {
                    printf("Cette r�f�rence n'existe pas.\n");
                }
                break;
            }
            case 3: {
                int ref, found = 0;
                printf("Entrez la r�f�rence de la r�servation � afficher : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("D�tails de la r�servation :\n");
                        printf("Nom : %s\n", nom[i]);
                        printf("Pr�nom : %s\n", prenom[i]);
                        printf("T�l�phone : %s\n", telephone[i]);
                        printf("�ge : %d\n", age[i]);
                        printf("Statut : %s\n", statut[i]);
                        printf("R�f�rence : %d\n", reference[i]);
                        printf("Date : %s\n", date[i]);
                        break;
                    }
                }
                if (!found) {
                    printf("Cette r�f�rence n'existe pas.\n");
                }
                break;
            }
            case 4: {
                // Tri des r�servations par nom
                for (int i = 0; i < x - 1; i++) {
                    for (int j = i + 1; j < x; j++) {
                        if (strcmp(nom[i], nom[j]) > 0) {
                            // �change des noms
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
                printf("R�servations tri�es par nom.\n");
                break;
            }
            case 5: {
                int ref, found = 0;
                printf("Entrez la r�f�rence de la r�servation � rechercher : ");
                scanf("%d", &ref);

                for (int i = 0; i < x; i++) {
                    if (reference[i] == ref) {
                        found = 1;
                        printf("R�servation trouv�e : %s %s, t�l�phone : %s, �ge : %d, statut : %s, date : %s\n",
                               nom[i], prenom[i], telephone[i], age[i], statut[i], date[i]);
                        break;
                    }
                }
                if (!found) {
                    printf("Cette r�f�rence n'existe pas.\n");
                }
                break;
            }
         }}
                while(choix !=7);

return 0;
}


