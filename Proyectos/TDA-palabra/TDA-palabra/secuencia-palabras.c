#include "secuencia-palabras.h"


void secuenciaPalabrasCrear(SecuenciaPalabras* sec, const char* cad)
{
    sec->cur = (char*)cad;
    sec->finSec = false;
};

bool secuenciaPalabrasLeer(SecuenciaPalabras* sec, Palabra* pal)
{
    //*sec->cur: mientras haya un caracter, el caracter '\0' es 0 entonces es falso.
    while(*sec->cur && !esLetra(*sec->cur))
    {
        sec->cur++;
    }

    //No había letras
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
        iPal++;
        sec->cur++;
    }
    while(*sec->cur && esLetra(*sec->cur));

    //Si se sale es que encontró un caracter de fin de palabra '\0'
    *iPal = '\0';

    return true;
};

bool secuenciaPalabrasFin(const SecuenciaPalabras* sec)
{
    return sec->finSec;
};





















