#include <stdio.h>

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

//        case 4://-----MODO COMPETICIÓN
//        {
//            ModoCompeticionMenu:
//
//
//            printf("\n\n\t\t\t\t------------Has elegido el modo COMPETICION------------\n\n");
//            printf("\n----Pulse enter para continuar. . . .\n");
//            scanf("%c", &a);
//            printf("\n----Introduzca el numero de jugadores (2, 3, 4):");
//            scanf("%i", &numerodejugadores);
//
//            switch(numerodejugadores)
//            {
//                case 2:
//                    {
//                        fflush(stdin);
//                        printf("\n\tJugador 1 introduzca su nombre:\t");
//                        gets(jugador1.nombre);
//
//                        printf("\n\tJugador 2 introduzca su nombre:\t");
//                        gets(jugador2.nombre);
//                    }break;
//                    //jugar modo con 2 jugadores
//
//                case 3:
//                    {
//                        fflush(stdin);
//                        printf("\n\tJugador 1 introduzca su nombre:\t");
//                        gets(jugador1.nombre);
//
//                        printf("\n\tJugador 2 introduzca su nombre:\t");
//                        gets(jugador2.nombre);
//
//                        printf("\n\tJugador 3 introduzca su nombre:\t");
//                        gets(jugador3.nombre);
//                    }break;
//                    //jugar modo con 3 jugadores
//
//                case 4:
//                    {
//                        fflush(stdin);
//                        printf("\n\tJugador 1 introduzca su nombre:\t");
//                        gets(jugador1.nombre);
//
//                        printf("\n\tJugador 2 introduzca su nombre:\t");
//                        gets(jugador2.nombre);
//
//                        printf("\n\tJugador 3 introduzca su nombre:\t");
//                        gets(jugador3.nombre);
//
//                        printf("\n\tJugador 4 introduzca su nombre:\t");
//                        gets(jugador4.nombre);
//                    }break;
//                    //jugar modo con 4 jugadores
//            }
//
//        }break;//fin modo competición
//            //Jugar

        case 5://-----SALIR DEL JUEGO
        {
            break;
        }break;
    }
}
