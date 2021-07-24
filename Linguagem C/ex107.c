#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

For Loop em C - HackerRank

Tarefa

Para cada inteiro  no intervalo[a,b](fornecido como entrada):

Se n > 1 e n < 9, em seguida, imprima a representa��o em ingl�s dela em letras min�sculas. Isso � "um" para, "dois" para , e assim por diante.
Sen�o se n > 9 e � um n�mero par, ent�o imprima "par".
Sen�o se n > 9 e � um n�mero �mpar, em seguida, imprima "�mpar".
Formato de entrada

A primeira linha cont�m um inteiro, a .
A segunda linha cont�m um inteiro, b.

*/
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
      for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        printf("%s\n", labels[labels_index]);
    }

    return 0;
}

#endif

