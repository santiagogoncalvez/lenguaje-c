#include "vector.h"


void vectorCrear(tVector *v)
{
    v->elementosInsertados = 0;
}

bool vectorLleno (const tVector *v)
{
    return v->elementosInsertados == TAM;
}

int vectorCantElementos(const tVector *v)
{
    return v->elementosInsertados;
}

bool vectorVacio(const tVector *v)
{
    return v->elementosInsertados == 0;
}

bool vectorInsertarEnOrden(tVector *v, int elemento)
{
    int i, j;

    if(v->elementosInsertados == TAM)
    {
        return false;
    }

    i = 0;
    while(i < v->elementosInsertados && v->datos[i] < elemento)
    {
        i++;
    }

    for(j = v->elementosInsertados; j > i; j--)
    {
        v->datos[j] = v->datos[j - 1];
    }

    v->datos[i] = elemento;
    v->elementosInsertados++;

    return true;
}

void vectorDestruir(tVector *v)
{
    v->elementosInsertados = 0;
}

bool vectorEliminarElemento(tVector *v, int n, int *elementoEliminado) {
    if(n < 0 || n >= v->elementosInsertados)
    {
        return false;
    }

    *elementoEliminado = v->datos[n];

    for(int i = n; i < v->elementosInsertados - 1; i++)
    {
        v->datos[i] = v->datos[i + 1];
    }

    v->elementosInsertados--;

    return true;
}

void vectorMostrar(const tVector *v) {
    int i;

    printf("\n");
    for(i = 0; i < v->elementosInsertados; i++) {
        printf("%d ", v->datos[i]);
    }
    printf("\n");
}
























