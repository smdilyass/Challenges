#include <stdio.h>

int main(){
   char character;
    printf("untrez un caracter : ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
       printf("%c est une voyelle.\n");
    break;

    default:
    printf("%c n'pas un voyelle.");
    }

    return 0;}

