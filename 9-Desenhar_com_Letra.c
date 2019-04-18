#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char letra, continuar;
	int cont1, cont2, cont3, numero, forma, inicial, final;
	
	continuar = 's';
	
	while(continuar == 's' || continuar == 'S'){
		
		printf("\tFormas geometricas com letras");
		
		printf("\n\nDigite uma letra: ");
		scanf("%c", &letra);
		
		letra = toupper(letra);
		
		printf("\nDigite um numero: ");
		scanf("%d", &numero);

		while(numero < 3 || numero > 10){
			
			printf("\nInsira um numero entre 3 e 10: ");
			scanf("%d", &numero);
							
		}		
		
		printf("\nEscolha a forma geométrica: "
				"\n1 - QUADRADO"
				"\n2 - RETANGULO"
				"\n3 - TRIANGULO RETANGULO"
				"\n4 - TRIANGULO EQUILATERO"
				"\n5 - X"
				"\n-> ");
				
		scanf("%d", &forma);
		system("clear");	//cls para windows
		
		while((forma == 5) && (numero % 2 == 0)){
			printf("Insira um numero impar: ");
			scanf("%d", &numero);		
		}
		
		switch (forma){
			case 1:
				cont1 = 0;
				
				while(cont1 < numero){
					cont2 = 0;
					
					while(cont2 < numero){
						printf("%c ", letra);
						cont2++;
					}
					printf("\n");
					cont1++;
				}
			break;
			
			case 2:
				cont1 = 0;
				
				while(cont1 < numero){
					cont2 = 0;
					while(cont2 < (numero*2)){
						printf("%c ", letra);
						cont2++;
					}
					
					printf("\n");
					cont1++;
				}
			break;
			
			case 3:
				cont1 = 0;
				cont3 = 1;
				
				while(cont1 < numero){
					cont2 = 0;
					while(cont2 < cont3){
						printf("%c ", letra);
						cont2++;
					}
					printf("\n");
					cont1++;
					cont3++;
				}
								
			break;
			
			case 4:
				cont1 = 0;
				cont3 = 1;
				
				while(cont1 < numero){
					cont2 = 0;
					while(cont2 < cont3){
						printf("%c ", letra);
						cont2++;
					}
					
					printf("\n");
					cont1++;
					cont3++;
				}
				
				cont1 = 0;
				cont3 = numero - 1;
				while(cont1 < (numero-1)){
					cont2 = 0;
							
					while(cont2 < cont3){
						printf("%c ", letra);
						cont2++;
					}
					
					printf("\n");
					cont1++;
					cont3--;
				}				
						
			break;
			
			case 5:
				cont1 = 0;
				inicial = 0;
				final = (numero - 1);
				
				while(cont1 < numero){
					cont2 = 0;
					
					while(cont2 < numero){
						
						if(cont2 == inicial){
							printf("%c ", letra); 
						}
						
						else if(cont2 == final){
							printf("%c ", letra);
						}
						
						else{
							printf("  ");
						}
						cont2++;
					}
										
					printf("\n");
					cont1++;
					
					inicial++;
					final--;					
				}	
			break;
			
			default:
				printf("Opcao invalida!");
			break;
		}
		
		printf("\nDeseja continuar?(S/n): ");
		scanf("%c", &continuar);
		getchar();
		
		switch (continuar){
			case 's': case 'S':
				system("clear");	//cls para windows
			break;
		}
	}	
	return 0;
}
