#include <stdio.h>

int main(void)
{
    float C, K;

    printf("Temp�rature en �C : ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("La temp�rature en K est : %.2f\n");

    return 0;
}
