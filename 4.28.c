#include<stdio.h>


int main(void) {


    int i;
    int number;
    int max = 0;

    printf("--MASSIMO TRA 10 NUMERI-- \n");

    // repete 10 volte
    for(i=0; i<10; i++) {

        printf("Inserire numero: ");
        scanf("%d", &number);

        // verifica 
        if(number>max) {
            max = number;
        }

    }

    printf("Numero massimo e` %d", max);

    return 0;
}