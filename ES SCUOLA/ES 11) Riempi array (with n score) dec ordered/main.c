#include <stdio.h>

int main (void) {
    int lenArr, i, j;
    printf("Inserisci il numero di concorrenti: ");
    scanf("%d", &lenArr);
    float punteggi[lenArr];

    // Riempimento array con i punteggi
    for (i = 0; i < lenArr; i++) {
        printf("Inserisci il punteggio: ");
        scanf("%f", &punteggi[i]);
    }

    // Stampa SOLO punteggi
    for (i = 0; i < lenArr; i++) {
        printf(" %f ", punteggi[i]);
    }

    // Algoritmo ordinamento array crescente
    for (i = 0; i < lenArr; i++) {
        for (j = 0; j < lenArr; j++) {
            if (punteggi[i] < punteggi[j]) {
                int temp = punteggi[i];
                punteggi[i] = punteggi[j];
                punteggi[j] = temp;
            }
        }
    }

    // Stampa Classifica
    for (i = lenArr-1; i >= 0 ; i--) {
        printf("\n%f punti", punteggi[i]);
    }

    /*
     * Per la stampa della classifica (punteggi in ordine decrescente) ho deciso
     * di ordinare l'array in modo crescente e di stamparlo succesivamente al contrario
     */

}