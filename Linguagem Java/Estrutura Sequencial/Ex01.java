

/*

 Exerc�cio 01

Fa�a um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses n�meros com uma
mensagem explicativa, conforme exemplos.

Exemplos:
Entrada: Sa�da:
10
30
SOMA = 40

Entrada: Sa�da:
-30
10
SOMA = -20

Entrada: Sa�da:
0
0
SOMA = 0
 */
import java.util.Scanner;
public class Ex01 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int x,y;
		
		System.out.println("Digite dois n�meros: ");
		x=sc.nextInt();
		y=sc.nextInt();
		
		System.out.println("SOMA = " + (x+y));
		
		
		sc.close();

	}

}
