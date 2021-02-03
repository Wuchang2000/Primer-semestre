#include <stdio.h> 
#include <math.h> 
void main() {
	int K, X, AP, N; 
	float AS; 
	printf("EL TERMINO GENERICO DE LA SERIE ES: X^K/K!"); 
	printf("\nN="); 
	scanf("%d",&N); 
	printf("X="); 
	scanf("%d",&X); 
	K=0; 
	AP=1; 
	AS=0; 
	while(K<=N) {
		AS=AS+pow(X,K)/AP; 
		K=K+1; 
		AP=AP*K; 
	}
	printf("SUM=%le",AS);
}
