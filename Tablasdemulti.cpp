#include <stdio.h>
//Este programa imprimira las tablas de 2 numeros

int main () {
	int Num1=0, Num2=0, Cant1=0, Cant2=0, x=0, x1=0, Resu1=0, Resu2=0;
	
	printf("Tablas de multiplicar \n");
	printf("Se entregaran las tablas por separado \n");
	printf("Ingrese el primer numero para obtener las tablas: ");
	scanf("%d", &Num1);
	printf("Hasta que numero desea multiplicar: ");
	scanf("%d", &Cant1);
		//Ciclo For	
		for (x;x<=Cant1;x++){
			Resu1 = Num1*x;
			printf("%d por %d = %d \n",Num1,x,Resu1);
		}
	printf("Ingrese el segundo numero para obtener las tablas: ");
	scanf("%d", &Num2);
	printf("Hasta que numero desea multiplicar: ");
	scanf("%d", &Cant2);
		//Ciclo Do-While
		do{
			Resu2 = Num2*x1;
			printf("%d por %d = %d \n",Num2,x1,Resu2);
			x1++;
		}while (x1<=Cant2);
	return 0;
}
