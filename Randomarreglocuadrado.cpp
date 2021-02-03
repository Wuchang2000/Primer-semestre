///problema de clase
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

 float VEC[100], suma=0; 
 srand(time(NULL)); 
  //Llenar el arreglo con los numeros de tipo flotante
   for (int i=0;i<100;i++){   		
   		VEC[i]=float(rand()%10000)/100.0; 	  
		printf("\t%5.2f",VEC[i]);
		
		if(i%5==0){		
			if(i!=1)
				printf("\n"); 				
		} 	
   }
 	//hacer la suma de los cuadrados
   for (int i=0;i<100;i++){   		
  			suma=suma+(VEC[i]*VEC[i]);
  			
   }
   //presentar los resultados
   printf("\nLa suma de los cuadrados del arreglo es %10.2f", suma);
    
   return 0;


	
}

