#include <stdio.h>

int main() {
    int i, nNum;
    float numero, somma, media;
    somma = 0;
    media = 0;
    printf("Quanti numeri vuoi inserire?");
    scanf(" %d", &nNum);
    for (int i = 1; i <= nNum; ++i) {
        printf("Inserisci il numero: ");
        scanf(" %f", &numero);
        somma += numero;
        printf("La somma di tutti i numeri e': %f\n", somma);
        media = somma/i;
        printf("La media tra tutti i numeri e': %f\n", media);
    }
    return 0;
}
