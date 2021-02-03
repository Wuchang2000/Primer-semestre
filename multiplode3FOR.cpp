#include <stdio.h>

int main (){

	int h=0;
	
	for(int x=1;x<100;x++ ){
		if(x%3 == 0){
			printf("El numero %d es multiplo de 3. \n",x);
			h=h+1;
		}
		if (x%3 != 0){
			printf("El numero %d no es multiplo de 3. \n",x);
		}
	}
	printf("Los numeros multiplo de 3 en total son: %d \n",h);
	return 0;
}

