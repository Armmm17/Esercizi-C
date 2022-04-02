#include <stdio.h>

int main (void) {
    int lenArr,i,j;
    printf("Insersci la lunghezza dell'array: ");
    scanf("%d", &lenArr);
    int arr[lenArr];
    // Riempi Array
    for (i = 0; i < lenArr; i++) {
        printf(" Inserisci il valore: ");
        scanf(" %d", &arr[i]);
    }
    // Stampa Array
    for (i = 0; i < lenArr; i++) {
        printf("%d", arr[i]);
    }

    // Algoritmo ordinamento
    for (i = 0; i < lenArr; i++) {
        for (j = 0; j < lenArr; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Stampa Array
    printf("\n");
    for (i = 0; i < lenArr; i++) {
        printf("%d", arr[i]);
    }

}