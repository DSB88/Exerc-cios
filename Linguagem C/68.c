#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 3)	Receba a quantidade de idades de K indiv�duos.
K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Idade armazena cada uma das K idades digitadas.
Calcule e mostre a somat�ria dessas idades.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,n,soma;
    k=0;
    num=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de n�meros que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas n�meros acima de zero\n");
        }

    }
    while(n<=0);


    while(num<n)
    {

        num=num + 1;

        printf("Digite uma idade: \n");
        scanf("%d", &k);

        soma = soma + k;
    }

    printf("A somat�ria das idades � igual a %d", soma);

}

#endif 


