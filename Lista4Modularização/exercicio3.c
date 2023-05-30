/******************************************************************************
Brenda Oliveira - 8133177
Lista de Exercícios 04 – Modularização
 
1)Faça um programa que calcule a soma dos N primeiros números primos, sendo N 
definido pelo usuário na função main. O programa ainda deverá ter as funções 
somaPrimos e primo, sendo que a primeira será responsável pela soma dos números
que forem primos e a segunda será responsável por verificar se o número em questão
 é primo ou não.
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
