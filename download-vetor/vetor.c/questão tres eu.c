#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigo[10],totalprodutos[10],codigocliente,produtocliente,produtoexiste,idproduto,quantidade;
    for (int i=0;i<=9;i++)
    {
        printf("digite o codigo do produto %d: ",i+1);
        scanf("%d", &codigo[i]);
        printf("o total de produtos disponiveis: ");
        scanf("%d", &totalprodutos[i]);
    }
		printf("Digite o Codigo do Cliente: ");
		scanf("%d", &codigocliente);
		if(codigocliente == 0)
		{
            printf("codigo invalido");
			return 0;
		}
    printf("codigo do produto desejado: ");
    scanf("%d", &produtocliente);
    for (int i=0;i<=9;i++)
    {
        if(produtocliente == codigo)
        {
        produtoexiste = 1;
        idproduto = i;
        }
    }
    if(produtoexiste = 1)
    {
        printf("digite a quantidade desejada: ");
        scanf("%d", &quantidade);
        while(quantidade > totalprodutos[idproduto])
        {
            printf("nao temos a quantidade suficiente desse produto no estoque, ");
            printf("digite a quantidade desejada: ");
            scanf("%d", &quantidade);
        }
        totalprodutos[idproduto] <= quantidade;
        printf("\npedido finalizado");
    }
    else
    {
        printf("codigo inexistente");
    }



return 0;
}
