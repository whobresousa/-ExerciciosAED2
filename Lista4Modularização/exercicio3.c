/******************************************************************************
Brenda Oliveira - 8133177
Lista de Exerc�cios 04 � Modulariza��o
 
1)Fa�a um programa que calcule a soma dos N primeiros n�meros primos, sendo N 
definido pelo usu�rio na fun��o main. O programa ainda dever� ter as fun��es 
somaPrimos e primo, sendo que a primeira ser� respons�vel pela soma dos n�meros
que forem primos e a segunda ser� respons�vel por verificar se o n�mero em quest�o
 � primo ou n�o.
*******************************************************************************/
#include <stdio.h>

int primo (int x) {
  int retorno = 1; // Eh primo
  for (int i=2; i<= x/2; i++)
    if (x%i==0) retorno = 0; // Nao eh primo
    
  return retorno;
}
int somaPrimo (int n) {
    int soma=0, aux=2;
    while (n>0) {
        if (primo (aux)) {
            soma=soma+aux;n--; 
            printf ("\nPrimo=%d", aux);
        }
        aux++;
    }
    return soma;
}

int main(){
    int n, soma;
    printf("Quantos primos quer somar ? ");
    scanf ("%d", &n);
    soma = somaPrimo (n);
    printf ("\nSoma=%d", soma);
    return 0;
}
