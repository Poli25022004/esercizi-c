#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void LeggiVettore(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Inserisci un valore: ");
        scanf("%d", &v[i]);
    }
}

void StampaVettore(int v[], int n) {
    printf("Il vettore è: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int Somma(int v[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    printf("La somma dei valori è: %d\n", sum);
    return sum;
}

int main() {
    int n;
    int v[100];

    printf("Quanti elementi? (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Numero non valido!\n");
        return 1;
    }

    LeggiVettore(v, n);
    StampaVettore(v, n);
    Somma(v, n);

    return 0;
}
