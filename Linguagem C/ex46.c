#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex46

#ifdef ex46
/* 
Receba via teclado dois n�meros quaisquer e exiba a soma entre eles. */

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;
    do
    {

        printf("Digite dois n�meros: \n");
        scanf("%d" "%d", &x, &y);

        if (x<0 || y<0)
        {
            printf("Digite apenas n�meros positivos\n\n");//Acrescentei ao programa essa regra.
        }
    }
    while(x<0 || y<0);

    soma = x+y;

    printf("A soma dos n�meros digitados �: %d\n",soma);

    system("pause"); // pausa o programa
}

#endif ex46