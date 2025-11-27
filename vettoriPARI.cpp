#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Inserisci(int v[], int n) {
	for (int i = 0; i < n; i++) {
		printf("inserisci valore: \n");
		scanf("%d", &v[i]);
	}
}
void stampaVettore(int v[], int n) {
	for (int i = 0; i < n; i++) {
		printf("I valori sono: %d\n",v[i]);
	}
}
int contaPari(int v[], int n) {
	int pari = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			pari++;
			
		}
	}
	return pari;
}

int main() {

	int v[100], n;
	printf("Quanti elementi? ");
	scanf("%d", &n);

	Inserisci(v, n);
	stampaVettore(v,n);
	int quanti_pari=contaPari(v, n);
	printf("I numeri pari sono: %d\n", quanti_pari);
	
	return 0;
}
