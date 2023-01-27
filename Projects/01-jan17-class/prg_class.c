#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//recieves or returns, functions talking between themselves

/*






*/



/*
// char short int long (long long)
// float double (long double)
*/




void greetings(void);
void goodbye(void);
void line(void);

int main(void) {

	int num;
	int value = 10;
	float fnum;
    greetings();

	num = value + 32;
	
	
	num = 25;
	fnum = 25.123;

	

	printf("Interger num is %d, and float fnum is %f\n", num, fnum);
	

	



	goodbye();
	return 0;
}

void greetings(void) {
	printf("Hello IPC144NBB\n");
}

void goodbye(void) {
	printf("Goodbye IPC144NBB\n");
}

void line(void) {r
	printf("--------------------\n");
}

int main(void) {

	int num1;
	int num2;
	int sum;
	printf("Enter Two numbers:\n1>  ");
	scanf("%d",  &num1);
	printf("2> ");
	scanf("%d",  &num2);
	sum = num1 + num2;
	printf("The sum is: %d\n", sum);

	return 0;



}


