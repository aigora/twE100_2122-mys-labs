//laberinto

#include <stdio.h>

#include <windows.h>
void dificultadlab (int a, int b);

int main ()
{
   int a=20;
   int b=20;
   dificultadlab (a, b);
   return 0;

}


// a será del tamaño, segun la dificultad del laberinto
void dificultadlab (int a, int b)
{
    int i,j;

    //Modo facil
    if (a==20 && b==20)
    {
        char laberinto1[20][20] ={"####################"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "#                  #"
                                  "####################"};

            for (i=0; i<20; i++)
            {
                for (j=0; j<20; j++)
                {
                    printf("%c", laberinto1[i][j]);
                }

            }
        }
    }

    //Modo medio
    if (a==40 && b==40)
    {

    }

    //Modo dificil
    if (a==50 && b==50)
    {

    }

    //Modo extremo
    if (a==100 && b==100)
    {

    }

    //Modo competición
    if (a==80 && b==100)
    {

    }
}
