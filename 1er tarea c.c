#include <stdio.h>

int main()
{
	int a, b, c, temp;
	
	printf("Ingrese tres numeros separados por espacios: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	
	printf("Numeros ordenados de menor a mayor: %d %d %d\n", a, b, c);
	
	return 0;
}

