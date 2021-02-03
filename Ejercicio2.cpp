#include <stdio.h>
/*Este programa leera dos valores enteros y devolvera 
los resultados de algunas operaciones*/

int main (){
	
	int Var1, Var2, Sum, Rest, Multi, Mod;  
	
	printf("Escriba un numero entero:\n");
	scanf("%d",&Var1);
	printf("Escriba un segundo numero entero:\n"); 
	scanf("%d",&Var2);
			//Operaciones
			Sum=Var1+Var2;
			Rest=Var1-Var2;
			Multi=Var1*Var2;
			Mod=(Var1%Var2);
			//Cast
			float Div= (float)Var1/Var2;
				//Imprimir resultados
				printf ("Resultado de sumarlo %d\n",Sum);
				printf ("Resultado de restarlo %d\n",Rest);
				printf ("Resultado de multiplicarlo %d\n",Multi);
				printf ("Resultado de dividirlo %f\n",Div);
				printf ("Resultado de residuo %d\n",Mod);
		
	return 0;
}
