#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    float res1, res2;
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);
    printf("Inserisci il valore di c: ");
    scanf("%d", &c);
    printf("L'equazione e': %dx^2 + %dx + %d = 0\n", a, b, c);
    delta = (-b)^2 -4*a*c;
    printf("Il valore di delta e': %d\n", delta);
    res1 = (-b+sqrt(delta))/(2*a);
    res2 = (-b-sqrt(delta))/(2*a);
    printf("Il primo risultato e': %f\n", res1);
    printf("Il secondo risultato e': %f", res2);

    return 0;
}
