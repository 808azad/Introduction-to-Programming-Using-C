#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This code calculates the average of marks for three subjects and displays the result along with some personal information.

void title(void) {
	printf("IPC144 NBB\t");
	printf("Workshop 1\t");
	printf("Part 2\n");
}

void line(void) {
	printf("------------------------------------------------------------\n");
}

void info(void) {
	printf("Name:\n");
	printf("\tAzad Zeynalov\n");
	printf("Email:\n");
	printf("\tazeynalov1@myseneca.ca\n");
}

void average(void) {	 
	int ipc144, uli101, eac150;

	printf("Enter the marks for the following subjects,\n");
	printf("IPC144: ");
	scanf("%d", &ipc144);

	printf("ULI101: ");
	scanf("%d", &uli101);

	printf("EAC150: ");
	scanf("%d", &eac150);

	int average = (ipc144 + uli101 + eac150) / 3;
	printf("The average is: %d\n", average);
}

int main(void) {
	title();
	line();
	info();
	line();
	average();
	line();
	return 0;
}





















