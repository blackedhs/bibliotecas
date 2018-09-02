#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int numeroInt;
    float numeroFloat;
    char numeroChar;
    int numeros[10];
    /*
    utn_verificarNumeroEntero(&numeroInt,"\nIngrese un numero:  ","\nError, Debe ingresar un numero:  ");
    printf("%d",numeroInt);
    utn_verificarNumeroFloat(&numeroFloat,"\nIngrese un numero:  ","\nError, Debe ingresar un numero:  ");
    printf("%.2f",numeroFloat);
    utn_verificarNumeroChar(&numeroChar,"\nSeleccione una opcion :  ","\nError, Debe ingresar una opcion valida:  ");
    printf("%c",numeroChar);
    */
    utn_cargaNumeroAleatoriosEnArrays(&numeros,10,1, 100);
    //utn_mostrarArray(numeros,0,9);
    return 0;
}
