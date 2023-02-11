#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "rental.h"
#include "utils.h"

void line(char fill, int lenght){
	int i;
	for (i = 0; i < lenght; i++) {
		printf("%c", fill);
	}
}

void menu(void) {
 	char ch = ' ';
	printf("Equipment%5cPrice%6cSKU", ch, ch);
	printf("\n");
	line('-', 28);
	printf("\n");
	printf("Skis%10c12.30%6c101\n", ch, ch);
	printf("Boots%9c10.45%6c102\n", ch, ch);
	printf("Poles%9c2.99%7c203\n", ch, ch);
	printf("Helmet%8c3.99%7c204\n", ch, ch);
	printf("Winter Pants%2c14.30%6c305\n", ch, ch);
	printf("Winter Jacket%1c20.55%6c306\n", ch, ch);
	line('-', 28);
	printf("\n");
}

double rent(int sku) {

	double price = 0;

	switch (sku) {
	case 101:
		printf("Skis ............. 12.30$\n");
		price = 12.30;
		break;
	case 102:
		printf("Boots ............ 10.45$\n");
		price = 10.45;
		break;
	case 203:
		printf("Poles ............ 2.99$\n");
		price = 2.99;
		break;
	case 204:
		printf("Helmet ...........  3.99$\n");
		price = 3.99;
		break;
	case 305:
		printf("Winter Pants ..... 14.30$\n");
		price = 14.30;
		break;
	case 306:
		printf("Winter Jacket ............ 20.55$\n");
		price = 20.5;
		break;
	default:
		printf("Invalid Selection!\n");
		
	
	}
	
	return price;

}

void rental(void) {
	int skuNum = 0;
	double price = 0;
	menu();

	do {
		printf("Enter Sku or 0 to exit: ");
			skuNum = getInt();
		
		if (skuNum != 0) {
			
			price += rent(skuNum);
			
		}
	} while (skuNum != 0);

	
	line('-', 28);
	printf("\n");

	char ch = ' ';
	printf("Total price:%6c %.2lf\n", ch, price);
	printf("Tax:%15c %.2lf\n", ch, price * 0.13);
	printf("Total + Tax:%6c %.2lf$\n", ch,  price * 1.13);
	line('*', 28);
	printf("\n");



	
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
