#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 4)	Calcule e mostre a quantidade de  m�ltiplos de cinco e positivos.
OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo usu�rio.
 Os n�meros pares dever�o ser gerados pelo programador.
		2, 4, 6, 8, 10,...
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;


    printf("Qual a quantidade de n�meros que deseja digitar: \n");
    scanf("%d", &n);

    while(num<n)
    {

        num=num + 1;

        k= 2 * num;

        if (k%5==0 && k > 0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de n�meros m�ltiplos de cinco e positivos foi de %d", numMulti);

}
#endif 

