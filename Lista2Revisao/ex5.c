/*******************************************************************************
Brenda Oliveira - 8133177
Lista de Exercícios 02 – vetores e matrizes
 
5)Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa.
*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main() {
    
    int vetOriginal[6], vetInvert[6];
    int i;
    
    for(i = 0; i < 6; i++) {
        printf("Digite um número!\n");
        scanf("%d", &vetOriginal[i]);
    }
    for(i = 0; i < 6; i++) {
        vetInvert[i] = vetOriginal[6-i-1];
        printf("\n O vetor invertido é: %d", vetInvert[i]);
    }
    return 0;
}

