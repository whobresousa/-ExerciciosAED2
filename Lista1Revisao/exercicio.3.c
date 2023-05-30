/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERCÍCIOS 01 - REVISÃO

3) Uma revendedora de carros usados paga a seus funcionários vendedores um 
salário fixo por mês, mais umacomissão também fixa para cada carro vendido e 
mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o 
número de carros por ele vendidos, o valor total de suas vendas, o salário fixo 
e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do 
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
    
    printf ("Digite a comissão por carro: ");
    scanf ("%f",&comissao );
    

    salarioFinal = salarioFixo + quantidade*comissao + 0.05 * venda;
    
    // Saída
    printf ("Salario final= %.2f", salarioFinal);
    return 0;
}
