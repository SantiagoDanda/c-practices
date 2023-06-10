#include <stdio.h>

long factorial (int numero);

int main()
{
    printf("%li", factorial(5));
}

long factorial (int numero)
{
    if(numero <= 1) 
        return 1;
    else
        return numero * factorial(numero - 1);
}