#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to draw a line of a specified character for a given length
void line(char fill, int length) {
    int i;
    for (i = 0; i < length - 1; i++) {
        printf("%c", fill);
    }
}

// Function to calculate exponentiation of a base raised to an exponent
double myExp(double base, int exponent) {
    double result = 1.0;
    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Main function for the calculator program
int calc() {
    double num1;
    double num2;
    double result = 0;
    int value;
    char operators;
    char specialSign;
    int done = 1;

    // Loop until the user enters a newline character
    while (done) {
        printf("> ");
        scanf("%c", &specialSign);

        // If the special sign is a newline character, exit the loop
        if (specialSign == '\n') {
            return 0;
        }

        // Read the input values and operator character
        int matches = scanf("%lf%c%lf", &num1, &operators, &num2);

        // Check if the special sign is a question mark and if the input is valid
        if (specialSign == '?' && matches == 3) {
            // Perform different calculations based on the operator character
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
                result = myExp(num1, num2);
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
                "[Question mark][First Number][Operation][Second Number]<ENTER>\n");
        }

        // Clear any remaining input in the buffer
        flushKey();
    }

    return 0;
}
