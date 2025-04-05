#include <stdio.h>
/*Realice un programa que sume en base siete 
dos números de una cifras ingresadas por el usuario. */

int main() {
	
	int a,b,suma;
	
	printf("Ingrese un numero (0-6): ");
	scanf("%d",&a);
	printf("Ingrese otro numero (0-6): ");
	scanf("%d",&b);
	
	if(a < 0 || a > 6 || b < 0 || b > 6){
		printf("Ingrese numeros dentro del Rango Requerido!\n");
		printf("\tPrograma Finalizado...\t\n");
	}
	
	suma = a + b;
	
	if(suma >= 7){
		printf("------------------------------------------------\n");
		printf("El resultado de la suma es %d%d\n",suma /7,suma % 7);
		printf("------------------------------------------------\n");
	}else{
		printf("------------------------------------------------\n");
		printf("El resultado de la suma es %d\n",suma);
		printf("------------------------------------------------\n");
	}
	
	return 0;
}

