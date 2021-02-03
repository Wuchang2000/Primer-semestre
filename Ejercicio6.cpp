#include <stdio.h>
#include <math.h>
/*este programa comprobara si algunos 
comandos funcionan*/

int main (){
	printf("Revisarenmos las operaciones....\n");
	
	int uno = 9-5-3;
	printf("9-5-3 = %d\n", uno);
	
	float dos = 2.0/3.0 + 3.0/5.0;
	printf("2 div 3 + 3/5 = Error se necesita otra biblioteca \n");
	printf("2/3 + 3/5 = %f \n", dos);
	
	float tres = 9.0  / (2.0/5.0);
	printf("9 div 2/5 = Error se necesita otra biblioteca \n");
	printf("9 / (2/5) = %f \n", tres);
	
	int cuatro = 7 % 5 % 3;
	printf("7 mod 5 mod 3 = %d \n", cuatro);
	
	int cinco = 7 % (5 % 3);	
	printf("7 mod (5 mod 3) = %d \n", cinco);
	
	int seis = (7 % 5) % 3;
	printf("(7 mod 5) mod 3 = %d \n", seis);
	
	int siete = (7 % 5 % 3);
	printf("(7 mod 5 mod 3) = %d \n", siete);
	
	float ocho = ((12.0 + 3.0) / 2.0) / (8.0 - (5.0 + 1.0));	
	printf("((12 + 3) div 2) / (8 - (5 + 1)) = Error se necesita otra biblioteca \n");
	printf("((12 + 3) / 2) / (8 - (5 + 1)) = %f \n", ocho);
	
	float nueve = ((12.0/2.0) * 3.0)*(sqrt(2.0))*(pow(4.0,2.0));
	printf("12 / 2 * 3 j) raiz2 (cuadrado(4) = No se cerro el parentesis, j no inicializada\n");
	printf("((12.0/2.0) * 3.0)*(sqrt(2.0))*(pow(4.0,2.0)) = %f\n", nueve);
	
	
	double diez = pow((sqrt(4)),2);
	printf("cuadrado (raiz2(4)); = Error se necesita otra biblioteca \n");
	printf("cuadrado (raiz2(4)); = %lf \n", diez);
	
	float once = trunc(0.815) + ceil(0.815);
	printf("trunc(815) + redondeo(815) = No se alcanzan a ver los cambios porque son enteros \n", once);
	printf("trunc(0.815) + redondeo(0.815) = %f \n", once);
	
	return 0;
}
