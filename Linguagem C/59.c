#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
main()
{
    /*
        3.	Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do segundo grau. Se existirem ra�zes reais exiba-as. Caso n�o existam ra�zes informe ao usu�rio.

        Observa��es:

        a.	Condi��o de exist�ncia de uma equa��o do segundo grau: o coeficiente que acompanha o x2 dever� ser um n�mero diferente de zero.
        b.	Delta maior que zero: a equa��o possui duas ra�zes reais e distintas.
        c.	Delta igual � zero: a equa��o possui duas ra�zes iguais.
        d.	Delta menor que zero: a equa��o n�o apresenta ra�zes reais.

    */

    setlocale(LC_ALL, "Portuguese");

    double  a,b,c,delta,x1,x2,divi;

    do
    {
        printf("Digite tr�s n�meros: \n");
        scanf("%lf" "%lf" "%lf", &a, &b, &c);

        if(a==0)
        {
            printf("O primeiro d�gito n�o pode ser 0, favor digite um n�mero diferente de 0.\n\n");
        }

    }
    while(a==0);

    delta = pow(b,2) - 4 * a * c; //pow potencia��o

    divi = 2 * a;

    if (delta >= 0)
    {

        x1 = (-b + sqrt(delta)) / divi; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / divi;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else if (delta == 0)
    {

        x1 = (-b + sqrt(delta)) / 2*a; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / 2*a;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else
    {
        printf("Esta equa��o n�o possui ra�zes reais.");
    }
}
#endif 


