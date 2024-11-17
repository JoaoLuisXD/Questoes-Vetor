#include <stdio.h>
#include <stdio.h>

int main()
{
    int vet[4], aux,i,j;
    for(int i=0; i<=3; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for( i=0; i<=3; i++)
    {
        for( j=0; j<4; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
     for(int i=0; i<=3; i++)
    {
        printf("|%d|",vet[i]);

    }

return 0;
}
