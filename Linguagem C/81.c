#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 8)	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano anterior.
        Fa�a um programa que leia os dados digitados pelo usu�rio, sendo que dever�o ser solicitados dados at� que a idade digitada seja um valor negativo.

 Depois, calcule e imprima:

a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)  A m�dia de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que n�o leram LIVROS.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int idade,livro,quant,quantF,media;
    float cont, quantLiv, idadeH, quantM,soma;
    char sexo;
    idade=1;
    livro=0;
    sexo= 'f','m';
    quant=0;
    quantF=0;
    cont=0;
    quantM=0;
    quantLiv=0;
    idadeH=0;
    soma=0;
    media=0;

    do
    {
        do{
        printf("\nQual sua idade ?\n ");
        scanf("%d",&idade);
        getchar();
        }while(livro<0);

        if(idade > 0)
        {
           cont=cont+1;

           do
           {
            printf("\nQual o seu sexo, digite (m) para homem, ou (f) para Mulher\n");
            scanf("%c",&sexo);
           }while(sexo!='f'&&sexo!='m');

           do
           {
             printf("Quantos livros voc� leu no ano anterior ? \n");
             scanf("%d",&livro);
           }while(livro<0);

           if(idade < 10 && livro > 0)
           {
               quant=quant+livro;
           }

           if (sexo == 'f'  && livro >5)
           {
               quantF = quantF + 1;
           }

           if (sexo == 'm' && livro < 5)
           {
               idadeH = idadeH + idade;
               quantM = quantM + 1;
               media=idadeH/quantM;
           }

           if(livro==0)
           {
               quantLiv=quantLiv+1;
           }
        }

    }
    while(idade>0);

    printf("\nA quantidade de livros lidos por menores de 10 anos �: %d\n",quant);
    printf("\nA quantidade de mulheres que leram 5 livros ou mais �: %d\n",quantF);
    printf("\nA m�dia de idade dos homens que leram menos que 5 livros �: %d\n",media);
    printf("\nO percentual de pessoas que n�o leram livros �: %.2f %%\n",quantLiv*100/cont);

}

#endif 

