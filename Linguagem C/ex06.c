#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex6

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
