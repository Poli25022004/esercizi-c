#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main() {
	float elementi[10], sommaelementi = 0.0, media = 0.0;
	
	for (int i = 0; i < 10; i++) {
		printf("inserisci un numero: \n");
		scanf("%f",&elementi[i]);
		sommaelementi=sommaelementi+elementi[i];
	}
	media = sommaelementi / 10;
	printf("la media degli elementi e: %f \n",media);
	return 0;
}