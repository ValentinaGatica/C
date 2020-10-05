#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float v, h, s;

system("cls");

	printf("Ingrese el valor de la hora de trabajo, en pesos: \n");
	
	scanf("%f", &v);

	printf("Ingrese la cantidad de horas trabajadas: \n");
	
	scanf("%f", &h);
	
	s = v * h;
	
	printf("Su sueldo es de: %2.f \n", s);


system("pause");


}


