#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//programma che dati tre numeri li ordina dal piu piccolo al piu grande
#include <stdio.h>

// Programma che dati tre numeri li ordina dal più piccolo al più grande
int main() {
    int a = 3;
    int b = 7;
    int c = 2;

    int min, mid, max;

    // Trovo il minimo
    if (a <= b && a <= c) {
        min = a;
    }
    else if (b <= a && b <= c) {
        min = b;
    }
    else {
        min = c;
    }

    // Trovo il massimo
    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    // Trovo il valore centrale
    mid = a + b + c - min - max;

    printf("Ordine crescente: %d, %d, %d\n", min, mid, max);

    return 0;
}

