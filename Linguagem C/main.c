#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex13

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

#ifdef ex7

/*
Problema "crescente" (adaptado de URI 1113)

Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.

Exemplo:
Digite dois numeros:
5
4
DECRESCENTE!

Digite outros dois numeros:
3
8
CRESCENTE!

Digite outros dois numeros:
2
2
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int x,y;

    printf("Digite dois numeros: \n");
    scanf("%d",&x);
    scanf("%d",&y);

    while(x!=y)
    {

        if(x < y)
        {
            printf("CRESCENTE!");
        }
        else
        {
            printf("DECRESCENTE!");
        }


        printf("\nDigite dois numeros: \n");
        scanf("%d",&x);
        scanf("%d",&y);
    }

}

#endif ex7

#ifdef ex8

/*
Problema "media_idades"

Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa.
Calcular e imprimir a idade m�dia deste grupo de indiv�duos.
Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR".

Exemplo 1:
Digite as idades:
31
27
46
-5
MEDIA = 34.67

Exemplo 2:
Digite as idades:
-10
IMPOSSIVEL CALCULAR
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    float idade,media,cont;
    idade =  1;
    cont=0;
    media=0;

    while(idade >= 0)
    {

        printf("Digite as idades: ");
        scanf("%f",&idade);


        if(idade >0 )
        {
            cont += 1;
            media += idade;
        }

    }

    system("cls");

    if(cont == 0)
    {
        printf("Imposs�vel calcular");

    }
    else
    {
        printf("MEDIA =%.2f ", media/cont);
    }


}

#endif ex8

#ifdef ex9

/*

Problema "tabuada"

Ler um n�mero inteiro N, da� mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.

Exemplo:
Deseja a tabuada para qual valor? 4
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,n;

    printf("Deseja a tabuada para qual valor ? \n");
    scanf("%d",&n);


    for(i=1; i <= 10; i++)
    {

        printf("%d x %d = %d \n",n,i,n*i);

    }

}

#endif ex9

#ifdef ex10

/*
Problema "soma_impares" (adaptado de URI 1071)

Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos n�meros
impares entre eles.

Exemplo 1:
Digite dois numeros:
2
9
SOMA DOS IMPARES = 15

Exemplo 2:
Digite dois numeros:
15
10
SOMA DOS IMPARES = 24

Exemplo 3:
Digite dois numeros:
6
-5
SOMA DOS IMPARES = 5
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int x,y,troca,soma;

    printf("Digite dois n�meros: \n");
    scanf("%d",&x);
    scanf("%d",&y);

    if (x > y)
    {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    for(int i = x+1; i < y; i++)
    {
        if(i % 2 !=0)
        {
            soma = soma +i;
        }
    }

    printf("SOMA DOS �MPARES = %d\n", soma);


}

#endif ex10

#ifdef ex11

/*
Problema "negativos"

Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.

Exemplo:
Quantos numeros voce vai digitar? 6
Digite um numero: 8
Digite um numero: -2
Digite um numero: 9
Digite um numero: 10
Digite um numero: -3
Digite um numero: -7
NUMEROS NEGATIVOS:
-2
-3
-7
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int n,i;


    printf("Quantos n�meros voc� vai digitar ? ");
    scanf("%d",&n);

    int vet[n];

    for(i=0; i < n; i++)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&vet[i]);
    }

    printf("\nN�meros Negativos: \n");
    for(i=0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            printf("%d\n",vet[i]);
        }
    }

}

#endif ex11

#ifdef ex12

/*

Problema "soma_vetor"

Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a m�dia dos elementos do vetor

Exemplo:
Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0
SOMA = 36.00
MEDIA = 9.00
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int n,i,soma,media;


    printf("Quantos n�meros voc� vai digitar ? ");
    scanf("%d",&n);

    int vet[n];

    for(i=0; i < n; i++)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&vet[i]);
    }

    printf("\nValores: ");            //Mostra os valores
    for(i=0; i < n; i++)
    {
        if (vet[i])
        {
            printf("%d, ",vet[i]);
        }
    }

    for(i=0; i < n; i++)              //Soma os valores
    {
        if (vet[i])
        {
            soma+=vet[i];
        }
    }

    for(i=0; i < n; i++)              //M�dia dos valores
    {
        if (vet[i])
        {
            media = soma / n;
        }
    }
    printf("\nSoma =  %d ",soma);
    printf("\nM�dia = %d ",media);
    ;
}

#endif ex12

#ifdef ex13

/*

Problema "alturas"

Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura m�dia das pessoas, e mostrar tamb�m a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.

Exemplo:
Quantas pessoas serao digitadas? 5
Dados da 1a pessoa:
Nome: Joao
Idade: 15
Altura: 1.82
Dados da 2a pessoa:
Nome: Maria
Idade: 16
Altura: 1.60
Dados da 3a pessoa:
Nome: Teresa
Idade: 14
Altura: 1.58
Dados da 4a pessoa:
Nome: Carlos
Idade: 21
Altura: 1.65
Dados da 5a pessoa:
Nome: Paulo
Idade: 17
Altura: 1.78

Altura m�dia: 1.69
Pessoas com menos de 16 anos: 40.0%
Joao
Teresa

*/

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, nmenores;
    double alturatotal, alturamedia, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i=0; i<n; i++)
    {
        printf("\nDados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    nmenores = 0;
    alturatotal = 0;
    for (int i=0; i<n; i++)
    {
        if (idades[i] < 16)
        {
            nmenores++;
        }
        alturatotal = alturatotal + alturas[i];
    }

    alturamedia = alturatotal / n;
    percentualMenores = ((double)nmenores / n) * 100.0;

    printf("\nAltura media = %.2lf\n", alturamedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for(int i=0; i<n; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
#endif ex13