#include <stdio.h>

int main(){
    int j, m, a;
    printf("la date a cet fromat : jj/mm/aaaa :");
    scanf("%d/%d/%d", &j, &m, &a);
    switch (m){
case 1:
    m = 1;
    printf("%d-janvier-%d", j, a);
    break;

case 2:
    m = 2;
    printf("%d-Feverier-%d", j, a);
    break;

case 3:
    m = 3;
    printf("%d-Mars-%d", j, a);
    break;

case 4:
    m = 4;
    printf("%d-Avril-%d", j, a);
    break;

case 5:
    m = 5;
    printf("%d-Mai-%d", j, a);
    break;

case 6:
    m = 6;
    printf("%d-Juin-%d", j, a);
    break;

case 7:
    m = 7;
    printf("%d-Juillet-%d", j, a);
    break;

case 8:
    m = 8;
    printf("%d-Août-%d", j, a);
    break;

case 9:
    m = 9;
    printf("%d-Septembre-%d", j, a);
    break;

case 10:
    m = 10;
    printf("%d-Octobre-%d", j, a);
    break;

case 11:
    m = 11;
    printf("%d-Novembre-%d", j, a);
    break;

case 12:
    m = 12;
    printf("%d-Décembre-%d", j, a);
    break;
    }
return 0;


}
