#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//This code calculates the total price and average price of items purchased based on user input.

void shoppingStats(int noOfItems);
void line(char fill, int length);
 int main() {
    int items;
    printf("Money Spending Calculator\n");
    line('=', 25);
    printf("How many items were bought?\n");
    printf("> ");
    scanf("%d", &items);
    shoppingStats(items);
    return 0;
}

