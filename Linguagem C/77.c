#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
/* 4)	Receba K n�meros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio e
cada termo pode ser representado pela vari�vel N. Exiba o maior n�mero digitado. Utilize o la�o do while para a entrada
da quantidade K e um la�o for para exibir o maior n�mero.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,maior;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    maior=0;

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

        printf("Digite um n�mero: ");
        scanf("%d",&k);

        if(num==1)
        {
            maior=k;
        }

        if (k > maior)
        {
            maior= k;
        }

    }

    printf("\nO maior n�mero digitado foi %d", maior);

}


#endif ex4


