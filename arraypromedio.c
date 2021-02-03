#include <stdio.h>

int main(){
	int numeros[5]={0}, i=0, suma=0, *ap=numeros;
	float promedio=0;
	printf("Ingrese 5 numeros:\n");
	for(i=0;i<5;i++){
		scanf("%d",&numeros[i]);
		suma=suma+(*(ap+i));
	}
	promedio=(float)suma/5;
	printf("El promedio de los numeros es: %.1f",promedio);
	return 0;
}
