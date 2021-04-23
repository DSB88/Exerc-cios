#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex6

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

#ifdef ex4

/* Problema "notas"

Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.

Exemplo 1:
Digite a primeira nota: 45.5
Digite a segunda nota: 31.3
NOTA FINAL = 76.8

Exemplo 2:
Digite a primeira nota: 34.0
Digite a segunda nota: 23.5
NOTA FINAL = 57.5
REPROVADO


*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    float nota1,nota2,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    media=nota1+nota2;

    if(media>60)
    {
        printf("NOTA FINAL = %.1f",media);
    }

    else
    {
        printf("NOTA FINAL = %.1f",media);
        printf("\nREPROVADO");
    }

}

#endif ex4

#ifdef ex5

/* Problema "baskara"

Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.

Exemplo 1:
Coeficiente a: 1
Coeficiente b: 0
Coeficiente c: -9
X1 = 3.0000
X2 = -3.0000

Exemplo 2:
Coeficiente a: 2
Coeficiente b: -4.5
Coeficiente c: 1.7
X1 = 1.7697
X2 = 0.4803

Exemplo 3:
Coeficiente a: 1
Coeficiente b: 3
Coeficiente c: 4
Esta equacao nao possui raizes reais

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    float a,b,c,delta,x1,x2,divisao;

    printf("Digite o coeficiente a: ");
    scanf("%f",&a);

    printf("Digite o coeficiente b: ");
    scanf("%f",&b);

    printf("Digite o coeficiente c: ");
    scanf("%f",&c);

    delta = pow(b,2) - 4 * a * c;
    divisao = 2 * a;
    system("cls");

    if(delta >=0 && a!=0)
    {
        x1 = (-b + sqrt(delta)) / divisao;
        x2 = (-b - sqrt(delta)) / divisao;

        printf("X1 = %.4f\n",x1);
        printf("X2 = %.4f",x2);
    }

    else
    {
        printf("Esta equa��o n�o possui ra�zes reais.");
    }
}

#endif ex5

#ifdef ex6

/*
Problema "menor_de_tres"

Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s
n�meros lidos. Em caso de empate, mostrar apenas uma vez.

Exemplo 1:
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3

Exemplo 2:
Primeiro valor: 5
Segundo valor: 12
Terceiro valor: 5
MENOR = 5

Exemplo 3:
Primeiro valor: 9
Segundo valor: 9
Terceiro valor: 9
MENOR = 9

*/
main()
{

    setlocale(LC_ALL, "Portuguese");

    int num1,num2,num3;

    printf("Digite o primeiro n�mero: ");
    scanf("%d",&num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d",&num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d",&num3);

    if(num1 < num2 && num1 < num3)
    {
        printf("\n menor n�mero dos tr�s foi o n�mero: %d ",num1);
    }
    else if(num2 < num3)
    {
        printf("\nO menor n�mero dos tr�s foi o n�mero: %d ",num2);
    }
    else
    {
        printf("\nO menor n�mero dos tr�s foi o n�mero: %d ",num3);
    }

}

#endif ex6
