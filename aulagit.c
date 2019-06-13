#include <stdio.h>

int soma(int x, int y){
	int resultado;
	
	resultado = x+y;
	
	return resultado;
}

int main(){
	printf("%d+%d=%d",soma(2,4));
	
	return 0;
}
