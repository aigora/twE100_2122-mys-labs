#include "lab.h"
#include "Cronometro.h"

// a será del tamaño, segun la dificultad del laberinto
void ModoFacil(int a, int b, int c)
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
    RecorrerLab(facil, c);
    fclose(pf);
}

void ModoMedio(int a, int b, int c)
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

      RecorrerLab(laberinto1, c);
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

void RecorrerLab(char a[20][20], int b)
{

    int x, y, i, j;

    cronometro(b);

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
    }while(x <= 0 || y <= 0);

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
    while(x!=28 || y!= 18)
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
