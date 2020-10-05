#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float l1, l2, r, d, sup, per;

system("cls");

	printf("Ingrese dos lados de su rectangulo, en centimetros: \n");
	
	scanf("%f %f", &l1 ,&l2);
	
	r = pow(l1,2) + pow(l2,2);
	
	d = sqrt (r);
	
	sup = l1 * l2;
	
	per = (l1*2) + (l2*2);
	
	printf("La diagonal principal mide %.2f centimetros \n\nLa superficie es de %2.f centimetros cuadrados \n\nEl permimetro es de %2.f centimetros\n\n", d, sup, per);


system("pause");


}


