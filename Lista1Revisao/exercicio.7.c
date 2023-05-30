/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERCÍCIOS 01 - REVISÃO

7) Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, 
deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o 
valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float result, a, b;
    
    printf ("Digite um numero: ");
    scanf ("%f",&a);
    
    while(b == 0){
       printf ("Digite um numero: ");
       scanf ("%f",&b);
    }
    
    result = a / b;
    printf("Divisao: = %.1f", result);
    return 0;
}

