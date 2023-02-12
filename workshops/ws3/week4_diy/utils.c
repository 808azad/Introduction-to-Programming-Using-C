#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length);
void flushKey();
int getInt(void);
int getIntMM(int min, int max);
double getDouble(void);
double getDoubleMM(double min, double max);

void line(char fill, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%c", fill);
    }
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

int getIntMM(int min, int max) {
    int value;
    do {
        value = getInt();
        if (value < min || value > max) {
            printf("[%d<=Number<=%d], try again: ", min, max);
        }
    } while (value < min || value > max);
    return value;
}


double getDouble(void) {
    double dvalue;
    double dmatches = scanf("%lf", &dvalue);
    char c = getchar();
    while (dmatches != 1 || c != '\n') {
        flushKey();
        if (dmatches != 1) {
            printf("Invalid Double, try again: ");
        }
        else {
            printf("Enter only a Double, try again: ");
        }
        dmatches = scanf("%lf", &dvalue);
        c = getchar();
    }
    return dvalue;

}
double getDoubleMM(double min, double max) {
    double dvalue;
    do {
        dvalue = getDouble();
        if (dvalue < min || dvalue > max) {
            printf("[%.3lf<=Number<=%.3lf], try again: ", min, max);
        }
    } while (dvalue < min || dvalue > max);
    return dvalue;
}

