#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length);
void flushKey();
int getInt(void);
int getIntMM(int min, int max);
int yes(void);


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

int getMMInt(int min, int max, const char valueName[]) {
    int value;
    do {
        value = getInt();
        if (value < min || value > max) {
            printf("[%d<=%s<=%d], try again: ", min, valueName, max);
        }
    } while (value < min || value > max);
    return value;
}

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
