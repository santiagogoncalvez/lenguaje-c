#include "fechas.h"

bool fechaSet(tFecha* f, int d, int m, int a)
{
    if(!esFechaValida(d, m, a))
    {
        return false;
    }

    f -> d = d;
    f -> m = m;
    f -> a = a;
    return true;
}

void fechaMostrar(const tFecha* f)
{
    printf("\nDia: %i", f -> d);
    printf("\nMes: %i", f -> m);
    printf("\nAnio: %i", f -> a);
};

bool esFechaValida(int d, int m, int a)
{
    if(a < 1601)
    {
        return false;
    }
    if(m < 1 || m > 12)
    {
        return false;
    }
    if(d < 1 || d > cantDiasMes(m, a))
    {
        return false;
    }

    return true;
}

int cantDiasMes(int m, int a)
{
    int diasMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m == 2 && esBisiesto(a))
    {
        return 29;
    }

    return diasMes[m];
}

bool esBisiesto(int a)
{
    return a % 4 == 0 && (a % 100 != 0 || a % 400 == 0);
}

tFecha fechaSumarUnDia(const tFecha *f)
{
    int cdm;
    tFecha fSuma = *f;
    fSuma.d ++;

    while(fSuma.d > (cdm = cantDiasMes(fSuma.m, fSuma.a)))
    {
        fSuma.d -= cdm;
        fSuma.m ++;
        if(fSuma.m > 12)
        {
            fSuma.m = 1;
            fSuma.a++;
        }
    }

    return fSuma;
}

tFecha fechaSumarDias(const tFecha *f, int dias)
{
    int cdm;
    tFecha fSuma = *f;
    fSuma.d += dias;

    while(fSuma.d > (cdm = cantDiasMes(fSuma.m, fSuma.a)))
    {
        fSuma.d -= cdm;
        fSuma.m ++;
        if(fSuma.m > 12)
        {
            fSuma.m = 1;
            fSuma.a++;
        }
    }

    return fSuma;
}

tFecha fechaRestarDias(const tFecha *f, int dias)
{
    int cdm;
    tFecha fResta = *f;

    fResta.d -= dias;
    while(fResta.d < 1)
    {
        fResta.m --;

        if(fResta.m < 1)
        {
            fResta.m = 12;
            fResta.a--;
        }

        cdm = cantDiasMes(fResta.m, fResta.a);
        fResta.d += cdm;
    }

    return fResta;
}

int fechaDiasEntre2Fechas(const tFecha *f1, const tFecha *f2)
{
    int cantDias = 0, cdm;
    tFecha fSuma = *f1;

    while(fSuma.d < f2 -> d || fSuma.m < f2 -> m || fSuma.a < f2 -> a)
    {
        fSuma.d++;
        cantDias++;
        cdm = cantDiasMes(fSuma.m, fSuma.a);

        if(fSuma.d > cdm)
        {
            fSuma.d = 1;
            fSuma.m++;
        };

        if(fSuma.m > 12)
        {
            fSuma.m = 1;
            fSuma.a++;
        }

    }

    return cantDias;
}

int fechaDiaDeLaSemana(const tFecha *f)
{
    // El 10/01/1601 fue Lunes (1).
    tFecha fechaRef = {1, 1, 1601};
    int diferencia = fechaDiasEntre2Fechas(&fechaRef, f);
    int dia = (diferencia % 7) + 1;
    return dia == 7 ? 0 : dia;
}











