#define _CRT_SECURE_NO_WARNINGS
#include "classList.h"
#include <stdio.h>

int main() {
    int i;
    int numberOfStudents;
    int marks[50];
    int studentsNum[50];
    char subjCode[10];

    // Prompt the user to enter the subject name
    printf("Enter subject Name: ");
    scanf("%s", subjCode);

    // Prompt the user to enter the number of students
    printf("Enter the number of students (max 50): ");
    scanf("%d", &numberOfStudents);

    printf("Enter %d student numbers and student marks...\n", numberOfStudents);

    // Loop to input student numbers and marks
    for (i = 0; i < numberOfStudents; i++) {
        printf("%d:\n", i + 1);
        printf("Student Number: ");
        scanf("%d", &studentsNum[i]);
        printf("Mark: ");
        scanf("%d", &marks[i]);
    }

    printf("\n");

    // Call the printReport function to display the report
    printReport(subjCode, studentsNum, marks, numberOfStudents);

    return 0;
}
