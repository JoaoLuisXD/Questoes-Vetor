#include <stdio.h>

#define MAX_PRODS 4

int main()
{
	int cod_prod[MAX_PRODS], estoque[MAX_PRODS],
	cod_cliente, prod_cliente, quant, prod_existe = 0, id_prod;
	for(int i = 0; i < MAX_PRODS; i++)
	{
		printf("Registre o Codigo do Produto %d: ",i+1);
		scanf("%d",&cod_prod[i]);
		printf("Registre a Quantidade do Produto %d: ",cod_prod[i]);
		scanf("%d",&estoque[i]);
	}
	do
	{
		printf("Digite o Codigo do Cliente: ");
		scanf("%d", &cod_cliente);
		if(cod_cliente == 0)
		{
			for(int i = 0; i < MAX_PRODS; i++)
			{
				printf("\nQuantidade de Produtos [%d]: %d\n", cod_prod[i],estoque[i]);
			}
			return 0;
		}
		printf("Codigo do Produto Desejado: ");
		scanf("%d",&prod_cliente);
		for(int i = 0; i < MAX_PRODS; i++)
		{
			if(prod_cliente == cod_prod[i])
			{
				prod_existe = 1;
				id_prod = i;
			}
		}
		if(prod_existe)
		{
			printf("Quantidade Desejada: ");
			scanf("%d",&quant);
			while(quant > estoque[id_prod])
			{
				printf("Nao temos essa quantidade no estoque!\n\n");
				printf("Quantidade Desejada: ");
				scanf("%d",&quant);
			}
			estoque[id_prod] -= quant;
			printf("Pedido Finalizado!\nObrigado, volte sempre!\n\n");
		}
		else
		{
			printf("Codigo Inexistente\n\n!");
		}
	}
 	while(cod_cliente != 0);
	return 0;
}
