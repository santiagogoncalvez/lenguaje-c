#ifndef TDA_PALABRA_H
#define TDA_PALABRA_H

#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

#define TAM_PAL 51

// Esta esctructura guarda una cadena
typedef struct
{
    char vPal[TAM_PAL];
} Palabra;


void palabraMostrar(const Palabra *pal);
bool esLetra(char c);
void palabraATitulo(Palabra *pal);

#endif // TDA_PALABRA_H
