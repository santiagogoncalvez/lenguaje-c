#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vector.h"

int main()
{
    tVector v;
    int elementoEliminado, subindiceElemEliminar;


    printf("Creando vector...");
    vectorCrear(&v);

    if(!vectorLleno(&v))
    {
        vectorInsertarEnOrden(&v, 5);
        vectorMostrar(&v);
    }

    vectorInsertarEnOrden(&v, 3);
    vectorMostrar(&v);

    vectorInsertarEnOrden(&v, 9);
    vectorMostrar(&v);

    vectorInsertarEnOrden(&v, 5);
    vectorMostrar(&v);

    vectorInsertarEnOrden(&v, 1);
    vectorMostrar(&v);


    subindiceElemEliminar = 1;
    printf("\nEliminando el elemento con subindice %d", subindiceElemEliminar);
    vectorEliminarElemento(&v, subindiceElemEliminar, &elementoEliminado);
    printf("\nElemento extraido: %d", elementoEliminado);
    printf("\nVector luego de extraer el elemento:");
    vectorMostrar(&v);


    printf("\nCantidad de elementos insertados: %d", vectorCantElementos(&v));

    printf("\nDestruyendo el vector...");
    vectorDestruir(&v);


    if(vectorVacio(&v))
        printf("\nEl vector se encuentra vacio.");
    else
        printf("\n\nEl vector no se encuentra vacio.");


    return 0;
}






















