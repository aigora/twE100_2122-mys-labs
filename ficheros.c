#include <stdio.h>
#include  "lab.h"
#include "ficheros.h"

//Hacer un vector de estructuras que se llame partidas (donde los componentes sean las distintas personas)





void historia(int a)
{
    int i=0;
    char letra[10000];
    printf("\n\n");
    FILE *pf;
    pf = fopen("historia.txt", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {
    while(fscanf(pf, "%c", &letra[i]) != EOF)
        {
            printf("%c", letra[i]);
            i++;
        }
    printf("\n\n");
    fclose(pf);
    }
}

void finalhistoria(int a)
{
    int i=0;
    char letra[10000];
    printf("\n\n");
    FILE *pf;
    pf = fopen("desenlacehistoria.txt", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }

    else
    {
    while(fscanf(pf, "%c", &letra[i]) != EOF)
        {
            printf("%c", letra[i]);
            i++;
        }
    printf("\n\n");
    fclose(pf);
    }
}

void valoracionw(int a) //funcion escritura
{
    int i=0;
    char texto[10000];
    printf("Escribe que te ha parecido la experiencia en el laberinto:\n");
    scanf(" %10000[^\n]", texto); //esto te lee un texto

    FILE *pf;
    pf = fopen("valoracion.txt", "w");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {
    while(texto[i] != '\0')
        {fprintf(pf, "%c", texto[i]);
        i++;}

        fclose(pf);
    }
    //printf("\n\n");
}




//jugadores jugador[numerodejugadores]; //aqui hacer vector de estructuras


void partidas(int a) //funcion escritura, te escribe la partida de cada persona (necesita un contandor del numero de movimientos

{


    //aqui damos valores a la estructura

    int i=0;
    jugadores jugador1;

    printf("Como quieres llamar al jugador de esta partida:\n");
    scanf("%s", jugador1.nombre);

    jugador1.movimientos = a;


    printf("Escribe que te ha parecido la experiencia en el laberinto:\n");
    scanf(" %10000[^\n]", jugador1.experiencia); //esto te lee un texto

    //aqui abrimos el fichero en forma a??adir para ir rellen??ndolo

    FILE *pf;
    pf = fopen("partidas.txt", "a");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }
    else
    {

    fprintf(pf,"Nombre del jugador:\n");

    while(jugador1.nombre[i] != '\0')
        {fprintf(pf, "%c", jugador1.nombre[i]);
        i++;}
    fprintf(pf, "\n");

    fprintf(pf,"N??mero de movimientos:\n");
    fprintf(pf,"%i", jugador1.movimientos);
    fprintf(pf, "\n");

    fprintf(pf, "Valoracion del laberinto:\n\n");
    i=0;
    while(jugador1.experiencia[i] != '\0')
        {fprintf(pf, "%c", jugador1.experiencia[i]);
        i++;}
    fprintf(pf, "\n");


        fclose(pf);
    }
    //printf("\n\n");
}


void guardarpartida(int a)
{
  int respuesta=0;

printf("Quieres guardar la partida?\n\n 1. Si\n 2. No\n\n");
           scanf(" %c", &respuesta);

                            switch (respuesta)

                            {
                                case '1':
                                partidas(ModoCompeticion(1)); //la funcion partidas te pide el valor del contador calculado anteriormente
                                break;

                                case '2':
                                printf("El juego comienza pero no se guardara...\n");
                                ModoCompeticion(1); //aqui igual tengo que hacer otro modo que no te devuelva nada (con return 0) o hacer un if
                                break;

                                default:
                                    printf("No se ha introducido el valor correctamente");
                                    break;
                            }
}



