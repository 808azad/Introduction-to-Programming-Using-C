#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Name: Azad Zeynalov
Student Number: 112217229
E-mail: azeynalov1@myseneca.ca
Date of completion: 01.02.23



*/








void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height) {

    int i, j, k, f;
    
    i = 0;
    k = 0;
    f = 0;

    printf("%c", leftTop);
    while (i < width - 2) {
        printf("%c", top); 
        i++;
    }
    printf("%c\n", topRight);

    while (k < height - 2) {
        printf("%c", left);
        for (j = 0; j < width - 2; j++) {
            printf("%c", fill);
      }
        printf("%c", right);
        printf("\n");
      
        k++;
    }
     
    printf("%c", buttomLeft);
     while (f < width - 2) {
         printf("%c", buttom);
         f++;
     }printf("%c\n", rightButtom);
    
    
}

