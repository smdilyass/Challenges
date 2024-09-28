#include <stdio.h>

int main()
{
    int n ,x ;
    printf("entree un nombre: \n");
    scanf("%d", &n);
     if ( n <2) printf("%d  c' est pas un nombre premier\n", n);

    else
    {
    for (int i = 2 ; i < n ; i++)
    {
         if (n % i == 0 )
        {
            x=1;
            break;
        }
     }
         if (x == 1)  printf("  %d c' est pas un nombre premier\n", n);
         else printf("c' est un nombre premier");



    }

    return 0;
}
