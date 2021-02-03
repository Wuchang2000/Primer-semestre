#include <stdio.h>
#include <math.h>

int main (){
	
	int t=0, p=0, n=0;
	float div=0, pot=0;
	
	printf("Ingresa el valor T: ");
	scanf("%d", &t);
	printf("Ingresa el valor P: ");
	scanf("%d", &p);
	printf("Ingresa el valor N: ");
	scanf("%d", &n);
	div = (float)t/p;
	pot = (float)pow(div,n);
	if (pot == pow(t,n) / pow(p,n)){
		printf("Si se cumple la igualdad");
	}else{
		printf("No se cumple");
	}
	
	return 0;
}
