#include <stdio.h>

enum herramientas { martillo, sierra, pala }; //identificador para hacer código más legible

int main ()
{
    enum herramientas tools = sierra;

    printf("%i\n", tools);

    if(tools == sierra)
        printf("tienes una sierra");
    else
        printf("no tienes una sierra");
}