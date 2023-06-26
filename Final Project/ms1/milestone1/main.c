/*
Student Name: Azad Zeynalov
Email: azeynalov1@myseneca.ca
Id: 112217229
Date: 2023-04-08
-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
*/
#include "POS.h"
#include "PosUI.h"
#include <stdio.h>

// Main function for testing milestone 1
int main() {
    printf("Testing POS.h defined values:\n");

    // Checking the value of TAX
    if (TAX - 0.13 < 0.00001 && 0.13 - TAX < 0.00001) {
        printf("TAX value is correct!\n");
    } else {
        printf("The defined value for TAX is incorrect!\n");
    }

    // Checking the value of MAX_SKU_LEN
    if (MAX_SKU_LEN == 6) {
        printf("MAX_SKU_LEN value is correct!\n");
    } else {
        printf("MAX_SKU_LEN defined value is incorrect!\n");
    }

    // Checking the value of MAX_STOCK_NUMBER
    if (MAX_STOCK_NUMBER == 999) {
        printf("MAX_STOCK_NUMBER value is correct!\n");
    } else {
        printf("MAX_STOCK_NUMBER defined value is incorrect!\n");
    }

    // Checking the value of MAX_NO_ITEMS
    if (MAX_NO_ITEMS == 500) {
        printf("MAX_NO_ITEMS value is correct!\n");
    } else {
        printf("MAX_NO_ITEMS defined value is incorrect!\n");
    }

    // Checking the value of MAX_BILL_ITEMS
    if (MAX_BILL_ITEMS == 10) {
        printf("MAX_BILL_ITEMS value is correct!\n");
    } else {
        printf("MAX_BILL_ITEMS defined value is incorrect!\n");
    }

    // Running the POS system with the provided data file
    runPos("posdata.csv");

    return 0;
}
