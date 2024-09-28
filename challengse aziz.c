#include <stdio.h>

int main(){
 int L, l,A, P;
  printf("donne moi la longueur de cet rectangle  :\n  ");
  scanf("%d",&L);
  printf("donne moi la largeur de cet rectangle :\n  ");
  scanf("%d",&l);
  A = L * l;
  P = 2 * (L + l);
  printf(" l aire de cet rectangle  est : %d \n\n perimetre de cet rectangle  et  : %d\n ", A, P );

return 0;
}
