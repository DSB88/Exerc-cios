#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1


#ifdef ex1
main()
{
     /*
        9.	O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Receba via teclado o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
        a)	O valor correspondente ao lucro do distribuidor
        b)	O valor correspondente aos impostos
        c)	O pre�o final do ve�culo
    */

    setlocale(LC_ALL, "Portuguese");

    int  fabrVei, lucroDis, imposto, lucroFornecedor, impostoVeicular, totalVeiculo;

    do{
    printf("Informe o pre�o de f�brica do veiculo R$: \n");
    scanf("%d", &fabrVei);

    printf("Informe o percentual de lucro do distribuidor : \n");
    scanf("%d", &lucroDis);

    printf("Informe o percentual de impostos : \n");
    scanf("%d", &imposto);

    if(fabrVei<=0){
        printf("O valor do pre�o de f�brica deve ser maior que zero\n");
    }
     else if(lucroDis<=0){
        printf("O valor do percentual de lucro do distribuidor deve ser maior que zero\n");
    }
    else if(imposto<=0){
        printf("O valor do imposto deve ser maior que zero\n");
    }

    }while(fabrVei<=0 || lucroDis<=0 || imposto<=0);

    lucroFornecedor = fabrVei * lucroDis / 100;
    impostoVeicular = fabrVei * imposto / 100;
    totalVeiculo = fabrVei + lucroFornecedor + impostoVeicular;

    printf("O valor correspondente ao lucro do distribuidor � R$: %d\n", lucroFornecedor);
    printf("O valor correspondente aos impostos � R$: %d\n", impostoVeicular);
    printf("O pre�o final do ve�culo � R$: %d", totalVeiculo);


}

#endif 

