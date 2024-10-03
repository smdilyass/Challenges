#include <stdio.h>
#include <stdlib.h>
int fi(int n ){

if (n==0)
    return 0;
else if (n==1)
    return 1;
else
for (int i = 0; i<=n; i++){
    n=(n-1)+(n-2);}
return n;

}
int main(){
    int n ,i;
printf("entrez un nombre:\n*");
scanf("%d",&n);
for (i=0;i<n;i++){
i = fi(n);
printf("resulte :%d",fi(n));}

       }
