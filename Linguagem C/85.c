#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*

12)	Uma empresa contratou a quantidade de funcion�rios representada pela vari�vel Y.
Conforme o valor das vendas mensais, os funcion�rios adquirem pontos que determinar�o seus sal�rios ao final de cada m�s.
Sabe-se que esses funcion�rios trabalhar�o nos meses de novembro a janeiro do ano subsequente.
Utilize os la�os que desejar.

a)	Leia as pontua��es nos tr�s meses de cada funcion�rio;
b)	Calcule e mostre a pontua��o geral de cada funcion�rio nos tr�s meses.
c)	Calcule e mostre a m�dia das pontua��es de cada funcion�rio nos tr�s meses.
d)	Determine e mostre a maior pontua��o atingida entre todos os funcion�rios nos tr�s meses.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y,pontuacaoNov,pontuacaoDez,pontuacaoJan,maior,func;
    float somatoria =0;
    pontuacaoNov=0;
    pontuacaoDez=0;
    pontuacaoJan=0;
    somatoria=0;
    maior=0;
    func=0;


    do
    {

        printf("Qual a quantidade de funcion�rios ? ");
        scanf("%d",&Y);

        if(Y<=0)
        {
            printf("N�mero inv�lido! Digite um n�mero superior a 0 (zero).\n");
        }
    }
    while(Y<=0);

    for(int i=0; i < Y; i++)
    {

        do
        {

            printf("Digite a pontua��o do funcionario %i no m�s de novembro: ",i+1);
            scanf("%d",&pontuacaoNov);

            printf("Digite a pontua��o do funcionario %i no m�s de dezembro: ",i+1);
            scanf("%d",&pontuacaoDez);

            printf("Digite a pontua��o do funcionario %i no m�s de janeiro: ",i+1);
            scanf("%d",&pontuacaoJan);

            if(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0)
            {
                printf("\nN�mero digitado Inv�lido ! Digite zero ou um n�mero superior a zero.\n");
            }

        }
        while(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0);

        somatoria=pontuacaoNov+pontuacaoDez+pontuacaoJan;


        if(somatoria > maior)
        {
            maior=somatoria;
            func=i;
        }

        printf("\nFuncion�rio %d sua pontua��o nos 3 meses foi: %.0f",i+1,somatoria);
        printf("\nFuncion�rio %d sua pontua��o m�dia nos 3 meses foi: %.2f\n\n",i+1,somatoria/3);

        somatoria=0;

    }

    printf("\--------------------------------------------------\n");
    printf("A maior pontua��o dos 3 meses atingida foi: %d.",maior);
    printf("\nO Funcion�rio n�mero:[%d] foi o que mais pontuou.",func+1);
    printf("\n--------------------------------------------------\n");

}

#endif 

