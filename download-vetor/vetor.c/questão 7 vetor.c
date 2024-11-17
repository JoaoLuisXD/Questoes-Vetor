#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    float vet[tam];
    int i;
    printf("digite 10 numeros abaixo \n");
    for(i=0;i<tam;i++)
    {
        scanf("%f", &vet[i]);
    }
    for(i=0;i<tam;i++)
    {
        printf("|%f|", vet[i]);
    }
    printf("\nnumeros negativos abaixo\n");
    for(i=0;i<tam;i++)
    {
        if(vet[i] < 0)
        {
            printf("|%f|\n", vet[i]);
        }
    }
    float soma=0;
    printf("soma dos positivos\n");
    for(i=0;i<tam;i++)
    {

        if(vet[i])
        {
            soma+=vet[i];
        }

    }
     printf("|%f|\n", soma);






    return 0;
}
