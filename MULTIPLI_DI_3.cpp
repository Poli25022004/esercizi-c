#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // dimensione massima dell'array

// Funzione per inserire i valori nel vettore
void Inserisci(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Inserisci un valore: ");
        scanf("%d", &v[i]);  // legge correttamente ogni elemento
    }
}

// Funzione per stampare il vettore
void StampaVettore(int v[], int n) {
    printf("I valori inseriti sono:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

// Funzione per contare i multipli di 3
int ContaMultipliDiTre(int v[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    // Chiediamo quanti valori inserire
    do {
        printf("Quanti valori vuoi inserire? (1-%d): ", MAX);
        scanf("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Numero non valido, riprova!\n");
        }
    } while (n <= 0 || n > MAX);

    int v[MAX];  // array sicuro di dimensione massima fissa

    // Inseriamo i valori
    Inserisci(v, n);

    // Stampiamo il vettore
    StampaVettore(v, n);

    // Contiamo e stampiamo i multipli di 3
    int multipli = ContaMultipliDiTre(v, n);
    printf("Il numero di valori multipli di 3 è: %d\n", multipli);

    return 0;
}

