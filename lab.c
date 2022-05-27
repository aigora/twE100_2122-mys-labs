#include "lab.h"

// a será del tamaño, segun la dificultad del laberinto
void ModoFacil(int a, int b)
{
    char facil[20][20];
    int i, j, g, h;

    FILE *pf;
    pf = fopen("ficherolaberintos.txt", "r");
    if(pf == NULL)
        {
            printf("Error al encontrar el archivo.");
            exit(-1);
        }

        i=0;
        j=0;
    while(fscanf(pf, "%c", &facil[i][j]) != EOF)
        {
            j++;
            if(j == b)
                {
                    j=0;
                    i++;
                }
        }
    RecorrerLab(facil);
    fclose(pf);
}

void ModoMedio(int a, int b)
{
    int i,j;

      char laberinto1[20][50] ={
      {"##################################################"},
      {"##o###                                          ##"},
      {"## ###  #################### ##### ############ ##"},
      {"##      #################### ##### ###########  ##"},
      {"#####################        ##### ##########  ###"},
      {"##################### ############ #########  ####"},
      {"##################### ############     ####  #####"},
      {"##                    ################ ###  ######"},
      {"## ################################### ##  #######"},
      {"## ##########    #       #########     ## ########"},
      {"## ########## ##   ##### ######### ######?########"},
      {"##            ######     ######### ###### ########"},
      {"##### ####### ###### #################### ########"},
      {"##### ####### ######                      ########"},
      {"##### #######      ############# #################"},
      {"#####      ##################### #################"},
      {"########## ############          #################"},
      {"########## ############ ######## #################"},
      {"###        ############                          >"},
      {"##################################################"}
      };

      RecorrerLab(laberinto1);
}

void ModoDificil(int a, int b)
{
    int i,j;

      char laberinto1[50][50] ={
      {"##################################################"},
      {"##o######                     ####################"},
      {"## ###### ################### #########       ####"},
      {"##        #####      #######  ######### ##### ####"},
      {"#################### ######  ########## ##### ####"},
      {"#################### #####  ########### ##### ####"},
      {"#################### ####  #######      ##### ####"},
      {"#####                     #######  ########## ####"},
      {"##### ##########################  #### ###### ####"},
      {"##### ########################## ##### ###### ####"},
      {"##    ####                       #####        ####"},
      {"## ####### ############################## ########"},
      {"##         ############################## ########"},
      {"## ################            ########## ########"},
      {"## ###########################            ########"},
      {"## ########################### ###################"},
      {"##                ############ ###################"},
      {"################# ############ ###################"},
      {"################# ############ ####           ####"},
      {"######            ############ #### ######### ####"},
      {"###### ##########?             #### ###   ### ####"},
      {"## ### ############################ ### ##### ####"},
      {"## ###                              ###       ####"},
      {"## ###################### ########################"},
      {"## ###################### ########################"},
      {"##                        ####                ####"},
      {"## ################################## ####### ####"},
      {"## ################################## ####### ####"},
      {"##        ###########           ##### ####### ####"},
      {"######### ########### ######### ##### ####### ####"},
      {"######### ########### ######### ##### ####### ####"},
      {"#########             #########       ####### ####"},
      {"#########?################################### ####"},
      {"######### ################################### ####"},
      {"######### #######                 ##########  ####"},
      {"##        ####### ############## ##########  #####"},
      {"## ############## ############## #########  ######"},
      {"## ############## ############## ########  #######"},
      {"## ####           ############## #######  ########"},
      {"## ############################# ######  #########"},
      {"## ######                               ##########"},
      {"## #########?#####################################"},
      {"##           #####################################"},
      {"############ #####################        ########"},
      {"############  #################### ###### ########"},
      {"#############  ################### ###### ########"},
      {"##############  ################## ######        >"},
      {"###############                    ###############"},
      {"##################################           #####"},
      {"##################################################"},

                           };

   for (i=0; i<50; i++){
        for (j=0; j<50; j++)
            {
                printf("%c", laberinto1[i][j]);
            }
         printf("\n");}
}

void ModoExtremo(int a, int b)
{
    int i,j;

      char laberinto1[50][100] ={
      {"####################################################################################################"},
      {"#o                                                    ###############         ######################"},
      {"#####################################################                 ####### ######           #####"},
      {"##################################################### ####################### ###### ######### #####"},
      {"##     ####                                           ############            ###### ######### #####"},
      {"## ### #### ######################################### ############ ################# ######### #####"},
      {"## ######## #########################################       ###### #################      #### #####"},
      {"##                       ##             ############# ################ ############# ######### #####"},
      {"########################    ########### ############# ################               ######### #####"},
      {"####################################### #############         #############?################## #####"},
      {"#####         ###############           ##################### ############# ################## #####"},
      {"##### ####### ############### ###############################               #######            #####"},
      {"##### ####### ############### ##########              ############################# ################"},
      {"#####    ####                 #### ##### ############ ############################# ################"},
      {"################################## ##### ############                           ### #####       ####"},
      {"################################## #####      ##### ########################### ###       ##### ####"},
      {"##            #################### ########## ##### ########################### ############### ####"},
      {"## ########## #################### ########## ##### #####        ##### ######## ############### ####"},
      {"## ##########                                 ##### ############ ##### ###      ############### ####"},
      {"## ################################?############### ############ ##### ### #################### ####"},
      {"## ################################ ###############              ##### ###                      ####"},
      {"##                  ############### ################################## ############## ##############"},
      {"################### ############### ################################## ############## ##############"},
      {"################### ############### #########                          ######         ####       ###"},
      {"######           ##                           ################# ############# ############ ##### ###"},
      {"###### ######### ############################################## ############# ############ ####  ###"},
      {"###### ######### #############################################  ############# ############ #### ####"},
      {"###### ### ##### ###########                      ###########  ############## ############ #### ####"},
      {"###### ### #####             #################### ##########  ############### ############ ####    #"},
      {"###### ### ################# #################### #########  ################              #########"},
      {"###### ### ################# ###                  ########              ############################"},
      {"###### ###           ####### ### ########################  ############ ############################"},
      {"###### ############# ####### ### #######################  ############# ############################"},
      {"######               ####### ###                         ############## ############################"},
      {"############################ #########################  ############### ############################"},
      {"############################ ########################  #########         ###########################"},
      {"###################### #####                  ######  ########## #############                ######"},
      {"###################### ##################### ######  ########### ############# ############## ######"},
      {"##############         ##################### #####  ############  ############ ############## ######"},
      {"############## #######                       ####  ############## ############      ######### ######"},
      {"############## #################################  ############### ################# ######### ######"},
      {"############## ################################  ################ ################# ######### ######"},
      {"############## ###############################  #####                               ######### ######"},
      {"######                                      ?  ###### ####################################### ######"},
      {"############################################  ####### ########                                ######"},
      {"###########################################  ######## ######## #####################################"},
      {"########################################### ######### ##############################################"},
      {"###########                                 #########                                              >"},
      {"####################################################################################################"},
      {"####################################################################################################"},

                           };

   for (i=0; i<50; i++){
        for (j=0; j<100; j++)
            {
                printf("%c", laberinto1[i][j]);
            }
         printf("\n");}

}

