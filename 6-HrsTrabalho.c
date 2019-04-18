#include <stdio.h>
#include <stdlib.h>

int main (){
	float n, result, total, extra;
	
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%f", &n);
	
	result = n * 10.00;
	
	if(n > 40.00){
		extra = n * 20.00;
	}
	
	system("clear");	//cls para windows
	
	total = n + extra;
	
	printf("O salario e de R$ %.2f\n"
			"e as horas extras e de R$ %.2f\n"
			"total de salario de R$ %.2f\n"	, result, extra, total);
	
	getchar();
	return 0;
}
