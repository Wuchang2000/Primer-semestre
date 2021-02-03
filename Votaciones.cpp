#include <stdio.h>
//Este programa contara votos para candidatos
int main (){
	int Cand=0, Pers=0, Uno=0, Dos=0, Tres=0, Cont=0;
		
	printf("\t\tVotaciones para presidente 2018\n");
	printf("Cuantas personas votaran? = ");
	scanf("%d",&Pers);
		do{
			printf("Ingrese el numero del candidato por el que votara\n");
			printf("1, 2 o 3\n");
			scanf("%d",&Cand);
			switch (Cand){
				case 1:
					Uno++;
					printf("Usted a votado por el candidato 1\n");
				break;
				case 2:
					Dos++;
					printf("Usted a votado por el candidato 2\n");
				break;
				case 3:
					Tres++;
					printf("Usted a votado por el candidato 3\n");
				break;
				default:
					printf("Fijate bien\n");
					Cont=Cont-1;
				break;
				}
			Cont++;
		}while (Cont<Pers);
	printf("\n\t\tConteo de votos\n");
	printf("El numero de votos para el candidato 1 es: %d\n",Uno);
	printf("El numero de votos para el candidato 2 es: %d\n",Dos);
	printf("El numero de votos para el candidato 3 es: %d\n",Tres);
	return 0;
}
