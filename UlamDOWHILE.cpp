#include <stdio.h>

int main (){
	
	int x;
	
	printf("Escriba un numero entero positivo \n");
	scanf("%d",&x);
	
	do{
		if (x%2 == 0){
			x=x/2;
			printf("%d \n",x);
		}
			else{
					x=(x*3+1);
					printf("%d \n",x);
				}
	}while(x!=1);
return 0;
}
