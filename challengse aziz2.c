#include <stdio.h>

int main(){
    int age;
    printf("donne moi l age de vous:\n");
    scanf("%d",&age);
if (age >= 18){
    printf("vous etes eligible pour voter :)");

}else{
    printf("vous n'etes eligible pour voter :(");
}
return 0;


}
