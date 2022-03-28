#include <stdio.h>

/*
 Scrivi un algoritmo che inseriti due numeri interi da tastiera esegua :
    A)La loro somma se uno dei due è pari.
    B)Il loro prodotto se tutti e due sono pari.
    C)La loro divisione se nessuno dei due è pari.
 */

int main() {
    int num1, num2, risultato;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    if (num1%2==0 || num2%2==0) {
        risultato = num1 + num2;
    } else if (num1%2==0 && num2%2==0) {
        risultato = num1 * num2;
    } else if (num1%2!=0 && num2!=0) {
        risultato = num1 / num2;
    }
    printf("Il risultato e': ", risultato);
}
