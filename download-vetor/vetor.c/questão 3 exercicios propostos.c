#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[7];
    for (int i=0; i<=6; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\n-------------------------");
    printf("\nNUMEROS DIGITADOS\n");

    for (int i=0; i<=6; i++)
    {
        printf("|%d|", numeros[i]);
    }
    printf("\n-------------------------");
     for (int i=0; i<=6; i++)
    {
        if(numeros[i]%2==0)
        {
           printf("\nO NUMERO |%d| E MULTIPLO DE 2", numeros[i]);
        }
    }
    printf("\n-------------------------");
     for (int i=0; i<=6; i++)
    {
        if(numeros[i]%3==0)
        {
           printf("\nO NUMERO |%d| E MULTIPLO DE 3", numeros[i]);
        }
    }
    printf("\n-------------------------");
     for (int i=0; i<=6; i++)
    {
        if(numeros[i]%2==0 && numeros[i]%3==0)
        {
           printf("\nO NUMERO |%d| E MULTIPLO DE 2 E 3", numeros[i]);
        }
    }
    printf("\n-------------------------");



return 0;
}
