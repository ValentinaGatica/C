#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
	
	int n1, n2, n3;

system("cls");

	printf("Ingrese dos numero (enteros): \n\n");
	
	scanf("%i %i", &n1, &n2);
	
	if(n1>n2){
		n3 = n1 * n2;
		printf("El producto de ambos numeros es %i \n\n", n3);	
		
	}else if (n1==n2){
		printf("%i y %i son numeros iguales\n\n", n1, n2);
	
	}else {
		printf("Muchas gracias!\n\n");
	}
	
system("pause");

}



