#include <stdio.h>
main()
{
	float preco, total=0;
	int x;
	for(x=1; x<=5; x++)
	{
		printf("\n Digite o preço do produto: ");
		scanf("%f", &preco);
		total = total + preco;
	}
	printf("\n\n O total foi de R$%0.2f", total);
}
