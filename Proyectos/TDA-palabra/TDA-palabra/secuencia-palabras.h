#ifndef SECUENCIA_PALABRAS_H
#define SECUENCIA_PALABRAS_H

#include <stdbool.h>

#include "TDA-palabra.h"

typedef struct {
    char* cur;
    bool finSec;
} SecuenciaPalabras;

void secuenciaPalabrasCrear(SecuenciaPalabras* sec, const char* cad);
bool secuenciaPalabrasLeer(SecuenciaPalabras* sec, Palabra* pal);
bool secuenciaPalabrasFin(const SecuenciaPalabras* sec);

#endif // SECUENCIA-PALABRAS
