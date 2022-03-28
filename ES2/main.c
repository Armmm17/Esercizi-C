#include <stdio.h>

int main() {
    int przNtt = 0;
    float przNttScont = 0;
    float przFin = 0;
    printf("Inserisci il prezzo dell'articolo: ");
    scanf("%d", &przNtt);
    if( przNtt > 100 ){
        przNttScont = przNtt - (przNtt/100*35);
        przFin = przNttScont + (przNttScont/100*20);
    }
    printf("Il prezzo finale e' di %f",przFin);
}
