/*******************************************************************************
Brenda Oliveira - 8133177
Lista de Exerc�cios 02 � vetores e matrizes
 
2) Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois
valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu
programa dever� escrever a soma dos valores encontrados nas respectivas posi��es
X e Y.
*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#define TAM 8
int valida() {
    int aux;
    printf ("Digite o valor: ");
    scanf ("%d",&aux);
    while (aux <0 || aux >= TAM){
        printf ("Valor invalido. Digite novamente: ");
        scanf ("%d",&aux);
    }
    return aux;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	int array[TAM], i;
	int x, y, a=0, b=0, s=0;
	printf("Digite 8 valores:\n");
	for(i=0;i<TAM;i++){
		printf("Insira o numero v[%d]: ",i); scanf("%d", &array[i]);
	}
	x=valida();
	y=valida();
	
    a=array[x];
	b=array[y];

	s = a+b;
	printf("\nA soma dos valores encontrados nas posi�oes %d e %d: %d", x, y, s);
	
	return 0;
}



