//ESERCIZIO 1
#include <stdio.h>
#include <math.h>

int main() {
    int numero, esponente, risultato;
    printf("Inserisci il numero che vuoi elevare lla n-esima: ");
    scanf("%d", &numero);
    printf("Insersci l'esponente: ");
    scanf("%d", &esponente);
    risultato = pow(numero, esponente);
    printf("Il risultato e' %d", risultato);
    return 0;
}