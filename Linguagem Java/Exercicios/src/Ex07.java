/*
 * Exerc�cio 07

Fazer um programa para ler um n�mero inteiro e dizer se este n�mero � par ou �mpar.

Exemplos:

Entrada: Sa�da:
12 PAR

Entrada: Sa�da:
-27 IMPAR

Entrada: Sa�da:
0 PAR
 */

import java.util.Scanner;
public class Ex07 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n;
		n=0;
		
		System.out.println("Digite um n�mero");
		n=sc.nextInt();
		
			if(n>=0) {
				System.out.println("PAR");				
			}
			else {
				System.out.println("�MPAR");
			}
		
		
		
		
		
		
		
		
		
		
		
		sc.close();
	}
	
}
