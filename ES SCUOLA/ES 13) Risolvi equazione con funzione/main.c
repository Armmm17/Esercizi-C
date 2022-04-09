#include <stdio.h>
#include <math.h>

float calcolaDelta(int a, int b, int c);
float calcolaX1(int a, int b, int delta);
float calcolaX2(int a, int b, int delta);
int stampaRis(float x1, float x2, int delta);


int main() {
    int aEq, bEq, cEq;
    float delta, x1, x2;
    printf("inserisci la a dell'equazione: ");
    scanf("%d", &aEq);
    printf("inserisci la b dell'equazione: ");
    scanf("%d", &bEq);
    printf("inserisci la c dell'equazione: ");
    scanf("%d", &cEq);

    printf("L'equazione e' %dx^2 (+) %dx (+) %d ", aEq, bEq, cEq);

    delta = calcolaDelta(aEq, bEq, cEq);
    x1 = calcolaX1(aEq, bEq, calcolaDelta(aEq, bEq, cEq));
    x2 = calcolaX2(aEq, bEq, calcolaDelta(aEq, bEq, cEq));
    stampaRis(x1, x2, delta);
    return 0;
}

float calcolaDelta (int a, int b, int c) {
    float delta;
    delta = pow(-b,2) - 4*a*c;
    return delta;
}

float calcolaX1 (int a, int b, int delta) {
    int x1;
    x1 = (-b + sqrtf(delta))/2*a;
    return x1;
}

float calcolaX2 (int a, int b, int delta) {
    int x2;
    x2 = (-b - sqrtf(delta))/2*a;
    return x2;
}

int stampaRis (float x1, float x2, int delta) {
    if (delta < 0) {
        printf("\nNessuna soluzione reale");
    } else if (delta == 0) {
        printf("\nLa soluzione e': %f", x1);
    } else {
        printf("\nLa prima soluzione e': %f", x1);
        printf("\nLa seconda soluzione e': %f", x2);
    }
}