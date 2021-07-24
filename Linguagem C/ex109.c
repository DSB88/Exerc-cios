#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

Calcule o en�simo termo - HackerRank

Tarefa

Tarefa

Existe uma s�rie, S , onde o pr�ximo termo � a soma dos tr�s termos anteriores. Dados os tr�s primeiros termos da s�rie,A,B , e respectivamente, voc� tem que emitir o n � termo da s�rie usando recurs�o.

O m�todo recursivo para calcular o n- �simo termo � fornecido abaixo.


*/

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

#endif

