#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main()
{
    int vet1[tam], vet2[tam], vet3[tam*2], aux=0,i,j;
    for(int i=0;i<tam*2;i++)
    {
        scanf("%d", &vet1[i]);
    }
    for(int i=0;i<tam*2;i++)
    {
        scanf("%d", &vet2[j]);
    }
     for(int i=0;i<tam*2;i++)
    {
        vet3[i] = vet1[i];
        vet3[i+tam] = vet2[i];
    }
    for(i=0;i<tam*2;i++)
    {
        for(j=0;j<tam*2;j++)
        {
            if(vet3[i] < vet3[j])
            {
                aux = vet3[i];
                vet3[i] = vet3[j];
                vet3[j] = aux;
            }
        }
    }
    printf("Ordem crescente: ");
    for(i=0;i<tam*2;i++)
    {
        printf("|%d|", vet3[i]);
    }
return 0;
}
