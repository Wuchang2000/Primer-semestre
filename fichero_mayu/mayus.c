#include <stdio.h>
#include <ctype.h>

int main (){
	FILE* fichero;
	FILE* fichero2;
	char letras[10];
	int i=0, repe=1;
	
	fichero = fopen("fichero.txt","wt");
	fprintf(fichero,"hola, mundo.%c",'\n');
	fprintf(fichero,"Como estamos?.%c",'\n');
	fprintf(fichero,"Adios, adios...");
	fclose(fichero);
	
	fichero = fopen("fichero.txt","rt");
	fichero2 = fopen("FICHERO2.txt","wt");
	while(fscanf(fichero,"%s",&letras)==1){
		for(i=0;i<10;i++){
			letras[i]=toupper(letras[i]);
		}
		if(repe%2 == 0){
			fprintf(fichero2,"%s%c",letras,'\n');
		}else{
			fprintf(fichero2,"%s%c",letras,' ');
		}
		repe++;
	}
	fclose(fichero);
	fclose(fichero2);
	
	return 0;
}
