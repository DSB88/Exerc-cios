#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*2)	Leia um n�mero inteiro representado pela vari�vel N at� que N seja igual a zero.
Exiba uma mensagem informando se o n�mero � par ou �mpar.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  n,num;

    do
    {

        printf("Digite um n�mero\n");
        scanf("%d",&n);

        if(n!=0)
        {
            num=n;
        }

    }
    while(n!=0);

    if(num%2==0)
    {
        printf("O �ltimo n�mero digitado %d � par",num);
    }
    else
    {
        printf("O �ltimo n�mero digitado %d � �mpar",num);
    }
}

#endif 

