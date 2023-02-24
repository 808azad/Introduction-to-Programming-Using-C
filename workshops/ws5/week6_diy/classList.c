#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#define MAX 50






void printReport(const char subjectCode[], const int row[], const int studentNumbers[],
    const int marks[], int noOfStudents) {


    int i, average, totalMarks = 0, lowestMark = 100, highestMark = 0;



    char c = ' ';
    printf("SUBJECT MARKS REPORT!\n");
    printf("+-------------------+\n");
    printf("|%10s%9c|\n", subjectCode, c);
    printf("+---+--------+------+\n");
    printf("|Row| Std No | mark |\n");
    printf("+---+--------+------+\n");


    for (i = 0; i < noOfStudents; i++) {

        printf("| %d | %06d |   %d |\n", row[i], studentNumbers[i], marks[i]);
      

        totalMarks += marks[i];

        // you can get the total marks here
        if (marks[i] < lowestMark) {
            lowestMark = marks[i];
        }
        if (marks[i] > highestMark) {
            highestMark = marks[i];

        }

    }
    average = totalMarks / noOfStudents;


    printf("+---+--------+------+\n");
    printf("|%cAverage %3c|%5d |\n", c, c, average);
    printf("|%cHighest %3c|%5d |\n", c, c, highestMark);
    printf("|%cLowest  %3c|%5d |\n", c, c, lowestMark);
    printf("+---+--------+------+\n");

}

void subjectMarksReport(void) {
    /* int age;
    printf("Enter your age: ");
    age = getMMInt(18, 99, "AGE");
    printf("You are %d years old!\n", age);*/
        

    int i;
    int numberOfStudents;

    int marks[MAX];
    int studentsNum[MAX];
    int row[MAX];

    char subjCode[10];


    printf("Enter subject Name: ");
    scanf("%s", subjCode);

    printf("Enter the number of students (max 50): ");
    numberOfStudents = getMMInt(1, 50, "Number of students");


    printf("Enter %d student numbers and student marks...\n", numberOfStudents);
    


    for (i = 0; i < numberOfStudents; i++) {
        row[i] = i + 1;
        printf("%d of %d:\n", i + 1, numberOfStudents);
        printf("Student Number: ");
        studentsNum[i] = getMMInt(9999, 1000000, "Student Number");
        printf("Mark: ");
        marks[i] = getMMInt(0, 100, "Mark");


    }
    printf("\n");
    printReport(subjCode, row, studentsNum, marks, numberOfStudents);
   
    
   
}

/*void infos(void) {
   
    int i;
    int numberOfStudents;

    int marks[50];
    int studentsNum[50];
    int row[5];

    char subjCode[10];


    printf("Enter subject Name: ");
    scanf("%s", subjCode);

    printf("Enter the number of students (max 50): ");
    scanf("%d", &numberOfStudents);

    printf("Enter %d student numbers and student marks...\n", numberOfStudents);


    for (i = 0; i < numberOfStudents; i++) {
        printf("%d of 5:\n", i + 1);
        printf("Student Number: ");
        studentsNum[50] = getMMInt(999, 1000000, "Student Number");
        scanf("%d", &studentsNum[i]);
        printf("Mark: ");
        marks[50] = getMMInt(0, 100, "Mark");
        scanf("%d", &marks[i]);

    }
    printf("\n");
    printReport(subjCode, studentsNum, marks, numberOfStudents);


}*/