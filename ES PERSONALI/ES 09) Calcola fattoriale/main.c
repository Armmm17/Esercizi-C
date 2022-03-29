#include <stdio.h>

int main() {
    int numero, risulato;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    risulato = numero;
    for (int i = numero-1; i > 0 ; --i) {
        risulato =risulato * i;
    }
    printf("Il risultato e': %d\n", risulato);
    return 0;
}
