#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
main()
{

    /* 8.	Fa�a um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre idade dessa pessoa.*/

    setlocale(LC_ALL, "Portuguese");

    SYSTEMTIME str_t;
    GetSystemTime(&str_t);

    int  anoNasc,anoAtua,idade, dias, ano;

    do
    {

        printf("Informe seu ano de nascimento: \n");
        scanf("%d", &anoNasc);
        anoAtua = str_t.wYear;;
        ano = 365;

        if(anoNasc<=1900)
        {
            printf("Digite um n�mero superior a 1900\n");
        }

    }
    while(anoNasc<=1900);

    idade = anoAtua-anoNasc;
    dias = ano*idade;

    printf("A sua idade �: %d\n", idade);
    printf("Voce viveu at� agora: %d\n", dias);

}

#endif ex8


