#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"


void line(char fill, int length) {
	int i;
	for (i = 0; i < length; i++) {
		printf("%c", fill);
	}
	printf("\n");
}



int calc() {
	double num1, num2, result = 0.0;
	char operators;
	int local = 1;
	int length = 5;
	char sign;


	printf("> ");
	double matches = scanf("%c %lf %c %lf", &sign, &num1, &operators, &num2);



	
	
	
	
	

	

	

	

          switch (operators) {
			case '+':
				printf("%.3lf\n", result = num1 + num2);
				if (result = length) {
					line('-', result);
				}
				break;
			case '-':
				printf("%.3lf\n", result = num1 - num2);
				if (result = length) {
					line('-', result);
				}
				break;
			case 'x':
				printf("%.3lf\n", result = num1 * num2);
				if (result = length) {
					line('-', result);
				}
				break;
			case '/':
				printf("%.3lf\n", result = num1 / num2);
				if (result = length) {
					line('-', result);
				}
				break;
			case '%':
				result = ((int)num1 / (int)num2);
				printf("%d\n", (int)result);
				if (result = 1) {
					line('-', result);
				}
				break;
			case '^':				
				exp(num1, num2);
				printf("%.3lf ^ %.3lf = %.3lf", num1, num2, result);


				break;
			default:
				printf("'%c' is not a valid operation, (only +,-,/,x,%% and ^ are acceptable)\n", operators);
			}

		

}
  

