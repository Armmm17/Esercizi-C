#include <stdio.h>

int main() {
    int num1, num2, num3, max, min, med;
    // INPUT
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &num3);
    // ALGORITMO
    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }
    if (num3 > max) {
        med = max;
        max = num3;
    } else if (num3 < min){
        med = min;
        min = num3;
    } else {
        med = num3;
    }
    printf("I numeri inseriti sono: %d, %d, %d\n", num1, num2, num3);
    printf("Il valore massimo e': %d\n", max);
    printf("Il valore medio e': %d\n", med);
    printf("Il valore minimo e': %d\n", min);
}
