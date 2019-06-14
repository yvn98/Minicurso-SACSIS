#include <stdio.h>

int soma(int x, int y){
	int resultado;
	resultado = x+y;
	return resultado;
}

int sub(int x, int y){
	int resultado;
	resultado = x-y;
	return resultado;
}

int multi(int x, int y){
	int resultado;
	resultado = x*y;
}

int divi(int x, int y){
	int resultado=0;
	if(y==0){
		printf(" Nao pode ser dividido por 0.");
		return resultado;
	}
	resultado = x/y;
	return resultado;
}

int main(){
	int x=9, y=0;
	
	printf("%d+%d = %d",x,y,soma(x,y));
	printf("\n%d+%d = %d",x,y,sub(x,y));
	printf("\n%dx%d = %d",x,y,multi(x,y));
	printf("\n%d:%d = %d",x,y,divi(x,y));
		
	return 0;
}
