#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex12

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