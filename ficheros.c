#include <stdio.h>

void historia(int a)
{
    int i=0;
    char letra[10000];
    printf("\n\n");
    FILE *pf;
    pf = fopen("historia.txt", "r");

    if(pf == NULL)
        {
            printf("Error al encontrar el archivo");
            return (-1);
        }

    while(fscanf(pf, "%c", &letra[i]) != EOF)
        {
            printf("%c", letra[i]);
            i++;
        }
    printf("\n\n");
}
