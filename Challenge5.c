#include <stdio.h>

int main()
{
    float C , Eau;

    printf("la temp�rature en Celsius : ");
    scanf("%f" ,&C);
      if (C < 0 ) {
    printf(" l'�tat de l'eau � cette temp�rature : Solide");
   } else if (0 <= C && C < 100) {
    printf(" l'�tat de l'eau � cette temp�rature : Liquide");
   } else if (C >= 100) {
    printf(" l'�tat de l'eau � cette temp�rature : gaz");
   }
    return 0;
}

