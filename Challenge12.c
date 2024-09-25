#include <stdio.h>

int main (){
int n,a,b,c,d,f ;
if (n == 0000) {printf("0000");}
   printf("entre un nombre entier à chiffres : ");
   scanf("%d" , &n);
   a = n % 10;
   b = (n / 10) % 10;
   c = (n / 100)% 10;
   d = (n / 1000) % 10;
   f = (a * 1000) + (b * 100) + (c * 10) + d ;
    printf("l`inverse de %d est: \n %d\n", n, f);

    return 0;

}
