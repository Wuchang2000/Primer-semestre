#include <stdio.h>
/*Este programa clasificara un angulo ingresado*/

int main (){
	float Ang;
	
	printf("Clasificador de angulos \n\n");
	printf("Ingrese el angulo en grados: ");
	scanf("%f",&Ang);
	if (Ang>90){
		printf("El angulo es obtuso");
	} else if (Ang<90){
		printf("El angulo es agudo");	
	}else{
		printf("El angulo es recto");
	}
	
	return 0;
}
