#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
	
	int a, b, c, d;

system("cls");

	printf("Ingrese tres numeros que quiera sumar, separados con espacio: ");
	
	scanf("%i %i %i", &a ,&b, &c);
	
	d = a + b + c;
	
	printf("La suma es: %i \n", d);


system("pause");

}


