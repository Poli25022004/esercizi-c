#define _CRT_SECURE_NO_WARNINGS
#define lunghezza 5
#include <iostream>

int main()
{
    int vet[lunghezza];
    int a= 0, maggiore = 0;

    for (int i = 0; i < lunghezza; i++) {
        printf("inserisci numero: ");
        scanf("%d", &a);
        vet[i] = a;           
        if (a > 5) 
        maggiore++;
        
    }
    printf("%d numeri piu grandi di 5 \n", maggiore);
    return maggiore;
}
