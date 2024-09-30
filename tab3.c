#include <stdio.h>

int main (){
    int x,n,S ;
        printf("donne le nomber des elements :\n");
        scanf("%d",&x);
    int tab[x]  ;
    for(int i = 0 ; i < x; i++){
        printf("donne le nomber %d:\n",i+1);
        scanf("%d",&n);
        tab[i]=n;
    }
        S = 0;
    for (int i = 0 ; i < x; i++){
        S = S + tab[i];
    }
        printf("%d", S);
    return 0;
}

