#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numero1;
    int Numero2;
    int aux;

    printf("ingrese el valor entero para Numero1: \n");
    scanf("%i", &Numero1);
    printf("ingrese el valor entero para Numero2: \n");
    scanf("%i", &Numero2);

    aux =  Numero1;
    Numero1 = Numero2;
    Numero2 = aux;


    printf("El valor intercambiado del entero Numero1 es: %i\n", Numero1);
    Numero2 = Numero1;
    printf("El valor intercambiado del entero Numero2 es: %i\n",aux);
    return 0;
}
