#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int numeroGiorno;

    printf("inserisci un numero da 1 a 7: ");
    scanf("%d", &numeroGiorno);

    switch (numeroGiorno) {
    case 1: 
        printf("Lunedi\n");
        break;
    case 2:
        printf("martedi\n");
        break;
    case 3:
        printf("mercoledi\n");
        break;
    case 4:
        printf("giovedi\n");
        break;
    case 5:
        printf("venerdi\n");
        break;
    case 6:
        printf("sabato\n");
        break;
    case 7:
        printf("domenica\n");
        break;

    }

    return 0;
}

