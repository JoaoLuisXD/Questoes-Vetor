#include <stdio.h>
#include <stdlib.h>
#define tam 15
int main()
{

int vet[tam],i=0, aux;

for(int i=0;i<=tam-1;i++)
{
    printf("digite um numero: ");
    scanf("%d", &vet[i]);
}
printf("-----------------------------------------------\n");
printf("NUMEROS DIGITADOS\n");
for(int i=0;i<=tam-1;i++)
{
    printf("|%d|\n", vet[i]);
}
printf("\n-----------------------------------------------");
for(int i=0;i<=tam-1;i++)
{
    if(vet[i]==30)
    {
        aux++;
        if(aux=!0)
        {
        printf("\nnumeros iguais a {30} na posicao |%d| do vetor", i+1);
        }
    }
}
printf("\n-----------------------------------------------");
printf("\n");

return 0;
}
