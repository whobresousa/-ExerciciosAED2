/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERCÍCIOS 01 - REVISÃO

2) Escreva um algoritmo para ler o número total de eleitores de um município, o 
número de votos brancos, nulos eválidos. Calcular e escrever o percentual que 
cada um representa em relação ao total de eleitores.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int total, nulo, branco, valido;
    
    printf("Digite o total de votos:");
	scanf("%d",&total);
	
    printf("Digite o total de votos NULOS:");
	scanf("%d",&nulo);
	
	printf("Digite o total de votos BRANCOS:");
	scanf("%d",&branco);
	
	valido = total - branco - nulo;
	
	//saida
	printf("Percentual de NULOS = %.1f", (nulo * 1.0 )/ total * 100);
	printf("Percentual de BRANCOS = %.1f", (branco * 1.0 )/ total * 100);
	printf("Percentual de VALIDOS = %.1f", (valido * 1.0 )/ total * 100);
    return 0;
}

