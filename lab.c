#include <stdio.h>
#include <stdlib.h>
#include "ficheros.h"

// a será del tamaño, segun la dificultad del laberinto
void ModoFacil(int a)
{
    int i, j;
    char letra[20][20];
    FILE *pf;
    pf = fopen("facil.txt", "r");

    if (pf == NULL)
        {
            printf("Error al encontrar el fichero");
            return -1;
        }
        i=0;
        j=0;
        while(fscanf(pf, "%c", &letra[i][j]) != EOF)
        {
            j++;
            if(j==20)
                {
                    j=0;
                    i++;
                }
        }
        fclose(pf);

        RecorrerLab(20, 20, letra);

}

void ModoMedio(int a)
{
    int i, j;
    char letra[20][50];
    FILE *pf;
    pf = fopen("medio.txt", "r");

    if (pf == NULL)
        {
            printf("Error al encontrar el fichero");
            return -1;
        }
        i=0;
        j=0;
        while(fscanf(pf, "%c", &letra[i][j]) != EOF)
        {
            j++;
            if(j==50)
                {
                    j=0;
                    i++;
                }
        }
        fclose(pf);

      RecorrerLab(20, 50, letra);
}

void ModoDificil(int a)
{
int i, j;
    char letra[50][50];
    FILE *pf;
    pf = fopen("dificil.txt", "r");

    if (pf == NULL)
        {
            printf("Error al encontrar el fichero");
            return -1;
        }
        i=0;
        j=0;
        while(fscanf(pf, "%c", &letra[i][j]) != EOF)
        {
            j++;
            if(j==50)
                {
                    j=0;
                    i++;
                }
        }
        fclose(pf);

    RecorrerLab(50, 50, letra);
}

int ModoCompeticion(int a)
{

    int i, j;
    char letra[20][50];
    FILE *pf;
    pf = fopen("competicion.txt", "r");

    if (pf == NULL)
        {
            printf("Error al encontrar el fichero");
            return -1;
        }
        i=0;
        j=0;
        while(fscanf(pf, "%c", &letra[i][j]) != EOF)
        {
            j++;
            if(j==50)
                {
                    j=0;
                    i++;
                }
        }
        fclose(pf);

      return RecorrerLab2(20, 50, letra);
}

void ModoExtremo(int a)
{
        int i, j;
    char letra[50][100];
    FILE *pf;
    pf = fopen("extremo.txt", "r");

    if (pf == NULL)
        {
            printf("Error al encontrar el fichero");
            return -1;
        }
        i=0;
        j=0;
        while(fscanf(pf, "%c", &letra[i][j]) != EOF)
        {
            j++;
            if(j==100)
                {
                    j=0;
                    i++;
                }
        }
        fclose(pf);

    RecorrerLab(50,100,letra);

}

void RecorrerLab(int n, int m, char a[n][m])
{

    printf("Al recorrer el laberinto, iran apareciendo una serie de pistas con la siguiente notacion:\n El '.' significa que nos estamos acercando a la salida \n La '?' que estamos muy cerca \n El '!' significa que el camino no tiene salida\n");


    int x, y, i, j;

    char tecla, linea, asterisco;


//aqui hay que imprimir la direccion de memoria

    do
    {
        printf("\n\n\tIntroduce un punto inicial del plano del laberinto (mayor que 0, menor que los limites del laberinto):\n");
        scanf("%i %i", &x, &y);
        if(a[x][y] == '#')
            {
                printf("\n\tHas dado con un muro\n");
            }
    }while(x <= 0 || y <= 0 || a[x][y]=='#');
    a[x][y]='o';
    printf("%c", a[x][y]);

    system("cls");//borra la pantalla para que no se acumulen los puntos introducidos

    //imprimimos el laberinto con las condiciones iniciales
        //el 5 es nº de casillas q vemos en vertical
        //el 5 es el nº de casillas q vemos en horizontal
        printf("\n");
        printf("\n");
        for(i=x;i<x+5;i++)
        {
            printf("\t");
            for(j=y;j<y+10;j++)
            {
                printf("%c", a[i-1][j-3]);
            }
            printf("\n");

        }

    //Esto va desplazando la pelota por el laberinto, mientras su posicion sea distinta de los extremos del lab (28 y 18) casillas
    while(x>0 || y>0 || x<50 || y<50 || a[x][y]!='>')
    {
        tecla=getch();//lo mismo que el scanf para caracteres

            //secuencia de movimientos de las teclas
            if(tecla == 's')
                {
                    if(a[x+1][y] != '#')
                    {

                        a[x][y] = ' ';
                        x++;
                        a[x][y]='o';


                    }
                }
            if(tecla == 'w')
                {
                    if(a[x-1][y] != '#')
                    {

                        a[x][y] = ' ';
                        x--;
                        a[x][y]='o';



                    }
                }
            if(tecla == 'd')
                {
                    if(a[x][y+1] != '#')
                    {
                        if(a[x][y+1] == '>')
                        {break;}

                        a[x][y] = ' ';
                        y++;
                        a[x][y]='o';


                     }
                }
            if(tecla == 'a')
                {
                    if(a[x][y-1] != '#')
                    {

                        {a[x][y] = ' ';
                        y--;
                        a[x][y]='o';
                        }

                    }
                }



            system("cls");//para que se borre el laberinto anterior y la tecla metida para mover la bola

                    //imprimimos el nuevo laberinto (del mismo modo) con la posicion de la tecla añadida
                    printf("\n");
                    printf("\n");
                    for(i=x;i<x+5;i++)
                    {
                        printf("\t");
                        for(j=y;j<y+10;j++)
                        {
                            printf("%c", a[i-1][j-3]);
                        }
                        printf("\n");
                    }


    }//fin del while
    finalhistoria(1);
    valoracionw(1); //para escribir valoracion


    //system("cls");//limpia la pantalla para hacer todo otra vez y que no se acumulen los laberitos


}

