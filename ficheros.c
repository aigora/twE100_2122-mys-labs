#include <stdio.h>
#include "ficheros.h"

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
