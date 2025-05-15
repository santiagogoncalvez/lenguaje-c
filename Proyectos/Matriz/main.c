#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define FILAS 4
#define COLUMNAS 4
#define ORDEN 4

void** crearMatriz(size_t tamElem, int filas, int columnas);
void destruirMatriz(void **mat, int filas);

void mostrarMatriz(int **mat, int filas);
int sumaDigonalPrincipal(int **mat, int orden);
int sumaDigonalSecundaria(int **mat, int orden);
int sumaTriangularInferiorDP(int **mat, int orden);
int sumaTriangularSuperiorDS(int **mat, int orden);
void inicializarMatriz(int **mat, int filas, int columnas);


int main()
{
    // int matriz[FILAS][COLUMNAS] =
    // {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}

    // };

    int orden = ORDEN;
    // int (*matriz)[orden] = malloc(sizeof(int) * orden * orden);

    void **matriz = crearMatriz(sizeof(int), orden, orden);
    inicializarMatriz((int**)matriz, orden, orden);

    mostrarMatriz((int**)matriz, 4);
    printf("\nSuma de la diagonal principal: %d", sumaDigonalPrincipal((int**)matriz, 4));
    printf("\nSuma de la diagonal secundaria: %d", sumaDigonalSecundaria((int**)matriz, 4));
    printf("\nSuma triangular inferior (diagonal principal): %d", sumaTriangularInferiorDP((int**)matriz, 4));
    printf("\nSuma triangular superior (diagonal secundaria): %d", sumaTriangularSuperiorDS((int**)matriz, 4));

    destruirMatriz((void**)matriz, 4);

    return 0;
}

void** crearMatriz(size_t tamElem, int filas, int columnas)
{
    void **matriz = malloc(filas * sizeof(void*));

    if(!matriz)
    {
        return NULL;
    }

    void **ult = matriz + filas - 1;

    for(void **i = matriz; i<= ult; i++)
    {
        *i = malloc(tamElem * columnas);

        if(!*i)
        {
            destruirMatriz(matriz, i - matriz);
            return NULL;
        }
    }

    return matriz;
}

void destruirMatriz(void **mat, int filas)
{
    void **ult = mat + filas - 1;

    for(void **i = mat; i<= ult; i++)
    {
        free(*i);
    }

    free(mat);
};


void mostrarMatriz(int **mat, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

int sumaDigonalPrincipal(int **mat, int orden)
{
    int suma = 0;

    for(int i = 0; i < orden; i++)
    {
        suma += mat[i][i];
    }

    return suma;
}

int sumaDigonalSecundaria(int **mat, int orden)
{
    int suma = 0;

    for (int i = 0, j = orden - 1; i < orden; i++, j--)
    {
        suma += mat[i][j];
    }

    return suma;
}

int sumaTriangularInferiorDP(int **mat, int orden)
{
    int suma = 0;

    for(int i = 1; i < orden; i++)
    {
        for(int j = 0; j < i; j++)
        {
            suma += mat[i][j];
        }
    }

    return suma;
}

int sumaTriangularSuperiorDS(int **mat, int orden)
{
    int suma = 0;
    int limI = orden - 2;

    for(int i = 0, limJ = limI; i <= limI; i++, limJ--)
    {
        for(int j = 0; j <= limJ; j++)
        {
            suma += mat[i][j];
        }
    }

    return suma;
}

// Hacer funciones restantes triangulares
// Hacer funci�n que recorra la matriz en espiral


void inicializarMatriz(int **mat, int filas, int columnas)
{
    int cont = 1;

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            mat[i][j] = cont++;
        }
    }
}
