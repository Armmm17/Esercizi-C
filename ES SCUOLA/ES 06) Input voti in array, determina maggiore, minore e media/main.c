#include <stdio.h>

int main(void) {
    int i, voto, maggiore, minore, nVoti;
    float media;
    printf("Di qunati studenti vuoi inserire i voti? ");
    scanf("%d", &nVoti);
    int voti[nVoti];

    // Riempimento array
    for (i = 0; i < nVoti; i++) {
        printf("Inserisci il voto: ");
        scanf("%d", voti[i]);
    }

    // DEBUG Stampa tutti i voti contenuti nell'array
    for (i = 0; i < nVoti; i++) {
        printf("\nIl voto nella posizione %d e' %d", i, voti[i]);
    }
}