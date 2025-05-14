#include "TDA-secuencia-palabras.h"

//* Siempre que se escriba un caracter se debe aumentar en uno el puntero del caracter actual de la secuencia SecuenciaPalabras->cur++
void secuenciaPalabrasCrear(SecuenciaPalabras *sec, const char* cad)
{
    sec->cur = (char*)cad;
    sec->finSec = false;
};

bool secuenciaPalabrasLeer(SecuenciaPalabras *sec, Palabra* pal)
{
    // Lo que hace esta función es leer una cadena hasta encontrar una letra, extraer la secuencia de letras depositandolas en la estructura Palabra y reposicionar el puntero SecuenciaPalabras->cur al siguiente elemento de la finalización de la secuencia.
    //*sec->cur: mientras haya un caracter, el caracter '\0' es 0 entonces es falso.
    while(*sec->cur && !esLetra(*sec->cur))
    {
        sec->cur++;
    }

    //No habia letras
    if(!*sec->cur)  //*sec->cur == '\0'
    {
        sec->finSec = true;
        return false;
    }

    //Hay letras
    char* iPal = pal->vPal;

    do
    {
        *iPal = *sec->cur;
        sec->cur++;
        iPal++;
    }
    while(*sec->cur && esLetra(*sec->cur));

    //Si se sale es que encontro un caracter de fin de palabra '\0'
    *iPal = '\0';

    return true;
};

bool secuenciaPalabrasFin(const SecuenciaPalabras *sec)
{
    return sec->finSec;
};

void secuenciaPalabrasCerrar(SecuenciaPalabras *sec)
{
    *(sec->cur) = '\0';
}

void secuenciaPalabrasEscribir(SecuenciaPalabras *sec, const Palabra *pal) {
    const char *iPal = pal->vPal;
    while(*iPal) {
        *sec->cur = *iPal;
        iPal++;
        sec->cur++;
    }
}

void secuenciaPalabrasEscribirCaracter(SecuenciaPalabras *sec, char car) {
    *sec->cur = car;
    sec->cur++;
}

















