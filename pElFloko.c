#include <stdio.h>

/*Ejercicio, trata sobre marcar cuántas letras de una palabra hay entre su primera y última letra*/

int main ()
{
    char str[101];
    fgets(str, 100, stdin);
    int i = 0;
    while(str[i] != '\n')
        i++;
    char c = str[i-1];
    if(i > 4)
        printf("%c%i%c", str[0], i-2, c);
    else
        printf("%s", str);
}