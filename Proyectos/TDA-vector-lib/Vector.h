#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

#define TODO_OK 0
#define LLENO 1
#define DUPLICADO 2

typedef struct
{
    int vector[TAM];
    size_t ce;
} tVector;


// Cuando se modifica el tamaño del vector hay quemodificar la propiedad 'v->ce'.
void vectorCrear(tVector *v);
bool vectorLleno (const tVector *v);
int vectorCantElementos(const tVector *v);
bool vectorVacio(const tVector *v);
int vectorInsertarEnOrden(tVector *v, int elemento);
int vectorInsertarAlInicio(tVector *v, int elemento);
int vectorInsertarAlFinal(tVector *v, int elemento);
int vectorInsertarEnPos(tVector *v, int elemento, int pos);
int vectorOrdBuscar(const tVector *v, int elemento);
int vectorDesordBuscar(const tVector *v, int elemento);
void vectorDestruir(tVector *v);
bool vectorOrdEliminar(tVector *v, int elemento);
bool vectorEliminarDePos(tVector *v, int pos);
void vectorMostrar(const tVector *v);
void vectorOrdenar(tVector *v);

#endif // VECTOR_H
