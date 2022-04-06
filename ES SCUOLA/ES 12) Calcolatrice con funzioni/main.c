#include <stdio.h>
#include <unistd.h>

int mostraMenu (void);
int Somma (int a, int b);
float sommaReale (float a, float b);
int Subtraction (int a, int b);
float divisione (float a, float b);
int moltiplicazione (int a, int b);

int main () {
    mostraMenu();
    return 0;
}

int mostraMenu (void){
    int opzione = 0;
    printf("\nOpzioni disponibili: \n");
    printf("    1) Somma di due numeri \n");
    printf("    2) Somma (reale) di due numeri\n");
    printf("    3) Sottrazione di due numeri\n");
    printf("    4) Divisione tra due numeri\n");
    printf("    5) Moltiplicazione di due numeri\n");
    printf("    0) Esci dal programma");
    printf("\n");
    printf("    Inserisci l'opzione desiderata: ");
    scanf("%d", &opzione);

    if (opzione == 1) {
        fflush(stdin);
        int num1, num2;
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
        printf("La somma dei due numeri e': %d", Somma(num1, num2));
        mostraMenu();

    } else if (opzione == 2) {
        fflush(stdin);
        float num1, num2;
        printf("Inserisci il primo numero: ");
        scanf("%f", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%f", &num2);
        printf("La somma dei due numeri e': %f", sommaReale(num1, num2));
        mostraMenu();

    } else if (opzione == 3) {
        fflush(stdin);
        int num1, num2;
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
        printf("La sottrazione dei due numeri e': %d", Subtraction(num1, num2));
        mostraMenu();

    } else if (opzione == 4) {
        fflush(stdin);
        float num1, num2;
        printf("Inserisci il primo numero: ");
        scanf("%f", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%f", &num2);
        printf("Il risultato della divisione e': %f", divisione(num1, num2));
        mostraMenu();

    } else if (opzione == 5) {
        fflush(stdin);
        int num1, num2;printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
        printf("Il risultato della moltiplicazione (prodotto) e': %d", moltiplicazione(num1, num2));
        mostraMenu();

    } else {
        fflush(stdin);

    }
}

int Somma (int a, int b) {
    int somma;
    somma = a + b;
    return somma;
}

float sommaReale (float a, float b) {
    float sommaReal;
    sommaReal = a + b;
    return sommaReal;
}

int Subtraction (int a, int b) {
    int sottrazione;
    sottrazione = a - b;
    return sottrazione;
}

float divisione(float a, float b) {
    float div;
    div = a / b;
    return div;
}

int moltiplicazione (int a, int b) {
    int prodotto;
    prodotto = a * b;
    return prodotto;
}