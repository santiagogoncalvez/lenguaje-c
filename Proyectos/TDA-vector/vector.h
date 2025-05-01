#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct {
    int datos[TAM];
    size_t elementosInsertados;
} tVector;


void vectorCrear(tVector *v);
bool vectorLleno (const tVector *v);
int vectorCantElementos(const tVector *v);
bool vectorVacio(const tVector *v);
bool vectorInsertarEnOrden(tVector *v, int elemento);
void vectorDestruir(tVector *v);
bool vectorEliminarElemento(tVector *v, int n, int *elementoEliminado);
void vectorMostrar(const tVector *v);



#endif // VECTOR_H
