//ESERCIZIO 5
#include <stdio.h>

int main() {
    int num1, num2;
    float risultato;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    if (num1%2==0 || num2%2==0) {
        risultato = num1 + num2;
    } else if (num1%2==0 && num2%2==0) {
        risultato = num1 * num2;
    } else if (num1%2!=0 && num2%2!=0) {
        risultato = (float)num1 / (float)num2;
    }
    printf("Il risultato e': %f", risultato);
}