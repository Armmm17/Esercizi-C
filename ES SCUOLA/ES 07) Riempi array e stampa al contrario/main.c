#include <stdio.h>

int main(void) {
    int i, lenArr, numero;
    printf("Quanti numeri vuoi inserire? ");
    lenArr = 0;
    scanf(" %d", &lenArr);
    int numeri[lenArr];

    // Riempi array
    i = 0;
    for (i = 0; i < lenArr; i++) {
        printf("Inserisci il numero: ");
        scanf("%d", &numero);
        numeri[i] = numero;
    }

    /*DEBUG CARICAMENTO LISTA
    for (i = 0; i < lenArr; i++) {
        printf("\nIl numero nella posizione %d e' %d", i, numeri[i]);
    }
    */
    //Stampa array al normale
    for (i = 0; i < lenArr; i++) {
        printf("%d ", numeri[i]);
    }

    //Stampa array al contrario
    for (i = lenArr-1; i >= 0 ; i--) {
        printf("%d ", numeri[i]);
    }

}