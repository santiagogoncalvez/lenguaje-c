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

int vectorInsertarEnOrden(tVector *v, int elemento)
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
        // Este es la expresion con aritmetica de punteros para intercambiar valores de posiciones. Similar a: vector[i + 1] = vector[i];
        *(i + 1) = *i;
    }

    *posIns = elemento;

    v->ce++;

    return TODO_OK;
}

int vectorInsertarAlInicio(tVector *v, int elemento)
{
    if(v->ce == TAM) return LLENO;

    int *i;
    for (i = v->vector + v->ce - 1; i >= v->vector; i--) {
        *(i + 1) = *i;
    }

    // Agregar elemento en la primera posición.
    *v->vector = elemento;

    // Aumentar en 1 el tamaño del vector.
    v->ce++;

    return TODO_OK;
};

int vectorInsertarAlFinal(tVector *v, int elemento)
{
    if(v->ce == TAM) return LLENO;

    // Agregar elemento al final
    *(v->vector + v->ce) = elemento;

    // Aumentar en 1 el tamaño del vector.
    v->ce++;

    return TODO_OK;
};

int vectorInsertarEnPos(tVector *v, int elemento, int pos)
{
    if(pos < 0 || pos >= v->ce)
    {
        return false;
    }

    if(v->ce == TAM) return LLENO;

    int *i;
    int *pPos = v->vector + pos;
    for (i = v->vector + v->ce - 1; i >= pPos; i--) {
        *(i + 1) = *i;
    }

    *pPos = elemento;
    v->ce++;

    return TODO_OK;
};

int vectorOrdBuscar(const tVector *v, int elemento)
{
    int pos = -1;
    const int *li = v->vector;
    const int *ls = v->vector + v->ce - 1;
    const int *m;

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
    int pos = -1;

    const int *i;
    for (i = v->vector; i <= v->vector + v->ce - 1; i++) {
        if(*i == elemento) {
            pos = i - v->vector;
        }
    }

    return pos;
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
    // Todos debn ser auxiliares
    int *i, *desordenado, aux, *limite = v->vector + v->ce - 1;

    do
    {
        desordenado = NULL;
        for(i = v->vector; i < limite; i++)
        {
            if(*i > *(i + 1))
            {
                aux = *i;
                *i = *(i + 1);
                *(i + 1) = aux;
                desordenado = i;
            }
        }

        limite = desordenado;
    }
    while (desordenado);
};
