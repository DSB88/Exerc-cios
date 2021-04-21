#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex3

#ifdef ex1

/*
Problema "terreno"

Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da �rea do terreno, bem como o valor do pre�o do terreno, ambos com
duas casas decimais, conforme exemplo.

Exemplo:
Digite a largura do terreno: 10.0
Digite o comprimento do terreno: 30.0
Digite o valor do metro quadrado: 200.00
Area do terreno = 300.00
Preco do terreno = 60000.00

*/
main()
{

    setlocale(LC_ALL,"Portuguese");

    float L,C,M,A,P;
    A=0;
    P=0;

    do
    {

        printf("Digite a largura do terreno:\n");
        scanf("%f",&L);

        printf("Digite o comprimento do terreno:\n");
        scanf("%f",&C);

        printf("Digite o valor do metro quadrado:\n");
        scanf("%f",&M);

        if(L==0 || C==0 || M==0)
        {
            printf("\nDigite apenas n�meros acima de 0 (zero).\n");
        }

    }
    while(L==0 || C==0 || M==0);

    A=L*C; //C�lculo da �rea
    P=M*A; //C�lculo do pre�o do m�

    printf("\n�rea do terreno = %.2f\n",A);
    printf("Pre�o do terreno = %.2f",P);

}
#endif ex1

#ifdef ex2
/*
Problema "retangulo"

Fazer um programa para ler as medidas da base e altura de um ret�ngulo. Em seguida, mostrar o valor
da �rea, per�metro e diagonal deste ret�ngulo, com quatro casas decimais, conforme exemplos.

Exemplo:
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000
PERIMETRO = 18.0000
DIAGONAL = 6.4031

*/
main()
{

    setlocale(LC_ALL, "Portuguese") ;

    float BA,AL,A,PE,DIAG;


    do
    {

        printf("Digite a base do ret�ngulo: ");
        scanf("%f",&BA);

        printf("Digite a altura do ret�ngulo: ");
        scanf("%f",&AL);

        if(BA==0 || AL==00)
        {
            printf("\nDigite apenas n�meros maiores que 0 (zero).\n");
        }

    }
    while(BA==0 || AL==00);

    A=BA*AL; // BASE * ALTURA
    PE= 2 * (BA+AL);       // F�RMULA = 2(b + h)
    DIAG= sqrt( pow(BA, 2) + pow(AL, 2) ); // diagonal = raiz quadrada de altura� + base�
    //fun��o sqrt = calcula a raiz quadrada, fun��o pow = calcula potencia��o.

    printf("\n�REA = %.4f\n",A);
    printf("\nPER�METRO = %.4f\n",PE);
    printf("\nDIAGONAL = %.4f\n",DIAG);

}


#endif ex2

#ifdef ex3

/* Problema "idades"

Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade m�dia entre essas pessoas, com uma casa decimal, conforme exemplo.

Exemplo:
Dados da primeira pessoa:
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa:
Nome: Joao Melo
Idade 20
A idade m�dia de Maria Silva e Joao Melo � de 19.5 anos
*/

main()
{

    setlocale(LC_ALL, "Portuguese");


    float media,idade,idade2;
    char nome[50],nome2[50];


    printf("\Dados da primeira pessoa:\n ");
    printf("\nNome: ");
    gets(nome);

    printf("Idade: ");
    scanf("%f",&idade);

    printf("\nDados da segunda pessoa:\n ");
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END); //Fun��o necess�ria para leitura do gets.
    gets(nome2);
    printf("Idade: ");
    scanf("%f",&idade2);


    media = (idade+idade2) / 2;

    printf("\nA idade m�dia de %s e %s � de %.1f anos",nome,nome2,media);


}

#endif ex3


