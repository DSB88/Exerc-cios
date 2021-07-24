#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ex01

#ifdef ex01

/*

Permuta��es de Strings - HackerRank

Tarefa

As cordas s�o geralmente ordenadas em ordem lexicogr�fica. Isso significa que eles s�o ordenados comparando seus diferentes caracteres mais � esquerda. Por exemplo, abc < abd Porque c < d . Al�m disso z > yyy Porque z > y . Se uma string � um prefixo exato da outra, � lexicograficamente menor, por exemplo, gh < ghij.

Dada uma matriz de strings classificadas em ordem lexicogr�fica, imprima todas as suas permuta��es em ordem lexicogr�fica estrita. Se duas permuta��es parecerem iguais, imprima apenas uma delas. Veja a 'nota' abaixo para um exemplo.

Complete a fun��o next_permutationque gera as permuta��es na ordem descrita.

Por exemplo, s = [ab,bc,cd]. As seis permuta��es na ordem correta s�o:

ab  bc  cd 
ab  cd  bc 
bc  ab  cd 
bc  cd  ab 
cd  ab  bc 
cd  bc  ab

Observa��o: pode haver duas ou mais strings iguais aos elementos de.
Por exemplo, s = [ab,bc,cd]. Apenas uma inst�ncia de uma permuta��o onde todos os elementos correspondem deve ser impressa. Em outras palavras, se, s[0] == s[1] em seguida, imprima s[0] s[1] ou s[1] s[0] mas n�o ambos.

Uma matriz de tr�s elementos com tr�s elementos distintos tem seis permuta��es, conforme mostrado acima. Neste caso, existem tr�s pares correspondentes de permuta��es onde s[0] = ab e s[1] = ab, s�o trocados. Imprimimos apenas as tr�s permuta��es visivelmente �nicas:

ab  ab  bc 
ab  bc  ab 
bc  ab  ab
Formato de entrada

A primeira linha de cada arquivo de teste cont�m um �nico inteiro , o comprimento da cadeia de caracteres .

Cada um dos pr�ximos n linhas cont�m uma string s[i].

Restri��es

n >=2 e n <= 9

s[i] >=1 e s[i] <= 10

s[i] cont�m apenas letras min�sculas em ingl�s.
Formato de sa�da

Imprima cada permuta��o como uma lista de strings separadas por espa�o em uma �nica linha.

Amostra de entrada 0

2 
ab 
cd

Sa�da de amostra 0

ab cd 
cd ab

Amostra de entrada 1

3 
a 
bc 
bc
Sa�da de amostra 1

a bc bc 
bc a bc 
bc bc a

Explica��o 1

Isso � semelhante � nota acima. Apenas tr�s das seis permuta��es s�o impressas para evitar redund�ncia na sa�da.


*/

int next_permutation(int n, char **s){
    // Find non-increasing suffix
    int i = n-1;
    while(i>0 && strcmp(s[i-1],s[i])>=0) 
        i--;    // find key
    if (i<=0) return 0;
    
    // Swap key with its successor in suffix
    int j = n-1;
    while(strcmp(s[i-1],s[j])>=0) 
        j--;    // find rightmost successor to key
    char *tmp = s[i-1];
    s[i-1] = s[j];
    s[j] = tmp;
    
    // Reverse the suffix
    j = n-1;
    while(i<j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}

#endif