void RecorrerLab(char a[20][20])
{

    int x, y, i, j;

    char tecla, linea, asterisco;

    linea=219;
    asterisco='#';
    for(i=0;i<50;i++) //PARA INTERCAMBIAR ASTERISCOS
    {
        for(j=0;j<50;j++)
        {
            if(a[i][j]==asterisco)
            {
              a[i][j]=linea;
            }
           //intercambia(&asterisco,&linea);
        }

    }

//aqui hay que imprimir la direccion de memoria

    do
    {
        printf("mete un punto inicial del plano del laberinto (mayor que 0, menor que los limites del laberinto):\n");
        scanf("%i %i", &x, &y);
    }while(x <= 0 || y <= 0 && a[x][y]==' ');

    system("cls");//borra la pantalla para que no se acumulen los puntos introducidos

    //imprimimos el laberinto con las condiciones iniciales
        //el 5 es nº de casillas q vemos en vertical
        //el 5 es el nº de casillas q vemos en horizontal
        for(i=x;i<x+4;i++)
        {
            for(j=y;j<y+6;j++)
            {
                printf("%c", a[i-1][j-3]);
            }
            printf("\n");
        }

    //Esto va desplazando la pelota por el laberinto, mientras su posicion sea distinta de los extremos del lab (28 y 18) casillas
    while(x!=20 || y!= 20)
    {
        tecla=getch();//lo mismo que el scanf para caracteres

            //secuencia de movimientos de las teclas
            if(tecla == 's')
                {
                    if(a[x+1][y] != linea)
                    {
                        a[x][y] = ' ';
                        x++;
                        a[x][y]='o';
                    }
                }
            if(tecla == 'w')
                {
                    if(a[x-1][y] != linea)
                    {
                        a[x][y] = ' ';
                        x--;
                        a[x][y]='o';
                    }
                }
            if(tecla == 'd')
                {
                    if(a[x][y+1] != linea)
                    {
                        a[x][y] = ' ';
                        y++;
                        a[x][y]='o';
                    }
                }
            if(tecla == 'a')
                {
                    if(a[x][y-1] != linea)
                    {
                        a[x][y] = ' ';
                        y--;
                        a[x][y]='o';
                    }
                }
            system("cls");//para que se borre el laberinto anterior y la tecla metida para mover la bola

                    //imprimimos el nuevo laberinto (del mismo modo) con la posicion de la tecla añadida
                    for(i=x;i<x+4;i++)
                    {
                        for(j=y;j<y+6;j++)
                        {
                            printf("%c", a[i-1][j-3]);
                        }
                        printf("\n");
                    }
    }//fin del while

    system("cls");//limpia la pantalla para hacer todo otra vez y que no se acumulen los laberitos
}

void menu(int a)
{

// Menú de inicio

    //Bienvenida
    int modo, contrarreloj, numerodejugadores, i;
    char b, tiempo;

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
                                ModoFacil(20, 20);
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 5 min-------\n");
                                ModoFacil(20, 20);
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ de 1 min-------\n");
                                ModoFacil(20, 20);
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo FACIL con CONTRARRELOJ a elegir-------\n");
                                ModoFacil(20, 20);
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
                                ModoMedio(20, 50);
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ de 5 min-------\n");
                                ModoMedio(20, 50);
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ de 1 min-------\n");
                                ModoMedio(20, 50);
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo INTERMEDIO con CONTRARRELOJ a elegir-------\n");
                                ModoMedio(20, 50);
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
                                ModoDificil(50, 50);
                            }break;

                        case 'b':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ de 5 min-------\n");
                                ModoDificil(50, 50);
                            }break;

                        case 'c':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ de 1 min-------\n");
                                ModoDificil(50, 50);
                            }break;

                        case 'd':
                            {
                                printf("\n\n\t\t\t\t-------Has elegido el modo DIFICIL con CONTRARRELOJ a elegir-------\n");
                                ModoDificil(50, 50);
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

        case 5://-----MODO EXTREMO
        {
            ModoExtremoMenu:

            printf("\n\n\t\t\t\t------------Has elegido el modo EXTREMO------------\n\n");
            ModoExtremo(50, 100);

        }break;//fin modo extremo

        case 6://-----SALIR DEL JUEGO
        {
            break;
        }break;
    }
}
