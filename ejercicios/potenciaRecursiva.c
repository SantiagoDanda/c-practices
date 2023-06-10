#include <stdio.h>

int potenciar (int base, int exponente);

int main ()
{
    int base, exponente;
    printf("Base? ");
    scanf("%i", &base);
    printf("Exponente? ");
    scanf("%i", &exponente);
    printf("%i, %i", base, exponente);
    printf("\nEl resultado es: %i", potenciar(base, exponente));
}

int potenciar (int base, int exponente)
{
    if(exponente == 1)
        return base;
    else
        return potenciar(base, exponente-1) * potenciar(base, 1);
}