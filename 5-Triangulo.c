#include <stdio.h>
#include <stdlib.h>

int main (){
	float a, b, c;
	
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%f", &a);
	
	printf("\nDigite o segundo lado do trinagulo: ");
	scanf("%f", &b);
	
	printf("\nDigite o terceiro lado do triangulo: ");
	scanf("%f", &c);
	
	system("clear");	//cls para windows
	
	if(a == 0.0 || b == 0.0 || c == 0.0){
	
		printf ("\tERRO!\n"
				"Nao existe triangulo com zeros");
	
	}else if(a == b && a == c && b == c){
		
		printf ("O triangulo e equilatero!");
	
	}else if(a != b && a != c && b != c){
		
		printf("O triangulo e escaleno!");
		
	}else if(a == b || a == c || b == c){
	
		printf ("O triangulo e isóceles!");
	
	}
	getchar();
	return 0;
}
