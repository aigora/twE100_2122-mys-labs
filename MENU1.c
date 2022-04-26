//El proyecto empieza aqu�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Menú de inicio
int main()
{
    //Bienvenida
    int modo, contrarreloj;
    char a, tiempo;
    printf("\n\n\t\t\t\t------------BIENVENIDO AL JUEGO DEL LABERINTO------------\n\n");
    printf("\n\n----En este juego vamos a comprobar de lo que eres capaz, y de si estarias preparado para salir de cualquier apuro.\n\n");
    printf("\n----Pulse enter para continuar. . . .");
    scanf("%c", &a);

    //Modos de juego
    ModosMenu:
    do
    {
        printf("\n\n\tEscoja uno del los siguientes modos de juego:\n \n\t\t1.Modo facil\n\t\t2.Modo medio\n\t\t3.Modo dificil\n\t\t4.Modo competicion\n\t\t5.Modo extremo\n\t\t6.SALIR DEL JUEGO\n");
        fflush(stdin);
        scanf("%i", &modo);
    }while(modo != 1 && modo != 2 && modo != 3 && modo != 4 && modo != 5 && modo != 6);//Elegir modo

    switch(modo)
    {
        case 1:
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
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 5 min-------\n");
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 1 min-------\n");
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ a elegir-------\n");
                            }break;

                        case 'e':
                            {
                                goto ModoFacilMenu;
                            }break;//Volver a elegir si quiere hacer contrarreloj en modo facil
                        }

                    }break;

            case 2:
                {
                    fflush(stdin);
                    //goto Juego;
                }break;

            case 3:
                {
                    fflush(stdin);
                    goto ModosMenu;//Volver a elegir el modo que quiera
                }break;
            }

        }break;//Modo fácil

        case 2:
        {
            ModoIntermedioMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo INTERMEDIO------------\n\n");

        }break;//Modo intermedio

        case 3:
        {
            ModoDificilMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo DIFICIL------------\n\n");

        }break;//Modo difícil

        case 4:
        {
            ModoCompeticionMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo COMPETICION------------\n\n");

        }break;//Modo competicion

        case 5:
        {
            ModoExtremoMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo EXTREMO------------\n\n");

        }break;//Modo extremo

        case 6:
        {
            break;

        }break;//Modo extremo
    }

return 0;
}
