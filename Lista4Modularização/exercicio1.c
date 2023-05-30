/******************************************************************************
Brenda Oliveira - 8133177
Lista de Exerc�cios 04 � Modulariza��o
 
1)Fa�a um programa que receba os tr�s lados de um tri�ngulo e fa�a as seguintes 
atividades: retornar se os tr�s lados realmente formam um tri�ngulo e que tipo 
de tri�ngulo � este. Cada uma destas atividades deve ser uma fun��o.
*******************************************************************************/
#include <stdio.h>

int formaTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2)
        return 1;  // Tri�ngulo v�lido
    else
        return 0;  // N�o � um tri�ngulo v�lido
}

void tipoTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 == lado2 && lado2 == lado3)
        printf("Triangulo equilatero.\n");
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        printf("Triangulo isosceles.\n");
    else
        printf("Triangulo escaleno.\n");
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite o lado 1 do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o lado 2 do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o lado 3 do triangulo: ");
    scanf("%d", &lado3);

    if (formaTriangulo(lado1, lado2, lado3)) {
        printf("Os lados formam um triangulo.\n");
        tipoTriangulo(lado1, lado2, lado3);
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}

