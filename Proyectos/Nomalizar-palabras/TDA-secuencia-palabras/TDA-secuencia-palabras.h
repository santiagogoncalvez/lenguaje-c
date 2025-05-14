#ifndef TDA_SECUENCIA_PALABRAS_H
#define TDA_SECUENCIA_PALABRAS_H

#include <stdbool.h>

#include "../TDA-palabra/TDA-palabra.h"

// Esta estructura sigue los punteros que apuntan a una dirección de una parte de una cadena
typedef struct
{
    char* cur;
    bool finSec;
} SecuenciaPalabras;

void secuenciaPalabrasCrear(SecuenciaPalabras* sec, const char* cad);
bool secuenciaPalabrasLeer(SecuenciaPalabras* sec, Palabra* pal);
bool secuenciaPalabrasFin(const SecuenciaPalabras* sec);
void secuenciaPalabrasCerrar(SecuenciaPalabras *sec);
void secuenciaPalabrasEscribir(SecuenciaPalabras *sec, const Palabra *pal);
void secuenciaPalabrasEscribirCaracter(SecuenciaPalabras *sec, char car);

#endif // TDA_SECUENCIA_PALABRAS_H_INCLUDED
