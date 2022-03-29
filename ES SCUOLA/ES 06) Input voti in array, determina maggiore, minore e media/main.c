#include <stdio.h>

int main(void) {
    int i, voto, maggiore, minore, nVoti, somma;
    float media;
    printf("Di qunati studenti vuoi inserire i voti? ");
    scanf("%d", &nVoti);
    int voti[nVoti];

    // Riempimento array con i voti e controllo se i voti sono minori-uguali a 10
    for (i = 0; i < nVoti; i++) {
        printf(" Inserisci il voto: ");
        scanf("%d", &voto);
        for(;voto>10;){
            printf("Il voto inserito non e' valido (maggiore di 10), inserisci nuovamente il voto: ");
            scanf("%d", &voto);
        }
        voti[i] = voto;
    }

    // DEBUG Stampa tutti i voti contenuti nell'array
    for (i = 0; i < nVoti; i++) {
        printf("\nIl voto nella posizione %d e' %d", i, voti[i]);
    }

    maggiore = voti[0];
    minore = voti[0];

    // Determina il maggiore e il minore
    for (i = 0; i < nVoti; i++) {
        if(maggiore < voti[i])
            maggiore = voti[i];
        if(minore > voti[i])
            minore = voti[i];
    }

    // Calcolo della media
    somma = 0;
    for (i = 0; i < nVoti; i++) {
        somma += voti[i];
    }
    printf("\nSomma dei voti: %d\n", somma); //DEBUG per controllare la somma
    media = (float)somma / (float)nVoti;
    printf("La media dei voti inseriti e': %f", media);
}