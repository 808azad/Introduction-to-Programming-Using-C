#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void shoppingStats(int noOfItems);
void line(char fill, int length);
 int main() {
 /*line('=', 20);
    line('-', 40);
    line('#', 60);*/
  
    
    int items;

    printf("Money Spending Calculator\n");
    line('=', 25);
    printf("How many items were bought?\n");
    printf("> ");
    scanf("%d", &items);
    shoppingStats(items);

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
     
	
}

