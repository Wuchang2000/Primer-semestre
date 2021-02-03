#include <stdio.h>

int main (){
	
	int x=0, w=0, v=0, suma=0;
	printf("Precio pelicula 1: ");
	scanf("%d",&x);
	fflush(stdin);
	printf("Precio pelicula 2: ");
	scanf("%d",&w);
	fflush(stdin);
	printf("Precio pelicula 3: ");
	scanf("%d", &v);
	fflush(stdin);
	if (x >= w && x >= v){
		suma = w + v;
		printf("Total1: %d", suma);
	}else{
		if (w > v){
			suma = x + v;
			printf("Total2: %d", suma);
		}else{
			suma = w + x;
			printf("Total3: %d", suma);
		}
	}
	return 0;
}
