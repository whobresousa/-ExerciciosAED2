/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERC�CIOS 01 - REVIS�O

4) As ma��s custam R $1,30 cada se forem compradas menos de uma d�zia, e R $1,00 
se forem compradas pelo menos 12. Escreva um programa que leia o n�mero de ma��s 
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
    
    // Sa�da
    printf ("Custo= %.2f", total);
    return 0;
}

