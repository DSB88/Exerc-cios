#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex2

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
