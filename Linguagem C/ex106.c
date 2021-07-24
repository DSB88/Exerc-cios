#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex01

#ifdef ex01

/*

Declara��es condicionais em C - HackerRank

Tarefa

Dado um n�mero inteiro positivo denotando n, fa�a o seguinte:

Se n > 1 e n < 9, imprima a palavra inglesa min�scula correspondente ao n�mero (por exemplo, onepara, twopara, etc.).
Se n > 9, imprimir Greater than 9.

Formato de entrada

A primeira linha cont�m um �nico inteiro,n.

*/

static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};
int main()
{
    int n = 0;
    if (scanf("%d",&n) < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",strings[n-1]);
    else
        printf("Greater than 9");
    
    return 0;
}

#endif

