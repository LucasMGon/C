#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float media, n1, n2;

	setlocale (LC_ALL,"Portuguese");

	printf("\n\tDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\n\tDigite a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	system("clear || cls");
  
	if(media >=0 && media <=3.9){
		printf("\n\tMedia Insatisfatoria :(");
		
	}else if(media >=4 && media <= 6.9){
		printf("\n\tMedia Regular :/");
	
	}else if(media >=7 && media <=8.9){
		printf("\n\tMedia Boa :|");
		
	}else if(media >=9 && media <=10){
		printf ("\n\t\tMedia Muito Boa!!!\n\n" 
				"\tParabens você é um excelente aluno :)");
		
	}else{
		printf ("\n\tMedia incorreta!\n");
	}
	
	getchar ();
	return 0;
}
