#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        5.	Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia de um tri�ngulo.

        Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.

        Observa��es:
        a.	Garantir que cada lado � menor que a soma dos outros dois lados.
        b.	O tri�ngulo � equil�tero quando todos os lados s�o iguais.
        c.	O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
        d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes.

   */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,z;

    do
    {
        printf("Digite tr�s n�meros: \n");
        scanf("%lf" "%lf" "%lf",&x,&y,&z);

        if(x>=y+z || y>=x+z || z>=x+y)
        {
            printf("Os n�meros digitados n�o formam um tri�ngulo\n");
        }

    }
    while(x>=y+z || y>=x+z || z>=x+y);

    if (x==y && x==z)
    {
        printf("O tri�ngulo � equil�tero."); //quando todos os lados s�o iguais.
    }
    else if (x!=y && x!=z && y!=z)
    {
        printf("O tri�ngulo � escaleno."); //quando todos os lados s�o diferentes.
    }
    else
    {
        printf("O tri�ngulo � is�sceles."); //quando apenas dois lados s�o iguais.
    }


}
#endif 

