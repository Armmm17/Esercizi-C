#include <stdio.h>

int main() {
    // Esercizio 1
    int num1 = 0;
    int num2 = 0;
    int maggiore = 0;
    int somma = 0;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    //printf("Il primo numero e': %d\n", num1);
    printf("Inserisci il secondo numero: ");
    scanf(" %d", &num2);
    //printf("Il secondo numero e': %d\n", num2);
    if (num1 > num2) {
        maggiore = num1;
        printf("Il numero maggiore e': %d", maggiore);
    } else if (num1 < num2) {
        maggiore = num2;
        printf("Il numero maggiore e': %d", maggiore);
    }else if (num1 == num2) {
        somma = num1 + num2;
        printf("I due numeri inseriti sono uguali, la somma e': %d", somma);
    }
}
