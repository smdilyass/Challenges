#include <stdio.h>

int main (){
    int x,n,max ,min ;
        printf("donne le nomber des elements :\n");
        scanf("%d",&x);
    int tab[x]  ;
    for(int i = 0 ; i < x; i++){
        printf("donne le nomber %d:\n",i+1);
        scanf("%d",&n);
        tab[i]=n;
    }
        max = tab[0];
        min = tab[0];
    for (int i = 0 ; i < x; i++){
        if(max<tab[i]){
            max = tab[i];
        }
        else if(min>tab[i]){
            min = tab[i];
        }
    }
        printf("le maximum est : %d\nle minimum est :%d", max, min);
    return 0;
}
