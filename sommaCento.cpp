#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
//Utilizzare un ciclo for per calcolare la somma dei numeri da 1 a 100 e stampare il risultato.
int main()
{
	int somma = 0;
	for (int i = 0; i < 100; i++) {
		somma = somma+ 1;
	
	}
	printf("la somma e:%d\n", somma);
	return 0;
}