#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{
    /*
        6.	Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a altura que o usu�rio deseja subindo a escada.
        Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,deg;
    float degraus;

    do {
            printf("Digite a altura do degrau em cm:\n");
            scanf("%d",&x);

            printf("Digite qual altura deseja subir em metros:\n");
            scanf("%d",&y);

    }while(x<=0 || y<=0 || x>y*100);

    degraus =  y*100/x;
    deg = degraus;

   if(deg==degraus){
    printf("A quantidade de degraus que ter� que subir ser�: %.2f.",degraus);
}
   else{
   printf("A quantidade de degraus que ter� que subir ser�: %d.",deg+1);
   }
}
#endif 

