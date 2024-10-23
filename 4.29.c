#include<stdio.h>

int main(void) {

    // dichiarazioni dei variabili
    int i;
    int num1, num2;
    int totale = 0;

    // aquisizione dei dati

    printf("--PRODOTTO CON SOLO LE OPERAZIONI DI ADDIZIONE SUCCESSIVE-- \n");
    printf("Inserire primo numero: ");
    scanf("%d", &num1);
    printf("Inserire secondo numero: ");
    scanf("%d", &num2);

    // calcoli 
    for(i=1; i<= num2; i++) {
        totale += num1;
    }

    // printf finale 
    printf("%d * %d = %d con solo operazioni di addizione \n", num1, num2, totale);

    return 0;
}