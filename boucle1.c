#include <stdio.h>


int main (){
    int n;
printf("un number positif: ");
scanf("%d", &n);
    int F[n];
    F[0] = 0;
for (i = 2; i < n; i++){
    F[i] = F[i - 1] + F[i - 2];
}



return 0;
}
