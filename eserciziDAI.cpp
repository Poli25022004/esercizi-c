#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main() {
	int V[6], min = 0;

	for (int i = 0; i < 6; i++) {
		printf("inserisci un numero: \n");
		scanf("%d", &V[i]);
		if (V[i] < min) {
			min = V[i];
		}
	}
	printf("il valore minimo e: %d\n", min);
	return 0;

}