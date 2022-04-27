//El proyecto empieza aqu�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[30];
}jugador;

// Menú de inicio
int main()
{
    //Bienvenida
    int modo, contrarreloj, numerodejugadores, i;
    char a, tiempo;
    printf("\n\n\t\t\t\t------------BIENVENIDO AL JUEGO DEL LABERINTO------------\n\n");
    printf("\n\n----En este juego vamos a comprobar de lo que eres capaz, y de si estarias preparado para salir de cualquier apuro.\n\n");
    printf("\n----Pulse enter para continuar. . . .");
    scanf("%c", &a);

    //Modos de juego
    ModosMenu:
    do
    {
        printf("\n\n\tEscoja uno del los siguientes modos de juego:\n \n\t\t1.Modo facil\n\t\t2.Modo intermedio\n\t\t3.Modo dificil\n\t\t4.Modo competicion\n\t\t5.Modo extremo\n\t\t6.SALIR DEL JUEGO\n");
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
            printf("\n\n\tQuiere hacerlo a contrareloj\n \n\t\t1.Si\n\t\t2.No\n\t\t3.Volver atras\n");
            scanf("%i", &contrarreloj);//Elegir si quiere hacer contrarreloj

            switch(contrarreloj)
            {
            case 1:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo FACIL con CONTRARRELOJ--------\n");
                    printf("\n\n\tEn que tiempo quiere hacerlo\n \n\t\ta) 10 minutos\n\t\tb) 5 minutos\n\t\tc) 1 minuto\n\t\td) Tiempo a elegir\n\t\te) Volver atras\n");
                    scanf("%c", &tiempo);//Elegir en cuanto tiempo quiere hacer la contrarreloj

                    switch(tiempo)
                    {
                        case 'a':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 10 min-------\n");
                                //Jugar
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 5 min-------\n");
                                //Jugar
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 1 min-------\n");
                                //Jugar
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ a elegir-------\n");
                                //Jugar
                            }break;

                        case 'e':
                            {
                                goto ModoFacilMenu;//Volver a elegir si quiere hacer contrarreloj en modo facil
                            }break;
                        }

                    }break;

            case 2:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo FACIL sin CONTRARRELOJ--------\n");
                    //Juegar
                }break;

            case 3:
                {
                    fflush(stdin);
                    goto ModosMenu;//Volver a elegir el modo que quiera
                }break;
            }

        }break;//fin modo fácil

        case 2://-----MODO INTERMEDIO
        {
            ModoIntermedioMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo INTERMEDIO------------\n\n");
            printf("\n\n\tQuiere hacerlo a contrareloj\n \n\t\t1.Si\n\t\t2.No\n\t\t3.Volver atras\n");
            scanf("%i", &contrarreloj);//Elegir si quiere hacer contrarreloj

            switch(contrarreloj)
            {
            case 1:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo INTERMEDIO con CONTRARRELOJ--------\n");
                    printf("\n\n\tEn que tiempo quiere hacerlo\n \n\t\ta) 10 minutos\n\t\tb) 5 minutos\n\t\tc) 1 minuto\n\t\td) Tiempo a elegir\n\t\te) Volver atras\n");
                    scanf("%c", &tiempo);//Elegir en cuanto tiempo quiere hacer la contrarreloj

                    switch(tiempo)
                    {
                        case 'a':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ de 10 min-------\n");
                                //Jugar
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ de 5 min-------\n");
                                //Jugar
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ de 1 min-------\n");
                                //Jugar
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ a elegir-------\n");
                                //Jugar
                            }break;

                        case 'e':
                            {
                                goto ModoIntermedioMenu;//Volver a elegir si quiere hacer contrarreloj en modo intermedio
                            }break;
                        }

                    }break;

            case 2:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo INTERMEDIO sin CONTRARRELOJ--------\n");
                    //Jugar
                }break;

            case 3:
                {
                    fflush(stdin);
                    goto ModosMenu;//Volver a elegir el modo que quiera
                }break;
            }


        }break;//fin modo intermedio

        case 3://-----MODO DIFÍCIL
        {
            ModoDificilMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo DIFICIL------------\n\n");
            printf("\n\n\tQuiere hacerlo a contrareloj\n \n\t\t1.Si\n\t\t2.No\n\t\t3.Volver atras\n");
            scanf("%i", &contrarreloj);//Elegir si quiere hacer contrarreloj

            switch(contrarreloj)
            {
            case 1:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo DIFICIL con CONTRARRELOJ--------\n");
                    printf("\n\n\tEn que tiempo quiere hacerlo\n \n\t\ta) 10 minutos\n\t\tb) 5 minutos\n\t\tc) 1 minuto\n\t\td) Tiempo a elegir\n\t\te) Volver atras\n");
                    scanf("%c", &tiempo);//Elegir en cuanto tiempo quiere hacer la contrarreloj

                    switch(tiempo)
                    {
                        case 'a':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ de 10 min-------\n");
                                //Jugar
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ de 5 min-------\n");
                                //Jugar
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ de 1 min-------\n");
                                //Jugar
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ a elegir-------\n");
                                //Jugar
                            }break;

                        case 'e':
                            {
                                goto ModoIntermedioMenu;//Volver a elegir si quiere hacer contrarreloj en modo dificil
                            }break;
                        }

                    }break;

            case 2:
                {
                    fflush(stdin);
                    printf("\n\n\t\t\t\t--------Has elegido el modo DIFICIL sin CONTRARRELOJ--------\n");
                    //Jugar
                }break;

            case 3:
                {
                    fflush(stdin);
                    goto ModosMenu;//Volver a elegir el modo que quiera
                }break;
            }

        }break;//fin modo difícil

        case 4://-----MODO COMPETICIÓN
        {
            ModoCompeticionMenu:

            jugador jugador1, jugador2, jugador3, jugador4;


            printf("\n\n\t\t\t\t------------Has elegido el modo COMPETICION------------\n\n");
            printf("\n----Pulse enter para continuar. . . .");
            scanf("%c", &a);
            printf("\n----Introduzca el numero de jugadores (2, 3, 4):");
            scanf("%i", &numerodejugadores);

            switch(numerodejugadores)
            {
                case 2:
                    {
                        fflush(stdin);
                        printf("\n\tJugador 1 introduzca su nombre:\t");
                        gets(jugador1.nombre);

                        printf("\n\tJugador 2 introduzca su nombre:\t");
                        gets(jugador2.nombre);
                    }break;
                    //jugar modo con 2 jugadores

                case 3:
                    {
                        fflush(stdin);
                        printf("\n\tJugador 1 introduzca su nombre:\t");
                        gets(jugador1.nombre);

                        printf("\n\tJugador 2 introduzca su nombre:\t");
                        gets(jugador2.nombre);

                        printf("\n\tJugador 3 introduzca su nombre:\t");
                        gets(jugador3.nombre);
                    }break;
                    //jugar modo con 3 jugadores

                case 4:
                    {
                        fflush(stdin);
                        printf("\n\tJugador 1 introduzca su nombre:\t");
                        gets(jugador1.nombre);

                        printf("\n\tJugador 2 introduzca su nombre:\t");
                        gets(jugador2.nombre);

                        printf("\n\tJugador 3 introduzca su nombre:\t");
                        gets(jugador3.nombre);

                        printf("\n\tJugador 4 introduzca su nombre:\t");
                        gets(jugador4.nombre);
                    }break;
                    //jugar modo con 4 jugadores
            }

        }break;//fin modo competición
            //Jugar

        case 5://-----MODO EXTREMO
        {
            ModoExtremoMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo EXTREMO------------\n\n");
            //Jugar

        }break;//fin modo extremo

        case 6://-----SALIR DEL JUEGO
        {
            break;
        }break;
    }

return 0;
}
