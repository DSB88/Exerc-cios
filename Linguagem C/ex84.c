#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 11)	Solicite ao usu�rio um n�mero maior ou igual a zero e inteiro representado pela vari�vel num.
Calcular o fatorial desse n�mero.
Utilize o la�o while para a entrada da vari�vel num e um la�o for para efetuar o c�lculo do fatorial.
	     OBS: O Fatorial de zero e de um � um.
         Exemplo de c�lculo do Fatorial:
		5! =5 * 4 * 3 * 2 * 1            ou
		5! =1 * 2 * 3 * 4 *5
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,num,fat;
    num=-1;
    fat=1;

    while(num<0)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("\nDigite um n�mero maior ou igual a 0 (zero)\n");
        }

    }

    for(i=1; i < num; i++)
    {

        fat*=num-i;

    }

    printf("\nO fatorial do n�mero %d �: %d\n",num,fat*i);

}

#endif 

