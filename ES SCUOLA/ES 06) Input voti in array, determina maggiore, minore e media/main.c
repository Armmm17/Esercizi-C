#include <stdio.h>

int main(void) {
    int i, maggiore, minore, nVoti;
    float media, voto, somma;
    printf("Di quanti studenti vuoi inserire i voti? ");
    scanf("%d", &nVoti);
    float voti[nVoti];

    // Riempimento array con i voti e controllo se i voti sono minori-uguali a 10
    for (i = 0; i < nVoti; i++) {
        printf(" Inserisci il voto: ");
        scanf("%f", &voto);
        for(;voto>10;){
            printf("Il voto inserito non e' valido (maggiore di 10), inserisci nuovamente il voto: ");
            scanf("%f", &voto);
        }
        voti[i] = voto;
    }

    // DEBUG Stampa tutti i voti contenuti nell'array
    for (i = 0; i < nVoti; i++) {
        printf("\nIl voto nella posizione %d e' %f", i, voti[i]);
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
    printf("\nSomma dei voti: %f\n", somma); //DEBUG per controllare la somma
    media = (float)somma / (float)nVoti;
    printf("La media dei voti inseriti e': %f", media);
}