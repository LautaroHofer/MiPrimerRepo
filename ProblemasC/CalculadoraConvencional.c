#include <stdio.h>

int main() {
	char operacion;
	int num1, num2, resultado;
	
	// Menú de opciones
	printf("Calculadora convencional\n");
	printf("Ingrese una operación (+, -, *, /): ");
	scanf(" %c", &operacion);
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	// Realiza la operación seleccionada
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
			printf("Error: División por cero no permitida.\n");
		}
		break;
	default:
		printf("Operación inválida.\n");
		break;
	}
	
	return 0;
}
