#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex11

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
