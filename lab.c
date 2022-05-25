#include "lab.h"

// a será del tamaño, segun la dificultad del laberinto
void ModoFacil(int a, int b)
{
    char casilla[1000];
    int i=0, j;

    FILE *pf;

    pf = fopen("ficherolaberintos.txt", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo.");
            exit(-1);
        }
    while(fscanf(pf, "%c", &casilla[i]) != EOF)
        {
            i++;
        }
    for(j=0;j<i;j++)
        {
            printf("%c", casilla[j]);
        }
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

   for (i=0; i<20; i++){
        for (j=0; j<50; j++)
            {
                printf("%c", laberinto1[i][j]);
            }
         printf("\n");}
         cronometro (c);
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
