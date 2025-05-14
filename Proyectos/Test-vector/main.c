//TDA-vector con aritm�tica de punteros

#include <stdio.h>
#include <stdlib.h>

#include "../TDA-vector-lib/Vector.h"

int main()
{
    tVector v;

    /*
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
    vectorInsertarEnOrden(&v, 4);
    vectorInsertarEnOrden(&v, 6);

    // Mostrar vector
    printf("Mostrar vector");
    vectorMostrar(&v);

    // Buscar elemento en un vector ordenado
    int elemBuscar = 1;
    printf("\nBuscar elemento en un vector ordenado");
    printf("\nEl elemento %d esta en la posicion: %d", elemBuscar, vectorOrdBuscar(&v, elemBuscar));

    // Eliminar un elemento en un vector ordenado
    printf("\n\nEliminar un elemento en un vector ordenado");
    int elemEliminar = 1;
    vectorOrdEliminar(&v, elemEliminar);
    vectorMostrar(&v);

    // Eliminar una posicion de un vector
    printf("\nEliminar una posicion de un vector");
    int posElim = 8;
    vectorEliminarDePos(&v, posElim);
    vectorMostrar(&v);


    // Agregar un elemento al inicio
    printf("\nAgregar un elemento al inicio");
    if(!vectorInsertarAlInicio(&v, 70))
        printf("\nVector lleno");


    vectorMostrar(&v);

    printf("\nAgregar un elemento al inicio");
    if(!vectorInsertarAlInicio(&v, 100))
        printf("\nVector lleno");
    vectorMostrar(&v);

    printf("\nAgregar un elemento al inicio");
    if(!vectorInsertarAlInicio(&v, 200))
        printf("\nVector lleno");
    vectorMostrar(&v);



    // Resetear vector
    printf("\nResetear vector");
    // Crear vector
    vectorCrear(&v);
    // Agregar elementos
    vectorInsertarEnOrden(&v, 7);
    vectorInsertarEnOrden(&v, 1);
    vectorInsertarEnOrden(&v, 8);
    vectorInsertarEnOrden(&v, 2);
    vectorInsertarEnOrden(&v, 9);
    vectorInsertarEnOrden(&v, 3);
    vectorInsertarEnOrden(&v, 5);
    vectorInsertarEnOrden(&v, 4);
    vectorInsertarEnOrden(&v, 6);
    vectorMostrar(&v);


    // Agregar un elemento al final
    printf("\nAgregar un elemento al final");
    if(!vectorInsertarAlFinal(&v, 20))
        printf("\nVector lleno");
    vectorMostrar(&v);

    printf("\nAgregar un elemento al final");
    if(!vectorInsertarAlFinal(&v, 30))
        printf("\nVector lleno");
    vectorMostrar(&v);

    // Resetear vector
    printf("\nResetear vector");
    // Crear vector
    vectorCrear(&v);
    // Agregar elementos
    vectorInsertarEnOrden(&v, 7);
    vectorInsertarEnOrden(&v, 1);
    vectorInsertarEnOrden(&v, 8);
    vectorInsertarEnOrden(&v, 2);
    vectorInsertarEnOrden(&v, 9);
    vectorInsertarEnOrden(&v, 3);

    if(vectorInsertarEnOrden(&v, 3) == DUPLICADO)
        printf("\nElemento duplicado");

    vectorInsertarEnOrden(&v, 5);
    vectorInsertarEnOrden(&v, 4);
    vectorInsertarEnOrden(&v, 6);
    vectorMostrar(&v);


    // Agregar un elemento en una posicion
    printf("\nAgregar un elemento en una posicion");
    if(!vectorInsertarEnPos(&v, 20, 5))
        printf("\nVector lleno");
    vectorMostrar(&v);

    printf("\nAgregar un elemento en una posicion");
    if(!vectorInsertarEnPos(&v, 30, 5))
        printf("\nVector lleno");
    vectorMostrar(&v);

    // Buscar un elemento en un vector desordenado
    printf("\nBuscar un elemento en un vector desordenado");
    vectorMostrar(&v);
    printf("\n%d", vectorDesordBuscar(&v, 9));
    */



    vectorCrear(&v);
    vectorInsertarAlFinal(&v, 7);
    vectorInsertarAlFinal(&v, 1);
    vectorInsertarAlFinal(&v, 8);
    vectorInsertarAlFinal(&v, 2);
    vectorInsertarAlFinal(&v, 9);
    vectorInsertarAlFinal(&v, 3);
    vectorInsertarAlFinal(&v, 5);
    vectorInsertarAlFinal(&v, 4);
    vectorInsertarAlFinal(&v, 6);

    // Ordenar vector
    printf("\n\nOrdenar vector");
    vectorMostrar(&v);
    vectorOrdenar(&v);
    vectorMostrar(&v);



    return 0;
}






























