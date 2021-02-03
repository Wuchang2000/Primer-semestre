#include <stdio.h>
#include <math.h>
float Transx (float, float);
float Transy (float, float);

int main (){
	float x=0, y=0, r=0, teta=0;
	
	printf("Ingrese el valor de 'r'\n");
	scanf("%f", &r);
	printf("Ingrese el valor de 'theta'\n");
	scanf("%f", &teta);
	teta=(teta*3.1416)/180;
	x = Transx(r, teta);
	y = Transy(r,teta);
	printf("Las coordenadas rectangulares son (%.2f,%.2f)",x,y);
	return 0;
}

float Transx (float r, float teta){
	float x=0;
	x=r*(float)cos(teta);
	return x;
}
float Transy (float r, float teta){
	float y=0;
	y=r*(float)sin(teta);
	return y;
}
