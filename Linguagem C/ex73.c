#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*
 8) Receba a quantidade de pesos de N pessoas.
N representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Peso armazena cada um do N pesos digitados.
Calcule e mostre a m�dia dos pesos digitados.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

   int n,cont;
   float k,peso,soma;
   k=0;
   peso=0;
   soma=0;
   cont=0;

   do{

    printf("Qual a quantidade que deseja digitar ? ");
    scanf("%d",&n);

      if(n<=0){
         printf("\nDigite um n�mero acima de 0 (zero)\n");
      }

   }while(n<=0);

   while(cont < n){

    printf("Digite o peso: ");
    scanf("%f",&k);

    if(k>=0){
        peso = peso + k;
        cont = cont + 1;
    }

   }
   soma = peso/n;
   printf("\nA m�dia dos pesos digitados � %.2f.\n",soma);


}

#endif 


