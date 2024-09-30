
#include <stdio.h>

int main(){
    int n ;
    int S;
    int tab[n];
    printf("donne un nomber:\n");
    scanf("%d", &n);


    for(int i=0 ; i<n; i++){
            printf("le nombre des elements\n");
            scanf("%d",&tab[n]);

    }
    S = 0;
    for(int i=0 ; i<n; i++){
        S+=tab[i]; //S = S + tab[i]
    }
    printf("la sommes%d\n",S);

    return 0;
}
