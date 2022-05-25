#include <stdio.h>
#include <stdlib.h>


int main()
{
    cronometro (1);
    return 0;
}




void cronometro(int a)
{
    int segundos = 0;
    int minutos = 0;
    int horas = 0;


    printf ("iniciar: ");
    system("pause ->NUL");

    while (horas!=a)
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
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t[ %.2d:%.2d:%.2d ]", minutos, horas, segundos);
        Sleep(1000);
    }




}
