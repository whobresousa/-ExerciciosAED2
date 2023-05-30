/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERCÍCIOS 01 - REVISÃO

9) Escreva um algoritmo que imprima as seguintes seqüências de números: 
(1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9 10) (3, 1 2 3 4 5 6 7 8 9 10)
 (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até que o primeiro número
(antes da vírgula), também chegue a 10.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 1;
    
    while (n <= 10){
        printf("%d, 12345678910\n", n++);
    }
}

