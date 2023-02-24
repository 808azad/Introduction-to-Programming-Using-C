	/*int stno[4] = {12345, 23456, 345678, 45678};
	int mark[4] = { 55,66,44,88 };
	printReport("IPC144NBB", stno, mark, 4);
	*/
#define _CRT_SECURE_NO_WARNINGS
#include "classList.h"
#include <stdio.h>





int main() {


	int i;
	int numberOfStudents;

	int marks[50]; 
	int studentsNum[50];

	char subjCode[10];


	printf("Enter subject Name: ");
	scanf("%s", subjCode);

	printf("Enter the number of students (max 50): ");
	scanf("%d", &numberOfStudents);

	printf("Enter %d student numbers and student marks...\n", numberOfStudents);


	for (i = 0; i < numberOfStudents; i++) {
		printf("%d: \n", i + 1);
		printf("Student Number: ");
		scanf("%d", &studentsNum[i]);
		printf("Mark: ");
		scanf("%d", &marks[i]);

	}
	printf("\n");
	printReport(subjCode, studentsNum, marks, numberOfStudents);


	return 0;
}


