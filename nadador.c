
///Algoritimo by Matheus Roggero//
#include<stdio.h>

int main()
{
	//ALGORITIMO PARA VERIFICAR SE QUAL IDADE DO NADADOR E QUAL A CLASSE A QUE ELE PERTENCE//
	int idade;
	printf("Olá Nadador,Informe sua idade:\n");
	scanf("%d",&idade);
	if (idade == 5  || idade == 6 || idade == 7)
	{
		printf("Você é Nadador do Tipo A!!");
		/* code */
	}
	else 
		if (idade == 8 || idade == 10 )
		{
			printf("Você é Nadador do Tipo B!!\n");
		}
	else
		if ( idade == 14 || idade == 15 || idade == 16 || idade == 17)
		{
			printf("Você é Nadador do Tipo C!!\n");
		}
	else 
		if (idade < 5)
		{
			printf("Você é Nadador Aprendiz!!\n");
		}

	return 0;
}