/*Faça um programa que calcule a soma dos 100 primeiros números inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int num = 1, soma = 2;
		
	while(num <= 100){
		
		soma += num;
		
		num++;
	}
		printf("A soma dos 100 primeiros numeros e %d", soma);
	
	getchar();
	return 0;
}
