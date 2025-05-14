#include <stdio.h>
#include <stdlib.h>
#include "../TDAPalabra/SecuenciaPalabras.h"


char* normalizar(char* cadDest, const char* cadOrig);


int main()
{
    char cadOrig[] = "#$%cAdeNA&/(a)&/(/()=)NOrMaLiZaR";
    char cadDest[101];

    normalizar(cadDest, cadOrig);

    puts(cadDest);

    return 0;
}


char* normalizar(char* cadDest, const char* cadOrig)
{
    SecuenciaPalabras secL;
    secuenciaPalabrasCrear(&secL, cadOrig);

    SecuenciaPalabras secE;
    secuenciaPalabrasCrear(&secE, cadDest);

    Palabra pal;

    secuenciaPalabrasLeer(&secL, &pal);
    while(!secuenciaPalabrasFin(&secL))
    {
        palabraATitulo(&pal);
        secuenciaPalabrasEscribir(&secE, &pal);
        
        if(secuenciaPalabrasLeer(&secL, &pal))
        {
            secuenciaPalabrasEscribirCaracter(&secE, ' ');
        }
    }

    secuenciaPalabrasCerrar(&secE);

    return cadDest;
}
