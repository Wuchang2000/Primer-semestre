#include <stdio.h> 
void main() { 
	int N, CONT, AS; 
	AS=0; 
	CONT=1; 
	printf("TECLEA UN NUMERO: ");
	scanf("%i",&N); 
	while(CONT<=N) { 
		AS=(AS+CONT); 
		CONT=(CONT+2); 
	} 
	printf("\nEL RESULTADO ES %i\n", AS); 
}
