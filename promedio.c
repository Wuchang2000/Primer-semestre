#include <stdio.h>

int main (){
	
	int peso=0, alumnos=0, menoscua=0, cuaycinc=0;
	int mascincmensese=0, masosese=0, i=0;
	
	printf("Cuantos alumnos son?\n");
	scanf("%d", &alumnos);
	for(i=0;i<alumnos;i++){
		printf("Peso del alumno %d: ",(i+1));
		scanf("%d",&peso);
		if(peso<40){
			menoscua++;
		}else{
			if(peso>=40 && peso<=50){
				cuaycinc++;
			}else{
				if(peso>50 && peso<60){
					mascincmensese++;
				}else{
					if(peso>=60){
						masosese++;
					}
				}
			}
		}
	}
	printf("Alumnos de menos de 40kg: %d\n",menoscua);
	printf("Alumnos de entre 40 kg y 50kg: %d\n",cuaycinc);
	printf("Alumnos de mas de 50kg y menos de 60kg: %d\n",mascincmensese);
	printf("Alumnos de 60kg o mas: %d\n",masosese);
	return 0;
}
