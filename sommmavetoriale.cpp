//DATI DUE VETTORI, FARE LA SOMMA VETTORIALE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a[4] = { 1,2,3,4 };
	int b[4] = { 6,5,7,5 };
	int c[4];
	for (int i = 0; i < 4; i++) {
		c[i] = a[i] + b[i];
		
	}
	for (int i = 0; i < 4; i++) {
		printf("la somma dei valori e: %d \n", c[i]);
	}
	return 0;
}


