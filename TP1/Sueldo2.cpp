#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float h, s;
	int v;
	v = 10;

system("cls");

	printf("Ingrese la cantidad de horas trabajadas: \n");
	
	scanf("%f", &h);
	
	s = v * h;
	
	printf("Su sueldo es de: %2.f pesos\n", s);


system("pause");


}


