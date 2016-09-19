#include <stdlib.h>
#include <math.h>

/* Ex1_fatorial.c --> Fa�a uma fun��o recursiva que calcule e retorne o fatorial de um n�mero inteiro N. */
int fatorial(int n){
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}
/*----------------------------------------------------------------------------------------------------------*/

/* Ex2- Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia Fibonacci. 
        Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...        */
int fibonacci(int n){
	if(n == 0){
		exit(0);
	}
	if(n == 1){
		return 0;
	}
	else if (n == 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
/*----------------------------------------------------------------------------------------------------------*/

/*  Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 - 321 */
int inverte(int n){
	if((n / 10) == 0){
		return n;
	}
	return inverte(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}

int inverteSig(int n){
	if(n < 0){
		return -1 * inverte(n * -1);
	}
	return inverte(n);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Fa�a uma fun��o recursiva que permita somar os elementos de um vetor de inteiros. */
int somaVetor(int vet[], int n){
	if(n == 1){
		return vet[0];
	}
	vet[n - 1] + somaVetor(vet, n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N */
int soma1aN(int n){
	if(n == 1){
		return 1;
	}
	return n + soma1aN(n - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie um programa em C, que contenha uma fun��o recursiva que receba dois inteiros positivos k e n e calcule kn. 
Utilize apenas multiplica��es. O programa principal deve solicitar ao usu�rio os valores de k e n e imprimir o resultado
da chamada da fun��o. */	
int potenciakn(int k, int n){
	if(n == 1){
		return k;
	}
	return k * potenciakn(k, n - 1);			
}
/*----------------------------------------------------------------------------------------------------------*/

/* Crie um programa em C que receba um vetor de n�meros reais com 100 elementos. Escreva uma fun��o recursiva que
inverta ordem dos elementos presentes no vetor. */
double inverteVetor(double vet[], int n){
	if(n == 1){
		return vet[0];
	}
	int aux;
	aux = inverteVetor(vet, n - 1); 
	vet[0] = vet[n + 1];
	vet[n + 1] = aux;
}
/*----------------------------------------------------------------------------------------------------------*/

/* m�ximo divisor comum dos inteiros x e y � o maior inteiro que � divis�vel por x e y. Escreva uma fun��o recursiva mdc em C, 
que retorna o m�ximo divisor comum de x e y. O mdc de x e y � definido como segue: se y � igual a 0, ent�o mdc(x,y) � x; 
caso contr�rio, mdc(x,y) � mdc (y, x%y), onde % � o operador resto.*/
int maxDivCom(int a, int b){
	if( b == 0){
		return a;
	}
	maxDivCom(b, a % b);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Escreva uma fun��o recursiva que determine quantas vezes um d�gito K ocorre em um n�mero natural N. 
Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192 */
int sumMatches(int n, int k, int i){
	if(n % 10 == k){
		i++;
	}
	if(n % 10 == n){
		return i;
	}
	sumMatches(n / 10, k, i);
}
/*----------------------------------------------------------------------------------------------------------*/

/* A multiplica��o de dois n�meros inteiros pode ser feita atrav�s de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplica��o de dois inteiros */
int multRec(int a, int b){
	if(a == 0 || b == 0){
		return 0;
	}
	if(b == 1){
		return a;
	}
	int acc;
	acc = a + multRec(a, b - 1);
}
/*----------------------------------------------------------------------------------------------------------*/

/* Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 
at� N em ordem crescente. */





























