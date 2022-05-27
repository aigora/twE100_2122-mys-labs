#include <stdio.h>

typedef struct
{
    char nombre[30];
}jugador;

void menu(int a)
{

// Menú de inicio

    //Bienvenida
    int modo, contrarreloj, numerodejugadores, i, tecla;
    char b, tiempo;

    //Modos de juego
    ModosMenu:
    do
    {
        printf("\n\n\tEscoja uno del los siguientes modos de juego:\n \n\t\t1.Modo facil\n\t\t2.Modo intermedio\n\t\t3.Modo dificil\n\t\t4.Modo competicion\n\t\t5.SALIR DEL JUEGO\n");
        fflush(stdin);
        scanf("%i", &modo);
    }while(modo != 1 && modo != 2 && modo != 3 && modo != 4 && modo != 5 && modo != 6);//Elegir modo

    switch(modo)
    {
        case 1://-----MODO FÁCIL
        {
            ModoFacilMenu:

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo FACIL------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        //jugar
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        goto ModosMenu;//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo fácil

        case 2://-----MODO INTERMEDIO
        {
           ModoIntermedioMenu:

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo INTERMEDIO------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        //jugar
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        goto ModosMenu;//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo intermedio

        case 3://-----MODO DIFÍCIL
        {
            ModoDificilMenu:

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo DIFICIL------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        //jugar
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        goto ModosMenu;//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo difícil

case 4://-----MODO COMPETICIÓN
        {
            ModoCompeticionMenu:


            printf("\n\n\t\t\t\t------------Has elegido el modo COMPETICION------------\n\n");
            printf("\n----Pulse enter para continuar. . . .\n");
            scanf("%c", &a);
            printf("\n----Introduzca el numero de jugadores (2, 3, 4):\n");
            scanf("%i", &numerodejugadores);

            jugador jugadores[numerodejugadores]; //aqui hacer vector de estructuras

            /*for (i=0; i<4; i++) //lo inicializamos?
            {
                jugadores[i].nombre = {'0'};
            }*/

            switch(numerodejugadores)
            {
                case 2:
                    {

                        for (i=0; i<numerodejugadores;i++)
                        {
                            fflush(stdin);
                            printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                            //scanf("%s", &jugadores[i].nombre)
                            gets(jugadores[i].nombre);
                        }
                        printf("\n");
                        printf("Has elegido correctamente el numero de jugadores :) ");


                    }break;
                    //jugar modo con 2 jugadores

                case 3:
                    {
                        for (i=0; i<numerodejugadores;i++)
                        {
                        fflush(stdin);
                        printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                        gets(jugadores[i].nombre);
                        }
                        printf("\n");
                        printf("Has elegido correctamente el numero de jugadores :) ");
                    }break;

                    //jugar modo con 3 jugadores

                case 4:
                    {
                        for (i=0; i<numerodejugadores;i++)
                        {
                        fflush(stdin);
                        printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                        gets(jugadores[i].nombre);
                        }
                        printf("\n");
                        printf("Has elegido correctamente el numero de jugadores :) ");

                    }break;
                    //jugar modo con 4 jugadores
            }

        }break;//fin modo competición
            //Jugar


        case 5://-----SALIR DEL JUEGO
        {
            break;
        }break;
    }
}

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

    while(fscanf(pf, "%c", &letra[i]) != EOF)
        {
            printf("%c", letra[i]);
            i++;
        }
    printf("\n\n");
}
