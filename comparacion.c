#include <stdio.h>
int Comparacion (int, int);
//hola
int main(){
	
	int numero1=0, numero2=0, numerogrande=0;
	printf("Escriba el numero 1: ");
	scanf("%d",&numero1);
	printf("Escriba el numero 2: ");
	scanf("%d",&numero2);
	numerogrande = Comparacion(numero1, numero2);
	if(numerogrande==numero1){
		printf("El numero %d es el mayor\n", numero1);
	}else{
		if(numerogrande==numero2){
			printf("el numero %d es el mayor\n", numero2);
		}
	}
	return 0;
}
int Comparacion (int numero1, int numero2){
	int numerogrande=0;
	if (numero1>numero2){
		numerogrande=numero1;
	}else{
		if(numero1==numero2){
			printf("El numero es el mismo\n");
		}else{
			numerogrande=numero2;
		}
	}	
	return numerogrande;
}
