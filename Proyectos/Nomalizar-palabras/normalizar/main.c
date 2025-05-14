#include <stdio.h>
#include <stdlib.h>
#include "../TDA-secuencia-palabras/TDA-secuencia-palabras.h"


char* normalizar(char *cadDest, const char *cadOrig);

int main()
{
    char cadOrig[] = "23NorMALIzar--  33#@|#unA32�?caDENA`+�";
    char cadDest[101];

    normalizar(cadDest, cadOrig);

    //Aca se imprime basura porque 'cadDest' no fue modificado todav�a, en ningun lado de 'normalizar()' se modifica, solo se esta usando 'cadOrig'
    puts("\nCadena normalizada:");
    puts(cadDest);

    return 0;
}

char* normalizar(char *cadDest, const char* cadOrig)
{
    // 'cadDest' no se llama ni se modifica en nigun lado por ahora.
    // por el momento esta funcion solo muestra por consola las palabras que encuentra en la cadena

    //LLAMAR  secuenciaCerrar, que pone al final de la cadena '\n'
    SecuenciaPalabras secL, secE;
    Palabra pal;

    secuenciaPalabrasCrear(&secL, cadOrig);
    secuenciaPalabrasCrear(&secE, cadDest);
    secuenciaPalabrasLeer(&secL, &pal);
    while(!secuenciaPalabrasFin(&secL))
    {
        // TODO: hacer la función palabraATitulo() que se ejecuta después que  palabraMostrar(&pal)
        palabraMostrar(&pal);
        palabraATitulo(&pal);
        secuenciaPalabrasEscribir(&secE, &pal);

        if(secuenciaPalabrasLeer(&secL, &pal))
            secuenciaPalabrasEscribirCaracter(&secE,
                                              ' ');
    }

    secuenciaPalabrasCerrar(&secL);
    secuenciaPalabrasCerrar(&secE);

    return cadDest;
};



















