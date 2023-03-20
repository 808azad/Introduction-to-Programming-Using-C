#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void line(char fill, int length) {
    int i;
    for (i = 0; i < length - 1; i++) {
        printf("%c", fill);
    }
}

double my_exp(double base, int exponent) {
    double result = 1.0;
    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int calc() {
    double num1;
    double num2;
    double result = 0;
    int value;
    char operators;
    char specialSign;
    int done = 1;

    while (done) {
        printf("> ");
        scanf("%c", &specialSign);

        if (specialSign == '\n') {
            return 0;
        }

        int matches = scanf("%lf%c%lf", &num1, &operators, &num2);

        if (specialSign == '?' && matches == 3) {
            switch (operators) {
            case '+':
                value = printf("%.3lf\n", result = num1 + num2);
                line('-', value);
                printf("\n");
                break;
            case '-':
                value = printf("%.3lf\n", result = num1 - num2);
                line('-', value);
                printf("\n");
                break;
            case 'x':
                value = printf("%.3lf\n", result = num1 * num2);
                line('-', value);
                printf("\n");
                break;
            case '/':
                if (num2 == 0) {
                    printf("division by zero not allowed\n");
                }
                else {
                    value = printf("%.3lf\n", result = num1 / num2);
                    line('-', value);
                    printf("\n");
                }
                break;
            case '%':
                result = ((int)num1 / (int)num2);
                value = printf("%d\n", (int)result);
                line('-', value);
                printf("\n");
                break;
            case '^':
                result = my_exp(num1, num2);
                value = printf("%.3lf\n", result);
                line('-', value);
                printf("\n");
                break;
            default:
                printf("'%c' is not a valid operation, (only +,-,/,x,%% and ^ are acceptable)\n", operators);
            }
        }
        else {
            printf("Invalid Command!\n"
                "[Question mark][First Number][Operation][Second Number] < ENTER>\n");
        }
       flushKey();
    }
    return 0;
}