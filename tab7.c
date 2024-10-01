#include <stdio.h>

int main (){
int n , i;
printf("entre le nomber des element \n:");
scanf("%d", &n);
int T[n];
for ( i=0;i<n;i++){
    printf("T[%d]",i);
    scanf("%d",&T[i]);
}
printf("%d",T[i]);
for(i=0;i<n;i++){
printf("%d\t",T[i]);

for (i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (T[i]>T[j]){
            int x;
            x=T[i];
            T[i]=T[j];
            T[j]=x;

        }
        for(int i=0; i<n;i++){
            printf("%d",T[i]);
    }
}

}}
return 0;
}
