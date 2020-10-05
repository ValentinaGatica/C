#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float precio, nv, comv, porcent, comis, comtot, sueldo,  sb, c;
	porcent = 0.1;
	sb = 500;
	c = 50;

system("cls");

	printf("Ingrese el precio del vehículo vendido: \n");
	
	scanf("%f", &precio);
	
	printf("Ingrese la cantidad de vehículos vendidos de tipo: \n");
	
	scanf("%f", &nv);
	
	comv = precio * porcent * nv;

	comis = c * nv;
	
	comtot = comv + comis;
	
	sueldo = sb + comtot;
	
	fflush(stdin);
	
	printf("Su sueldo es de: %2.f pesos\n", sueldo);


system("pause");


}


