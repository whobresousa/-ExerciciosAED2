/******************************************************************************
Brenda Oliveira - 8133177
Lista de Exerc�cios 02 � vetores e matrizes
 
1)Ler um conjunto de n�meros reais, armazenando-o em vetor e calcular o quadrado
das componentes deste vetor, armazenando o resultado em outro vetor. Os
conjuntos t�m 10 elementos cada. Imprimir todos os conjuntos (vetores).

*******************************************************************************/
#include <stdio.h>
#define TAM 10

void main(){
    float v[TAM], vQuadrado[TAM];
    int i;
    
    for(i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%f", &v[i]);
    }
    
    for (i=0; i<TAM;i++){
        vQuadrado[i] = (v[i] * v[i]);
        printf("valor de v[%d]: %.1f e o seu quadrado �: %.1f\n", i, v[i], vQuadrado[i]);
    }
}

