/*
 * Exerc�cio 01

Fazer um programa para ler um n�mero inteiro, e depois dizer se este n�mero � negativo ou n�o.

Exemplos:

Entrada: Sa�da:
-10 NEGATIVO

Entrada: Sa�da:
8 NAO NEGATIVO

Entrada: Sa�da:
0 NAO NEGATIVO
 */


import java.util.Scanner;

public class Ex01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n;
		n=0;
		
		System.out.println("Digite um n�mero");
		n=sc.nextInt();
		
		if(n>=0) {
			System.out.println("N�O NEGATIVO");			
		}	
		else {
			System.out.println("NEGATIVO");
		}
			
		
		sc.close();
	}
}














