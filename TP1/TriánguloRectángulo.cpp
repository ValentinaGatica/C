#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float cat1, cat2, res, hip, sup, per;

system("cls");

	printf("Ingrese dos lados (catetos) de su triangulo rectangulo en centimetros: \n");
	
	scanf("%f %f", &cat1 ,&cat2);
	
	res = pow(cat1,2) + pow(cat2,2);
	
	hip = sqrt (res);
	
	sup = (cat1 *cat2)/2;
	
	per = cat1 + cat2 + hip;
	
	printf("La hipotenusa mide %.2f centimetros \n\nLa superficie es de %2.f centimetros cuadrados \n\nEl permimetro es de %2.f centimetros\n\n", hip, sup, per);


system("pause");


}


