#include <stdio.h>

int pot(int a,int b);

int main (){
	int resultado=1, b=0, p=0;
	printf("Ingrese la base: ");
	scanf("%d",&b);
	printf("Ingrese la potenica: ");
	scanf("%d",&p);
	resultado=pot(p,b);
	printf("El resultado: %d",resultado);
	return 0;
}

int pot(int a,int b){
	int resultado=1;
		for (int i=0;i<a;i++){
			resultado=resultado*b;
		}
	return resultado;
}
