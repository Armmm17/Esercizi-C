#include <stdio.h>

/*
    Realizza un programma per il calcolo delle provvigioni di un agente di commercio che vende the e caffè. Se l'agente
    vende più di 5000€ di caffè ha diritto ad una provvigione del 10% altrimenti del 5%. Sul the la provvigione è del
    4% ma se vende più di 10.000€ è del 16%. Se il totale venduto supera i 20.000€ vie è un ulteriore premio pari al
    12% sul totale.
 */

int main() {
    float soldCoffee, soldThe, soldCoffeePremio, soldThePremio, totale, totPremi, totTot, premiTotali;
    printf("Inserisci quanto caffe' e' stato venduto (in Euro): ");
    scanf("%f", &soldCoffee);
    printf("Inserisci quanto the e' stato venduto (in euro): ");
    scanf("%f", &soldThe);
    totale = soldThe + soldCoffee;
    if (soldCoffee > 5000) {
        soldCoffeePremio = soldCoffee/100*10;
    } else {
        soldCoffeePremio = soldCoffee/100*5;
    }
    if (soldThe > 10000) {
        soldThePremio = soldThe/100*16;
    } else {
        soldThePremio = soldThe/100*4;
    }
    if (totale > 20000) {
        totPremi = totale/100*12;
    } else {
        totPremi = 0;
    }
    totTot = soldCoffee + soldCoffeePremio + soldThe + soldThePremio + totPremi;
    premiTotali = soldCoffeePremio + soldThePremio + totPremi;

    printf("Il totale del caffe venduto (%f) piu' la provvigione e' pari a %f EUR\n", soldCoffee, soldCoffee+soldCoffeePremio);
    printf("Il totale del the venduto (%f) piu' la provvigione e' pari a %f EUR", soldThe, soldThe+soldThePremio);
    printf("Il totale complessivo in entrata e' di %f EUR, di cui %f di provvigione. ", totTot, premiTotali);
    return 0;
}
