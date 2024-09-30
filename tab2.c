#include <stdio.h>

int main (){
    int tab[5] ,n  ;
    for(int i = 0 ; i < 5; i++){
    printf("donne le nomber %d:\n",i+1);
    scanf("%d",&n);
        tab[i]=n;
    }
    printf("\[");
    for (int i = 0 ; i<5; i++)
        printf("%d", tab[i]);
        printf("\]");
    return 0;
}
