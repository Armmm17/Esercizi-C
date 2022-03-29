//ESERCIZIO 3
#include <stdio.h>

int main(void) {
	float numero;
	const cos = 100;
	printf("Inserisci il numero: ");
	scanf("%f\n", &numero);
	if(numero<cos){
		printf("Il numero (%f) e' minore di 100\n", numero);
	} else if(numero>cos) {
	printf("Il numero (%f) e' maggiore di 100\n", numero);
	} else if(numero == cos) {
	printf("Il numero (%f) e' uguale a 100\n", numero);
	}
	return 0;
}