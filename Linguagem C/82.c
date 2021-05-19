#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 9)	Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel num armazena cada uma dos K n�meros digitados.

Calcule e mostre a quantidade de n�meros positivos divis�veis por 3,
a m�dia dos n�meros negativos.
Exiba tamb�m o maior n�mero encontrado e quantas vezes ele apareceu.

Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos e as compara��es solicitadas.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,k,num,quant,maior,quantM;
    float numNeg,quant1;
    num=0;
    quant=0;
    numNeg=0;
    quant1=0;
    maior=0;
    quantM=0;

    do
    {
        printf("Digite a quantidade que deseja ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite qualquer n�mero, menos o n�mero 0 (zero).\n");
        }

    }
    while(k<=0);

    for(i=0; i < k; i++)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&num);

        if(num%3==0 && num>0)
        {
            quant++;
        }

        else if(num<0)
        {
            numNeg+=num;
            quant1++;
        }


        if(num > maior || num==maior)
        {

            if(num!=maior)
            {
                maior=num;
                quantM=1;
            }
            else
            {
                maior=num;
                quantM++;
            }
        }

    }

    printf("O maior n�mero encontrado foi %d e a quantidade de vezes que apareceu foi %d",maior,quantM);

    if(quant > 0 && quant1 > 0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual: %d\n",quant);
        printf("A m�dia dos n�meros negativos � igual: %.2f\n",numNeg/quant1);
    }

    else if(quant > 0 && quant1 ==0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual: %d\n",quant);
        printf("A m�dia dos n�meros negativos � igual a zero.\n");
    }

    else if(quant == 0 && quant1 > 0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual a zero.\n");
        printf("A m�dia dos n�meros negativos � igual: %.2f\n",numNeg/quant1);
    }

    else
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual a zero.\n");
        printf("A m�dia dos n�meros negativos � igual a zero.\n");
    }
}


#endif 

