#include <stdio.h>

// a será del tamaño, segun la dificultad del laberinto
void ModoFacil(int a)
{

int i,j;


      char laberinto1[20][20] ={
      {"####################"},
      {"######     #########"},
      {"## ###  ## ##     ##"},
      {"##      ## #####  ##"},
      {"########## ## ##  ##"},
      {"##         ## ##  ##"},
      {"##  ######### ##  ##"},
      {"##  ######### ##  ##"},
      {"##            ##  ##"},
      {"############# ##  ##"},
      {"############# ##  ##"},
      {"##                ##"},
      {"############# ######"},
      {"############# ######"},
      {"## ##########     ##"},
      {"## ########## ######"},
      {"##            ######"},
      {"#############      >"},
      {"####################"},
      {"####################"},
      };

   RecorrerLab(20, 20, laberinto1);
}

void ModoMedio(int a)
{
    int i,j;

      char laberinto1[20][50] ={
      {"##################################################"},
      {"## ###                                          ##"},
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
      {"########## ############ ########                 >"},
      {"##################################################"},
      {"##################################################"},
      };

      RecorrerLab(20, 50, laberinto1);
}

void ModoDificil(int a)
{
    int i,j;


      char laberinto1[50][50] ={
      {"##################################################"},
      {"## ######                     ####################"},
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

  RecorrerLab(50, 50, laberinto1);
}

void ModoExtremo(int a)
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
    RecorrerLab(50,100,laberinto1);

}

void RecorrerLab(int n, int m, char a[n][m])
{

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
                        a[x][y] = ' ';
                        y++;
                        a[x][y]='o';
                    }
                }
            if(tecla == 'a')
                {
                    if(a[x][y-1] != '#')
                    {
                        a[x][y] = ' ';
                        y--;
                        a[x][y]='o';
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

    system("cls");//limpia la pantalla para hacer todo otra vez y que no se acumulen los laberitos
}
