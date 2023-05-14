#include <stdio.h>

int contador();
int contadorAuto();

int externa; //declarar una variable aquí es lo mismo que usar la palabra extern.

int main()
{
    //////////////////////////////////////////////////////////
    //duración automática

    //auto, variables por defecto en C, solamente dura lo que el bloque de ejecución dure.
    auto int i = 0; //desuso
    //register, lo mismo que auto, pero las variables se guardan en la cpu.
    register int j = 0; //desuso
    //duración estática

    extern int k; //no se puede inicializar, variables de ámbito global para usarse en otros archivos fuente.
    k = 3;
    //static
    static int l = 0; //mantiene su valor durante toda la ejecución del programa

    for(i = 0; i <= 10; i++)
        printf("%i", contador());

    printf("\n");

    for(i = 0; i <= 10; i++)
        printf("%i", contadorAuto());
    //////////////////////////////////////////////////////////////////////
    return 0;
}

int contador()
{
    static int num = 0;
    num++; //aunque esté saliendo de la ejecución de la función, la  variable conserva su valor
    return num;
}
//las funciones estáticas son útiles como contadores de funciones, compartir datos entre funciones y aparentemente
//controlar acceso a datos globales

int contadorAuto()
{
    auto int num = 0;
    num ++;
    return num;
} //checa las diferencias entre variable auto y estática