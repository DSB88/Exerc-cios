#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*7) Receba via teclado um n�mero X, onde este n�mero representa a quantidade de termos que o usu�rio deseja.
 H representa cada um desses n�meros, calcule o produto dos X n�meros.
	    OBS: H deve ser maior ou igual a 15.

*/
main()
{
    setlocale(LC_ALL,"Portuguese");
    int x,h,cont=0;
    float prod=1;

    do
    {
        printf("\nDigite a quantidade de termos que deseja: ");
        scanf("%d",&x);

        if(x<=1)
        {
            printf("N�mero inferior a 1 ou (zero), digite novamente.\n");
        }

    }
    while(x<=1);

    do
    {
        printf("\nDigite um n�mero igual ou superior a 15: ");
        scanf("%d",&h);
        while(h<15)
        {
            printf("\nN�mero inferior a 15. Digite novamente:");
            scanf("%d",&h);
        }
        prod=prod*h;
        cont=cont+1;
    }
    while(cont!=x);
    printf("O produto dos n�meros �: %.2f",prod);
}
#endif 




