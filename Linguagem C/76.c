#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
/* 3)	Receba K n�meros inteiros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio
e cada termo pode ser representado pela vari�vel N.
Exiba a quantidade de n�meros positivos recebidos e a m�dia dos n�meros �mpares.
Utilize o la�o do while para a entrada da quantidade K e um la�o while para efetuar os c�lculos solicitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,cont,n,numPositivo;
    float numImpar,soma;
    k=0;
    cont=0;
    numPositivo=0;
    numImpar=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de termos que deseja digitar: \n");
        scanf("%d", &n);
    }
    while(n<=0);

    while(cont<n)
    {

        printf("Digite um n�mero: \n"); //Est� ocorrendo um bug do sistema ao digitar -10.
        scanf("%d", &k);


        if(k>=0)
        {
            numPositivo=numPositivo + 1;
        }
        if (k%2!=0)
        {
            numImpar = numImpar + 1;
            soma = soma + k;
        }
        cont=cont + 1;

    }
    if(numPositivo==0 && numImpar==0)
    {
        printf("\nN�o foram digitados n�meros positivos nem n�meros �mpares");
    }
    else if (numPositivo==0)
    {
        printf("\nN�o foram digitados n�meros positivos e a m�dia dos n�meros �mpares � %.2f",soma/numImpar);
    }
    else if(numImpar==0)
    {
        printf("\nQuantidade de n�meros positivos � %d, n�o foram digitados n�meros �mpares",numPositivo);
    }
    else
    {
        printf("\nQuantidade de n�meros positivos � %d e a m�dia dos n�meros �mpares � %.2f",numPositivo, soma/numImpar);
    }

}

#endif 


