#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


/*
Name: Azad Zeynalov
Student Number: 112217229
Email: azeynalov1@myseneca.ca
*/





void title() {
	printf("IPC144 NBB\t");
	printf("Workshop1\t");
	printf("Part 1\n");		
}

void line() {
	printf("------------------------------------------------------------\n");
}

void info() {
	printf("Name:\n");
	printf("\tAzad Zeynalov\n");
	printf("Email:\n");
	printf("\tazeynalov1@myseneca.ca\n");


}

int main() {

	title();
	line();
	info();
	line();


	int ipc144;
	int uli101;
	int eac150;



	printf("Enter the marks for the following subjects,\n");
	printf("IPC144: ");
	scanf("%d", &ipc144);

	printf("ULI101: ");
	scanf("%d", &uli101);

	printf("EAC150: ");
	scanf("%d", &eac150);



	int average = (ipc144 + uli101 + eac150) / 3;
	printf("The average is: %d", average);
	
	return 0;
}

