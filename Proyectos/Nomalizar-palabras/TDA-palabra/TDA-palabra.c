#include "TDA-palabra.h"

void palabraMostrar(const Palabra *pal)
{
    puts(pal->vPal);
};

bool esLetra(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void palabraATitulo(Palabra *pal) {
    char *iPal = pal->vPal;

    *iPal = toupper(*iPal);
    iPal++;
    while(*iPal) {
        *iPal = tolower(*iPal);
        iPal++;
    }
}
