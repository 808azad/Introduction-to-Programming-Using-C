#include <stdio.h>
#include "calc.h"
int main(void) {
    printf("My Simple Calculator\n"
        "-------------------------\n");
    while (calc());
    printf("Goodbye!\n");
    return 0;
}