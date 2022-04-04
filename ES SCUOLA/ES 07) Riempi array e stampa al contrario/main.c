#include <stdio.h>

int main(void) {
    int i, lenArr;
    printf("Quanti numeri vuoi inserire? ");
    scanf(" %d", &lenArr);
    int numeri[lenArr];

    // Riempi array
    for (i = 0; i < lenArr; i++) {
        printf("Inserisci il numero: ");
        scanf("%d", &numeri[i]);
    }

    //Stampa array al normale
    for (i = 0; i < lenArr; i++) {
        printf("%d ", numeri[i]);
    }

    printf("\n");

    //Stampa array al contrario
    for (i = lenArr-1; i >= 0 ; i--) {
        printf("%d ", numeri[i]);
    }
}