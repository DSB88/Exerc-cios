#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/* 6)	Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados.
Calcule e mostre a somat�ria dos sal�rios superiores a 3 sal�rios-m�nimos
e inferior ou igual a 7 sal�rios-m�nimos.
Exiba tamb�m o maior e o menor sal�rio encontrado.
Utilize o la�o while para a entrada da quantidade K
e um la�o while para efetuar os c�lculos e as compara��es solicitadas.
Obs: O valor do sal�rio m�nimo dever� ser pesquisado na Internet.
*/
//sal�rio m�nimo em 2021 = R$ 1.100.

main()
{

    setlocale(LC_ALL, "Portuguese");

    int k=0,cont;
    float salario,minimo,maior,menor,somaSalario;
    salario=0;
    cont=0;
    minimo=1100;
    maior=0;
    somaSalario=0;
    menor=0;


    while(k<=0)
    {

        printf("Qual a quantidade de sal�rios que ir� digitar ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite um n�mero maior que 0 (zero).\n");
        }
    }


    while(cont<k)
    {
        cont=cont+1;

        printf("Digite o sal�rio: ");
        scanf("%f",&salario);

        if(salario > 3*minimo && salario <= 7*minimo)
        {
            somaSalario = somaSalario + salario;
        }

        if(cont==1)
        {
            maior=salario;
            menor=salario;
        }
        else if(salario > maior)
        {
            maior=salario;
        }
        else if(salario < menor)
        {
            menor=salario;
        }

    }

    printf("\nA Somat�ria dos sal�rios pedidos � %.2f\n",somaSalario);
    printf("\nO maior dos sal�rios digitados foi %.2f\n",maior);
    printf("\nO menor dos sal�rios digitados foi %.2f\n",menor);

}


#endif 


