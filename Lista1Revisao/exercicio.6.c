/******************************************************************************

15/02/23 - Brenda - LISTA DE EXERC�CIOS 01 - REVIS�O

6) Considere o seguinte algoritmo. Realize o teste de mesa para os valores dados 
e preencha o quadro::
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, z;
    char resposta, A, B, C;
    
    scanf("%d%d", &x, &y);
    z = (x*y) + 5;
    
    if(z <= 0)
        printf("Z, A");
    else
        if (z <= 100)
            printf("Z, B");
        else printf("Z, C");
}


