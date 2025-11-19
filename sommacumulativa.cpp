#define _CRT_SECURE_NO_WARNINGS
#define Lunghezza 4
#include <iostream>

int main()
{
	int N = 4;
	int somma = 0;
	for (int i = 0; i < Lunghezza; i++) {
		printf("inserisci numero \n");
		scanf("%d",& N);
		somma = somma + N;
 }
	return somma;
}

