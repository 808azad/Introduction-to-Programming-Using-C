#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average);

//the program takes the grades(in percentage) of provided number of students and display their average at the end
int main(void) {
	int num;
	int average;
	printf("Class test marks report program...\n\n");
	num = getNoOfStudents();
	average = getAverage(num);
	printReport(num, average);
	
	return 0;
	
}