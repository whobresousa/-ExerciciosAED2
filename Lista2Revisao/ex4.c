/*******************************************************************************
Brenda Oliveira - 8133177
Lista de Exerc�cios 02 � vetores e matrizes
 
4)Escreva um programa que leia 10 n�meros inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posi��o que ele se encontra.
*******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posicao;
    int i;
    // entrada
    for (i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    maior = v[0]; posicao=0;
    for (i=1; i<TAM; i++) {
        if (v[i]> maior) {
            maior= v[i];
            posicao = i;
        }
    }
    printf("\nO maior elemento � %d e est� na posi��o %d", maior, posicao);

    return 0;
}
