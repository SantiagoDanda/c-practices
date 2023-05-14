#include <stdio.h>

//ejercicio para aprender etiquetas

int main ()
{
    int i = 0;

    if (i != 0)
        goto trolear;
    else
        goto krunker;

    trolear:
    printf("chido");

    krunker:
    printf("etiquetas chidas");

    
}

//No tan recomendables, pues rompen el flujo secuencial del programa.