int RecorrerLab2(int n, int m, char a[n][m]) //te devuelve un contador
{

    int x, y, i, j, contador=0;

    char tecla, asterisco;


//aqui hay que imprimir la direccion de memoria

    do
    {
        printf("\n\n\tIntroduce un punto inicial del plano del laberinto (mayor que 0, menor que los limites del laberinto):\n");
        scanf("%i %i", &x, &y);
        if(a[x][y] == '#')
            {
                printf("\n\tHas dado con un muro\n");
            }
    }while(x <= 0 || y <= 0 || a[x][y]=='#');

    a[x][y]='o';
    printf("%c", a[x][y]);

    system("cls");//borra la pantalla para que no se acumulen los puntos introducidos

    //imprimimos el laberinto con las condiciones iniciales
        //el 5 es nº de casillas q vemos en vertical
        //el 5 es el nº de casillas q vemos en horizontal
        printf("\n");
        printf("\n");
        for(i=x;i<x+5;i++)
        {
            printf("\t");
            for(j=y;j<y+10;j++)
            {
                printf("%c", a[i-1][j-3]);
            }
            printf("\n");
        }

    //Esto va desplazando la pelota por el laberinto, mientras su posicion sea distinta de los extremos del lab (28 y 18) casillas
    while(x>0 || y>0 || x<50 || y<50)
    {
        tecla=getch();//lo mismo que el scanf para caracteres

            //secuencia de movimientos de las teclas
            if(tecla == 's')
                {
                    if(a[x+1][y] != '#')
                    {
                        a[x][y] = ' ';
                        x++;
                        a[x][y]='o';
                        contador++;
                    }
                }
            if(tecla == 'w')
                {
                    if(a[x-1][y] != '#')
                    {
                        a[x][y] = ' ';
                        x--;
                        a[x][y]='o';
                        contador++;
                    }
                }
            if(tecla == 'd')
                {
                    if(a[x][y+1] != '#')
                    {
                        if(a[x][y+1] == '>')
                        {
                            printf("Has hecho %i movimientos\n", contador);
                            system("pause");
                            break;
                        }
                        a[x][y] = ' ';
                        y++;
                        a[x][y]='o';
                        contador++;
                    }
                }

            if(tecla == 'a')
                {
                    if(a[x][y-1] != '#')
                    {
                        a[x][y] = ' ';
                        y--;
                        a[x][y]='o';
                        contador++;
                    }
                }
            //if(a[x][y] == '>')break;
            system("cls");//para que se borre el laberinto anterior y la tecla metida para mover la bola

                    //imprimimos el nuevo laberinto (del mismo modo) con la posicion de la tecla añadida
                    printf("\n");
                    printf("\n");
                    for(i=x;i<x+5;i++)
                    {
                        printf("\t");
                        for(j=y;j<y+10;j++)
                        {
                            printf("%c", a[i-1][j-3]);
                        }
                        printf("\n");
                    }
    }//fin del while

    system("cls");//limpia la pantalla para hacer todo otra vez y que no se acumulen los laberitos
    return contador;
}

