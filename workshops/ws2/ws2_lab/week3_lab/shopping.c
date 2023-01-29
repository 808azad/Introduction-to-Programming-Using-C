#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void line(char fill, int length) {
	int i = 0;
	while (i < length){
		printf("%c", fill);
		
		i++;

	}

	printf("\n");

}
 void shoppingStats(int noOfItems) {

	int row = 1;
	double items123;
	double sum = 0;
	double average;

	printf("Please enter the price of the %d items bought...\n", noOfItems);
	

	while (row <= noOfItems){
		printf("%d> ", row);
		scanf("%lf", &items123);

		sum = sum + items123;
		
		
		
		row++;
		
		
	}
	
	
	line('-', 50);
	printf("Total price for all the items purchased: %.2lf\n", sum);

	average = sum / 3;
	printf("Average price of the items: %.2lf\n", average);
	line('=', 50);



	
	


	return 0;
 




}
