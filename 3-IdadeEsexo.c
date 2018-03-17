#include <stdio.h>
#include <stdlib.h>

int main (){	
	int anonascimento, anoatual, idade;
	char sexo;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d", &anonascimento);
	
	printf("\nInforme o ano atual: ");
	scanf("%d",&anoatual);
	
	printf ("\nInforme o seu sexo. 'M' para masculino e 'F' para feminino: ");
	scanf(" %c", &sexo);
	
	system("clear || cls");
	
	printf ("Voce tem %d anos, e he ", idade = anoatual-anonascimento);
	
	if (idade >= 18) {
		printf ("maior");
	
	}else{	
		printf("menor");
	}
	
	printf (" de idade.\n");
	
	if(sexo == 'M' || sexo == 'm'){
		printf("Seu sexo e masculino");

	}else if(sexo == 'F' || sexo == 'f'){
		printf("Seu sexo e feminino");
	
	}else{
		printf("Seu sexo e indefinido");
	}

	getchar ();
	return 0;
}
