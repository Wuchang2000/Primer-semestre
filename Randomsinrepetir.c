#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int buscarNumero(int preguntas,int numeros[]);
int main()
{
    int preguntas, fstop, desicion1, i,repetir=0;
    int numeros[10]={0};
    srand(time(NULL));
    for(repetir=0;repetir<10;repetir++)
    {
        do{
            preguntas=rand()%(10+1);
            fstop=buscarNumero(preguntas,numeros);
        }while(fstop);
        switch (preguntas){
				case 1:
					printf("\t\tPregunta 1\n");
					printf("Cual es la biblioteca con la que se debe iniciar un programa en C \n");
					printf("a)#include <stdio.h> \nb)#include <stdlib.h>");
					printf(" \nc)#include <time.h> \nNINGUNA\n");
					scanf("%c",&desicion1);
					fflush( stdin );
				break;
				case 2:
					printf("\t\tPregunta 2\n");
				break;
				case 3:
					printf("\t\tPregunta 3\n");
				break;
				case 4:
					printf("\t\tPregunta 4\n");
				break;
				case 5:
					printf("\t\tPregunta 5\n");
				break;
				case 6:
					printf("\t\tPregunta 6\n");
				break;
				case 7:
					printf("\t\tPregunta 7\n");
				break;
				case 8:
					printf("\t\tPregunta 8\n");
				break;
				case 9:
					printf("\t\tPregunta 9\n");
				break;
				case 10:
					printf("\t\tPregunta 10\n");
				break;	
			}
        numeros[repetir]=preguntas;
    }
    for(repetir=0;repetir<10;repetir++){
    	printf("%d",numeros[repetir]);
	}
    return 0;
}
int buscarNumero(int preguntas,int numeros[]){
    int i, stop=0;
    for (i=0;(i<10 && stop==0);i++){
        if (numeros[i]==preguntas)
            stop=1;
    }
    return stop;
}
