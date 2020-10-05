#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main(){
	
	int n;

system("cls");

	printf("Ingrese un numero: \n");
	
	scanf("%i", &n);
	
	if(n==0){
		printf("El numero es 0 \n");
		
	}else if(n>0){
		printf("El numero es positivo \n");
		
	}else{
		printf("El numero es negativo \n");
	}
	
	
system("pause");

}



