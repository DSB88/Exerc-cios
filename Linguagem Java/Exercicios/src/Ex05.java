/*
 
 Exerc�cio 05

Fazer um programa para ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o
c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Calcule e mostre o valor a ser pago.

Exemplos:
Entrada: Sa�da:
12 1 5.30
16 2 5.10
VALOR A PAGAR: R$ 15.50

Entrada: Sa�da:
13 2 15.30
161 4 5.20
VALOR A PAGAR: R$ 51.40

Entrada: Sa�da:
1 1 15.10
2 1 15.10
VALOR A PAGAR: R$ 30.20
 */

import java.util.Scanner;
public class Ex05 {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		
		int codigoPeca, numeroPecas,codigoPeca2, numeroPecas2;
				
		double valorUnitario,valorUnitario2,soma,soma2,total;
		
		System.out.println("Digite o c�digo da Pe�a: ");
		codigoPeca=sc.nextInt();
		
		System.out.println("Digite a quantidade desejada: ");
		numeroPecas=sc.nextInt();
		
		System.out.println("Digite o valor unit�rio da pe�a: ");
		valorUnitario=sc.nextDouble();
		
		System.out.println("Digite o c�digo da Pe�a: ");
		codigoPeca2=sc.nextInt();
		
		System.out.println("Digite a quantidade desejada: ");
		numeroPecas2=sc.nextInt();
		
		System.out.println("Digite o valor unit�rio da pe�a: ");
		valorUnitario2=sc.nextDouble();
		
		soma = numeroPecas * valorUnitario;
		soma2 = numeroPecas2 * valorUnitario2;	
		total = soma + soma2;
		
		System.out.printf("VALOR A PAGAR : R$ %.2f",total);
					
		
		sc.close();
				

	}

}
