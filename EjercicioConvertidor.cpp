#include <stdio.h>
//Este programa transformara unidades de peso, volumen y longitud
int main (){
	int M;
	float V;
	int P1;
	
	printf("Convertidor de unidades\n\n");
	printf("Escriba el numero de la magnitud que desea: \n");
	printf("1Peso, 2Volumen, 3Longitud\n");
	scanf("%d",&M);
	switch(M){
		case 1:
			
		break;
		case 2:
			printf("Que unidad deseas convertir\n");
			printf("Elige: 1Pie^3, 2Yarda^3, 3Pinta, 4Galon \n");
			scanf("%d",&P1);
				switch (P1){
					case 1:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.02832;
						printf("Tu nuevo valor es: %f metro^3", V);
					break;
					case 2:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.7646;
						printf("Tu nuevo valor es: %f metro^3", V);
					break;
					case 3:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.56826;
						printf("Tu nuevo valor es: %f litros", V);
					break;
					case 4:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*4.54609;
						printf("Tu nuevo valor es: %f litros", V);
					break;
					default:
						printf("Fallaste");
				}
		break;
		case 3:
			printf("Que unidad deseas convertir\n");
			printf("Elige: 1Pulgada, 2Yarda, 3Milla, ");
			printf("4pulgada^2, 5pie^2, 6Yarda^2, 7Acre, 8Milla^2 \n");
			scanf("%d",&P1);
				switch (P1){
					case 1:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*25.40;
						printf("Tu nuevo valor es: %f milimetros", V);
					break;
					case 2:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.9144;
						printf("Tu nuevo valor es: %f metros", V);
					break;
					case 3:
					printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*1.6093;
						printf("Tu nuevo valor es: %f kilometro", V);
					break;
					case 4:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*6.452;
						printf("Tu nuevo valor es: %f centimetros^2", V);
					break;
					case 5:
						printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.0929;
						printf("Tu nuevo valor es: %f metro^2", V);
					break;
					case 6:
					printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.8361;
						printf("Tu nuevo valor es: %f metros^2", V);
					break;
					case 7:
					printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*0.4047;
						printf("Tu nuevo valor es: %f hectareas", V);
					break;
					case 8:
					printf("Ingrese el valor\n");
						scanf("%f",&V);
						V = V*2.59;
						printf("Tu nuevo valor es: %f kilometros^2", V);
					break;
					default:
						printf("Fallaste");
				}
		break;
		default:
			printf("Escribe bien >:|");
		break;
	}
	
	return 0;
}
