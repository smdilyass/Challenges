
#include <stdio.h>

int main(){
    int S, moyenne;
    int tab[5]={10,5,8,12,16};
    for(int i=0 ; i<5; i++){
        S+=tab[i]; //S = S + tab[i]
    }
    moyenne = S / 5;
    printf("la moyennne est est : %d\n",moyenne);
    return 0;
}
