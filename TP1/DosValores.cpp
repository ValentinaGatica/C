#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
	
	float a, b, sum, rest, prod;

system("cls");

	printf("Ingrese dos numeros: \n");
	
	scanf("%f %f", &a ,&b);
	
	sum = a + b;
	
	prod = a * b;
	
	rest = a - b;
	
	printf("La suma es %.2f \n\nLa resta de (%2.f -%2.f ) es %2.f \n\nEl producto es %2.f \n\n", sum, a, b, rest, prod);


system("pause");


}


