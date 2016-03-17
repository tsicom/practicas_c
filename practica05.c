#include <stdio.h>

int main()
{
	printf("\n La variable tipo char mide %d byte y %d bits\n", sizeof(char), sizeof(char)*8);
	printf("\n La variable tipo unsigned char mide %d byte y %d bits\n", sizeof(unsigned char), sizeof(unsigned char)*8);
	printf("\n La variable tipo short mide %d bytes y %d bits\n", sizeof(short), sizeof(short)*8);
	printf("\n La variable tipo unsigned short mide %d bytes y %d bits\n", sizeof(unsigned short), sizeof(unsigned short)*8);
	printf("\n La variable tipo int mide %d bytes y %d bits\n", sizeof(int), sizeof(int)*8);
	printf("\n La variable tipo unsigned int mide %d bytes y %d bits\n", sizeof(unsigned int), sizeof(unsigned int)*8);
	printf("\n La variable tipo long mide %d bytes y %d bits\n", sizeof(long), sizeof(long)*8);
	printf("\n La variable tipo unsigned long mide %d bytes y %d bits\n", sizeof(unsigned long), sizeof(unsigned long)*8);
	printf("\n La variable tipo float mide %d bytes y %d bits\n", sizeof(float), sizeof(float)*8);
	printf("\n La variable tipo double mide %d bytes y %d bits\n", sizeof(double), sizeof(double)*8);
	printf("\n La variable tipo long double mide %d bytes y %d bits\n\n", sizeof(long double), sizeof(long double)*8);

	return 0;
}