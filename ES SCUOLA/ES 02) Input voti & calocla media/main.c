//ESERCIZIO 2
#include <stdio.h>

int main() {
    int i, nNum;
    float voto, somma, media;
    somma = 0;
    media = 0;
    printf("Quanti voti vuoi inserire?");
    scanf(" %d", &nNum);
    for (i = 1; i <= nNum; ++i) {
        printf("Inserisci il voto: ");
        scanf(" %f", &voto);
        somma += voto;
        media = somma/i;
    }
    printf("La media tra tutti i numeri e': %f\n", media);
    return 0;