#include <stdio.h>

int main() {
    int n;

    printf("entrez un Number :");
    scanf("%d, &n");
    
    if (n % 2 == 0){
        
        printf("%d est un number pair.\n");

    }else {

        printf("%d est un number impair.\n");
    }
    return 0;


}
    