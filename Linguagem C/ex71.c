#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*6)	Receba K n�meros positivos. Cada n�mero recebido dever� ser armazenado na vari�vel Num
e a vari�vel K representa a quantidade de n�meros solicitada pelo usu�rio.
Exiba a quantidade de m�ltiplos 7.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n;
    k=0;
    num=0;
    numMulti=0;

    do
    {
        printf("Qual a quantidade de n�meros que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas n�meros positivos.\n");
        }
    }
    while(n<=0);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um n�mero: \n");
        scanf("%d", &k);


        if (k%7==0 && k!=0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de n�meros m�ltiplos de sete foi de %d n�mero(s)", numMulti);

}
#endif 



