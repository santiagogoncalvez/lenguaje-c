//TDA-vector con aritmética de punteros

#include <stdio.h>
#include <stdlib.h>

#include "../TDA-vector-lib/Vector.h"

int main()
{
    tVector v;

    // Crear vector
    vectorCrear(&v);

    // Agregar elementos
    vectorInsertarEnOrden(&v, 7);
    vectorInsertarEnOrden(&v, 1);
    vectorInsertarEnOrden(&v, 8);
    vectorInsertarEnOrden(&v, 2);
    vectorInsertarEnOrden(&v, 9);
    vectorInsertarEnOrden(&v, 3);
    vectorInsertarEnOrden(&v, 3);
    vectorInsertarEnOrden(&v, 5);
    vectorInsertarEnOrden(&v, 10);
    vectorInsertarEnOrden(&v, 20);
    vectorInsertarEnOrden(&v, 30);

    // Mostrar vector
    vectorMostrar(&v);

    // Buscar elemento en un vector ordenado
    int elemBuscar = 1;
    printf("El elemento %d esta en la posicion: %d", elemBuscar, vectorOrdBuscar(&v, elemBuscar));

    // Eliminar un elemento en un vector ordenado
    int elemEliminar = 1;
    vectorOrdEliminar(&v, elemEliminar);
    vectorMostrar(&v);

    // Eliminar una posición de un vector
    int posElim = 8;
    vectorEliminarDePos(&v, posElim);
    vectorMostrar(&v);




    return 0;
}






























