#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    char nome[tam][100];
    int totvendas[tam],comissao[tam];

    for(int i=0;i<tam;i++)
    {
        printf("digite o nome dos funcionarios: ");
        scanf("%s", nome[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("|%s|", nome[i]);
    }
    for(int i=0;i<tam;i++)
    {
        printf("digite o total de vendas do vendedor %s da loja: ", nome[i]);
        scanf("%d", &totvendas[i]);
    }
    for(int i=0;i<tam;i++)
    {
        printf("|%d|", totvendas[i]);
    }
    for(int i=0;i<tam;i++)
    {
        printf("digite o valor da comissao de cada funcionario: ");
        scanf("%d", &comissao[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("|%d|", comissao[i]);
    }



return 0;
}
