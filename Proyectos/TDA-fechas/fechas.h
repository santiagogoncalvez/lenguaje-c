#ifndef FECHAS_H_
#define FECHAS_H_

#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int d;
    int m;
    int a;
} tFecha;

bool fechaSet(tFecha*, int, int, int);
void fechaMostrar(const tFecha*);
bool esFechaValida(int, int, int);
int cantDiasMes(int, int);
bool esBisiesto(int);
tFecha fechaSumarUnDia(const tFecha*);
tFecha fechaSumarDias(const tFecha*, int);
tFecha fechaRestarDias(const tFecha *f, int dias);
int fechaDiasEntre2Fechas(const tFecha*, const tFecha*);
int fechaDiaDeLaSemana(const tFecha *);

#endif
