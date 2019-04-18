/* Faça um programa onde o usuário deverá informar uma letra e o número de vezes que ela deverá repetir.
 * Exiba no final a letra digitada tantas vezes que o usuário solicitar.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
	int num, aux=1;
	char letra;
	
	do{
		printf("Informe uma letra: ");
		
		letra = toupper(getchar());	//Serve apenas para 1 caracter
	
		printf ("\nQuantas vezes deseja repetir: ");
		scanf ("%d", &num);
		getchar();
	
		if (num <= 0){
			system("clear");	//cls para windows
			printf ("\nERRO!\n");
		}	
	}while(num <=0);
	
	do{
		printf ("%c\n", letra);
		aux++;
	}while (aux <= num);
	
	return 0;
}
