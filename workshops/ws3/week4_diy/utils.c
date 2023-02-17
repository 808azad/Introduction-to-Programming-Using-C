#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void line(char fill, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%c", fill);
    }
    putchar('\n');
}


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


