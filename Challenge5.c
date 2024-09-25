#include <stdio.h>

int main()
{
    float C , Eau;

    printf("la température en Celsius : ");
    scanf("%f" ,&C);
      if (C < 0 ) {
    printf(" l'état de l'eau à cette température : Solide");
   } else if (0 <= C && C < 100) {
    printf(" l'état de l'eau à cette température : Liquide");
   } else if (C >= 100) {
    printf(" l'état de l'eau à cette température : gaz");
   }
    return 0;
}

