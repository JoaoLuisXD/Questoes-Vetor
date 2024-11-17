#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int vet1[10],vet2[10];
    printf("digite 10 numeros pro primeiro vetor: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &vet1[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("|%d|", vet1[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(vet1[i] == 0)
        {
            vet2[i] = 1;
        }
        else
        {
            vet2[i] = vet1[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("|%d|", vet2[i]);
    }

    return 0;
}
