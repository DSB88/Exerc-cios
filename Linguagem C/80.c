#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 7)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel P representa cada peso digitado.
Calcule e mostre a m�dia dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos.
Exiba tamb�m o menor, a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado.
Utilize o la�o while para a entrada da quantidade N e um la�o do while para efetuar os c�lculos e as compara��es solicitadas.
*/
main()
{

    setlocale(LC_ALL, "Portuguese");

    int n,cont,cont0,cont1,cont2,cont3;
    float p,peso,menor,maior;
    n=0;
    p=0;
    cont=0,cont0=0,cont1=0,cont2=0,cont3=0;
    peso=0;
    maior=0,menor=0;

    while(n<=0)
    {

        printf("Qual quantidade deseja digitar ? ");
        scanf("%d",&n);

        if(n<=0)
        {
            printf("\nDigite apenas n�meros acima de 0 (zero).\n");  //Feito para avisar o usu�rio de apenas digitar n�meros acima de zero.
        }

    }

    do{

        while(p<=0){

            printf("Digite o peso: ");
            scanf("%f",&p);

            if(p<=0){
                printf("N�mero inv�lido ! Digite acima de 0 (zero).\n");
            }

        }

        if(menor==0 && maior==0)
        {
            maior=p;
            menor=p;
        }

        if(p>=70 && p<= 85,5)
        {
            peso=peso+p;
            cont0=cont0+1;

        }

         if(p>75)
            {
                cont1=cont1 + 1;
            }

        if(p > maior || p==maior)
        {

            if(p!=maior)
            {
                maior=p;
                cont2=1;
            }
            else
            {
                maior=p;
                cont2++;
            }
        }

        if(p < menor || p==menor)
        {

            if(p!=menor)
            {
                menor=p;
                cont3=1;
            }
            else
            {
                menor=p;
                cont3++;

            }
        }


    cont = cont + 1;
    p=0;


    }while(cont < n);


    printf("\nA m�dia dos pesos pedidos � %.2f a quantidade de pessoas com peso acima de 75 kilos � igual a %d.\n",peso/cont0,cont1);
    printf("\nO menor peso � %.2f a quantidade de vezes que apareceu foi %d.\n",menor,cont3);
    printf("\nO maior peso � %.2f e a quantidade de vezes que apareceu foi %d.\n",maior,cont2);
}

#endif 

