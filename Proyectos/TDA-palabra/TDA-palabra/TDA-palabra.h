#ifndef TDA_PALABRA_H_INCLUDED
#define TDA_PALABRA_H_INCLUDED

#include <stdbool.h>
#include <stdio.h>

#define TAM_PAL 51

typedef struct
{
    char vPal[TAM_PAL];
} Palabra;


void palabraMostrar(const Palabra* pal);
bool esLetra(char c);

#endif // TDA-PALABRA_H_INCLUDED
