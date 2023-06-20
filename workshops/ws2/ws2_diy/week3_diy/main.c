#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h.>

// This code is used to draw a rectangle shape using characters.

void rectangle(char leftTop, char top, char topRight,
    char right, char rightButtom, char buttom,
    char buttomLeft, char left, char fill,
    int width, int height);

int main() {
    rectangle('+', '-', '+', '|', '+', '-', '+', '|', ' ', 20, 8);
    rectangle('/', '-', '\\', '|', '/', '-', '\\', '|', 'X', 50, 14);
	return 0;
}