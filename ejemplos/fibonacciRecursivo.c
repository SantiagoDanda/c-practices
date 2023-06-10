
#include <stdio.h>

long fibonacci (long numero);

int main ()
{
    printf("%li", fibonacci(6));
}


long fibonacci (long numero)
{
    if(numero == 1 || numero == 0)
        return numero;
    else
        return fibonacci(numero - 1) + fibonacci(numero - 2);
}

// 1, 1, 2, 3, 5, 8
// es preferible no usar recursividad en casos de ahorro de memoria
// por las llamadas a las funciones