#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ()
{
    int segundos = 0;
    int minutos = 0;
    int horas = 0;

    printf ("iniciar: ");
    system("pause ->NUL");

    while (1)
    {
        segundos++;

        if (segundos==60)
        {
            segundos=0;
            minutos++;
            if (minutos=60)
            {
                minutos=0;
                horas++;
            }

        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t[ %.2d:%.2d:%.2d ]", horas, minutos, segundos);
        Sleep(1000);
    }

}
