#include <stdio.h>

int main(void) {
    int lenArr, i, nPari, nDispari;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &lenArr);
    int numeri[lenArr];

    // Riempi array
    for (i = 0; i < lenArr; i++) {
        printf("Inserisci il numero: ");
        scanf("%d", &numeri[i]);
    }

    nDispari = 0;
    nPari = 0;
    for (i = 0; i < lenArr; i++) {
        if (numeri[i]%2==0) {
            nPari+=1;
        } else {
            nDispari += 1;
        }
    }
    printf("I numeri pari sono %d \n", nPari);
    printf("I numeri dispari sono %d", nDispari);
}