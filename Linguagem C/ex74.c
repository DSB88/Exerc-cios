#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.
OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo usu�rio.
Os n�meros pares dever�o ser gerados pelo programador.
Utilize o la�o while para a entrada da quantidade K e um la�o for para o c�lculo da m�dia.
		2, 4, 6, 8, 10, ..
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,m;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    m=2;

    do
    {

        printf("Qual a quantidade de n�meros que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um n�mero acima de 0 (zero).");
        }

    }
    while(n<=0);  // la�o para aceitar apenas n�meros acima de zero.

    for(num=1; num <= n; num++)
    {

        k= m * num; // m, simboliza o multiplicador = 2

        if (k%5==0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de n�meros m�ltiplos de cinco e positivos foi de %d", numMulti);

}

#endif 


