#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex1

#ifdef ex1
main()
{
    /* 6.	Receba dois n�meros quaisquer, calcule e mostre na tela o resultado da divis�o do segundo pelo primeiro. */

    setlocale(LC_ALL, "Portuguese");

    int x,y,divi;

    do
    {
        printf("Digite dois n�meros: \n");
        scanf("%d" "%d", &x,&y);

        if (x<=0)
        {
            printf("Seu primeiro n�mero deve ser maior que 0\n");
        }


    }
    while(x<=0);

    divi = y/x; //y = dividendo e x=divisor

    printf("Lembrando que a divis�o feita foi do segundo pelo primeiro.\n");
    printf("A divis�o dos n�meros digitados %d e %d � igual: %d\n ",x,y,divi);
    system("pause"); // pausa o programa

}
#endif






