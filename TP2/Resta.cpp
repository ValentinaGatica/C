#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
	
	int n1, n2, n3;

system("cls");

	printf("Ingrese dos numero (enteros): \n");
	
	scanf("%i %i", &n1, &n2);
	
	if(n1==n2){
		n3 = n1 * n2;
		printf("%i y %i son numeros iguales, por lo que se calculo el producto de ambos, y es %i \n\n", n1, n2, n3);	
		
	}else{
		printf("Muchas gracias!");
	}
	
	
system("pause");

}

