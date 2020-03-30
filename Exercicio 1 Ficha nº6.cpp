#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int idade,resultado,diasano=365,horas=24,minutos=60;
	
	printf("Digite a sua Idade :");
	scanf("%d",&idade);
	resultado = (idade*diasano*horas*minutos);
	printf("A sua idade em minutos e ->%d",resultado);
}
