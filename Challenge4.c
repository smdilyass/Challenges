#include <stdio.h>

int main()
{
    float km_h , m_s;

    printf("la vitesse en km/h : ");
    scanf("%f" ,&km_h);
      m_s = km_h * 0.27778;
    printf("La vitesse en m/s est : %.4f");

    return 0;
}
