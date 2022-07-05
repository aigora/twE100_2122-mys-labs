#ifndef _FICHEROS_H_
#define _FICHEROS_H_

# include <stdio.h>
//# include "ficheros.c"

typedef struct
{
    char nombre[8];
    int movimientos;
    char experiencia[10000];
}jugadores;

void historia(int a);
void finalhistoria(int a);
void valoracionw(int a);
void partidas(int a);
void guardarpartida(int a);


#endif
