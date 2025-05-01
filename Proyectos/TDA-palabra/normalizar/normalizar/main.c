#include <stdio.h>
#include <stdlib.h>
#include "../../TDA-palabra/secuencia-palabras.h"

char* normalizar(char *cadDest, const char *cadOrig);

int main()
{
    char cadOrig[] = "#9238Normalizar..&%$·3";

    char cadDest[101];

    normalizar(cadDest, cadOrig);

    puts(cadDest);

    return 0;
}

char* normalizar(char *cadDest, const char* cadOrig)
{
    //LLAMAR  secuenciaCerrar, que pone al final de la cadena '\n'
    SecuenciaPalabras secL;
    secuenciaPalabrasCrear(&secL, cadOrig);

    Palabra pal;
    secuenciaPalabrasLeer(&secL, &pal);
    while(!secuenciaPalabrasFin(&secL))
    {
        palabraMostrar(&pal);

        secuenciaPalabrasLeer(&secL, &pal);
    }

    return cadDest;
};



















