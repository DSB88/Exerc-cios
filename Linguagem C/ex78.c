#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 5-)  Receba dois n�meros. Calcule e mostre:
    a)	A soma dos n�meros pares desse intervalo, incluindo os n�meros digitados;
    b)	A multiplica��o dos n�meros �mpares desse intervalo de n�meros incluindo os n�meros digitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,x1,y,par,impar;
    cont=0;
    par=0;
    impar=1;

    printf("Digite dois n�meros: \n");
    scanf("%d %d", &x, &y);

    x1=x;

    while(x1<=y)
    {


        if(x1%2==0)
        {
            par=par + x1;

        }
        else
        {

            impar=impar * x1;

        }

        x1=x1+1; //Contador


    }

    printf("\nA soma dos n�meros pares do intervalo de %d com %d �: %d\n",x,y,par);
    printf("\nA multiplica��o dos n�meros �mpares do intervalo de %d com %d �: %d",x,y,impar);

}

#endif 


