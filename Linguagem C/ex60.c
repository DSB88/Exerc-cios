#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        4.	Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x;

    printf("Digite um n�mero: \n");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("O n�mero digitado, %d � par.\n",x);

    }
    else
    {
        printf("O n�mero digitado, %ld � �mpar.\n",x);

    }
}
#endif 


