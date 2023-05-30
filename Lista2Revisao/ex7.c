/******************************************************************************
Brenda Oliveira - 8133177
Lista de Exercícios 02 – vetores e matrizes

7) Faça uma programa que preencha o vetor com 10 numeros reais. Calcule e 
mostre: A soma dos numeros positivos e a quantidade dos negativos
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#define TAM 10

int main() {
    float vetor [10];  
    float somaPositivos = 0; 
    int contNegativos = 0; 
    int i;
    
    printf ("Digite 10 números reais: \n");
        for (i=0; i<10;i++) {
            scanf ("%f", &vetor [i]);
            if (vetor[i]>0) {
                somaPositivos += vetor[i];
            }
            else {
                contNegativos++;
            }
        }
    printf ("A soma dos números positivos é %.2f\n", somaPositivos);
    printf ("A quantidade de números negativos é %d\n", contNegativos);

    return 0;
}


