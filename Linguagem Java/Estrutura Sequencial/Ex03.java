

/*

Exerc�cio 03

Fazer um programa para ler quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto
de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).

Exemplos:
Entrada: Sa�da:
5
6
7
8
DIFERENCA = -26

Entrada: Sa�da:
5
6
-7
8
DIFERENCA = 86

 */
import java.util.Scanner;
public class Ex03 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a,b,c,d,diferenca;
		
		
		System.out.println("Digite quatro n�meros: ");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=sc.nextInt();
		
		diferenca = (a*b) - (c*d);
		
		
		System.out.println("DIFERENCA = " + diferenca);
		
		
		sc.close();

	}

}
