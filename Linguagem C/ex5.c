#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex5

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