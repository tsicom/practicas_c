#include <stdio.h>

int main()
{
	int suma = 11+9;       // %d o %i %para imprimir variables enteras
	float leche = 673.57;  // %f para imprimir variables decimales
	char letra = 'm';      // %c para imprimir variables de caracter
 						   // valor entre comillas simples asigna el caracter ingresado

	char operando1 = 35, operando2 = 43; // valor sin comillas asigna el caracter correspondiente en tabla ASCII

	printf("\n El caracter 1 es: %c\n", operando1);
	printf("\n El caracter 2 es: %c\n", operando2);

	printf("\n La suma es: %i.\n", suma);
	printf("\n La leche cuesta: %f\n", leche);
	printf("\n La letra es: %c\n\n", letra);

	return 0;
}