/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERC�CIOS 01 - REVIS�O

3) Uma revendedora de carros usados paga a seus funcion�rios vendedores um 
sal�rio fixo por m�s, mais umacomiss�o tamb�m fixa para cada carro vendido e 
mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o 
n�mero de carros por ele vendidos, o valor total de suas vendas, o sal�rio fixo 
e o valor que ele recebe por carro vendido. Calcule e escreva o sal�rio final do 
vendedor.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade;
    float venda, salarioFixo, comissao, salarioFinal;

    // Entrada
    printf ("Digite a quantidade de carros: ");
    scanf ("%d",&quantidade);
    
    printf ("Digite o total das vendas: ");
    scanf ("%f",&venda );
    
    printf ("Digite o salario fixo: ");
    scanf ("%f",&salarioFixo );
    
    printf ("Digite a comiss�o por carro: ");
    scanf ("%f",&comissao );
    

    salarioFinal = salarioFixo + quantidade*comissao + 0.05 * venda;
    
    // Sa�da
    printf ("Salario final= %.2f", salarioFinal);
    return 0;
}
