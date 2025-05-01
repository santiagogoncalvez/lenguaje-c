#include "vector.h"


void vectorCrear(tVector *v)
{
    v->ce = 0;
}

bool vectorLleno (const tVector *v)
{
    return v->ce == TAM;
}

int vectorCantElementos(const tVector *v)
{
    return v->ce;
}

bool vectorVacio(const tVector *v)
{
    return v->ce == 0;
}

bool vectorInsertarEnOrden(tVector *v, int elemento)
{
    if(v->ce == TAM)
    {
        return LLENO;
    }

    int *i = v->vector;
    int *ult = i + (v->ce - 1);

    while(i <= ult && elemento > *i)
    {
        i++;
    }

    if(i <= ult && elemento == *i)
    {
        return DUPLICADO;
    }

    int *posIns = i;
    for (i = ult; i >= posIns; i--)
    {
        // Este es la expresión con aritmética de punteros para intercambiar valores de posiciones. Similar a: vector[i + 1] = vector[i];
        *(i + 1) = *i;
    }

    *posIns = elemento;

    v->ce++;

    return TODO_OK;
}

bool vectorInsertarAlInicio(tVector *v, int elemento)
{
    return true;
};

bool vectorInsertarAlFinal(tVector *v, int elemento)
{
    return true;
};

bool vectorInsertarEnPos(tVector *v, int elemento, int pos)
{
    return true;
};

int vectorOrdBuscar(const tVector *v, int elemento)
{
    int pos = -1;
    const int *li = v->vector;
    const int *ls = v->vector + v->ce - 1;
    const int *m;

    //? Modificar para funcionar con aritmética de punteros
    while(pos == -1 && li <= ls)
    {
        // "m" guarda un valor de memoria, no un número. Entonces estoy calculando el medio y el resultado va a ser directamente la dirección de memoria, no un número.
        m = li + (ls - li) / 2;

        if(*m == elemento)
        {
            pos = m - v->vector;
        }
        else
        {
            if(elemento > *m)
            {
                li = m + 1;
            }
            else
            {
                ls = m - 1;
            }
        }
    }

    return pos;
}

int vectorDesordBuscar(const tVector *v, int elemento)
{
    return 0;
}

void vectorDestruir(tVector *v)
{
    v->ce = 0;
}

bool vectorOrdEliminar(tVector *v, int elemento)
{
    int pos = vectorOrdBuscar(v, elemento);
    if(pos == -1)
    {
        return false;
    }

    vectorEliminarDePos(v, pos);

    return true;
};

bool vectorEliminarDePos(tVector *v, int pos)
{
    if(pos < 0 || pos >= v->ce)
    {
        return false;
    }

    for(int *i = v->vector + pos; i < v->vector + v->ce - 1; i++)
    {
        *i = *(i+1);
    }

    v->ce--;

    return true;
}

void vectorMostrar(const tVector *v)
{
    int i;

    printf("\n");
    for(i = 0; i < v->ce; i++)

    {
        printf("%d ", v->vector[i]);
    }
    printf("\n");
}

void vectorOrdenar(tVector *v)
{

};
