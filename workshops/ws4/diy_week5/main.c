#include <stdio.h>
#include "calc.h"

//main program for testing the functionality of calculator
int main(void) {
    printf("My Simple Calculator\n"
        "-------------------------\n");
    while (calc());
    printf("Goodbye!\n");
    return 0;
}