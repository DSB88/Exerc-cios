#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 5)	Receba K n�meros. A vari�vel Num armazena cada  n�mero digitado considerando essa quantidade k.
Exiba a quantidade de n�meros pares negativos e quantas vezes o n�mero zero foi digitado.
Obs1: K representa a quantidade de n�meros digitados pelo usu�rio.
      Obs2: A vari�vel Num representa cada n�mero digitado pelo usu�rio.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numImpar,numZero,n;
    k=0;
    num=0;
    numImpar=0;
    numZero=0;

    printf("Qual a quantidade de n�meros que deseja digitar: \n");
    scanf("%d", &n);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um n�mero: \n");
        scanf("%d", &k);


        if (k%2==0 && k < 0)
        {
            numImpar= numImpar +1;
        }

        else if(k==0)
        {
            numZero= numZero + 1;
        }

    }

    printf("A quantidade de n�meros pares negativos digitados foi %d e a quantidade de vezes que zero foi digitado foi %d", numImpar,numZero);

}

#endif 



