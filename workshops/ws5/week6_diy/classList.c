#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

#define MAX 50 // constant for the size of array

// Function to generate the subject marks report
void subjectMarksReport(void) {
    int numberOfStudents;
    int marks[MAX];
    int studentsNum[MAX];
    int row[MAX];
    char subjCode[10];

    // Retrieve subject information from the user
    numberOfStudents = getSubjectInfo(subjCode);

    // Get student marks from the user
    getStudentMarks(numberOfStudents, row, studentsNum, marks);

    // Print the subject marks report
    printReport(subjCode, row, studentsNum, marks, numberOfStudents);
}

// Function to get student marks from the user
void getStudentMarks(int numberOfStudents, int row[], int studentsNum[], int marks[]) {
    int i;

    printf("Please enter %d student marks:\n", numberOfStudents);

    for (i = 0; i < numberOfStudents; i++) {
        row[i] = i + 1;

        printf("%d of %d:\n", i + 1, numberOfStudents);
        printf("Student Number: ");
        studentsNum[i] = getMMInt(9999, 1000000, "Student Number");
        printf("Mark: ");
        marks[i] = getMMInt(0, 100, "Mark");
    }

    printf("\n");
}

// Function to print the subject marks report
void printReport(const char subjectCode[], const int row[], const int studentNumbers[], const int marks[], int noOfStudents) {
    int i;
    int average;
    int totalMarks = 0;
    int lowestMark = 100;
    int highestMark = 0;
    char c = ' ';

    printf(" SUBJECT MARKS REPORT!\n");
    printf(" +-------------------+\n");
    printf(" |%19s|\n", subjectCode);
    printf(" +---+--------+------+\n");
    printf(" |Row| Std No | mark |\n");
    printf(" +---+--------+------+\n");

    for (i = 0; i < noOfStudents; i++) {
        printf(" | %d | %06d |%5d |\n", row[i], studentNumbers[i], marks[i]);

        totalMarks += marks[i];

        if (marks[i] < lowestMark) {
            lowestMark = marks[i];
        }
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        }
    }

    average = totalMarks / noOfStudents;

    printf("%c+---+--------+------+\n", c);
    printf("%c|%cAverage %3c|%5d |\n", c, c, c, average);
    printf("%c|%cHighest %3c|%5d |\n", c, c, c, highestMark);
    printf("%c|%cLowest  %3c|%5d |\n", c, c, c, lowestMark);
    printf("%c+------------+------+\n", c);
}

// Function to retrieve subject information from the user
int getSubjectInfo(char subjCode[]) {
    int numberOfStudents;
    printf("Enter subject Name: ");
    scanf("%s", subjCode);
    printf("Enter Number of students (max 50): ");
    numberOfStudents = getMMInt(1, 50, "Number of students");
    return numberOfStudents;
}
