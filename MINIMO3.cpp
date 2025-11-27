#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main() {

	int vet[6];
	int min = 0;
	for (int i = 0; i < 6; i++) {
		printf("inserisci un numero: \n");
		scanf("%d", &vet[i]);
		if (i == 0) {
			min = vet[i];
		}
		if (vet[i] < min) {
			min = vet[i];
		}
	}
	printf("il valore minimo e: %d \n", min);
	return 0;
}