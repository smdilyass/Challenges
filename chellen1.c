#include <stdio.h>

int main (){
float Revenu;
int credit, pret;
    printf("donnee la Revenu annuel (en euros): ");
    scanf("%f", &Revenu);
    printf("donnee la Score de cr�dit (sur 1000): ");
    scanf("%d", &credit);
    printf("donnee la Dur�e du pr�t (en ann�es) : ");
    scanf("%d", &pret);
  if (Revenu >= 30000  && credit >= 700 && pret <= 10){
    printf(" ::: Eligible :) ::::: ");
 }else if (Revenu >= 30000 && credit >= 650 && pret <= 15){
    printf("Eligible avec conditions :|");
 }else if (Revenu < 30000 || credit < 650 || pret > 15){
    printf("Non Eligible :(");

     }

return 0;


}
