#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex48

#ifdef ex48
/* 
Leia dois valores num�ricos e exibe a diferen�a do maior pelo menor. Se os n�meros forem iguais informe ao usu�rio. 

*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;

    printf("Digite dois n�meros: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os n�meros digitados foram %d e %d s�o n�meros iguais", x,y);
    }
    else if (x>y)
    {
        soma = x-y;
        printf("A diferen�a entre o n�mero digitado %d e %d � %d\n", x,y,soma);
    }
    else
    {
        soma = y-x;
        printf("A diferen�a entre o n�mero digitado %d e %d � %d\n", x,y,soma);
    }

}

#endif ex48