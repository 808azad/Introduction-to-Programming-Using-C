#define _CRT_SECURE_NO_WARNINGS


/*
Name: Azad Zeynalov
Student Number: 112217229
Email: azeynalov1@myseneca.ca
*/









#include <stdio.h>









void title() {
	
	printf("IPC144 NBB\t");
	printf("Workshop1\t");
	printf("Part 2\n");

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

void average() {
	  
	int ipc144, uli101, eac150;
	ipc144 = 77;
	uli101 = 55;
	eac150 = 82;





	printf("Enter the marks for the following subjects,\n");
	printf("IPC144: %d\n", ipc144);
	//scanf("%d", &ipc144);

	printf("ULI101: %d\n", uli101);
	//scanf("%d", &uli101);

	printf("EAC150: %d\n", eac150);
	//scanf("%d", &eac150);



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





















