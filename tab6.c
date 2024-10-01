#include <stdio.h>

int main (){
int n , i,y;
    printf("entre le nomber des element \n:");
    scanf("%d", &n);
int T[n];
for (int i=0;i<n;i++){
    printf("T[%d]=",i+1);
    scanf("%d",&T[i]);
}


for (int e = 0 ; e < n ; e++){
    if(T[e+1]<T[e]){
        y = T[e+1]; //SWAPING
        T[e] = T[e+1];
        T[e+1] = y;
}
for (int i = 0; i < n ; i++)
printf("%d",T[i]);
}}

