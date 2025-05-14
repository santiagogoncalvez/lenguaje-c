#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../TDAVector/Vector.h"


void printVector(int* vec, size_t ce);


int main()
{
    // Change the code page to support spanish characters in Windows terminal
    system("chcp 65001 > nul");

    Vector miVec;
    if(!vectorCrear(&miVec))
    {
        return SIN_MEM;
    }

    srand(time(NULL));

    for(int i = 1; i <= 100000; i++)
    {
        vectorOrdInsertar(&miVec, rand());
    }

    for(int i = 1; i <= 100000; i++)
    {
        vectorOrdEliminar(&miVec, rand());
    }

    for(int i = 0; i <= RAND_MAX; i++)
    {
        vectorOrdEliminar(&miVec, i);
    }

    vectorDestruir(&miVec);

    return 0;
}


void printVector(int* vec, size_t ce)
{
//    size_t tamVec = sizeof(vec);
//    printf("printVector(): Tam Vec en bytes: %Iu\n", tamVec);

    int* ult = vec + ce - 1;

    for(int* i = vec; i <= ult; i++)
    {
        printf("%d ", *i);
    }

    putchar('\n');
}
