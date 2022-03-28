#include <stdio.h>


int main() {
    int num1, num2, num3, max,mcm,temp;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf(" %d", &num3);
    printf("Inserisci il terzo numero: ");
    scanf(" %d", &num3);

    //calcolo max
    if (num1 < num2) {
        max = num1;
    } else {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (max%num1==max%num2==max%num3==0) {
        mcm = max;
    } else {
        temp = max;
        do {
            temp = temp += max;
            if (temp%num1==temp%num2==temp%num3==0) {
                mcm = temp;
            }
        } while (mcm==temp);
    }
    printf("L'mcm e': %d ", temp);

    return 0;
}
