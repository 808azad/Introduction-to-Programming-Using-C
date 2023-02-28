#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






void printReport(const char subjectCode[], const int studentNumbers[],
    const int marks[], int noOfStudents) {


    int i, average, totalMarks = 0, lowestMark = 100, highestMark = 0;

   

    char c = ' ';
    printf("SUBJECT MARKS REPORT!\n");
    printf("%2c+---------------+\n", c);
    printf("  |%10s     |\n", subjectCode);
    printf("%2c+--------+------+\n", c);
    printf("%2c| Std No | mark |\n", c);
    printf("%2c+--------+------+\n", c);

    
    for (i = 0; i < noOfStudents; i++) {
        
        printf("  | %06d |   %d |\n", studentNumbers[i], marks[i]);

        totalMarks += marks[i];

        if (marks[i] < lowestMark) {
            lowestMark = marks[i];
        }
        if (marks[i] > highestMark) {
            highestMark = marks[i];
        
        }

    }
      average = totalMarks / noOfStudents;
   
    
    printf("%2c+--------+------+\n", c);
    printf("  |Average |%5d |\n", average);
    printf("  |Highest |%5d |\n", highestMark);
    printf("  |Lowest  |%5d |\n", lowestMark);
    printf("%2c+--------+------+\n", c);

}
