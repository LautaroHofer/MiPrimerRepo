#include <stdio.h>

int esPrimo(int numero) 
{
	if (numero <= 1) 
	{
		return 0;
	}
	
	for (int i = 2; i * i <= numero; i++)
	{
		if (numero % i == 0)
		{
			return 0;
		}
		
	}
	return 1;
}

int main()
{
	int numero;
	
	printf("Programa para verificar si un n�mero es primo.\n");
	printf("Introduce n�meros enteros positivos. Ingresa 0 para salir.\n");
	
	while (1)
	{
		printf("Ingresa un n�mero: ");
		scanf("%d", &numero);
		
		if (numero == 0)
		{
			printf("Gracias por usar el programa. �Hasta luego!\n");
			break; 
		}
		
		if (numero < 0)
		{
			printf("Por favor, ingresa un n�mero entero positivo.\n");
		} 
		
		else if (esPrimo(numero))
		{
			printf("El n�mero %d es primo.\n", numero);
		}
		
		else 
		{
			printf("El n�mero %d no es primo.\n", numero);
		}
	}
	
	return 0;
}
