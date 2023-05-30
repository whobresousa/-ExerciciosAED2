/*******************************************************************************
Brenda Oliveira - 8133177
Lista de Exercícios 02 – vetores e matrizes
 
3)Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*******************************************************************************/
#include <stdio.h>
#define TAM 2
int main()
{
    int v[TAM], total=0;
    int i;
    
    // entrada
    for (i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (i=0; i<TAM; i++) {
        if (v[i]%2==0) total++;
    }
    
    // saida
    printf("\nQuantidade de pares= %d", total);

    return 0;
}

