#define _CRT_SECURE_NO_WARNINGS
#define lunghezza 5
#include <iostream>

int main()
{
    int vet[lunghezza];
    int a= 0, maggiore = 0;

    for (int i = 0; i < lunghezza; i++) {
        printf("inserisci numero: \n");
        scanf("%d", &a);
        vet[i] = a;
    }
      for(int i=0;i<lunghezza;i++){
          if(vet[i]>5) {
            printf("numero maggiore di 5: %d\n",vet[i]);
            maggiore++;
          }
       
        
    }
printf("%d numeri piu grandi di 5 \n", maggiore);
return 0;
}