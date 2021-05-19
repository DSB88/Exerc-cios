#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/* 10)	Gere a seguinte sequ�ncia abaixo para K termos.
K representa a quantidade de n�meros que o usu�rio gostaria quer fosse exibida dessa sequ�ncia.
Mostre tamb�m a somat�ria apenas dos n�meros divis�veis por 3 dessa sequ�ncia.
Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos solicitados.
		1, 1, 2, 3, 5, 8, 13, 21, .....


        L�gica tentada, abaixo.

        n1  + (n2-i);
		n1=n3;
		n2=n3;

        resultado= n1  + (n2-i);
       n3=resultado;

      printf("%d " "",resultado);
      n1=n3;
      n2=n1;

*/

main()
{

    setlocale(LC_ALL, "Portuguese");


    int x,num, n1, n2,somatoria;
    somatoria=0;
    n1 = 1;
    n2 = 0;

    do
    {
        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um n�mero maior que 0 (zero) !\n");
        }

    }while(x<=0);

    printf (" %d", n1);
    for (int i = 2; i < x; ++i)
    {
        num = n2 + n1;

        if(num%3==0)
        {
            somatoria+=num;
        }

        printf (" %d", num);
        n2 = n1;
        n1 = num;
    }

    printf ("\n\n");

    if(somatoria > 0){
    printf ("A somat�ria dos n�meros divis�veis por tr�s � igual a %d\n",somatoria);
    }
    else{
        printf("N�o existe n�mero divis�vel por tr�s\n");
    }

    system("pause");

}


#endif 

