#include <stdio.h>

int main(){
	
	int num = 10;
	
	++num;//pré-incremento
	printf("++num = %d\n\n", ++num);
	
	//pós-incremento
	printf("num++ = %d\n\n", num++);
	printf("num = %d\n\n",num);
	
	//pré-decremento
	printf("--num = %d\n\n", --num);
	
	//pós-decremento
	printf("num-- = %d\n\n", num--);
	printf("num = %d\n\n", num);
	
	getchar();
	return 0;
}
