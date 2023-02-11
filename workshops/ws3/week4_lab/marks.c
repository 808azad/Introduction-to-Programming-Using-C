#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void prnGrade(int mark) {
	if (mark < 50) {
		printf("F");
	}
	else if (mark < 55) {
		printf("D");
	}
	else if (mark < 60) {
		printf("D+");
	}
	else if (mark < 65) {
		printf("C");
	}
	else if (mark < 70) {
		printf("C+");
	}
	else if (mark < 75) {
		printf("B");
	}
	else if (mark < 80) {
		printf("B+");
	}
	else if (mark < 90) {
		printf("A");
	}
	else if (mark < 100) {
		printf("A+");
	}
	

}

int getNoOfStudents(void) {
	
	int NumberOfStudents;
	printf("Please enter the number of students: ");
	scanf("%d", &NumberOfStudents);
	return NumberOfStudents;


}
int getAverage(int NumberOfStudents) {
	int count = 1, mark, sum = 0;
	printf("Enter %d student marks...\n", NumberOfStudents);

	while (count <= NumberOfStudents) {
		printf("%d> ", count);
		scanf("%d", &mark);
		if (mark < 0) {
			printf("Invalid Mark, values should be greater than or equal 0.\n");
		}
		else if (mark > 100) {
			printf("Invalid Mark, values should be less than or equal to 100.\n");
		}
		else {
			count = count + 1;
			sum = sum + mark;
		}
	} return sum / NumberOfStudents;
}

void printReport(int NumberOfStudents, int average) {
	printf("Number of students: %d\n", NumberOfStudents);
	printf("Class average: %d%% (", average);
	
	prnGrade(average);
	printf(")");

	
	
}
