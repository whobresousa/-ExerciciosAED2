/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERCÍCIOS 01 - REVISÃO

4) As maçãs custam R $1,30 cada se forem compradas menos de uma dúzia, e R $1,00 
se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs 
compradas e escreva o custo total da compra.
*******************************************************************************/
#include <stdio.h>

int main()
{
    double total, precoUnit;
    int qtdmaca;
    
    // Entrada
    printf ("Digite a quantidade de maca: ");
    scanf ("%d",&qtdmaca);
    
    if(qtdmaca < 12){
      precoUnit = 1.30;
      total = qtdmaca * precoUnit;
    }
    
    // Saída
    printf ("Custo= %.2f", total);
    return 0;
}

