#include <stdio.h>
#include "utils.h"
#include "rental.h"

/*
NAME: Azad Zeynalov
STUDENT NUMBER: 112217229
E-MAIL: azeynalov1@myseneca.ca
*/







int main(void) {
    printf("Welcome to Seneca Ski Equipment Rentals...\n"
        "------------------------------------------\n");
    do {
        rental();
        printf("Exit Program? ");
    } while (!yes());

    return 0;
}
