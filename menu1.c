#include <stdio.h>
#include "ficheros.h"

typedef struct
{
    char name[8];
}jugador;


void modomenu(int a)
{

// Menú de inicio

    //Bienvenida
    int modo, contrarreloj, numerodejugadores, i, tecla;
    char b, tiempo;

    //Modos de juego
    ModosMenu:
    do
    {
        printf("\n\n\tEscoja uno del los siguientes modos de juego:\n\n\t\t1.Modo facil\n\t\t2.Modo intermedio\n\t\t3.Modo dificil\n\t\t4.Modo competicion\n\t\t5.Modo extremo\n\t\t6.SALIR DEL JUEGO\n");
        fflush(stdin);
        scanf("%i", &modo);
    }while(modo != 1 && modo != 2 && modo != 3 && modo != 4 && modo != 5 && modo != 6);//Elegir modo

    switch(modo)
    {
        case 1://-----MODO FÁCIL
        {

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo FACIL------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        ModoFacil(1);
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        modomenu(1);//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo fácil

        case 2://-----MODO INTERMEDIO
        {

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo INTERMEDIO------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        ModoMedio(1);
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        modomenu(1);//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo intermedio

        case 3://-----MODO DIFÍCIL
        {

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo DIFICIL------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        ModoDificil(1);
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        modomenu(1);//Volver a elegir el modo que quiera
                    }break;
            }
        }break;//fin modo difícil

        case 4://-----MODO COMPETICIÓN
        {


            printf("\n\n\t\t\t\t------------Has elegido el modo COMPETICION------------\n\n");
            printf("\n----Pulse enter para continuar. . . .\n");
            scanf("%c", &a);
            printf("\n----Introduzca el numero de jugadores (2, 3, 4):\n");
            scanf("%i", &numerodejugadores);

            int i=0;

            jugador nombre[i]; //se declara el vector de estructuras para los nombres
            jugador nombre1[i];
            jugador nombre2[i]; //si no se declaran tres vectores de estructuras para cada caso no funciona

            switch(numerodejugadores)
            {
                case 2:
                    {

                        for(i=0; i<numerodejugadores;i++)
                        {
                            fflush(stdin);
                            printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                            scanf(" %s", &nombre[i].name);


                        }

                        for(i=0; i<numerodejugadores; i++)
                            {

                                printf("\n\t Turno de %s\n:", nombre[i].name); //esto no lo coge
                                guardarpartida(1);
                                printf("\n\t---------------");
                            }
                            finalhistoria(1);



                    }break;


                case 3:
                    {

                        for (i=0; i<numerodejugadores;i++)
                        {
                            fflush(stdin);
                            printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                            scanf(" %s", &nombre1[i].name);


                        }

                        for(i=0; i<numerodejugadores; i++)
                            {

                                printf("\n\t Turno de %s\n:", nombre1[i].name); //esto no lo coge
                                guardarpartida(1);
                                printf("\n\t---------------");
                            }
                            finalhistoria(1);



                    }break;

                    //jugar modo con 3 jugadores

                case 4:
                    {

                        for (i=0; i<numerodejugadores;i++)
                        {
                            fflush(stdin);
                            printf("\n\tJugador %i introduzca su nombre:\t", i+1);
                            scanf(" %s", &nombre2[i].name);


                        }

                        for(i=0; i<numerodejugadores; i++)
                            {

                                printf("\n\t Turno de %s\n:", nombre2[i].name); //esto no lo coge
                                guardarpartida(1);
                                printf("\n\t---------------");
                            }
                            finalhistoria(1);



                    }break;

                    default:
                    {
                        printf("No se puede jugar con ese numero de jugadores\n");
                    }
                    //jugar modo con 4 jugadores
            }

        }break;//fin modo competición


        case 5://-----Modo extremo
        {

            fflush(stdin);
            printf("\n\n\t\t\t\t------------Has elegido el modo EXTREMO------------\n");
            printf("\n\n\t\t\t\t------------Pulse 1 para jugar, 2 para volver atras------------\n");
            scanf("%i", &tecla);
            switch(tecla)
            {
                case 1:
                    {
                        ModoExtremo(1);
                    }break;
                case 2:
                    {
                        fflush(stdin);
                        modomenu(1);//Volver a elegir el modo que quiera
                    }break;
            }
        }break;

        case 6://-----SALIR DEL JUEGO
        {
            break;
        }break;
    }
}

void menu(int a)
{
    modomenu(1);
}
