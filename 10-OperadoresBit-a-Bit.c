#include <stdio.h>

int main(){
	int a = 60;
	int b = 13;	
	
	printf("\t\tBIT A BIT\n\n");
	printf("Operadores\n");
	printf("Valor de 60 &(E) 13 = %d", a & b);
	printf("\nValor de 60 |(OU) 13 = %d", a | b);
	printf("\nValor de 60 ^(XOR) 13 = %d", a ^ b);
	
	printf("\n\nDeslocamento\n");
	printf("Deslocamento a Esquerda de 2 bits 60<<2 = %d", 60<<2);
	printf("\nDeslocamento a Direita de 2 bits 60>>2 = %d", 60>>2);
	
	return 0;
}
