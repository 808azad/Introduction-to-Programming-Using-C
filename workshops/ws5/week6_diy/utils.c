#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//some functions from utils module implemented in workshop 3 (except the last one)

// Function to print a line of characters with a specified length
void line(char fill, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%c", fill);
    }
    putchar('\n');
}

// Function to get an integer input from the user
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

// Function to flush the input buffer
void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}

// Function to get an integer within a specified range from the user
int getMMInt(int min, int max, const char valueName[]) {
    int value;
    do {
        value = getInt();
        if (value < min || value > max) {
            printf("[%d <= %s <= %d], try again: ", min, valueName, max);
        }
    } while (value < min || value > max);

    return value;
}

// Function to get a yes/no response from the user
int yes(void) {
    int res;
    char resp;
    printf("(Y)es or (N)o: ");
    resp = getchar();
    if (resp == 'Y' || resp == 'y') {
        res = 1;
    }
    else {
        res = 0;
    }
    return res;
}
