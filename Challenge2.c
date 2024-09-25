#include <stdio.h>

int main(void)
{
    float C, K;

    printf("Température en °C : ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("La température en K est : %.2f\n");

    return 0;
}
