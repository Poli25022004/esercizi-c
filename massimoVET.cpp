#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

int main() {
	int v[6];
	int max = 0;
	for (int i = 0; i < 6; i++) {
		printf("inserisci un numero: \n");
		scanf("%d",&v[i]);
		if (v[i] ==max) {
			max = max + v[i];
			max++;
		}

	}
	printf("il valore massimo e: %d \n",max);
	return 0;
}