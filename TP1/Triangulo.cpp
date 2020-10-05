#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
	
	int a,b,c,p;

system("cls");

	printf("Ingrese los tres lados de su triangulo: \n");
	
	scanf("%i %i %i", &a, &b, &c);
	
	p = a + b + c;
	
	printf("Su perimetro es: %i \n", p);


system("pause");


}


