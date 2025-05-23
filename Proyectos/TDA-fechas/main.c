#include <stdio.h>
#include <stdlib.h>
#include "fechas.h"

int main()
{
    tFecha fecha, fechaAux, fecha2;

    printf("Creando fecha...\n");
    //Se pasa la direcci�n de memoria porque la funci�n espera un puntero, no crea una copia. La funci�n va a modificar la variable que le pasemos. Es lo mismo que cuando pasaba un vector a una funci�n y lo que realmente pasaba era la direcci�n del primer elemento del vector.
    fechaSet(&fecha, 1, 1, 2010);

    //Mostrar fecha con funci�n primitiva
	fechaMostrar(&fecha);

	//Sumar un d�a
	printf("\n\nSumar un dia");
	fechaAux = fechaSumarUnDia(&fecha);
	fechaMostrar(&fechaAux);

	//Sumar cierta cantidad de d�as a una fecha
	printf("\n\nSumar cierta cantidad de dias");
	fechaAux = fechaSumarDias(&fecha, 365);
	fechaMostrar(&fechaAux);

	//Restar cierta cantidad de d�as a una fecha
	printf("\n\nRestar cierta cantidad de dias");
	fechaAux = fechaRestarDias(&fecha, 365);
	fechaMostrar(&fechaAux);

	//Restar cierta cantidad de d�as a una fecha
	printf("\n\nDiferencia entre 2 fechas");
	fechaSet(&fecha2, 1, 1, 2011);
	printf("\nDiferencia: %i", fechaDiasEntre2Fechas(&fecha, &fecha2));

	//Dia de la semana de una fecha
	printf("\n\nDia de la semana de una fecha");
	fechaSet(&fecha, 12, 04, 2025);
	printf("\n%i", fechaDiaDeLaSemana(&fecha));

    return 0;
}
