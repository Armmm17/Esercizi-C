#include <stdio.h>

int main (void) {
    int i, j, lenArr12, lenArr3;
    lenArr12 = 10;
    lenArr3 = 20;
    int arr1[lenArr12];
    int arr2[lenArr12];
    int arr3[lenArr3];

    // Riempi array 1
    for (i = 0; i < lenArr12; i++) {
        printf("Inserisci il valore alla posizione %d dell'array 1: ", i);
        scanf("%d", &arr1[i]);
    }

    // Riempi array 2
    for (i = 0; i < lenArr12; i++) {
        printf(" Inserisci il valore alla posizione %d dell'array 2: ", i);
        scanf(" %d", &arr2[i]);
    }

    // Stampa array 1
    printf("\nArray 1 (10, non ordinato): ");
    for (i = 0; i < lenArr12; i++) {
        printf(" %d ", arr1[i]);
    }

    // Stampa array 2
    printf("\nArray 2 (10, non ordinato): ");
    for (i = 0; i < lenArr12; i++) {
        printf(" %d ", arr2[i]);
    }

    // Algoritmi per aggiungere i valori all'array 3
    for (i = 0 ; i < lenArr12; i++) {
        arr3[i] = arr1[i];
    }
    printf("\ni = %d", i);
    j = 0;
    for (i = i; i < lenArr3 && j < lenArr12; i++ && j++) {
        int temp = arr2[j];
        arr3[i] = temp;
    }

    // Stampa array 3 non ordinato
    printf("\n Array 3 (20, non ordinato) = ");
    for (i = 0; i < lenArr3; i++) {
        printf(" %d ", arr3[i]);
    }

    // Algoritmo ordinamento array 3:
    for (i = 0; i < lenArr3; i++) {
        for (j = 0; j < lenArr3; j++) {
            if (arr3[i] < arr3[j]) {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    // Stampa array 3  ordinato
    printf("\n Array 3 (20, ordinato) = ");
    for (i = 0; i < lenArr3; i++) {
        printf(" %d ", arr3[i]);
    }

}