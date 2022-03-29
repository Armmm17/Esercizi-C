//ESERCIZIO 4
#include <stdio.h>

int main(void) {
	float numero;
	printf("Inserisci un numero: ");
	scanf("%f\n", &numero);
	if (numero>0) {
		printf(" \"\"\"\"\"\"\ ");
	} else if(numero<0) {
		printf(" \\\\\\\\\\\\ ");	
	} else if(numero == 0) {
		printf(" %%%%%%%%%%%% ");
	}
}