/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERC�CIOS 01 - REVIS�O

2) Escreva um algoritmo para ler o n�mero total de eleitores de um munic�pio, o 
n�mero de votos brancos, nulos ev�lidos. Calcular e escrever o percentual que 
cada um representa em rela��o ao total de eleitores.
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

