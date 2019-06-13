#include <stdio.h>

int soma(int x, int y){
	int resultado;
	
	resultado = x+y;
	
	return resultado;
}

int sub(int x, int y){
	int resultado;
	
	resultado = x-y;
}

int main(){
	printf("Soma: %d",soma(2,4));
	printf("\nSubtracao: %d",sub(7,4));
	
	return 0;
}
