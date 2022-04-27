//laberinto

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
    Utilice "w", "s" en el teclado,
         "a", "D" controlan el movimiento del balón,
         Mover a ">" para ganar
*/

main()
{
    char a[50][50]={"#############################",
                    "#o        #   ### ## ### ####",
                    "# ##### # # #  ##   ## ### ##",
                    "# #   # #  ### ### # # #    #",
                    "#   # #### # # # ###    # ###",
                    "##### #  # # #  ## ## ###   #",
                    "#   # # #  #  #    ##   ## ##",
                    "# # # ## # # # ## #####  # ##",
                    "# # # # ## #  # #   #    ## #",
                    "# #   ##        ### ###  # ##",
                    "# #####  # ##  ##   ##      #",
                    "#       ## ##             # #",
                    "# ######## # # # ###  #   # >",
                    "#     #  # #     #   ## # # #",
                    "##### #  # # # # ###  # # # #",
                    "#     #  # # #   ##  ## # # #",
                    "# # #        ### ## # # #  ##",
                    "# #   ###  ##       #    #  #",
                    "#############################",
                    };
int i,x,y,p,q,j;
char ch;
 x=1;
 y=1;
 p=12;
 q=28;
 for(i=0;i<=10;i++)
 {
     for (j=0; j<=10; j++)
     {
         printf ("%c", a[i][j]);
     }
 }
    for
 while(x != p || y != q)
 {
     ch = getch();
     if(ch == 's')
     {
         if(a[x+1][y] != '#')
         {
             a[x][y] = ' ';
             x++;
             a[x][y]='o';
         }
     }
    if(ch == 'w')
    {
         if(a[x-1][y] != '#')
         {
             a[x][y] = ' ';
             x--;
             a[x][y]='o';
         }
    }
    if(ch == 'a')
    {
         if(a[x][y-1] != '#')
         {
             a[x][y] = ' ';
             y--;
             a[x][y]='o';
         }
    }
    if(ch == 'd')
    {
         if(a[x][y+1] != '#')
         {
             a[x][y] = ' ';
             y++;
             a[x][y]='o';
         }
    }
         system("cls");
         for(i=0;i<=18;i++)
            puts(a[i]);
    }
    system("cls");
    printf("¡Vaya, ganaste! \ N");
}


