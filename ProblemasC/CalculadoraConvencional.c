#include <stdio.h>

int main() {
	char operacion;
	int num1, num2, resultado;
	
	// Men� de opciones
	printf("Calculadora convencional\n");
	printf("Ingrese una operaci�n (+, -, *, /): ");
	scanf(" %c", &operacion);
	
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &num2);
	
	// Realiza la operaci�n seleccionada
	switch (operacion) {
	case '+':
		resultado = num1 + num2;
		printf("El resultado es: %d\n", resultado);
		break;
	case '-':
		resultado = num1 - num2;
		printf("El resultado es: %d\n", resultado);
		break;
	case '*':
		resultado = num1 * num2;
		printf("El resultado es: %d\n", resultado);
		break;
	case '/':
		if (num2 != 0) {
			resultado = num1 / num2;
			printf("El resultado es: %d\n", resultado);
		} else {
			printf("Error: Divisi�n por cero no permitida.\n");
		}
		break;
	default:
		printf("Operaci�n inv�lida.\n");
		break;
	}
	
	return 0;
}
