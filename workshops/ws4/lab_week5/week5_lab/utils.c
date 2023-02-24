#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>








int getInt();
void flushKey();




int getInt(void) {
    int value;
    int matches = scanf("%d", &value);
    char c = getchar();
    while (matches != 1 || c != '\n') {
        flushKey();
        if (matches != 1) {
            printf("Invalid Integer, try again: ");
        }
        else {
            printf("Enter only an integer, try again: ");
        }
        matches = scanf("%d", &value);
        c = getchar();
    }
    return value;
}

void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}


void exp(double number, double ex) {
    double sum = 1.0;
    int i = 0;

    for (i = 0; i <= ex; i++) {
        sum *= number;
    }



}
