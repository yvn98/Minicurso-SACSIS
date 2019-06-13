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

int multi(int x, int y){
	int resultado;
	
	resultado = x*y;
}

int main(){
	int x=9, y=2;
	
	printf("%d+%d = %d",x,y,soma(x,y));
	printf("\n%d+%d = %d",x,y,sub(x,y));
	printf("\n%dx%d = %d",x,y,multi(x,y));
		
	return 0;
}
